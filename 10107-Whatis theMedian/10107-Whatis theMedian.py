import heapq
from sys import stdin


h1 = []
h2 = []
n = stdin.readline().strip()
while n:
    n = int(n)
    if not h1 or n <= -1 * h1[0]:
        heapq.heappush(h1, -1 * n)
    else:
        heapq.heappush(h2, n)
    while len(h1) - len(h2) > 1:
        heapq.heappush(h2, -1 * heapq.heappop(h1))
    while len(h2) - len(h1) > 1:
        heapq.heappush(h1, -1 * heapq.heappop(h2))
    if not h1 or len(h2) > len(h1):
        print (h2[0])
    elif not h2 or len(h1) > len(h2):
        print (-1 * h1[0])
    else:
        print((h1[0] * -1 + h2[0]) // 2)
    n = stdin.readline().strip()

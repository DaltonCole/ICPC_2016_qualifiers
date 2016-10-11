i = int(input())

last = 2

while i != 1:
	i /= last
	last += 1

print(last - 1)

class Matrix:
	def __init__(self, a, b, c, d, x, y):
		self.a = a
		self.b = b
		self.c = c
		self.d = d
		self.x = x
		self.y = y

	def __str__(self):
		s = ""
		s += (str(self.a) + " \t " + str(self.b) + " \t " + str(self.x) + "\n")
		s += (str(self.c) + " \t " + str(self.d) + " \t " + str(self.y) + "\n") 
		return s

	def rref(self):
		try:
			if self.a != 0:
				self.b /= self.a
				self.x /= self.a
				self.a = 1

				temp = self.c

				self.c -= temp*self.a
				self.d -= temp*self.b
				self.y -= temp*self.x

				####
				self.y /= self.d
				self.d = 1

				temp = self.b

				self.b -= temp*self.d
				self.x -= temp*self.y
			else:
				self.a /= self.b
				self.x /= self.b
				self.b = 1

				temp = self.d

				self.c -= temp*self.a
				self.d -= temp*self.b
				self.y -= temp*self.x

				####
				self.y /= self.c
				self.c = 1

				temp = self.a

				self.a -= temp*self.c
				self.x -= temp*self.y

		except:
			self.x = 0.0
			self.y = 0.0

cases = int(input())

for i in range(cases):
	line = input()
	a, c, b, d, x, y = line.split(' ')
	a = int(a)
	b = int(b)
	c = int(c)
	d = int(d)
	x = int(x)
	y = int(y)

	m = Matrix(a, b, c, d, x, y)

	m.rref()

	print(str(m))

	if(m.x.is_integer() and m.y.is_integer() and m.x != 0 and m.y != 0):
		print(str(int(m.x)) + " " + str(int(m.y)))
	else:
		print("?")
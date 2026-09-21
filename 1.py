class print:
	"""Simple message printer with a reusable implementation."""

	def __init__(self, message="Hello World"):
		self.message = str(message)

	def display(self):
		"""Write the configured message to standard output."""
		__builtins__["print"](self.message)


print().display()

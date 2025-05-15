from collections import Counter

text = input("Enter text: ").lower()
words = text.split()
freq = Counter(words)

for word, count in freq.items():
    print(f"{word}: {count}")

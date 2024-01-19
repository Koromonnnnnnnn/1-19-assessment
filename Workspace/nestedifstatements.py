question = input("Which do you prefer: winter or summer?")

if question.lower() == "winter":
    question2 = input(
        "Nice! Would you want to try sports or just relax?")
    if question2.lower() == "sports":
        print("I suggest skiing")
    elif question2.lower() == "relax":
        print("I suggest ice fishing")
elif question.lower() == "summer":
    question3 = input(
        "Nice! Would you want to try sports or just relax?")
    if question3.lower() == "sports":
        print("I suggest swimming")
    elif question3.lower() == "relax":
        print("I suggest reading by the beach")

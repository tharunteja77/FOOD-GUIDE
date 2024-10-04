#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void displayRecipe(const char *recipeName, const char *ingredients[], int numIngredients, const char *instructions[], int numInstructions)
{
    printf("\033[1;33mRecipe:\033[0m \033[1;31m%s\033[0m\n\n", recipeName);

    printf("\033[1;33mIngredients:\033[0m\n");
    for (int i = 0; i < numIngredients; i++)
    {
        printf("\033[1;36m- %s\033[0m\n", ingredients[i]);
    }

    printf("\n\033[1;33mInstructions:\033[0m\n");
    for (int i = 0; i < numInstructions; i++)
    {
        printf("\033[1;32m%d. %s\033[0m\n", i + 1, instructions[i]);
    }
}
// chickenpasta
void chickenpasta()
{
    const char *recipeName = "Chicken Pasta";
    const char *ingredients[] = {
        "250g pasta",
        "2 chicken breasts",
        "2 tablespoons olive oil",
        "1 onion, chopped",
        "2 cloves of garlic, minced",
        "1 can diced tomatoes",
        "1 teaspoon dried oregano",
        "Salt and pepper to taste",
        "Grated Parmesan cheese (optional)"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Cook the pasta according to package instructions. Drain and set aside.",
        "Heat the olive oil in a large skillet over medium heat.",
        "Add the chopped onion and minced garlic. Sauté until the onion is translucent.",
        "Add the chicken breasts to the skillet and cook until they are no longer pink in the center.",
        "Remove the chicken from the skillet and shred it using two forks.",
        "Return the shredded chicken to the skillet.",
        "Add the diced tomatoes, dried oregano, salt, and pepper. Stir to combine.",
        "Simmer the sauce for about 10 minutes.",
        "Serve the sauce over the cooked pasta.",
        "Sprinkle with grated Parmesan cheese, if desired.\n\n\n\n\n"};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
// chickenbiryani
void chickenbiryani()
{
    const char *recipeName = "Chicken Biryani";
    const char *ingredients[] = {
        "2 cups basmati rice",
        "500 grams chicken, cut into pieces",
        "1 cup plain yogurt",
        "2 onions, thinly sliced",
        "4 cloves of garlic, minced",
        "1-inch piece of ginger, grated",
        "2 tomatoes, chopped",
        "2 green chilies, slit lengthwise",
        "1 teaspoon turmeric powder",
        "2 teaspoons red chili powder",
        "1 teaspoon cumin powder",
        "1 teaspoon coriander powder",
        "1 teaspoon garam masala",
        "1/2 cup chopped coriander leaves (cilantro)",
        "1/2 cup chopped mint leaves",
        "4 cups water",
        "4 tablespoons ghee (clarified butter) or vegetable oil",
        "1/2 cup plain yogurt",
        "1 tablespoon ginger-garlic paste",
        "1 teaspoon red chili powder",
        "1/2 teaspoon turmeric powder",
        "1/2 teaspoon cumin powder",
        "1/2 teaspoon coriander powder",
        "Salt to taste"

    };

    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Rinse the basmati rice under running water until the water runs clear. Soak the rice in water for 30 minutes, then drain and set aside.",
        "In a bowl, combine all the ingredients for the marinade. Add the chicken pieces and mix well to coat them evenly. Allow the chicken to marinate for at least 30 minutes.",
        "Heat 2 tablespoons of ghee or oil in a large pan over medium heat. Add the sliced onions and cook until golden brown and caramelized. Remove half of the onions from the pan and set aside for garnishing.",
        "In the same pan, add the minced garlic and grated ginger. Sauté for a minute until fragrant. Then, add the chopped tomatoes and green chilies. Cook until the tomatoes are soft and mashed.",
        "Add the marinated chicken to the pan and cook for 5-6 minutes until the chicken is partially cooked.",
        "Add the turmeric powder, red chili powder, cumin powder, coriander powder, and salt. Mix well to coat the chicken with the spices. Cook for another 2-3 minutes.",
        "Meanwhile, in a large pot, bring 4 cups of water to a boil. Add the soaked and drained rice to the boiling water. Cook the rice until it is 70% cooked (it should still have a slight bite to it). Drain the rice and set it aside.",
        "Preheat your oven to 180°C (350°F).",
        "In a large oven-safe dish, spread a layer of half-cooked rice at the bottom. Top it with a layer of the cooked chicken masala. Sprinkle a handful of chopped coriander leaves and mint leaves. Repeat the layers until all the rice and chicken masala are used. Finish with a final layer of rice on top.",
        "Drizzle the remaining 2 tablespoons of ghee or oil over the top layer of rice. Cover the dish tightly with foil or a lid to trap the steam.",
        "Place the biryani dish in the preheated oven and bake for 20-25 minutes until the rice is fully cooked and the flavors have melded together.",
        "Remove the biryani from the oven and let it rest for 5-10 minutes. Garnish with the caramelized onions that were set aside earlier.",
        "Serve the chicken biryani hot with raita (yogurt sauce) and enjoy!\n\n\n\n\n"};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
// panipuri
void panipuri()
{
    const char *recipeName = "Panipuri";
    const char *ingredients[] = {
        "1 cup semolina",
        "water as required",
        "3 teaspoon cumin powder",
        "5 green chilli",
        "1/2 teaspoon baking soda",
        "refined oil as required",
        "black salt as required",
        "4 tablespoon crushed jaggery",
        "1 cup boiled chick peas",
        "tamrind chutney as required",
        "1 cup tamarind paste",
        "3 teaspoon roasted cumin powder",
        "1 cup coriander leaves",
        "1 cup wheat flour",
        "salt as required",
        "1/2 cup mint leaves",
        "3 tablespoon boondi",
        "4 boiled,mashed potato",
        "green chutney as required",
        "black pepper as required",

    };

    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Knead the dough:To make this easy Pani Puri recipe at home, take a bowl and add semolina, wheat flour, baking soda along with a little salt and water as required and prepare a stiff dough. Adding semolina will make the puris crispy. Then, cover it with a muslin cloth, let it remain aside for about half an hour.",
        "Roll out puris:After half an hour, knead the flour again and roll out a few small-sized balls from the prepared dough. Next, place the balls on a flat surface and with the help of wheat flour, flatten and make them thin enough to give them the appearance of very small, round puris. You can alternately roll out a large puri and cut small discs with a round cookie cutter or small bowl.",
        "Deep fry the puris:Now, place a pan on medium flame and pour refined oil. Once the oil is sufficiently hot, fry the prepared round-shaped puris. Fry 3-4 at a time while making sure each one puffs all right. Also, keep the flame medium as excess heat might burn the puris.",
        " Cool these fried puris:Once well-cooked, take them out immediately and place them on a paper towel in order to get rid of extra oil. Let them cool and keep aside. Your next step would be to prepare pani for the puris.",
        "Prepared the pani:So first, take out a blender, put green chillies, coriander along with mint leaves and blend until smooth. Once done, transfer the chilli-mint paste to a jug and stir in tamarind paste, 4 cups of water, boondi, black salt, crushed jaggery, roasted and raw cumin seeds. Mix the mixture thoroughly.",
        "Sieve to remove any impurities:Then, make the prepared pani go through a sieve in order to remove the coarse particles. Once done, put it in the refrigerator to chill. Now all that remains is to prepare the stuffing for the puris. For that, take a bowl and combine mashed potato along with chickpeas. Add salt and pepper according to your taste.",
        "Serve Pani Puri with chickpeas, tamarind chutney and the fresh pani:Lastly, take the puris and make a small hole in each using your thumb. Stuff the chickpea-potato mixture in equal portions. Add a layer of green and tamarind chutney in them and serve alongside chilled mint pani. Enjoy this street food recipe with your loved ones.",
        "Serve the Panipuri with onions and enjoy!\n\n\n\n\n"};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}

void kitkatmilkshake()
{
    const char *recipeName = "Kit Kat milkshake with icecream";
    const char *ingredients[] = {
        "2 kit kat",
        "2 tablespoon sugar",
        "4 tablespoon chocolate sauce",
        "1 cup whipped cream",
        "600 ml milk",
        "1 teaspoon coffee",
        "chocolate chips as required",
        "2 scoops chocolate icecream",

    };

    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Blend KitKat and milk:To begin with this easy recipe, take a blender and add in milk, KitKat pieces, 1 tablespoon sugar,2 tablespoon chocolate syrup, blend it all together. Blend it again after adding 2 scoops of chocolate ice cream.",
        "Prepare the whipped cream:Put the shake in a refrigerator for 15 mins.Next, take a large bowl and add whipped cream, coffee powder and sugar, whisk the whipped cream. ",
        "Serve chilled:Pour the cold shake into the serving glasses and drizzle the chocolate syrup. Next, using a piping cone add the whipped cream and sprinkle chocolate chips. Enjoy!\n\n\n\n\n"};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}

void vegetablemanchuria()
{
    const char *recipeName = "Vegetable Manchuria ";
    const char *ingredients[] = {
        "tablespoon shredded cabbage",
        "2 tablespoon cauliflower",
        "1 1/2 teaspoon green chilli",
        "1/2 teaspoon garlic paste",
        "2 tablespoon green beans",
        "salt as required",
        "2 teaspoon light soya sauce",
        "3 tablespoon all purpose flour",
        "5 tablespoon water",
        "1/2 tablespoon red bell pepper",
        "1/4 tablespoon capsicum (green pepper)",
        "1 tablespoon tomato ketchup",
        "1 teaspoon white vinegar",
        "2 tablespoon chopped,grated carrot",
        "4 tablespoon paneer",
        "1/2 teaspoon ginger paste",
        "3 tablespoon coriander leaves",
        "2 teaspoon soy sauce",
        "1/2 teaspoon white pepper powder",
        "2 tablespoon corn starch",
        "1 cup vegetable oil",
        "1 tablespoon onion",
        "1/4 piece yellow bell pepper",
        "4 cloves garlic",
        "1/2 tablespoon red chilli sauce",
        "1/2 tablespoon broth powder",
    };

    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);
    const char *instructions[] = {

        "Clean the veggies:Soak the veggies in lukewarm water with a pinch of salt, this will wash off all the adulterants from the vegetables.",

        "Make Manchurian mixture:Once the vegetables are washed, take a chopping board and finely chop the vegetables. Take a large bowl and squeeze out the excess water from cabbage and carrots. Now, take another bowl and mix paneer, cabbage, carrot, cauliflower, 1 tsp green chilli, ginger-garlic paste, 1 tsp coriander leaves, green beans, dark soy sauce, salt to taste, white pepper powder and 2 tsp light soy sauce. Mix all the ingredients well. Then, add all-purpose flour and corn starch and knead a soft dough or mixture to make Manchurian balls.",

        "Prepare the Manchurian balls:Take some mixture from the bowl and shape it into a bite-sized ball. Repeat to make more such balls. Then, heat 1 cup of vegetable oil on medium flame and heat the oil. When the oil is hot enough, deep fry the Manchurian balls till they turn golden brown and keep them aside.",

        " Prepare the Manchurian gravy:Now, put another pan over medium flame and heat oil in it. When the oil is hot enough, add 1 tbsp garlic in it along with ½ tsp green chilli and saute for a few seconds. Then, add onion, 1 tbsp mixed bell peppers, 1 tbsp coriander leaves. Cook for a minute and then add tomato ketchup, chilli sauce and cook for another minute. Now, add white vinegar, water and broth powder to the pan and stir well. Cook for another minute.",

        "Add Manchurian balls:Finally, add ½ tsp dark soy sauce and the fried Manchurian balls in it. Stir well.",

        " Serve hot:Sprinkle some coriander leaves and serve hot with fried rice, steamed rice or Hakka noodles. Do try this recipe, rate it and let us know how it turned out to be!\n\n\n\n\n"

    };
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}

void rasmalai()
{
    const char *recipeName = "Rasmalai";
    const char *ingredients[] = {
        "1 liter full-fat milk",
        "1/4 cup lemon juice",
        "1 cup sugar",
        "4 cups water",
        "4-5 strands saffron",
        "1/2 teaspoon cardamom powder",
        "2 tablespoons chopped almonds",
        "2 tablespoons chopped pistachios"};

    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Boil the milk: In a heavy-bottomed pan, heat the milk over medium heat until it comes to a boil. Stir occasionally to prevent it from sticking to the bottom.",
        "Curdle the milk: Reduce the heat to low and add the lemon juice gradually while stirring the milk. The milk will curdle and separate into solids (paneer) and whey. Turn off the heat.",
        "Strain and rinse: Line a strainer or colander with a muslin cloth or cheesecloth. Pour the curdled milk through the strainer to separate the paneer from the whey. Rinse the paneer under cold water to remove the lemon flavor.",
        "Press and drain: Gather the edges of the cloth and squeeze out any excess water from the paneer. Hang the cloth with the paneer for about 30 minutes to drain any remaining whey.",
        "Knead the paneer: Transfer the drained paneer to a clean surface and knead it with the heel of your hand until it becomes smooth and soft. Divide the paneer into small equal-sized portions and shape them into flattened discs.",
        "Prepare the sugar syrup: In a wide pot, combine the sugar and water and bring it to a boil over medium heat. Stir until the sugar dissolves completely. Add the saffron strands and cardamom powder to the syrup.",
        "Cook the paneer discs: Gently slide the paneer discs into the boiling sugar syrup. Cover the pot with a lid and cook for about 15-20 minutes on low heat. The paneer discs will absorb the syrup and become soft and spongy.",
        "Garnish and chill: Remove the cooked paneer discs from the syrup and place them on a serving dish. Garnish with chopped almonds and pistachios. Let the rasmalai cool to room temperature and then refrigerate for a few hours before serving.",
        "Serve chilled: Serve the chilled rasmalai as a delightful sweet dessert. Enjoy the rich flavors and creamy texture of this traditional Indian sweet.\n\n\n\n\n"};

    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}

void koreanFriedChicken()
{
    const char *recipeName = "Korean Fried Chicken";
    const char *ingredients[] = {
        "1 kg chicken wings or drumsticks",
        "1 cup all-purpose flour",
        "1 cup cornstarch",
        "1 teaspoon baking powder",
        "1 teaspoon salt",
        "1/2 teaspoon black pepper",
        "1/2 teaspoon garlic powder",
        "1/2 teaspoon ginger powder",
        "1 cup cold water",
        "Vegetable oil for frying",
        "1/2 cup gochujang (Korean chili paste)",
        "1/4 cup soy sauce",
        "1/4 cup rice vinegar",
        "3 tablespoons honey",
        "2 tablespoons brown sugar",
        "2 cloves garlic, minced",
        "1 teaspoon sesame oil",
        "Toasted sesame seeds for garnish",
        "Chopped green onions for garnish"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "In a large bowl, combine the all-purpose flour, cornstarch, baking powder, salt, black pepper, garlic powder, and ginger powder.",
        "Add the cold water to the dry ingredients and whisk until you have a smooth batter. The consistency should be similar to pancake batter.",
        "Heat vegetable oil in a deep frying pan or pot to about 175°C (350°F).",
        "Dip each chicken wing or drumstick into the batter, allowing any excess batter to drip off. Carefully place the coated chicken into the hot oil.",
        "Fry the chicken in batches for about 10-12 minutes until they are golden brown and crispy. Remove from the oil and place them on a paper towel-lined plate to drain excess oil.",
        "In a separate saucepan, combine gochujang, soy sauce, rice vinegar, honey, brown sugar, minced garlic, and sesame oil. Cook over medium heat, stirring occasionally, until the sauce thickens and coats the back of a spoon.",
        "Place the fried chicken in a large bowl and pour the sauce over the top. Toss the chicken in the sauce until each piece is well coated.",
        "Garnish with toasted sesame seeds and chopped green onions.",
        "Serve the Korean fried chicken hot as an appetizer or main dish. Enjoy the crispy and flavorful chicken with your favorite dipping sauce or alongside steamed rice.\n\n\n\n\n"};

    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}

void masalaDosa()
{
    const char *recipeName = "Masala Dosa";
    const char *ingredients[] = {
        "1 cup rice",
        "1/2 cup urad dal (split black lentils)",
        "1/4 cup chana dal (split chickpeas)",
        "1/4 cup poha (flattened rice)",
        "1/4 teaspoon fenugreek seeds",
        "Salt to taste",
        "Oil or ghee for cooking dosa",
        "1 onion, finely chopped",
        "2-3 green chilies, finely chopped",
        "1/4 teaspoon mustard seeds",
        "1/4 teaspoon cumin seeds",
        "A pinch of asafoetida (hing)",
        "1/2 teaspoon turmeric powder",
        "1/2 teaspoon red chili powder",
        "2-3 boiled and mashed potatoes",
        "A handful of fresh coriander leaves, chopped",
        "Coconut chutney and sambar for serving"};

    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Soak the rice, urad dal, chana dal, and fenugreek seeds together in water for about 6-8 hours or overnight.",
        "Drain the soaked ingredients and rinse them thoroughly.",
        "In a blender, grind the soaked ingredients along with poha, adding water gradually, until you get a smooth batter of pouring consistency. The batter should not be too thick or too thin.",
        "Add salt to the batter and mix well. Allow the batter to ferment overnight or for at least 8-10 hours. The fermentation process helps in making the dosas light and crispy.",
        "Once the batter is fermented, heat a griddle or non-stick tawa on medium heat.",
        "Take a ladleful of the dosa batter and pour it in the center of the griddle.",
        "Spread the batter in a circular motion to make a thin dosa. You can make it as large or small as you prefer.",
        "Drizzle a little oil or ghee around the edges of the dosa and on top.",
        "Cook the dosa on medium heat until the bottom side turns golden brown and crispy.",
        "Flip the dosa and cook the other side for a minute or two.",
        "Remove the dosa from the griddle and keep it aside. Repeat the process with the remaining batter to make more dosas.",
        "In a separate pan, heat some oil. Add mustard seeds and cumin seeds. Let them splutter.",
        "Add asafoetida, chopped onions, and green chilies. Sauté until the onions turn translucent.",
        "Add turmeric powder and red chili powder. Mix well.",
        "Add the boiled and mashed potatoes to the pan. Mix everything together and cook for a couple of minutes.",
        "Sprinkle chopped coriander leaves and mix well. Remove from heat.",
        "To serve, place a dosa on a plate. Spoon a portion of the potato masala onto one side of the dosa.",
        "Fold the dosa over the masala to make a half-moon shape.",
        "Serve hot with coconut chutney and sambar. Enjoy the delicious masala dosa!\n\n\n\n\n"};

    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}

void chocolateBrownie()
{
    const char *recipeName = "Chocolate Brownie";
    const char *ingredients[] = {
        "1 cup butter",
        "2 cups sugar",
        "4 eggs",
        "1 teaspoon vanilla extract",
        "1 cup all-purpose flour",
        "1/2 cup cocoa powder",
        "1/4 teaspoon salt",
        "1/2 teaspoon baking powder",
        "1 cup chocolate chips"};

    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Preheat the oven to 350°F (175°C).",
        "Grease a 9x9 inch baking pan.",
        "In a microwave-safe bowl, melt the butter.",
        "In a large mixing bowl, combine the melted butter and sugar. Mix well.",
        "Add the eggs, one at a time, to the butter-sugar mixture. Stir well after each addition.",
        "Stir in the vanilla extract.",
        "In a separate bowl, whisk together the all-purpose flour, cocoa powder, salt, and baking powder.",
        "Gradually add the dry ingredients to the butter-sugar mixture, stirring well after each addition.",
        "Fold in the chocolate chips.",
        "Pour the batter into the greased baking pan.",
        "Bake in the preheated oven for 25-30 minutes, or until a toothpick inserted into the center comes out with moist crumbs.",
        "Remove from the oven and let it cool in the pan for a few minutes.",
        "Transfer the brownies to a wire rack and let them cool completely before cutting into squares.\n\n\n\n\n"};

    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}

void pongal()
{
    const char *recipeName = "Pongal";
    const char *ingredients[] = {
        "1 cup raw rice",
        "1/4 cup split yellow moong dal",
        "2 tablespoons ghee",
        "1/2 teaspoon cumin seeds",
        "1/2 teaspoon black peppercorns",
        "1/4 teaspoon grated ginger",
        "A pinch of asafoetida (hing)",
        "8-10 cashew nuts",
        "10-12 curry leaves",
        "Salt to taste",
        "Water as needed"};

    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Wash the rice and dal together, and soak them in water for 15-20 minutes.",
        "In a pressure cooker, heat ghee on medium heat.",
        "Add cumin seeds, black peppercorns, grated ginger, and asafoetida. Sauté for a minute.",
        "Add cashew nuts and curry leaves. Sauté until the cashews turn golden brown.",
        "Drain the soaked rice and dal, and add them to the pressure cooker.",
        "Add salt and water (usually 4 cups of water for 1 cup of rice-dal mixture). Mix well.",
        "Close the pressure cooker and cook on medium heat for 3-4 whistles, or until the rice and dal are well cooked and mashed.",
        "Once the pressure releases, open the cooker and give the pongal a good mix.",
        "Adjust the consistency by adding more water if needed. The pongal should be creamy and soft.",
        "Serve hot with sambar, coconut chutney, or ghee. Enjoy the delicious pongal!\n\n\n\n\n"};

    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}

void gulabJamun()
{
    const char *recipeName = "Gulab Jamun";
    const char *ingredients[] = {
        "1 cup milk powder",
        "1/4 cup all-purpose flour",
        "1/4 teaspoon baking powder",
        "1/8 teaspoon cardamom powder",
        "2 tablespoons ghee (clarified butter)",
        "3 tablespoons milk",
        "1 cup sugar",
        "1 cup water",
        "1 tablespoon rose water",
        "Oil or ghee for frying"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "In a mixing bowl, combine the milk powder, all-purpose flour, baking powder, and cardamom powder.",
        "Add the ghee and mix well to form a crumbly mixture.",
        "Gradually add the milk and knead the mixture into a soft dough. Add more milk if needed.",
        "Cover the dough and let it rest for 15-20 minutes.",
        "In a separate saucepan, combine the sugar and water. Bring it to a boil, stirring until the sugar is completely dissolved. Simmer for 5 minutes to form a syrup. Remove from heat and stir in the rose water. Set aside.",
        "Heat oil or ghee in a deep pan or kadai over medium heat.",
        "Divide the dough into small portions and shape them into smooth balls, without any cracks.",
        "Carefully drop the dough balls into the hot oil or ghee, frying them in batches. Stir gently to ensure even browning.",
        "Fry the gulab jamuns until they turn golden brown, then remove them from the oil and drain on a paper towel.",
        "Once all the gulab jamuns are fried, soak them in the prepared sugar syrup for at least 30 minutes to 1 hour, allowing them to absorb the syrup and become soft and spongy.",
        "Garnish with chopped nuts, such as pistachios or almonds, if desired.",
        "Serve the gulab jamuns warm or at room temperature, and enjoy!\n\n\n\n\n"};

    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}

void fishFry()
{
    const char *recipeName = "Fish Fry";
    const char *ingredients[] = {
        "4 fish fillets (any white fish like tilapia or cod)",
        "1/2 cup all-purpose flour",
        "2 tablespoons rice flour",
        "1 teaspoon red chili powder",
        "1/2 teaspoon turmeric powder",
        "1 teaspoon cumin powder",
        "1 teaspoon coriander powder",
        "1/2 teaspoon garlic powder",
        "1/2 teaspoon ginger powder",
        "Salt to taste",
        "Oil for frying"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Rinse the fish fillets and pat them dry with a paper towel.",
        "In a shallow bowl, combine the all-purpose flour, rice flour, red chili powder, turmeric powder, cumin powder, coriander powder, garlic powder, ginger powder, and salt. Mix well.",
        "Coat each fish fillet with the flour mixture, ensuring it is evenly coated on all sides. Gently shake off any excess flour.",
        "Heat oil in a frying pan or skillet over medium heat.",
        "Once the oil is hot, carefully place the coated fish fillets in the pan. Fry them for about 3-4 minutes on each side, or until they turn golden brown and crispy.",
        "Remove the fish fillets from the pan and drain them on a paper towel to remove any excess oil.",
        "Serve the fish fry hot with lemon wedges and your favorite dipping sauce or chutney.\n\n\n\n\n",
    };
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}

void doubleKaMeetha()
{
    const char *recipeName = "Double Ka Meetha";
    const char *ingredients[] = {
        "8 slices of bread",
        "1 cup milk",
        "1/2 cup sugar",
        "2 tablespoons ghee",
        "1/4 teaspoon cardamom powder",
        "1/4 cup chopped nuts (cashews, almonds, pistachios)",
        "1 tablespoon raisins",
        "Saffron strands for garnish"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "In a saucepan, heat the milk and sugar together until the sugar dissolves. Remove from heat and set aside.",
        "Heat ghee in a frying pan over medium heat.",
        "Cut each bread slice into triangles or desired shapes.",
        "Fry the bread slices in the ghee until they turn golden brown and crisp on both sides. Remove from the pan and drain on a paper towel to remove excess oil.",
        "In a separate pan, heat a tablespoon of ghee and add the chopped nuts and raisins. Saute them until the nuts turn golden brown and the raisins plump up. Remove from heat and set aside.",
        "In a deep serving dish, arrange a layer of fried bread slices.",
        "Pour the prepared sweetened milk over the bread slices, ensuring they are soaked well. Sprinkle cardamom powder over the milk-soaked bread.",
        "Add a layer of fried nuts and raisins over the bread slices.",
        "Repeat the layers with the remaining bread slices, sweetened milk, nuts, and raisins.",
        "Garnish the top with a few strands of saffron.",
        "Cover the dish and let it sit for at least 1-2 hours, allowing the bread to absorb the flavors and become soft.",
        "Serve the double ka meetha warm or chilled as desired, and enjoy!\n\n\n\n\n"};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}

void muttonPaya()
{
    const char *recipeName = "Mutton Paya";
    const char *ingredients[] = {
        "4 mutton paya (goat trotters)",
        "2 tablespoons ghee",
        "2 onions, finely chopped",
        "2 tomatoes, pureed",
        "2 teaspoons ginger-garlic paste",
        "1 teaspoon red chili powder",
        "1/2 teaspoon turmeric powder",
        "1 teaspoon coriander powder",
        "1/2 teaspoon cumin powder",
        "1/2 teaspoon garam masala",
        "Salt to taste",
        "Fresh coriander leaves for garnish",
        "Ginger slices for garnish",
        "Lemon wedges for serving"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Clean the mutton paya thoroughly, removing any dirt or impurities. Wash them well under running water.",
        "In a pressure cooker, heat ghee over medium heat.",
        "Add the chopped onions and sauté until they turn golden brown.",
        "Add the ginger-garlic paste and cook for a minute until the raw aroma disappears.",
        "Add the tomato puree and cook until the oil separates from the masala.",
        "Add the red chili powder, turmeric powder, coriander powder, cumin powder, and salt. Mix well.",
        "Add the mutton paya to the pressure cooker and mix them with the masala.",
        "Pour enough water to cover the paya, close the pressure cooker lid, and cook for about 10-12 whistles or until the paya is tender and cooked.",
        "Allow the pressure to release naturally before opening the cooker.",
        "Place the pressure cooker back on the stove over low heat.",
        "Add garam masala and simmer the paya for another 10-15 minutes, allowing the flavors to blend together.",
        "Garnish with fresh coriander leaves and ginger slices.",
        "Serve the mutton paya hot with naan, rice, or roti, and lemon wedges on the side.",
        "Enjoy!\n\n\n\n\n"};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}

void coffee()
{
    const char *recipeName = "Coffee";
    const char *ingredients[] = {
        "1 cup water",
        "2 tablespoons ground coffee",
        "Sugar or sweetener",
        "Milk"};

    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Boil water in a pot or kettle.",
        "Add ground coffee to a coffee filter or a French press.",
        "Pour the boiling water over the coffee grounds. Let it steep for about 4-5 minutes.",
        "If using a coffee filter, allow the brewed coffee to drip into a coffee pot or cup.",
        "If using a French press, slowly press down the plunger to separate the coffee grounds from the liquid.",
        "If desired, add sugar or sweetener to taste.",
        "If desired, heat milk separately and add it to the coffee for a creamy texture.",
        "Stir well and serve hot.",
        "Enjoy your delicious cup of coffee!\n\n\n\n\n"};

    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}

void chickenSandwich()
{
    const char *recipeName = "Chicken Sandwich";
    const char *ingredients[] = {
        "2 slices of bread",
        "100 grams cooked chicken breast, sliced",
        "Lettuce leaves",
        "Tomato slices",
        "Cucumber slices",
        "Mayonnaise",
        "Mustard",
        "Salt and pepper to taste"};

    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Place the bread slices on a clean surface.",
        "Spread a layer of mayonnaise on one side of each bread slice.",
        "Place the lettuce leaves on one bread slice, followed by tomato slices and cucumber slices.",
        "Season the sliced chicken breast with salt and pepper, and place it on top of the vegetables.",
        "Spread mustard on the other bread slice and place it on top of the chicken to close the sandwich.",
        "Press the sandwich gently to hold it together.",
        "You can serve the sandwich as is or grill it for a warm and crispy texture.",
        "If grilling, preheat a pan or grill pan over medium heat. Place the sandwich in the pan and cook for a few minutes on each side until golden brown and the cheese has melted (if using).",
        "Remove the sandwich from the pan and let it cool slightly.",
        "Cut the sandwich diagonally into halves or quarters for serving.",
        "Enjoy your delicious chicken sandwich!\n\n\n\n\n"};

    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}

void chickenBurger()
{
    const char *recipeName = "Chicken Burger";
    const char *ingredients[] = {
        "1 chicken breast",
        "1 burger bun",
        "Lettuce leaves",
        "Tomato slices",
        "Onion slices",
        "Pickles",
        "Mayonnaise",
        "Ketchup",
        "Mustard",
        "Salt and pepper to taste",
        "Cheese slices (optional)",
        "Oil for grilling"};

    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Preheat a grill or grill pan over medium heat.",
        "Season the chicken breast with salt and pepper.",
        "Place the chicken breast on the grill and cook for about 6-8 minutes per side, or until fully cooked.",
        "Once cooked, remove the chicken from the grill and let it rest for a few minutes.",
        "Slice the burger bun in half horizontally.",
        "Spread mayonnaise, ketchup, and mustard on the bottom half of the bun.",
        "Layer lettuce leaves, tomato slices, onion slices, and pickles on top of the sauce.",
        "If using cheese, place a slice on top of the vegetables.",
        "Slice the cooked chicken breast and place it on top of the cheese or vegetables.",
        "Cover the burger with the top half of the bun.",
        "Optional: Heat a pan with a little oil over medium heat.",
        "Place the assembled burger in the pan and cook for a few minutes on each side until the bun is toasted and the cheese has melted (if using).",
        "Remove the burger from the pan and let it cool slightly.",
        "Serve the chicken burger with additional condiments or toppings as desired.",
        "Enjoy your delicious chicken burger!\n\n\n\n\n"};

    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}

void mysorepak()
{
    const char *recipeName = "Mysore Pak";
    const char *ingredients[] = {
        "1 cup besan (gram flour)",
        "1 cup ghee (clarified butter)",
        "1 cup sugar",
        "1/4 cup water",
        "A pinch of cardamom powder",
        "Chopped nuts (optional)"

    };

    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Grease a square or rectangular tray or plate with ghee and set it aside.",
        "Heat a heavy-bottomed pan or kadai on medium heat and add ghee to it. Allow the ghee to melt completely.",
        "Reduce the heat to low and add besan to the melted ghee. Mix well to combine and ensure there are no lumps. Keep stirring continuously to prevent the besan from sticking to the bottom of the pan and burning. Cook the besan in ghee on low heat for about 15-20 minutes until it turns aromatic and changes color slightly to a light golden brown.",
        "In a separate saucepan, combine sugar and water. Heat the mixture over medium heat and stir until the sugar dissolves completely. Bring the mixture to a boil and continue boiling until it reaches a one-string consistency. ",
        "To check the consistency, take a small amount of the syrup between your thumb and forefinger, then gently separate them. If a single thread is formed, the syrup has reached the right consistency. If not, continue boiling for a little longer and check again.",
        "Once the sugar syrup reaches the desired consistency, add it slowly to the cooked besan and ghee mixture while stirring continuously. Be careful as the mixture may splutter.",
        "Keep stirring the mixture vigorously to incorporate the sugar syrup evenly into the besan mixture. Add the cardamom powder and continue stirring until the mixture starts to thicken and leaves the sides of the pan. This process will take about 5-10 minutes.",
        "At this stage, turn off the heat and immediately transfer the mixture to the greased tray or plate. Spread it evenly and smoothen the top with the back of a spoon. If desired, sprinkle chopped nuts on top and gently press them into the mixture.",
        "Allow the Mysore Pak to cool completely at room temperature for a couple of hours. Once cooled, cut it into square or diamond-shaped pieces.",
        "Mysore Pak is ready to be served. Store it in an airtight container at room temperature for up to a week.\n\n\n\n\n"};

    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}

void samosa()
{
    const char *recipeName = "Samosa";
    const char *ingredients[] = {
        "2 cup all purpose flour",
        "1 teaspoon cumin seeds",
        "1 teaspoon crushed ginger",
        "1 teaspoon raisins",
        "5 boiled potato",
        "1 teaspoon coriander powder",
        "1 teaspoon red chilli powder",
        "1 teaspoon kasoori methi leaves",
        "1 teaspoon carom seeds",
        "1/4 cup water",
        "2 cup refined oil",
        "1/2 teaspoon coriander seeds",
        "1 teaspoon green chilli",
        "1 teaspoon cashews",
        "1 teaspoon cumin powder",
        "1/2 teaspoon garam masala powder",
        "salt as required",
        "1 teaspoon coriander leaves",
        "2 tablespoon ghee",
        "1 handful raw peanuts",

    };

    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Saute cumin seeds for potato filling:To make delicious samosas at home, first, make the filling. Put a pan on medium flame and add 2 tsp oil in it. Once the oil is hot enough, add cumin seeds and allow them to crackle.",
        "Add spices and boiled potatoes and cook for a while:Now, add whole coriander seeds, ginger and green chilli. Saute for a minute and then add chopped cashews and raisins, peanuts if you like them, boiled and mashed potatoes, cumin powder, coriander powder, garam masala powder, red chilli powder, salt to taste, kasoori methi leaves, coriander leaves. Mix well and saute for 2 minutes. Your stuffing is ready!",
        "Prepare the dough for the Samosa:Now, to prepare the dough, take a mixing bowl and combine all-purpose flour along with carom seeds and salt. Mix and then add ghee and start kneading by adding a little water at a time. Ensure that you add water gradually and make a firm dough. A soft dough will not make your samosas crispy. Cover the dough with a damp muslin cloth and keep aside for about half an hour.",
        "Roll the dough in small puris and cut into half:Once done, roll out few small-sized balls from the dough. Flatten them further with the help of your palms and then with a rolling pin. Give them a round shape and cut in half. Now dip your hands in water, fold the edges of the semi-circle in order to give it a cone shape.",
        " Fill the semi-circle with potato filling and deep fry:Take the filling with the help of a spoon and stuff it in the cone. Seal the ends properly by pressing the edges lightly with your fingers. Then, heat oil in a pan and deep fry the samosas on low heat until they turn golden brown and crispy. Serve with tomato ketchup and green chutney. Enjoy it as a tea-time snack!\n\n\n\n\n"

    };
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}

void puliyogare()
{
    const char *recipeName = "Puliyogare";
    const char *ingredients[] = {
        "1 cup rice (preferably short-grain rice)",
        "1 small lemon-sized ball of tamarind",
        "3 tablespoons oil",
        "1 teaspoon mustard seeds",
        "1 teaspoon chana dal (split Bengal gram)",
        "1 teaspoon urad dal (split black gram)",
        "1/4 teaspoon asafoetida (hing)",
        "1/4 teaspoon turmeric powder",
        "1/4 cup peanuts",
        "2-3 dried red chilies",
        "1 tablespoon jaggery (optional)",
        "Salt to taste",
        "Curry leaves (a sprig)",
        "Coriander leaves (garnish)",

    };

    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Cook the rice according to the instructions on the packet. Once cooked, spread the rice on a large plate or tray and let it cool completely.",
        "Soak the tamarind in warm water for about 15 minutes. Squeeze out the pulp from the tamarind, removing any seeds or fibers. Set the tamarind pulp aside.",
        "In a dry pan, roast all the ingredients mentioned under Puliyogare Spice Mix except turmeric powder and asafoetida. Roast them on medium heat until they turn fragrant and start to change color slightly.",
        "Be careful not to burn them. Once roasted, let them cool and grind them into a fine powder. Add turmeric powder and asafoetida to the ground spice mix. Set it aside.",
        "Heat oil in a pan or kadai over medium heat. Add mustard seeds and let them splutter. Then add chana dal, urad dal, peanuts, dried red chilies, and curry leaves. Sauté them until the dals turn golden brown.",
        "Add the tamarind pulp to the pan and mix well. Cook the tamarind pulp on low heat for 5-7 minutes until the raw smell disappears.",
        "Add the prepared Puliyogare Spice Mix to the pan and mix well with the tamarind pulp. Cook for another 2-3 minutes, stirring continuously.",
        "Add jaggery (if using) and salt to taste. Mix well until the jaggery melts and blends into the mixture.",
        "Turn off the heat and add the cooled cooked rice to the pan. Gently mix the rice with the tamarind-spice mixture until all the rice grains are coated evenly.",
        "Garnish with chopped coriander leaves.\n\n\n\n\n"

    };

    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}

void masalatea()
{
    const char *recipeName = "Masala Tea";
    const char *ingredients[] = {
        "2 cups water",
        "2 cups milk",
        "2 teaspoons black tea leaves or 2 tea bags",
        "2-3 teaspoons sugar (adjust to taste)",
        "2-3 green cardamom pods, lightly crushed",
        "1-inch piece of cinnamon stick",
        "2-3 cloves",
        "1 small piece of fresh ginger, peeled and grated",
        "A pinch of ground black pepper (optional)",
        "A pinch of ground nutmeg (optional)",

    };

    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "In a saucepan, add water and bring it to a boil.",
        "Once the water boils, add the tea leaves or tea bags, crushed cardamom pods, cinnamon stick, cloves, and grated ginger to the saucepan. If you like, you can also add a pinch of ground black pepper and ground nutmeg for added flavor.",
        "Let the mixture simmer for about 2-3 minutes on medium heat to allow the flavors of the spices to infuse into the tea.",
        "Add milk to the saucepan and continue simmering for another 3-4 minutes until the tea becomes a rich golden color and the flavors blend well.",
        "At this stage, add sugar to the tea and stir well until it dissolves completely. Adjust the amount of sugar according to your taste preferences.",
        "Turn off the heat and strain the tea using a fine mesh strainer into teacups or a teapot.",
        "Masala tea is now ready to be served. Enjoy it hot and aromatic.\n\n\n\n\n"

    };

    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}

void tomatopizza()
{
    const char *recipeName = "Pizza";
    const char *ingredients[] = {
        "2 cup all purpose flour",
        "100 ml tomato ketchup",
        "1 tomato",
        "2 onion",
        "1 teaspoon chilli flakes",
        "1 teaspoon baking powder",
        "1 teaspoon sugar",
        "100 gm processed cheese",
        "4 mushroom",
        "1/2 capsicum (green pepper)",
        "1 teaspoon oregano",
        "1/2 cup mozzarella",
        "1 tablespoon dry yeast",
        "water as required",

    };

    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Prepare the pizza dough:Take a dough kneading plate and add all-purpose flour to it. Next, add salt and baking powder in it and sieve the flour once. Then, make a well in the centre and add 1 teaspoon of oil to it. On the other hand, take a little warm water and mix the yeast in it along with 1 teaspoon of sugar. Mix well and keep aside for 10-15 minutes. The yeast will rise in the meantime. Once the yeast has risen, add it to the flour knead the dough nicely using some water. Keep this dough aside for 4-6 hours. Then knead the dough once again. Now, the pizza dough is ready.",
        "Prepare the pizza dough:Take a dough kneading plate and add all-purpose flour to it. Next, add salt and baking powder in it and sieve the flour once. Then, make a well in the centre and add 1 teaspoon of oil to it. On the other hand, take a little warm water and mix the yeast in it along with 1 teaspoon of sugar. Mix well and keep aside for 10-15 minutes. The yeast will rise in the meantime. Once the yeast has risen, add it to the flour knead the dough nicely using some water. Keep this dough aside for 4-6 hours. Then knead the dough once again. Now, the pizza dough is ready.",
        "Chop all the vegetables for the pizza:Now, wash the capsicum and slice it thinly in a bowl. Then, peel the onions and cut thin slices of it as well in another bowl. And finally, cut tomatoes and mushrooms in the same manner. However, make sure that those tomatoes have less juice in them. Once all the veggies are done, Now, grate the processed and mozzarella cheese in separate bowls.",
        "Spread the sauce and veggies on the base:Then, take the fresh pizza base and apply tomato ketchup all over. Spread half the processed cheese all over the base and evenly put the veggies all across the base. Once you have put all the veggies, put a thick layer of mozzarella cheese.",
        "Bake the pizza at 250 degree Celsius for 10 minutes:Put this pizza base in a baking tray and place it inside the oven. Let the pizza bake 10 minutes at 250 degree Celsius. Once done, take out the baking tray and slice the pizza. Sprinkle oregano and chilli flakes as per your taste and serve hot. (Note: Make sure that the oven is preheated at 250 degree Celsius for 5 minutes at least.)",
        "Serve the pizza with sauce and red chilli power and enjoy!\n\n\n\n\n"};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}

void chocolateChipCookies()
{
    const char *recipeName = "Chocolate Chip Cookies";
    const char *ingredients[] = {
        "2 1/4 cups all-purpose flour",
        "1 teaspoon baking soda",
        "1/2 teaspoon salt",
        "1 cup unsalted butter, softened",
        "3/4 cup granulated sugar",
        "3/4 cup packed brown sugar",
        "1 teaspoon vanilla extract",
        "2 large eggs",
        "2 cups semisweet chocolate chips",
        "1 cup chopped nuts (optional)"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Preheat the oven to 375°F (190°C).",
        "In a small bowl, combine the flour, baking soda, and salt. Set aside.",
        "In a large bowl, cream together the softened butter, granulated sugar, and brown sugar until smooth.",
        "Beat in the vanilla extract and eggs, one at a time, until well blended.",
        "Gradually add the dry ingredients to the wet ingredients and mix until just combined.",
        "Stir in the chocolate chips and nuts (if using).",
        "Drop rounded tablespoons of dough onto ungreased baking sheets.",
        "Bake for 9 to 11 minutes, or until golden brown around the edges.",
        "Allow the cookies to cool on the baking sheets for a few minutes before transferring them to wire racks to cool completely.",
        "Enjoy the delicious homemade chocolate chip cookies!\n\n\n\n\n"};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}

void eggcurry()
{
    const char *recipeName = "Egg Curry";
    const char *ingredients[] = {
        "4 to 5 boiled eggs",
        "2 tablespoons oil",
        "1 teaspoon ghee",
        "2 cups onions",
        "1 cup tomatoes,1 cup green chillies",
        "1 teaspoon ginger garlic paste",
        "1/2 teaspoon salt",
        "1 to 1.5 cups water",
        "1 tablespoon coriander leaves",
        "1/4 kasuri methi",
        "1/2 teaspoon sugar",
        "4 tablespoons cream",
        "1 teaspoon red chilli powder",
        "1 teaspoon garam masala",
        "1/8 teaspoon turmeric powder",
    };
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Fine chop or puree the onions. If you prefer to puree the onions, first boil diced onions in 2 cups of water for 4 mins until transparent. Drain the water and puree them in a blender.",
        "Refer notes below to boil eggs perfectly. Wipe dry the boiled eggs or air dry until moist free. Prick each egg with a fork 2 to 3 times. We do this so the eggs don't splatter oil and burst in the pan while frying.",
        "Heat 1 teaspoon ghee or oil in a nonstick pan & Fry the eggs until golden & slightly blistered. Remove the eggs to a plate & optionally sprinkle 2 to 3 pinches each of chilli powder & garam masala.",
        "Heat 2 tbsp oil and add bay leaf, cardamoms and cinnamon.",
        "When they begin to sizzle, add onions & green chilli. Saute onions until golden and the raw smell has almost gone.",
        "Add ginger garlic paste and saute until the raw smell goes off, for about a minute.",
        "Then add tomatoes and saute well until the mixture turns mushy",
        "Next add red chili powder, garam masala, coriander powder, turmeric and salt. Saute everything well until a nice aroma comes out & the mixture leaves the sides of the pan.",
        "Pour water 1 to 1/4 cups water and mix well. Cover and cook until the curry thickens and you see traces of oil over the curry.",
        "Taste test and adjust salt. If required add sugar. Add the fried eggs and kasuri methi. Mix and simmer for a while. Sprinkle chopped coriander leaves. Serve punjabi egg curry with roti or naan or plain rice.",
        "Optional Pour 3 to 4 tbsps cream or Blend together 10 cashews with half cup water to smooth milk. Pour it to the curry. Cook covered for 2 to 3 mins until the curry turns thick.\n\n\n\n\n",
    };
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}

void vegetableStirFry()
{
    const char *recipeName = "Vegetable Stir-Fry";
    const char *ingredients[] = {
        "2 tablespoons vegetable oil",
        "2 cups mixed vegetables (e.g., bell peppers, broccoli, carrots, snap peas)",
        "1 small onion, sliced",
        "2 cloves of garlic, minced",
        "1 tablespoon soy sauce",
        "1 tablespoon oyster sauce",
        "1/2 teaspoon sesame oil",
        "Salt and pepper to taste"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Heat the vegetable oil in a large skillet or wok over high heat.",
        "Add the sliced onion and minced garlic. Stir-fry for 1-2 minutes until fragrant.",
        "Add the mixed vegetables to the skillet and stir-fry for 3-4 minutes until they are crisp-tender.",
        "In a small bowl, whisk together the soy sauce, oyster sauce, sesame oil, salt, and pepper.",
        "Pour the sauce mixture over the vegetables and stir to coat evenly.",
        "Continue stir-frying for an additional 1-2 minutes until the sauce thickens slightly and coats the vegetables.",
        "Remove from heat and serve the vegetable stir-fry as a side dish or over cooked rice.",
        "Enjoy your delicious vegetable stir-fry!.\n\n\n\n\n",
    };
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void rasagulla()
{
    const char *recipeName = "Rasagulla";
    const char *ingredients[] = {
        "1 liter Full-fat milk",
        "2-3 tablespoons Lemon juice or vinegar",
        "1 cup Sugar",
        "4 cups Water",
        "1 teaspoon Cardamom powder",
        "Rose water (optional)",
        "Few saffron strands (optional)"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Boil the milk in a large pan, stirring occasionally.",
        "Once the milk comes to a boil, turn off the heat and add lemon juice or vinegar to curdle the milk.",
        "Stir gently until the milk separates into curds and whey.",
        "Strain the curdled milk using a muslin cloth, and wash it under cold water to remove the sourness of the lemon or vinegar.",
        "Squeeze out the excess water, and hang the paneer in the cloth for 30 minutes.",
        "Knead the paneer for about 10 minutes to make it smooth and soft.",
        "Divide the paneer into small balls, making sure there are no cracks.",
        "In a large pan, add water and sugar, and bring it to a boil to make the sugar syrup.",
        "Gently add the paneer balls into the boiling syrup, cover, and cook for 15-20 minutes until the rasgullas double in size.",
        "Turn off the heat, let them cool down, and refrigerate them in the syrup for a few hours before serving.",
        "Optionally, add cardamom powder, rose water, or saffron for flavor."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void vegBiryani()
{
    const char *recipeName = "Vegetable Biryani";
    const char *ingredients[] = {
        "1 cup Basmati rice",
        "2 cups Mixed vegetables (carrots, peas, beans, potatoes)",
        "1 large Onion (thinly sliced)",
        "2 Tomatoes (chopped)",
        "2 Green chilies (slit)",
        "1 tbsp Ginger-garlic paste",
        "1/2 cup Yogurt",
        "2 tbsp Biryani masala",
        "1 tsp Red chili powder",
        "1/4 tsp Turmeric powder",
        "Salt to taste",
        "1/4 cup Fresh coriander leaves",
        "1/4 cup Fresh mint leaves",
        "2 tbsp Ghee or oil",
        "Whole spices (bay leaf, cinnamon stick, cardamom pods, cloves)",
        "Water as needed",
        "Fried onions for garnish"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Wash the basmati rice and soak it in water for 30 minutes.",
        "Heat ghee or oil in a pan, add whole spices, and sauté until fragrant.",
        "Add sliced onions and fry until golden brown.",
        "Add ginger-garlic paste and sauté for 2 minutes.",
        "Add chopped tomatoes, green chilies, turmeric, red chili powder, and biryani masala. Cook until the tomatoes soften.",
        "Add mixed vegetables and cook for 5-7 minutes.",
        "Stir in yogurt and cook for another 2-3 minutes.",
        "Boil the soaked rice in salted water until 70% cooked. Drain and set aside.",
        "Layer the vegetable mixture and parboiled rice in a large pot.",
        "Top with chopped coriander, mint leaves, and fried onions.",
        "Cover and cook on low heat (dum) for 15-20 minutes until rice is fully cooked.",
        "Serve hot with raita or salad."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void paneerBiryani()
{
    const char *recipeName = "Paneer Biryani";
    const char *ingredients[] = {
        "1 cup Basmati rice",
        "200g Paneer (cubed)",
        "2 large Onions (thinly sliced)",
        "2 Tomatoes (chopped)",
        "1/2 cup Yogurt",
        "2 tbsp Biryani masala",
        "1 tsp Red chili powder",
        "1/4 tsp Turmeric powder",
        "Salt to taste",
        "1/4 cup Fresh coriander leaves",
        "1/4 cup Fresh mint leaves",
        "2 tbsp Ghee or oil",
        "Whole spices (bay leaf, cinnamon stick, cardamom pods, cloves)",
        "Fried onions for garnish",
        "Water as needed"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Soak basmati rice for 30 minutes. Boil in salted water until 70% cooked, drain and set aside.",
        "Heat oil in a pan, fry paneer cubes until golden brown, and set aside.",
        "In the same pan, heat more ghee or oil and add whole spices. Sauté until aromatic.",
        "Add sliced onions and fry until golden brown.",
        "Add ginger-garlic paste, tomatoes, biryani masala, chili powder, and turmeric. Cook until tomatoes soften.",
        "Stir in yogurt, salt, and cooked paneer cubes.",
        "In a large pot, layer the paneer mixture and parboiled rice.",
        "Top with chopped coriander, mint, and fried onions.",
        "Cover and cook on low heat for 15-20 minutes.",
        "Serve hot with raita."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void mushroomBiryani()
{
    const char *recipeName = "Mushroom Biryani";
    const char *ingredients[] = {
        "1 cup Basmati rice",
        "200g Mushrooms (sliced)",
        "1 large Onion (thinly sliced)",
        "2 Tomatoes (chopped)",
        "2 Green chilies",
        "1 tbsp Ginger-garlic paste",
        "1/2 cup Yogurt",
        "2 tbsp Biryani masala",
        "1 tsp Red chili powder",
        "1/4 tsp Turmeric powder",
        "Salt to taste",
        "1/4 cup Fresh coriander leaves",
        "1/4 cup Fresh mint leaves",
        "2 tbsp Ghee or oil",
        "Whole spices (bay leaf, cinnamon stick, cardamom pods, cloves)",
        "Water as needed",
        "Fried onions for garnish"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Wash and soak the basmati rice for 30 minutes. Cook until 70% done, drain, and set aside.",
        "Heat ghee or oil in a pan and add the whole spices. Fry until fragrant.",
        "Add sliced onions and fry until golden brown.",
        "Add ginger-garlic paste, green chilies, and sauté for a couple of minutes.",
        "Add chopped tomatoes, biryani masala, red chili powder, turmeric, and salt. Cook until the tomatoes turn mushy.",
        "Add sliced mushrooms and cook for 5-7 minutes until tender.",
        "Stir in yogurt and cook for 2-3 minutes.",
        "In a large pot, layer the mushroom mixture and parboiled rice.",
        "Top with fresh coriander, mint leaves, and fried onions.",
        "Cover and cook on low heat for 15-20 minutes (dum).",
        "Serve hot with raita or salad."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void hyderabadiEggBiryani()
{
    const char *recipeName = "Hyderabadi Egg Biryani";
    const char *ingredients[] = {
        "4 Boiled eggs (slightly slit)",
        "1 cup Basmati rice",
        "2 large Onions (thinly sliced)",
        "2 Tomatoes (chopped)",
        "1/2 cup Yogurt",
        "2 tbsp Biryani masala",
        "1 tsp Red chili powder",
        "1/4 tsp Turmeric powder",
        "1 tsp Garam masala",
        "Salt to taste",
        "1/4 cup Fresh coriander leaves",
        "1/4 cup Fresh mint leaves",
        "2 tbsp Ghee or oil",
        "Whole spices (bay leaf, cinnamon stick, cardamom pods, cloves)",
        "Water as needed",
        "Fried onions for garnish"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Soak basmati rice for 30 minutes. Cook in salted water until 70% done, drain, and set aside.",
        "Heat ghee or oil in a pan and fry the whole spices until aromatic.",
        "Add sliced onions and fry until golden brown.",
        "Add ginger-garlic paste and sauté for a minute.",
        "Add chopped tomatoes, biryani masala, red chili powder, turmeric, and garam masala. Cook until the tomatoes soften.",
        "Stir in yogurt and add the boiled eggs, coating them in the masala.",
        "In a large pot, layer the egg masala mixture and parboiled rice.",
        "Top with chopped coriander, mint leaves, and fried onions.",
        "Cover and cook on low heat for 15-20 minutes (dum).",
        "Serve hot with raita."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void prawnsBiryani()
{
    const char *recipeName = "Prawns Biryani";
    const char *ingredients[] = {
        "300g Prawns (cleaned and deveined)",
        "1 1/2 cups Basmati rice",
        "2 large Onions (thinly sliced)",
        "2 Tomatoes (chopped)",
        "1/2 cup Yogurt",
        "2 tbsp Ginger-garlic paste",
        "2 tbsp Biryani masala",
        "1 tsp Red chili powder",
        "1/4 tsp Turmeric powder",
        "1 tsp Garam masala",
        "1/4 cup Fresh coriander leaves",
        "1/4 cup Fresh mint leaves",
        "2 tbsp Ghee or oil",
        "Whole spices (bay leaf, cinnamon stick, cardamom pods, cloves)",
        "Fried onions for garnish",
        "Lemon juice",
        "Water as needed",
        "Salt to taste"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Soak basmati rice for 30 minutes. Cook in salted water until 70% done, drain, and set aside.",
        "Marinate prawns with yogurt, ginger-garlic paste, red chili powder, turmeric, and salt. Set aside for 30 minutes.",
        "In a pan, heat ghee or oil and fry the whole spices until aromatic.",
        "Add sliced onions and fry until golden brown.",
        "Add marinated prawns and cook on medium heat until the prawns turn pink.",
        "Add chopped tomatoes, biryani masala, garam masala, and cook for a few minutes until the mixture thickens.",
        "In a large pot, layer the prawn mixture and parboiled rice.",
        "Top with fresh coriander, mint leaves, fried onions, and a squeeze of lemon juice.",
        "Cover and cook on low heat (dum) for 15-20 minutes.",
        "Serve hot with raita or salad."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}

void muttonBiryani()
{
    const char *recipeName = "Mutton Biryani";
    const char *ingredients[] = {
        "500g Mutton (bone-in, cut into pieces)",
        "1 1/2 cups Basmati rice",
        "2 large Onions (thinly sliced)",
        "2 Tomatoes (chopped)",
        "1/2 cup Yogurt",
        "2 tbsp Ginger-garlic paste",
        "2 tbsp Biryani masala",
        "1 tsp Red chili powder",
        "1/4 tsp Turmeric powder",
        "1 tsp Garam masala",
        "1/4 cup Fresh coriander leaves",
        "1/4 cup Fresh mint leaves",
        "2 tbsp Ghee or oil",
        "Whole spices (bay leaf, cinnamon stick, cardamom pods, cloves)",
        "1 tsp Lemon juice",
        "Fried onions for garnish",
        "Water as needed",
        "Salt to taste"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Marinate the mutton with yogurt, ginger-garlic paste, red chili powder, turmeric, and salt. Set aside for 1-2 hours.",
        "Soak the basmati rice for 30 minutes, then cook in salted water until 70% done. Drain and set aside.",
        "In a pressure cooker, heat ghee or oil and add whole spices. Sauté until fragrant.",
        "Add sliced onions and fry until golden brown.",
        "Add marinated mutton and sauté for 5-7 minutes until the meat is browned.",
        "Add chopped tomatoes, biryani masala, garam masala, and cook for another 5-10 minutes.",
        "Add enough water, cover, and pressure cook the mutton until tender (about 4-5 whistles).",
        "In a large pot, layer the mutton mixture and parboiled rice.",
        "Top with fresh coriander, mint leaves, fried onions, and a dash of lemon juice.",
        "Cover and cook on low heat (dum) for 20-25 minutes.",
        "Serve hot with raita or salan."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void jeeraRice()
{
    const char *recipeName = "Jeera Rice";
    const char *ingredients[] = {
        "1 cup Basmati rice",
        "1 tbsp Cumin seeds (Jeera)",
        "2 tbsp Ghee or oil",
        "1 Bay leaf",
        "2-3 Cloves",
        "1 inch Cinnamon stick",
        "2 1/2 cups Water",
        "Salt to taste",
        "Fresh coriander leaves for garnish"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Wash and soak the basmati rice for 20-30 minutes, then drain.",
        "Heat ghee in a pan, add cumin seeds, bay leaf, cloves, and cinnamon stick. Fry until fragrant.",
        "Add the soaked rice and sauté for 2-3 minutes.",
        "Add water and salt, and bring to a boil.",
        "Reduce heat, cover, and simmer until rice is fully cooked (about 15 minutes).",
        "Fluff the rice with a fork and garnish with fresh coriander leaves.",
        "Serve hot with curry or dal."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void tomatoRice()
{
    const char *recipeName = "Tomato Rice";
    const char *ingredients[] = {
        "1 cup Basmati rice",
        "2 large Tomatoes (chopped)",
        "1 large Onion (sliced)",
        "2 Green chilies (slit)",
        "1 tbsp Ginger-garlic paste",
        "1/2 tsp Turmeric powder",
        "1 tsp Red chili powder",
        "1 tsp Garam masala",
        "1/2 tsp Mustard seeds",
        "Few Curry leaves",
        "2 tbsp Oil or ghee",
        "1/4 cup Fresh coriander leaves",
        "Salt to taste",
        "Water as needed"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Wash and soak the basmati rice for 30 minutes. Cook until 90% done and set aside.",
        "Heat oil in a pan, add mustard seeds, and let them splutter. Add curry leaves.",
        "Add sliced onions and sauté until golden brown.",
        "Add ginger-garlic paste, green chilies, and sauté for 2 minutes.",
        "Add chopped tomatoes, turmeric, red chili powder, garam masala, and salt. Cook until tomatoes turn soft and oil separates.",
        "Add the cooked rice and mix well.",
        "Cover and cook on low heat for 5-7 minutes.",
        "Garnish with fresh coriander leaves and serve hot."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void eggFriedRice()
{
    const char *recipeName = "Egg Fried Rice";
    const char *ingredients[] = {
        "3 cups Cooked rice (cooled)",
        "3 Eggs",
        "1 Onion (chopped)",
        "2 Green chilies (slit)",
        "1 tsp Soy sauce",
        "1 tsp Vinegar",
        "1/4 cup Spring onions (chopped)",
        "2 tbsp Oil",
        "Salt and pepper to taste"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Heat oil in a pan, add chopped onions and green chilies, and sauté until translucent.",
        "Crack the eggs into the pan, scramble them, and cook until done.",
        "Add cooked rice, soy sauce, vinegar, salt, and pepper. Toss everything together.",
        "Add chopped spring onions and mix well.",
        "Serve hot."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void vegFriedRice()
{
    const char *recipeName = "Vegetable Fried Rice";
    const char *ingredients[] = {
        "3 cups Cooked rice (cooled)",
        "1 Carrot (diced)",
        "1/2 cup Green peas",
        "1/2 cup Capsicum (chopped)",
        "1 Onion (chopped)",
        "2 Green chilies (slit)",
        "1 tsp Soy sauce",
        "1 tsp Vinegar",
        "1/4 cup Spring onions (chopped)",
        "2 tbsp Oil",
        "Salt and pepper to taste"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Heat oil in a pan, add chopped onions and green chilies, and sauté until translucent.",
        "Add diced carrots, peas, and capsicum, and sauté until vegetables are tender.",
        "Add cooked rice, soy sauce, vinegar, salt, and pepper. Toss everything together.",
        "Add chopped spring onions and mix well.",
        "Serve hot."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void chickenFriedRice()
{
    const char *recipeName = "Chicken Fried Rice";
    const char *ingredients[] = {
        "200g Chicken breast (cut into small pieces)",
        "3 cups Cooked rice (cooled)",
        "1 Onion (chopped)",
        "2 Green chilies (slit)",
        "1 tsp Soy sauce",
        "1 tsp Vinegar",
        "1/4 cup Spring onions (chopped)",
        "2 tbsp Oil",
        "Salt and pepper to taste",
        "1 tbsp Ginger-garlic paste"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Heat oil in a pan, add chopped onions and green chilies, and sauté until translucent.",
        "Add ginger-garlic paste and chicken pieces, and cook until the chicken is fully cooked.",
        "Add cooked rice, soy sauce, vinegar, salt, and pepper. Toss everything together.",
        "Add chopped spring onions and mix well.",
        "Serve hot."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void lemonRice()
{
    const char *recipeName = "Lemon Rice";
    const char *ingredients[] = {
        "1 cup Cooked rice",
        "1 tbsp Lemon juice",
        "1 tsp Mustard seeds",
        "1 tbsp Peanuts",
        "1/2 tsp Turmeric powder",
        "2 Green chilies (slit)",
        "Few Curry leaves",
        "1 tbsp Oil",
        "Salt to taste",
        "Fresh coriander leaves for garnish"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Heat oil in a pan, add mustard seeds, and let them splutter.",
        "Add peanuts, green chilies, curry leaves, and turmeric powder. Saute for 2-3 minutes.",
        "Add cooked rice and salt. Mix well.",
        "Turn off the heat and add lemon juice. Toss everything together.",
        "Garnish with fresh coriander leaves and serve."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}

void frenchfries()
{
    const char *recipeName = "French Fries";
    const char *ingredients[] = {
        "3 Russet Potatoes (or Idaho or Maris piper)",
        "1 ½ cupsOil (peanut, canola or vegetable oil)",
        "¾ teaspoonGarlic Powder",
        "¾ teaspoonOnion Powder",
        "½ teaspoonPaprika (or 1/4 teaspoon red chili powder)",
        "¼ teaspoonSalt (adjust to taste)",
        "1 teaspoonOregano",
        "½ teaspoonRed Chilli Flakes (optional)",
        "¼ teaspoonBlack Pepper (ground, optional)",
    };
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Once you are done with the rinsing process, it's time to fry them",
        "Take a medium-sized pan and add your preferred cooking oil. Heat the oil till you can see small bubbles on the side",
        "Now, add the sliced potatoes to the pan.",
        "Make sure you don't overcrowd the pan so that they are not stacked on top of each other.",
        "Fry them for 5-6 minutes or until they are light golden in colour.",
        "Take them out and allow them to cool down to normal room temperature.",
        "Return the fries into the pan and fry them for 2-3 minutes or until crispy and dark golden brown in colour.",
        "Place fries on paper towel to absorb excess oil, if any.",
        "Sprinkle salt over the fries.",
        "Fries will be crispy on the outside and soft on the inside.\n\n\n\n\n",
    };
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void chickenChilli()
{
    const char *recipeName = "Chicken Chilli";
    const char *ingredients[] = {
        "300g Boneless chicken (cut into cubes)",
        "1 tbsp Cornflour",
        "1 tbsp All-purpose flour",
        "1 Egg",
        "1 tsp Soy sauce",
        "1 tsp Ginger-garlic paste",
        "1 Onion (cubed)",
        "1 Capsicum (cubed)",
        "2 Green chilies (slit)",
        "1 tbsp Soy sauce",
        "1 tbsp Vinegar",
        "1 tbsp Chili sauce",
        "Salt and pepper to taste",
        "Oil for frying",
        "Spring onions for garnish"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Marinate chicken with cornflour, all-purpose flour, egg, ginger-garlic paste, soy sauce, salt, and pepper. Set aside for 30 minutes.",
        "Heat oil in a pan and deep fry the chicken pieces until golden brown. Set aside.",
        "In a separate pan, heat oil and sauté onions, capsicum, and green chilies for 2-3 minutes.",
        "Add soy sauce, vinegar, chili sauce, salt, and pepper. Mix well.",
        "Add fried chicken pieces and toss to coat with the sauce.",
        "Garnish with spring onions and serve hot."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void chickenManchurian()
{
    const char *recipeName = "Chicken Manchurian";
    const char *ingredients[] = {
        "300g Boneless chicken (cut into small pieces)",
        "1 tbsp Cornflour",
        "1 tbsp All-purpose flour",
        "1 Egg",
        "1 tsp Soy sauce",
        "1 tsp Ginger-garlic paste",
        "2 Green chilies (chopped)",
        "2 tbsp Tomato ketchup",
        "1 tbsp Soy sauce",
        "1 tbsp Vinegar",
        "1 tbsp Chili sauce",
        "2 tbsp Spring onions (chopped)",
        "Oil for frying",
        "Salt and pepper to taste"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Marinate chicken with cornflour, all-purpose flour, egg, soy sauce, ginger-garlic paste, salt, and pepper for 30 minutes.",
        "Heat oil and deep fry the chicken pieces until golden brown. Drain and set aside.",
        "In a separate pan, sauté green chilies and spring onions.",
        "Add tomato ketchup, soy sauce, vinegar, chili sauce, salt, and pepper. Mix well.",
        "Add the fried chicken pieces and toss to coat in the sauce.",
        "Garnish with spring onions and serve hot."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void chickenLollypop()
{
    const char *recipeName = "Chicken Lollypop";
    const char *ingredients[] = {
        "8 Chicken wings (frenched into lollypops)",
        "2 tbsp Cornflour",
        "1 tbsp All-purpose flour",
        "1 Egg",
        "1 tsp Ginger-garlic paste",
        "1 tsp Soy sauce",
        "1 tsp Red chili powder",
        "Salt to taste",
        "Oil for frying",
        "1 tbsp Schezwan sauce",
        "Spring onions for garnish"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Marinate chicken lollypops with cornflour, all-purpose flour, egg, ginger-garlic paste, soy sauce, red chili powder, and salt. Set aside for 30 minutes.",
        "Heat oil and deep fry the lollypops until golden brown.",
        "In a pan, heat Schezwan sauce and toss the fried lollypops in it.",
        "Garnish with spring onions and serve hot."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void chicken65()
{
    const char *recipeName = "Chicken 65";
    const char *ingredients[] = {
        "300g Boneless chicken (cut into cubes)",
        "2 tbsp Cornflour",
        "1 tbsp All-purpose flour",
        "1 Egg",
        "1 tsp Red chili powder",
        "1 tsp Garam masala",
        "1 tbsp Ginger-garlic paste",
        "Salt to taste",
        "Curry leaves for garnish",
        "2 Green chilies (slit)",
        "Oil for frying",
        "1 tbsp Lemon juice"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Marinate chicken with cornflour, all-purpose flour, egg, red chili powder, garam masala, ginger-garlic paste, and salt. Set aside for 30 minutes.",
        "Heat oil and deep fry the chicken pieces until golden brown.",
        "In a separate pan, heat oil and fry curry leaves and green chilies.",
        "Toss the fried chicken pieces in the pan and add lemon juice.",
        "Garnish with fried curry leaves and serve hot."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void chickenGarlic()
{
    const char *recipeName = "Chicken Garlic";
    const char *ingredients[] = {
        "300g Boneless chicken (cut into strips)",
        "1 tbsp Cornflour",
        "1 tbsp All-purpose flour",
        "1 Egg",
        "2 tbsp Garlic (finely chopped)",
        "1 tsp Soy sauce",
        "1 tbsp Ginger-garlic paste",
        "1 tbsp Vinegar",
        "2 Green chilies (slit)",
        "Spring onions for garnish",
        "Salt and pepper to taste",
        "Oil for frying"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Marinate chicken with cornflour, all-purpose flour, egg, soy sauce, ginger-garlic paste, salt, and pepper. Set aside for 30 minutes.",
        "Heat oil and deep fry the chicken pieces until golden brown. Set aside.",
        "In a pan, sauté chopped garlic and green chilies until fragrant.",
        "Add soy sauce, vinegar, salt, and pepper. Mix well.",
        "Toss the fried chicken pieces in the garlic mixture.",
        "Garnish with spring onions and serve hot."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void eggPakora()
{
    const char *recipeName = "Egg Pakora";
    const char *ingredients[] = {
        "4 Boiled eggs (halved)",
        "1 cup Besan (Gram flour)",
        "1 tsp Red chili powder",
        "1/4 tsp Turmeric powder",
        "1 tsp Garam masala",
        "Salt to taste",
        "Water as needed",
        "Oil for frying"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Mix besan, red chili powder, turmeric, garam masala, and salt in a bowl. Add water to make a thick batter.",
        "Heat oil in a pan.",
        "Dip each egg half into the batter and deep fry until golden brown.",
        "Serve hot with chutney."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void eggFry()
{
    const char *recipeName = "Egg Fry";
    const char *ingredients[] = {
        "4 Eggs",
        "1/2 tsp Red chili powder",
        "1/4 tsp Turmeric powder",
        "Salt to taste",
        "Oil for frying"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Heat oil in a pan.",
        "Crack eggs directly into the pan and fry on medium heat.",
        "Sprinkle red chili powder, turmeric, and salt on the eggs.",
        "Fry until the eggs are cooked to your desired doneness.",
        "Serve hot."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void eggBhurji()
{
    const char *recipeName = "Egg Bhurji";
    const char *ingredients[] = {
        "4 Eggs",
        "1 Onion (chopped)",
        "2 Green chilies (chopped)",
        "1 Tomato (chopped)",
        "1/2 tsp Red chili powder",
        "1/4 tsp Turmeric powder",
        "Salt to taste",
        "2 tbsp Oil",
        "Fresh coriander leaves for garnish"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Heat oil in a pan and sauté onions and green chilies until soft.",
        "Add tomatoes, red chili powder, turmeric, and salt. Cook until tomatoes are soft.",
        "Crack the eggs into the pan and scramble them.",
        "Cook until the eggs are fully cooked.",
        "Garnish with fresh coriander leaves and serve hot."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void eggOmelette()
{
    const char *recipeName = "Egg Omelette";
    const char *ingredients[] = {
        "2 Eggs",
        "1 Onion (chopped)",
        "1 Green chili (chopped)",
        "1 Tomato (chopped)",
        "Salt to taste",
        "Black pepper to taste",
        "Oil for frying",
        "Fresh coriander leaves for garnish"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Crack the eggs into a bowl and whisk them with salt and pepper.",
        "Heat oil in a pan and pour the egg mixture into it.",
        "Sprinkle chopped onions, green chilies, and tomatoes on top.",
        "Cook until the omelette is set, then fold and serve hot.",
        "Garnish with fresh coriander leaves."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void fishTikka()
{
    const char *recipeName = "Fish Fry/Tikka";
    const char *ingredients[] = {
        "300g Fish fillets",
        "1 tbsp Ginger-garlic paste",
        "1 tsp Red chili powder",
        "1/2 tsp Turmeric powder",
        "1 tsp Garam masala",
        "1 tbsp Lemon juice",
        "Salt to taste",
        "Oil for shallow frying",
        "Fresh coriander leaves for garnish"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Marinate fish fillets with ginger-garlic paste, red chili powder, turmeric, garam masala, lemon juice, and salt. Set aside for 30 minutes.",
        "Heat oil in a pan and shallow fry the fish fillets on both sides until golden brown.",
        "Garnish with fresh coriander leaves and serve hot."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void vegManchurian()
{
    const char *recipeName = "Veg Manchurian";
    const char *ingredients[] = {
        "1 cup Grated Cabbage",
        "1 cup Grated Carrot",
        "1/2 cup Finely Chopped Capsicum",
        "2-3 tbsp Corn Flour",
        "2-3 tbsp All-Purpose Flour (Maida)",
        "1 tbsp Soy Sauce",
        "1 tsp Ginger-Garlic Paste",
        "Salt to taste",
        "Oil for frying",
        "2 tbsp Spring Onion for garnish"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "In a bowl, mix grated vegetables, corn flour, all-purpose flour, ginger-garlic paste, soy sauce, and salt.",
        "Shape the mixture into small balls.",
        "Heat oil in a pan and deep-fry the balls until golden brown. Set aside.",
        "In another pan, heat some oil and sauté garlic, green chili, and capsicum.",
        "Add soy sauce, tomato ketchup, and a little water to make a sauce.",
        "Toss the fried Manchurian balls in the sauce.",
        "Garnish with spring onions and serve hot."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void gobiManchurian()
{
    const char *recipeName = "Gobi Manchurian";
    const char *ingredients[] = {
        "1 medium Cauliflower (cut into florets)",
        "2-3 tbsp Corn Flour",
        "2-3 tbsp All-Purpose Flour (Maida)",
        "1 tbsp Soy Sauce",
        "1 tsp Ginger-Garlic Paste",
        "Salt to taste",
        "Oil for frying",
        "1 tbsp Vinegar",
        "2 tbsp Tomato Ketchup",
        "2 tbsp Spring Onion for garnish"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "In a bowl, mix corn flour, all-purpose flour, ginger-garlic paste, soy sauce, and salt.",
        "Dip cauliflower florets in the mixture and deep-fry until golden brown. Set aside.",
        "In another pan, heat oil and sauté garlic, green chili, and capsicum.",
        "Add soy sauce, vinegar, tomato ketchup, and water to make a sauce.",
        "Toss the fried cauliflower in the sauce.",
        "Garnish with spring onions and serve hot."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void paneerManchurian()
{
    const char *recipeName = "Paneer Manchurian";
    const char *ingredients[] = {
        "250g Paneer (cut into cubes)",
        "2-3 tbsp Corn Flour",
        "2-3 tbsp All-Purpose Flour (Maida)",
        "1 tbsp Soy Sauce",
        "1 tsp Ginger-Garlic Paste",
        "Salt to taste",
        "Oil for frying",
        "1 tbsp Vinegar",
        "2 tbsp Tomato Ketchup",
        "2 tbsp Spring Onion for garnish"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "In a bowl, mix corn flour, all-purpose flour, ginger-garlic paste, soy sauce, and salt.",
        "Dip paneer cubes in the mixture and deep-fry until golden brown. Set aside.",
        "In another pan, heat oil and sauté garlic, green chili, and capsicum.",
        "Add soy sauce, vinegar, tomato ketchup, and water to make a sauce.",
        "Toss the fried paneer cubes in the sauce.",
        "Garnish with spring onions and serve hot."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void paneerChilli()
{
    const char *recipeName = "Paneer Chilli";
    const char *ingredients[] = {
        "250g Paneer (cut into cubes)",
        "1 Onion (sliced)",
        "1 Green Capsicum (sliced)",
        "1 tbsp Soy Sauce",
        "1 tbsp Chili Sauce",
        "1 tbsp Tomato Ketchup",
        "2-3 tbsp Corn Flour",
        "Oil for frying",
        "Salt and Black Pepper to taste",
        "2 tbsp Spring Onion for garnish"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Coat the paneer cubes in corn flour and fry until golden brown. Set aside.",
        "Heat oil in a pan, sauté onions and capsicum until soft.",
        "Add soy sauce, chili sauce, and tomato ketchup. Mix well.",
        "Toss the fried paneer in the sauce.",
        "Garnish with spring onions and serve hot."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void paneerTikka()
{
    const char *recipeName = "Paneer Tikka";
    const char *ingredients[] = {
        "250g Paneer (cut into cubes)",
        "1/2 cup Yogurt",
        "1 tsp Red Chili Powder",
        "1 tsp Garam Masala",
        "1 tsp Coriander Powder",
        "1/2 tsp Turmeric",
        "1 tbsp Ginger-Garlic Paste",
        "1 tbsp Lemon Juice",
        "Salt to taste",
        "Oil for grilling"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "In a bowl, mix yogurt, red chili powder, garam masala, coriander powder, turmeric, ginger-garlic paste, lemon juice, and salt to make a marinade.",
        "Coat the paneer cubes in the marinade and refrigerate for 30 minutes.",
        "Grill the paneer cubes on a grill pan until golden brown.",
        "Serve hot with mint chutney."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void paneerPakora()
{
    const char *recipeName = "Paneer Pakora";
    const char *ingredients[] = {
        "250g Paneer (cut into cubes)",
        "1 cup Gram Flour (Besan)",
        "1 tsp Red Chili Powder",
        "1/2 tsp Turmeric Powder",
        "1/2 tsp Garam Masala",
        "Salt to taste",
        "Water to make batter",
        "Oil for frying"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "In a bowl, mix gram flour, red chili powder, turmeric, garam masala, and salt. Add water to make a thick batter.",
        "Dip paneer cubes in the batter and deep-fry until golden brown.",
        "Serve hot with chutney or ketchup."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void vegPakora()
{
    const char *recipeName = "Veg Pakora";
    const char *ingredients[] = {
        "1 cup Gram Flour (Besan)",
        "1/2 cup Sliced Onions",
        "1/2 cup Chopped Spinach",
        "1 tsp Red Chili Powder",
        "1/2 tsp Turmeric Powder",
        "Salt to taste",
        "Water to make batter",
        "Oil for frying"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "In a bowl, mix gram flour, onions, spinach, red chili powder, turmeric, and salt. Add water to make a thick batter.",
        "Heat oil in a pan and drop spoonfuls of batter into the hot oil.",
        "Fry until golden brown.",
        "Serve hot with chutney."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void onionPakora()
{
    const char *recipeName = "Onion Pakora";
    const char *ingredients[] = {
        "2 large Onions (thinly sliced)",
        "1 cup Gram Flour (Besan)",
        "1 tsp Red Chili Powder",
        "1/2 tsp Turmeric Powder",
        "1/2 tsp Carom Seeds (Ajwain)",
        "1 tbsp Rice Flour (optional for crispiness)",
        "Salt to taste",
        "Water to make batter",
        "Oil for frying"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "In a bowl, mix sliced onions, gram flour, red chili powder, turmeric, carom seeds, rice flour, and salt.",
        "Gradually add water to make a thick batter.",
        "Heat oil in a pan and drop spoonfuls of the batter into the hot oil.",
        "Fry until the pakoras are golden and crisp.",
        "Serve hot with chutney or ketchup."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void mushroomChilli()
{
    const char *recipeName = "Mushroom Chilli";
    const char *ingredients[] = {
        "200g Mushrooms (quartered)",
        "1 Onion (sliced)",
        "1 Green Capsicum (sliced)",
        "2-3 Green Chilies (sliced)",
        "2 tbsp Soy Sauce",
        "1 tbsp Chili Sauce",
        "2 tbsp Tomato Ketchup",
        "1 tbsp Corn Flour",
        "1/2 cup Water",
        "Oil for frying",
        "Salt and Black Pepper to taste",
        "2 tbsp Spring Onion for garnish"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "In a bowl, mix corn flour with water to make a slurry. Set aside.",
        "Heat oil in a pan and sauté onions, capsicum, and green chilies.",
        "Add mushrooms and stir-fry until they soften.",
        "Add soy sauce, chili sauce, and tomato ketchup. Stir well.",
        "Pour in the corn flour slurry and cook until the sauce thickens.",
        "Season with salt and black pepper.",
        "Garnish with spring onions and serve hot."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void mushroomManchurian()
{
    const char *recipeName = "Mushroom Manchurian";
    const char *ingredients[] = {
        "200g Mushrooms (quartered)",
        "2-3 tbsp Corn Flour",
        "2-3 tbsp All-Purpose Flour (Maida)",
        "1 tbsp Soy Sauce",
        "1 tsp Ginger-Garlic Paste",
        "Salt to taste",
        "Oil for frying",
        "1 tbsp Vinegar",
        "2 tbsp Tomato Ketchup",
        "2 tbsp Spring Onion for garnish"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "In a bowl, mix corn flour, all-purpose flour, ginger-garlic paste, soy sauce, and salt.",
        "Dip mushroom pieces in the mixture and deep-fry until golden brown. Set aside.",
        "In another pan, heat oil and sauté garlic, green chili, and capsicum.",
        "Add soy sauce, vinegar, tomato ketchup, and water to make a sauce.",
        "Toss the fried mushrooms in the sauce.",
        "Garnish with spring onions and serve hot."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void babycornManchurian()
{
    const char *recipeName = "Babycorn Manchurian";
    const char *ingredients[] = {
        "200g Babycorn (cut into 2-inch pieces)",
        "2-3 tbsp Corn Flour",
        "2-3 tbsp All-Purpose Flour (Maida)",
        "1 tbsp Soy Sauce",
        "1 tsp Ginger-Garlic Paste",
        "Salt to taste",
        "Oil for frying",
        "1 tbsp Vinegar",
        "2 tbsp Tomato Ketchup",
        "2 tbsp Spring Onion for garnish"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "In a bowl, mix corn flour, all-purpose flour, ginger-garlic paste, soy sauce, and salt.",
        "Dip babycorn pieces in the mixture and deep-fry until golden brown. Set aside.",
        "In another pan, heat oil and sauté garlic, green chili, and capsicum.",
        "Add soy sauce, vinegar, tomato ketchup, and water to make a sauce.",
        "Toss the fried babycorn in the sauce.",
        "Garnish with spring onions and serve hot."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void matarPaneer()
{
    const char *recipeName = "Matar Paneer";
    const char *ingredients[] = {
        "200g Paneer (cubed)",
        "1 cup Green peas (Matar)",
        "2 Onions (finely chopped)",
        "2 Tomatoes (pureed)",
        "1 tsp Ginger-garlic paste",
        "1 tsp Cumin seeds",
        "1 tsp Red chili powder",
        "1/2 tsp Turmeric powder",
        "1 tsp Garam masala",
        "1/2 cup Cream",
        "Salt to taste",
        "Oil for cooking",
        "Fresh coriander leaves for garnish"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Heat oil in a pan, add cumin seeds and let them splutter.",
        "Add chopped onions and sauté until golden brown.",
        "Add ginger-garlic paste and cook for a minute.",
        "Add tomato puree, turmeric, red chili powder, and salt. Cook until oil separates.",
        "Add green peas and cook for 5 minutes.",
        "Add paneer cubes and garam masala. Cook for another 5 minutes.",
        "Stir in cream and cook for a minute.",
        "Garnish with fresh coriander leaves and serve hot."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void palakPaneer()
{
    const char *recipeName = "Palak Paneer";
    const char *ingredients[] = {
        "200g Paneer (cubed)",
        "2 cups Spinach (Palak)",
        "1 Onion (chopped)",
        "2 Tomatoes (chopped)",
        "1 tsp Ginger-garlic paste",
        "1 tsp Cumin seeds",
        "1 tsp Garam masala",
        "1 tsp Red chili powder",
        "1/2 tsp Turmeric powder",
        "Salt to taste",
        "Oil for cooking",
        "Fresh cream for garnish"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Blanch the spinach leaves in hot water for 2-3 minutes, then puree them.",
        "Heat oil in a pan, add cumin seeds and let them splutter.",
        "Add onions and sauté until golden brown.",
        "Add ginger-garlic paste and cook for a minute.",
        "Add tomatoes, turmeric, red chili powder, and salt. Cook until oil separates.",
        "Add the spinach puree and cook for 5 minutes.",
        "Add paneer cubes and garam masala. Cook for another 5 minutes.",
        "Garnish with fresh cream and serve hot."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void paneerMasala()
{
    const char *recipeName = "Paneer Masala";
    const char *ingredients[] = {
        "200g Paneer (cubed)",
        "2 Onions (finely chopped)",
        "2 Tomatoes (pureed)",
        "1 tsp Ginger-garlic paste",
        "1 tsp Cumin seeds",
        "1 tsp Coriander powder",
        "1 tsp Red chili powder",
        "1/2 tsp Turmeric powder",
        "1 tsp Garam masala",
        "Salt to taste",
        "Oil for cooking",
        "Fresh coriander leaves for garnish"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Heat oil in a pan and add cumin seeds.",
        "Add onions and sauté until golden brown.",
        "Add ginger-garlic paste and cook for a minute.",
        "Add tomato puree, coriander powder, red chili powder, turmeric, and salt. Cook until oil separates.",
        "Add paneer cubes and garam masala. Cook for 5 minutes.",
        "Garnish with fresh coriander leaves and serve hot."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void paneerButterMasala()
{
    const char *recipeName = "Paneer Butter Masala";
    const char *ingredients[] = {
        "200g Paneer (cubed)",
        "2 Tomatoes (pureed)",
        "1 Onion (chopped)",
        "1 tsp Ginger-garlic paste",
        "1 tsp Cumin seeds",
        "1 tsp Red chili powder",
        "1/2 tsp Turmeric powder",
        "1 tsp Garam masala",
        "1/2 cup Cream",
        "2 tbsp Butter",
        "Salt to taste",
        "Fresh coriander leaves for garnish"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Heat butter in a pan, add cumin seeds and let them splutter.",
        "Add onions and sauté until golden brown.",
        "Add ginger-garlic paste and cook for a minute.",
        "Add tomato puree, red chili powder, turmeric, and salt. Cook until oil separates.",
        "Add paneer cubes and garam masala. Cook for 5 minutes.",
        "Stir in cream and cook for a minute.",
        "Garnish with fresh coriander leaves and serve hot."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void paneerTikkaMasala()
{
    const char *recipeName = "Paneer Tikka Masala";
    const char *ingredients[] = {
        "200g Paneer (cubed)",
        "1 tsp Ginger-garlic paste",
        "1 tsp Red chili powder",
        "1/2 tsp Turmeric powder",
        "1 tsp Garam masala",
        "1/2 cup Yogurt",
        "1 Onion (chopped)",
        "1 Tomato (chopped)",
        "Salt to taste",
        "Oil for grilling",
        "Fresh coriander leaves for garnish"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Marinate paneer with ginger-garlic paste, red chili powder, turmeric, garam masala, yogurt, and salt. Set aside for 30 minutes.",
        "Grill the marinated paneer until golden brown.",
        "Heat oil in a pan, add onions and sauté until golden brown.",
        "Add tomatoes and cook until soft.",
        "Add the grilled paneer and garam masala. Cook for 5 minutes.",
        "Garnish with fresh coriander leaves and serve hot."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void babycornCrispy()
{
    const char *recipeName = "Babycorn Crispy";
    const char *ingredients[] = {
        "200g Babycorn (cut into strips)",
        "1/2 cup Cornflour",
        "1/2 cup All-purpose flour (Maida)",
        "1 tsp Red chili powder",
        "1/2 tsp Black pepper powder",
        "Salt to taste",
        "Oil for frying",
        "Fresh coriander leaves for garnish"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Mix cornflour, all-purpose flour, red chili powder, black pepper, and salt in a bowl.",
        "Coat the babycorn strips in the mixture.",
        "Heat oil in a pan and deep fry the babycorn until golden brown.",
        "Garnish with fresh coriander leaves and serve hot."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void alooTikki()
{
    const char *recipeName = "Aloo Tikki";
    const char *ingredients[] = {
        "4 Potatoes (boiled and mashed)",
        "1 Onion (chopped)",
        "2 Green chilies (chopped)",
        "1 tsp Ginger (grated)",
        "1 tsp Garam masala",
        "1 tsp Red chili powder",
        "1/2 tsp Turmeric powder",
        "Salt to taste",
        "Breadcrumbs for coating",
        "Oil for frying",
        "Fresh coriander leaves for garnish"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Mix mashed potatoes with onions, green chilies, ginger, garam masala, red chili powder, turmeric, and salt.",
        "Shape the mixture into small patties.",
        "Coat each patty with breadcrumbs.",
        "Heat oil in a pan and shallow fry the patties until golden brown on both sides.",
        "Garnish with fresh coriander leaves and serve with chutney."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void bhelPuri()
{
    const char *recipeName = "Bhel Puri";
    const char *ingredients[] = {
        "2 cups Puffed rice (Bhel)",
        "1 Onion (finely chopped)",
        "1 Tomato (finely chopped)",
        "1 Potato (boiled and chopped)",
        "1/2 cup Sev (crispy gram flour noodles)",
        "2 tbsp Tamarind chutney",
        "2 tbsp Green chutney",
        "1 tsp Chaat masala",
        "1 tsp Red chili powder",
        "Salt to taste",
        "Fresh coriander leaves for garnish",
        "Lemon wedges for serving"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "In a large bowl, mix puffed rice, onions, tomatoes, potatoes, sev, tamarind chutney, green chutney, chaat masala, red chili powder, and salt.",
        "Toss the ingredients together until well combined.",
        "Garnish with fresh coriander leaves and serve with lemon wedges."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void pavBhaji()
{
    const char *recipeName = "Pav Bhaji";
    const char *ingredients[] = {
        "4 Pav buns",
        "2 Potatoes (boiled and mashed)",
        "1 cup Mixed vegetables (peas, carrots, cauliflower)",
        "2 Tomatoes (chopped)",
        "1 Onion (chopped)",
        "1 tsp Ginger-garlic paste",
        "1 tsp Red chili powder",
        "1 tsp Pav bhaji masala",
        "1/2 tsp Turmeric powder",
        "Salt to taste",
        "2 tbsp Butter",
        "Fresh coriander leaves for garnish",
        "Lemon wedges for serving"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Heat butter in a pan, add onions and sauté until golden.",
        "Add ginger-garlic paste and cook for a minute.",
        "Add tomatoes, red chili powder, turmeric, pav bhaji masala, and salt. Cook until tomatoes are soft.",
        "Add boiled potatoes and mixed vegetables. Mash everything together.",
        "Cook for 5-7 minutes, stirring occasionally.",
        "Toast the pav buns with butter on a griddle.",
        "Garnish the bhaji with fresh coriander leaves and serve hot with the pav, lemon wedges, and butter."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void onionPakodi()
{
    const char *recipeName = "Onion Pakodi";
    const char *ingredients[] = {
        "2 Onions (sliced)",
        "1 cup Gram flour (Besan)",
        "1 tsp Red chili powder",
        "1/2 tsp Turmeric powder",
        "1 tsp Carom seeds (Ajwain)",
        "Salt to taste",
        "Water as needed",
        "Oil for frying",
        "Chaat masala for sprinkling"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "In a bowl, mix gram flour, red chili powder, turmeric, ajwain, salt, and water to form a thick batter.",
        "Add the sliced onions to the batter and coat them well.",
        "Heat oil in a pan and drop spoonfuls of the onion batter into the oil.",
        "Fry until golden brown and crispy.",
        "Sprinkle with chaat masala and serve hot with chutney."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void mirchiBajji()
{
    const char *recipeName = "Telugu Mirchi Bajji";
    const char *ingredients[] = {
        "6 Green chilies (large)",
        "1 cup Gram flour (Besan)",
        "1 tsp Red chili powder",
        "1/2 tsp Carom seeds (Ajwain)",
        "1/2 tsp Baking soda",
        "Salt to taste",
        "Water as needed",
        "Oil for frying",
        "Tamarind chutney for serving"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Slit the green chilies and remove the seeds.",
        "In a bowl, mix gram flour, red chili powder, ajwain, baking soda, salt, and water to form a thick batter.",
        "Dip the green chilies into the batter and coat them evenly.",
        "Heat oil in a pan and deep fry the coated chilies until golden brown.",
        "Serve hot with tamarind chutney."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void alooBajji()
{
    const char *recipeName = "Telugu Aloo Bajji";
    const char *ingredients[] = {
        "3 Potatoes (sliced)",
        "1 cup Gram flour (Besan)",
        "1 tsp Red chili powder",
        "1/2 tsp Carom seeds (Ajwain)",
        "1/2 tsp Baking soda",
        "Salt to taste",
        "Water as needed",
        "Oil for frying",
        "Chutney for serving"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "In a bowl, mix gram flour, red chili powder, ajwain, baking soda, salt, and water to form a thick batter.",
        "Dip the potato slices into the batter and coat them well.",
        "Heat oil in a pan and deep fry the coated potato slices until golden brown.",
        "Serve hot with chutney."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void chickenRoll()
{
    const char *recipeName = "Chicken Roll";
    const char *ingredients[] = {
        "200g Chicken (boneless, cut into strips)",
        "1 Onion (sliced)",
        "1 tsp Ginger-garlic paste",
        "1 tsp Red chili powder",
        "1/2 tsp Turmeric powder",
        "1 tsp Garam masala",
        "Salt to taste",
        "4 Parathas",
        "2 tbsp Mayonnaise",
        "Fresh coriander leaves for garnish",
        "Oil for cooking"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Marinate the chicken with ginger-garlic paste, red chili powder, turmeric, garam masala, and salt. Set aside for 30 minutes.",
        "Heat oil in a pan and sauté the chicken strips until cooked.",
        "Heat the parathas on a tawa.",
        "Place the cooked chicken on each paratha, top with sliced onions, mayonnaise, and coriander leaves.",
        "Roll up the parathas and serve hot."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void paneerRoll()
{
    const char *recipeName = "Paneer Roll";
    const char *ingredients[] = {
        "200g Paneer (cubed)",
        "1 Onion (sliced)",
        "1 tsp Ginger-garlic paste",
        "1 tsp Red chili powder",
        "1/2 tsp Turmeric powder",
        "1 tsp Garam masala",
        "Salt to taste",
        "4 Parathas",
        "2 tbsp Mayonnaise",
        "Fresh coriander leaves for garnish",
        "Oil for cooking"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Marinate the paneer with ginger-garlic paste, red chili powder, turmeric, garam masala, and salt. Set aside for 15 minutes.",
        "Heat oil in a pan and sauté the paneer until golden brown.",
        "Heat the parathas on a tawa.",
        "Place the cooked paneer on each paratha, top with sliced onions, mayonnaise, and coriander leaves.",
        "Roll up the parathas and serve hot."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void redSaucePasta()
{
    const char *recipeName = "Red Sauce Pasta";
    const char *ingredients[] = {
        "200g Pasta (any variety, like penne or fusilli)",
        "2 Tomatoes (blanched and pureed)",
        "1 Onion (chopped)",
        "2 Garlic cloves (minced)",
        "1 tsp Red chili flakes",
        "1 tsp Oregano",
        "1 tsp Basil",
        "Salt to taste",
        "2 tbsp Olive oil",
        "Grated Parmesan cheese (optional)",
        "Fresh basil leaves for garnish"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Boil pasta in salted water until al dente. Drain and set aside.",
        "Heat olive oil in a pan, sauté garlic and onions until soft.",
        "Add the tomato puree, red chili flakes, oregano, basil, and salt. Cook until the sauce thickens.",
        "Toss the cooked pasta in the sauce, stirring to coat evenly.",
        "Garnish with grated Parmesan cheese and fresh basil leaves. Serve hot."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void whiteSaucePasta()
{
    const char *recipeName = "White Sauce Pasta";
    const char *ingredients[] = {
        "200g Pasta (any variety, like penne or fusilli)",
        "2 tbsp Butter",
        "2 tbsp All-purpose flour",
        "2 cups Milk",
        "1/2 cup Grated cheese (optional)",
        "1/2 tsp Black pepper powder",
        "Salt to taste",
        "1 tsp Oregano",
        "1 tsp Basil",
        "1 tsp Red chili flakes",
        "1 tbsp Olive oil",
        "1/2 cup Mixed vegetables (optional, like bell peppers, broccoli, carrots)"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Boil pasta in salted water until al dente. Drain and set aside.",
        "Heat olive oil in a pan and sauté the mixed vegetables until tender, then set aside.",
        "In another pan, melt butter and add all-purpose flour. Cook the flour for 1-2 minutes to remove the raw taste.",
        "Gradually add milk, stirring continuously to avoid lumps. Cook until the sauce thickens.",
        "Add cheese (if using), black pepper, salt, oregano, basil, and red chili flakes. Stir well.",
        "Toss the cooked pasta and sautéed vegetables in the white sauce, stirring to coat evenly.",
        "Serve hot, garnished with additional cheese or herbs if desired."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void cheeseburger()
{
    const char *recipeName = "Cheeseburger";
    const char *ingredients[] = {
        "200g Ground beef patty",
        "1 Slice cheddar cheese",
        "1 Burger bun (sliced)",
        "1 Tomato slice",
        "1 Onion slice",
        "Lettuce leaves",
        "1 tbsp Ketchup",
        "1 tbsp Mayonnaise",
        "Salt and pepper to taste",
        "Oil for frying"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Season the ground beef patty with salt and pepper.",
        "Heat oil in a pan and cook the patty on medium heat for about 4-5 minutes on each side, or until fully cooked.",
        "Place a slice of cheddar cheese on top of the patty and let it melt.",
        "Toast the burger bun lightly on the pan.",
        "Assemble the burger by placing the lettuce, tomato, and onion on the bottom bun.",
        "Add the cheeseburger patty on top, followed by ketchup and mayonnaise.",
        "Cover with the top bun and serve hot."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void veggieBurger()
{
    const char *recipeName = "Veggie Burger";
    const char *ingredients[] = {
        "1 Veggie patty (made from beans, lentils, or vegetables)",
        "1 Slice of cheese (optional)",
        "1 Burger bun (sliced)",
        "1 Tomato slice",
        "1 Onion slice",
        "Lettuce leaves",
        "1 tbsp Green chutney",
        "1 tbsp Mayonnaise",
        "Salt and pepper to taste",
        "Oil for frying"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Heat oil in a pan and cook the veggie patty on medium heat for 4-5 minutes on each side, or until crispy.",
        "Place a slice of cheese on top of the patty (optional) and let it melt.",
        "Toast the burger bun lightly on the pan.",
        "Spread green chutney on one half of the bun and mayonnaise on the other half.",
        "Assemble the burger by placing lettuce, tomato, and onion on the bottom bun.",
        "Add the veggie patty on top and cover with the top bun.",
        "Serve hot with ketchup or chutney on the side."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void vegetableSandwich()
{
    const char *recipeName = "Vegetable Sandwich";
    const char *ingredients[] = {
        "4 Slices of bread (white or brown)",
        "1 Tomato (thinly sliced)",
        "1 Cucumber (thinly sliced)",
        "1 Onion (thinly sliced)",
        "1 Boiled potato (thinly sliced)",
        "1 tbsp Green chutney",
        "1 tbsp Butter",
        "Salt and pepper to taste",
        "Chaat masala (optional)",
        "Cheese slice (optional)"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Spread butter on one side of each bread slice.",
        "On two slices, spread green chutney over the butter.",
        "Layer the slices with cucumber, tomato, onion, and boiled potato.",
        "Sprinkle salt, pepper, and chaat masala (if using) on the vegetables.",
        "Add a cheese slice if desired.",
        "Cover with the remaining buttered bread slices.",
        "Grill the sandwich in a sandwich maker or toast it on a tawa until golden brown.",
        "Serve with ketchup or green chutney."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void paneerSandwich()
{
    const char *recipeName = "Paneer Sandwich";
    const char *ingredients[] = {
        "150g Paneer (cubed or crumbled)",
        "1 Onion (chopped)",
        "1 Tomato (chopped)",
        "1 Green chili (chopped)",
        "1 tbsp Green chutney",
        "1 tbsp Butter",
        "4 Slices of bread",
        "1 tsp Chaat masala",
        "Salt and pepper to taste",
        "Oil for cooking"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Heat oil in a pan and sauté the paneer, onion, tomato, and green chili until soft.",
        "Add chaat masala, salt, and pepper to the mixture.",
        "Spread butter on one side of each slice of bread.",
        "On the unbuttered side, spread green chutney.",
        "Place the paneer mixture on the chutney-spread side of the bread.",
        "Cover with another slice of bread and grill in a sandwich maker or on a tawa until golden brown.",
        "Serve hot with ketchup or chutney."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void eggSandwich()
{
    const char *recipeName = "Egg Sandwich";
    const char *ingredients[] = {
        "2 Eggs (boiled or scrambled)",
        "4 Slices of bread",
        "1 Tomato (thinly sliced)",
        "1 Onion (thinly sliced)",
        "1 tbsp Mayonnaise",
        "1 tsp Mustard sauce",
        "Salt and pepper to taste",
        "Butter for spreading"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Boil the eggs, peel and slice them (or scramble them).",
        "Spread butter on one side of each bread slice.",
        "On the unbuttered side, spread mayonnaise and mustard sauce.",
        "Place the boiled or scrambled eggs on the bread, and top with tomato and onion slices.",
        "Season with salt and pepper.",
        "Cover with another slice of bread and toast in a sandwich maker or on a tawa until golden brown.",
        "Serve hot with ketchup."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void paneerTikkaPizza()
{
    const char *recipeName = "Paneer Tikka Pizza";
    const char *ingredients[] = {
        "1 Pizza base",
        "150g Paneer (cubed)",
        "1/2 cup Pizza sauce",
        "1/2 cup Mozzarella cheese (grated)",
        "1/2 Onion (sliced)",
        "1/2 Bell pepper (sliced)",
        "1 tsp Red chili powder",
        "1 tsp Garam masala",
        "1 tbsp Yogurt",
        "1 tbsp Lemon juice",
        "Salt to taste",
        "Oil for cooking",
        "Coriander leaves for garnish"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Marinate paneer cubes with yogurt, red chili powder, garam masala, lemon juice, and salt for 30 minutes.",
        "Preheat oven to 200°C (390°F).",
        "Heat oil in a pan and lightly sauté the marinated paneer until golden brown.",
        "Spread pizza sauce evenly on the pizza base.",
        "Top with sautéed paneer, onion, and bell pepper slices.",
        "Sprinkle grated mozzarella cheese over the toppings.",
        "Bake in the preheated oven for 10-12 minutes or until the crust is golden and the cheese is melted.",
        "Garnish with fresh coriander leaves and serve hot."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void chickenPizza()
{
    const char *recipeName = "Chicken Pizza";
    const char *ingredients[] = {
        "1 Pizza base",
        "150g Cooked chicken (shredded)",
        "1/2 cup Pizza sauce",
        "1/2 cup Mozzarella cheese (grated)",
        "1/2 Onion (sliced)",
        "1/2 Bell pepper (sliced)",
        "1 tbsp Olive oil",
        "Salt and pepper to taste",
        "Oregano and chili flakes for seasoning"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Preheat oven to 200°C (390°F).",
        "Heat olive oil in a pan and sauté the shredded chicken with salt and pepper.",
        "Spread pizza sauce evenly over the pizza base.",
        "Top with sautéed chicken, onion, and bell pepper slices.",
        "Sprinkle grated mozzarella cheese on top.",
        "Bake in the preheated oven for 10-12 minutes or until the crust is golden and the cheese is melted.",
        "Season with oregano and chili flakes before serving."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void onionPizza()
{

    const char *recipeName = "Onion Pizza";
    const char *ingredients[] = {
        "1 Pizza base",
        "2 Onions (sliced)",
        "1/2 cup Pizza sauce",
        "1/2 cup Mozzarella cheese (grated)",
        "1 tbsp Olive oil",
        "Salt and pepper to taste",
        "Oregano and chili flakes for seasoning"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Preheat oven to 200°C (390°F).",
        "Heat olive oil in a pan and sauté the sliced onions until they turn golden and soft.",
        "Spread pizza sauce evenly on the pizza base.",
        "Top with sautéed onions and sprinkle grated mozzarella cheese.",
        "Bake in the preheated oven for 10-12 minutes or until the crust is golden and the cheese is melted.",
        "Season with oregano and chili flakes before serving."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void cheeseBurstPizza()
{
    const char *recipeName = "Cheese Burst Pizza";
    const char *ingredients[] = {
        "1 Pizza base with cheese-filled crust",
        "1/2 cup Pizza sauce",
        "1/2 cup Mozzarella cheese (grated)",
        "1/2 cup Cheddar cheese (grated)",
        "1/2 Onion (sliced)",
        "1/2 Bell pepper (sliced)",
        "1 tbsp Olive oil",
        "Oregano and chili flakes for seasoning"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Preheat oven to 200°C (390°F).",
        "Spread pizza sauce evenly on the cheese-filled pizza base.",
        "Top with onions, bell peppers, and a mix of grated mozzarella and cheddar cheese.",
        "Bake in the preheated oven for 10-12 minutes or until the crust is golden and the cheese is bubbling.",
        "Season with oregano and chili flakes before serving."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void spicyVegPizza()
{
    const char *recipeName = "Spicy Veg Pizza";
    const char *ingredients[] = {
        "1 Pizza base",
        "1/2 cup Pizza sauce",
        "1/2 cup Mozzarella cheese (grated)",
        "1/2 Onion (sliced)",
        "1/2 Bell pepper (sliced)",
        "1 Tomato (sliced)",
        "1 Green chili (finely chopped)",
        "1 tsp Red chili flakes",
        "1 tsp Oregano",
        "1 tbsp Olive oil",
        "Salt to taste"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Preheat oven to 200°C (390°F).",
        "Spread pizza sauce evenly on the pizza base.",
        "Top with onion, bell pepper, tomato, and green chili.",
        "Sprinkle grated mozzarella cheese, red chili flakes, and oregano over the toppings.",
        "Bake in the preheated oven for 10-12 minutes or until the crust is golden and the cheese is melted.",
        "Serve hot with extra chili flakes if desired."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void tomatoSoup()
{
    const char *recipeName = "Tomato Soup";
    const char *ingredients[] = {
        "4 ripe tomatoes",
        "1 onion (chopped)",
        "2 garlic cloves (chopped)",
        "1 tsp sugar",
        "1 tbsp butter",
        "Salt to taste",
        "Black pepper to taste",
        "2 cups water or vegetable stock",
        "Fresh cream for garnish"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Heat butter in a pan and sauté onions and garlic until soft.",
        "Add chopped tomatoes and cook for 5-7 minutes.",
        "Add water or vegetable stock, sugar, salt, and pepper. Simmer for 15 minutes.",
        "Blend the mixture until smooth.",
        "Strain the soup to remove any solids and bring it back to the stove.",
        "Serve hot, garnished with fresh cream."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void sweetCornSoup()
{
    const char *recipeName = "Sweet Corn Soup";
    const char *ingredients[] = {
        "1 cup sweet corn kernels (boiled)",
        "1 carrot (chopped)",
        "1/4 cup cabbage (chopped)",
        "1 tbsp cornflour",
        "4 cups water or vegetable stock",
        "Salt to taste",
        "Pepper to taste",
        "Spring onions for garnish"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Boil water or vegetable stock in a pot and add sweet corn, carrot, and cabbage.",
        "Mix cornflour with a little water to make a slurry and add it to the soup.",
        "Cook until the soup thickens, about 5-7 minutes.",
        "Add salt and pepper to taste.",
        "Serve hot, garnished with spring onions."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void rasam()
{
    const char *recipeName = "Rasam";
    const char *ingredients[] = {
        "1 tomato (chopped)",
        "1/4 cup tamarind pulp",
        "1 tsp mustard seeds",
        "1 tsp cumin seeds",
        "1 tsp black pepper",
        "2 dry red chilies",
        "1 tsp turmeric powder",
        "A pinch of asafoetida",
        "2 cups water",
        "Fresh coriander for garnish"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Grind cumin seeds, black pepper, and red chilies into a coarse powder.",
        "Heat oil and splutter mustard seeds, followed by the ground spice powder.",
        "Add chopped tomatoes, turmeric, and asafoetida. Cook for 5 minutes.",
        "Add tamarind pulp and water, and simmer for 10 minutes.",
        "Garnish with fresh coriander and serve hot."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void lemonCorianderSoup()
{
    const char *recipeName = "Lemon Coriander Soup";
    const char *ingredients[] = {
        "1/4 cup coriander leaves (chopped)",
        "1 lemon (juiced)",
        "1 carrot (chopped)",
        "1/4 cup cabbage (chopped)",
        "2 garlic cloves (chopped)",
        "1/2 inch ginger (grated)",
        "1 tbsp cornflour",
        "4 cups water or vegetable stock",
        "Salt to taste",
        "Pepper to taste"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Boil water or vegetable stock in a pot and add carrot, cabbage, garlic, and ginger.",
        "Mix cornflour with a little water to make a slurry and add it to the soup.",
        "Cook until the soup thickens, about 5-7 minutes.",
        "Add lemon juice, salt, and pepper to taste.",
        "Garnish with chopped coriander and serve hot."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void spinachSoup()
{
    const char *recipeName = "Spinach Soup";
    const char *ingredients[] = {
        "1 bunch spinach (washed and chopped)",
        "1 onion (chopped)",
        "2 garlic cloves (chopped)",
        "1 tbsp butter",
        "2 cups water or vegetable stock",
        "Salt to taste",
        "Black pepper to taste",
        "Fresh cream for garnish"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Heat butter in a pan and sauté onions and garlic until soft.",
        "Add spinach and cook for 3-4 minutes.",
        "Add water or vegetable stock, salt, and pepper, and simmer for 10 minutes.",
        "Blend the mixture until smooth.",
        "Strain the soup to remove any solids and bring it back to the stove.",
        "Serve hot, garnished with fresh cream."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void carrotGingerSoup()
{
    const char *recipeName = "Carrot-Ginger Soup";
    const char *ingredients[] = {
        "4 carrots (chopped)",
        "1 inch ginger (grated)",
        "1 onion (chopped)",
        "1 tbsp butter",
        "2 cups water or vegetable stock",
        "Salt to taste",
        "Black pepper to taste",
        "Fresh cream for garnish"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Heat butter in a pan and sauté onions and ginger until soft.",
        "Add chopped carrots and cook for 5-7 minutes.",
        "Add water or vegetable stock, salt, and pepper. Simmer for 15 minutes.",
        "Blend the mixture until smooth.",
        "Strain the soup to remove any solids and bring it back to the stove.",
        "Serve hot, garnished with fresh cream."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void bananaShake()
{
    const char *recipeName = "Banana Shake";
    const char *ingredients[] = {
        "2 ripe bananas",
        "2 cups milk",
        "2 tbsp sugar (optional)",
        "1/2 tsp vanilla extract",
        "Ice cubes (optional)",
        "Chopped nuts for garnish (optional)"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "In a blender, combine the ripe bananas, milk, sugar, and vanilla extract.",
        "Blend until smooth and creamy.",
        "If desired, add ice cubes and blend again until frothy.",
        "Pour into glasses and garnish with chopped nuts if using.",
        "Serve immediately."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void mangoShake()
{
    const char *recipeName = "Mango Shake";
    const char *ingredients[] = {
        "2 ripe mangoes (peeled and chopped)",
        "2 cups milk",
        "2 tbsp sugar (optional)",
        "1/2 tsp cardamom powder (optional)",
        "Ice cubes (optional)",
        "Mint leaves for garnish (optional)"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "In a blender, combine the chopped mangoes, milk, sugar, and cardamom powder.",
        "Blend until smooth and creamy.",
        "If desired, add ice cubes and blend again until frothy.",
        "Pour into glasses and garnish with mint leaves if using.",
        "Serve immediately."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void strawberryShake()
{
    const char *recipeName = "Strawberry Shake";
    const char *ingredients[] = {
        "2 cups fresh strawberries (hulled)",
        "2 cups milk",
        "2 tbsp sugar (optional)",
        "1/2 tsp vanilla extract",
        "Ice cubes (optional)",
        "Strawberries for garnish (optional)"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "In a blender, combine the strawberries, milk, sugar, and vanilla extract.",
        "Blend until smooth and creamy.",
        "If desired, add ice cubes and blend again until frothy.",
        "Pour into glasses and garnish with whole strawberries if using.",
        "Serve immediately."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void chocolateShake()
{
    const char *recipeName = "Chocolate Shake";
    const char *ingredients[] = {
        "2 cups milk",
        "2 tbsp cocoa powder",
        "2 tbsp sugar (optional)",
        "1/4 cup chocolate syrup",
        "Ice cubes (optional)",
        "Chocolate shavings for garnish (optional)"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "In a blender, combine the milk, cocoa powder, sugar, and chocolate syrup.",
        "Blend until smooth and creamy.",
        "If desired, add ice cubes and blend again until frothy.",
        "Pour into glasses and garnish with chocolate shavings if using.",
        "Serve immediately."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void vanillaMilkshake()
{
    const char *recipeName = "Vanilla Milkshake";
    const char *ingredients[] = {
        "2 cups vanilla ice cream",
        "1 cup milk",
        "1/2 tsp vanilla extract",
        "Whipped cream for garnish (optional)",
        "Cherries for garnish (optional)"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "In a blender, combine the vanilla ice cream, milk, and vanilla extract.",
        "Blend until smooth and creamy.",
        "Pour into glasses and top with whipped cream and cherries if using.",
        "Serve immediately."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void pineappleShake()
{
    const char *recipeName = "Pineapple Shake";
    const char *ingredients[] = {
        "2 cups fresh pineapple chunks",
        "2 cups milk",
        "2 tbsp sugar (optional)",
        "1/2 tsp vanilla extract",
        "Ice cubes (optional)",
        "Pineapple wedges for garnish (optional)"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "In a blender, combine the pineapple chunks, milk, sugar, and vanilla extract.",
        "Blend until smooth and creamy.",
        "If desired, add ice cubes and blend again until frothy.",
        "Pour into glasses and garnish with pineapple wedges if using.",
        "Serve immediately."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void datesShake()
{
    const char *recipeName = "Dates Shake";
    const char *ingredients[] = {
        "10 dates (pitted)",
        "2 cups milk",
        "1/2 tsp cardamom powder (optional)",
        "Ice cubes (optional)",
        "Chopped nuts for garnish (optional)"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "In a blender, combine the pitted dates, milk, and cardamom powder.",
        "Blend until smooth and creamy.",
        "If desired, add ice cubes and blend again until frothy.",
        "Pour into glasses and garnish with chopped nuts if using.",
        "Serve immediately."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void oreoShake()
{
    const char *recipeName = "Oreo Shake";
    const char *ingredients[] = {
        "4 Oreo biscuits",
        "2 cups milk",
        "2 scoops vanilla ice cream (optional)",
        "Whipped cream for garnish (optional)",
        "Oreo crumbs for garnish (optional)"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "In a blender, combine the Oreo biscuits, milk, and vanilla ice cream.",
        "Blend until smooth and creamy.",
        "Pour into glasses and top with whipped cream and Oreo crumbs if using.",
        "Serve immediately."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void almondMilkshake()
{
    const char *recipeName = "Almond Milkshake";
    const char *ingredients[] = {
        "1/4 cup almonds (soaked and peeled)",
        "2 cups milk",
        "2 tbsp sugar (optional)",
        "1/2 tsp cardamom powder (optional)",
        "Ice cubes (optional)",
        "Chopped almonds for garnish (optional)"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "In a blender, combine the soaked almonds, milk, sugar, and cardamom powder.",
        "Blend until smooth and creamy.",
        "If desired, add ice cubes and blend again until frothy.",
        "Pour into glasses and garnish with chopped almonds if using.",
        "Serve immediately."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void peanutButterBananaShake()
{
    const char *recipeName = "Peanut Butter Banana Shake";
    const char *ingredients[] = {
        "2 ripe bananas",
        "2 cups milk",
        "2 tbsp peanut butter",
        "1 tbsp honey (optional)",
        "Ice cubes (optional)",
        "Chopped peanuts for garnish (optional)"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "In a blender, combine the ripe bananas, milk, peanut butter, and honey.",
        "Blend until smooth and creamy.",
        "If desired, add ice cubes and blend again until frothy.",
        "Pour into glasses and garnish with chopped peanuts if using.",
        "Serve immediately."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void idli()
{
    const char *recipeName = "Idli";
    const char *ingredients[] = {
        "2 cups Idli rice",
        "1 cup Urad dal",
        "1/2 tsp Fenugreek seeds",
        "Salt to taste",
        "Water as needed"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Soak idli rice, urad dal, and fenugreek seeds separately in water for 4-6 hours.",
        "Grind them into a smooth batter, adding water as needed.",
        "Mix the batters together, add salt, and allow it to ferment overnight.",
        "Grease the idli molds and pour the fermented batter into the molds.",
        "Steam the idlis for 10-12 minutes or until cooked.",
        "Serve hot with chutney and sambar."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void dosa()
{
    const char *recipeName = "Dosa";
    const char *ingredients[] = {
        "2 cups Rice",
        "1 cup Urad dal",
        "1/4 tsp Fenugreek seeds",
        "Salt to taste",
        "Water as needed",
        "Oil for cooking"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Soak rice, urad dal, and fenugreek seeds in water for 4-6 hours.",
        "Grind them into a smooth batter, adding water as needed.",
        "Mix the batter, add salt, and allow it to ferment overnight.",
        "Heat a non-stick pan, pour a ladle of batter, and spread it thinly in a circular motion.",
        "Drizzle oil around the edges and cook until golden brown.",
        "Serve hot with chutney and sambar."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void alooParatha()
{
    const char *recipeName = "Aloo Paratha";
    const char *ingredients[] = {
        "2 cups Whole wheat flour",
        "4 Potatoes (boiled and mashed)",
        "1 Onion (finely chopped)",
        "2 Green chilies (chopped)",
        "1 tsp Red chili powder",
        "1 tsp Garam masala",
        "Salt to taste",
        "Ghee or oil for frying",
        "Fresh coriander leaves (chopped)"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Knead the wheat flour with water to make a soft dough and set aside.",
        "In a bowl, mix boiled potatoes, onions, green chilies, red chili powder, garam masala, salt, and fresh coriander.",
        "Divide the dough into balls, roll each ball slightly, place the potato filling, and seal the edges.",
        "Roll the filled dough into a flat paratha.",
        "Heat a tawa, and cook the paratha with ghee or oil until both sides are golden brown.",
        "Serve hot with yogurt or pickle."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void upma()
{
    const char *recipeName = "Upma";
    const char *ingredients[] = {
        "1 cup Semolina (Rava)",
        "1 Onion (chopped)",
        "2 Green chilies (chopped)",
        "1/2 tsp Mustard seeds",
        "1 tsp Urad dal",
        "Curry leaves",
        "Salt to taste",
        "2 tbsp Oil or ghee",
        "2 cups Water",
        "Fresh coriander leaves (chopped)"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Heat oil in a pan, add mustard seeds, urad dal, and curry leaves.",
        "Add chopped onions and green chilies, and sauté until the onions are soft.",
        "Add semolina and roast until golden brown.",
        "Boil water separately, then add it to the roasted semolina, stirring continuously.",
        "Add salt and cook until the semolina absorbs the water and becomes fluffy.",
        "Garnish with fresh coriander leaves and serve hot."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void poha()
{
    const char *recipeName = "Poha";
    const char *ingredients[] = {
        "2 cups Flattened rice (Poha)",
        "1 Onion (chopped)",
        "2 Green chilies (chopped)",
        "1/2 tsp Mustard seeds",
        "1 tsp Turmeric powder",
        "Salt to taste",
        "1 tbsp Oil",
        "Fresh coriander leaves (chopped)",
        "Lemon juice for garnish"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Rinse the poha in water and drain the excess water.",
        "Heat oil in a pan, add mustard seeds, and let them splutter.",
        "Add chopped onions and green chilies, and sauté until the onions are soft.",
        "Add turmeric powder and salt, then add the poha and mix well.",
        "Cook for a few minutes, then garnish with fresh coriander and lemon juice.",
        "Serve hot."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void choleBhature()
{
    const char *recipeName = "Chole Bhature";
    const char *ingredients[] = {
        "1 cup Chickpeas (soaked overnight)",
        "2 Onions (chopped)",
        "2 Tomatoes (chopped)",
        "1 tbsp Ginger-garlic paste",
        "1 tsp Red chili powder",
        "1 tsp Garam masala",
        "Salt to taste",
        "Oil for cooking",
        "Bhature for serving"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Pressure cook the soaked chickpeas until soft.",
        "Heat oil in a pan, sauté onions and ginger-garlic paste until golden.",
        "Add chopped tomatoes, red chili powder, garam masala, and salt, and cook until the oil separates.",
        "Add the cooked chickpeas and simmer for 15-20 minutes.",
        "Serve hot with freshly fried bhature."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void puriBhaji()
{
    const char *recipeName = "Puri Bhaji";
    const char *ingredients[] = {
        "2 cups Wheat flour",
        "1 tbsp Oil",
        "Salt to taste",
        "Water to knead the dough",
        "Oil for deep frying",
        "4 Potatoes (boiled and mashed)",
        "1 Onion (chopped)",
        "2 Green chilies (chopped)",
        "1 tsp Turmeric powder",
        "1 tsp Mustard seeds",
        "Fresh coriander leaves for garnish"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Knead the wheat flour with water and salt to make a dough for puris, and set aside.",
        "Heat oil in a pan, add mustard seeds and sauté onions and green chilies until soft.",
        "Add turmeric powder and mashed potatoes, and cook for a few minutes.",
        "Roll out puris from the dough and deep fry them until golden and puffed.",
        "Serve hot with the potato bhaji, garnished with fresh coriander."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void sabudanaKhichdi()
{
    const char *recipeName = "Sabudana Khichdi";
    const char *ingredients[] = {
        "1 cup Sabudana (soaked for 4-5 hours)",
        "2 Potatoes (boiled and diced)",
        "1/2 cup Roasted peanuts (crushed)",
        "2 Green chilies (chopped)",
        "1 tsp Cumin seeds",
        "Salt to taste",
        "1 tbsp Ghee or oil",
        "Fresh coriander leaves for garnish",
        "Lemon juice for garnish"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Heat ghee in a pan, add cumin seeds and green chilies, and sauté for a minute.",
        "Add diced potatoes and cook until golden.",
        "Add the soaked sabudana, crushed peanuts, and salt. Mix well and cook for a few minutes.",
        "Garnish with fresh coriander and lemon juice, and serve hot."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void nimbuPani()
{
    const char *recipeName = "Nimbu Pani (Lemonade)";
    const char *ingredients[] = {
        "2 Lemons",
        "1 tsp Sugar (or to taste)",
        "A pinch of Salt",
        "A pinch of Black salt",
        "2 cups Chilled water",
        "Mint leaves (for garnish)"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Squeeze the lemons into a bowl, removing the seeds.",
        "Add sugar, salt, and black salt to the lemon juice.",
        "Pour chilled water and stir until the sugar dissolves.",
        "Garnish with mint leaves and serve cold."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void lassi()
{
    const char *recipeName = "Lassi";
    const char *ingredients[] = {
        "1 cup Yogurt",
        "1/2 cup Cold water",
        "2 tsp Sugar (or to taste)",
        "A pinch of Salt",
        "A pinch of Cardamom powder",
        "Crushed ice (optional)"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "In a blender, combine yogurt, cold water, sugar, salt, and cardamom powder.",
        "Blend until smooth and frothy.",
        "Add crushed ice if desired and serve chilled."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void falooda()
{
    const char *recipeName = "Falooda";
    const char *ingredients[] = {
        "1 cup Milk",
        "2 tbsp Falooda sev (thin vermicelli)",
        "1 tbsp Basil seeds (soaked)",
        "2 tbsp Rose syrup",
        "1 scoop Vanilla ice cream",
        "Chopped nuts for garnish"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Boil the falooda sev until soft, then drain and set aside.",
        "In a glass, add soaked basil seeds and cooked sev.",
        "Pour milk over it and add rose syrup.",
        "Top with a scoop of ice cream and garnish with chopped nuts.",
        "Serve chilled."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void filterCoffee()
{
    const char *recipeName = "Filter Coffee";
    const char *ingredients[] = {
        "2 tbsp Coffee powder (filter coffee blend)",
        "1/2 cup Water",
        "1 cup Milk",
        "2 tsp Sugar (or to taste)"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Boil water and pour it into the upper compartment of the coffee filter with coffee powder.",
        "Allow the coffee decoction to drip down for 10-15 minutes.",
        "Heat milk in a pan and add sugar.",
        "Pour the coffee decoction into a cup and mix with hot milk.",
        "Stir and serve hot."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void coldCoffee()
{
    const char *recipeName = "Cold Coffee";
    const char *ingredients[] = {
        "1 cup Milk",
        "2 tsp Instant coffee powder",
        "2 tbsp Sugar (or to taste)",
        "Ice cubes",
        "Chocolate syrup (optional)"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "In a blender, add milk, instant coffee powder, sugar, and ice cubes.",
        "Blend until frothy and smooth.",
        "Drizzle chocolate syrup on the inside of the glass (optional).",
        "Pour the coffee into the glass and serve chilled."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void espresso()
{
    const char *recipeName = "Espresso";
    const char *ingredients[] = {
        "1 shot Espresso (brewed from finely ground coffee beans)",
        "Hot water (if needed for dilution)"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Use an espresso machine or Moka pot to brew a shot of espresso.",
        "Serve the espresso as a strong shot, or add hot water to dilute if desired."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void cappuccino()
{
    const char *recipeName = "Cappuccino";
    const char *ingredients[] = {
        "1 shot Espresso",
        "1/2 cup Steamed milk",
        "1/2 cup Milk foam",
        "Cocoa powder for garnish (optional)"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Brew a shot of espresso and pour it into a cup.",
        "Add steamed milk on top of the espresso.",
        "Spoon a layer of milk foam over the milk and espresso.",
        "Garnish with cocoa powder, if desired, and serve hot."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void affogato()
{
    const char *recipeName = "Affogato";
    const char *ingredients[] = {
        "1 scoop Vanilla ice cream",
        "1 shot Espresso",
        "Chocolate shavings or cocoa powder (for garnish, optional)"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Place a scoop of vanilla ice cream in a serving glass or bowl.",
        "Brew a shot of espresso and pour it over the ice cream.",
        "Garnish with chocolate shavings or a sprinkle of cocoa powder if desired.",
        "Serve immediately."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void latte()
{
    const char *recipeName = "Latte";
    const char *ingredients[] = {
        "1 shot Espresso",
        "1 cup Steamed milk",
        "Milk foam (for topping)",
        "Cocoa powder or cinnamon (for garnish, optional)"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Brew a shot of espresso and pour it into a cup.",
        "Steam the milk until it is hot and frothy.",
        "Pour the steamed milk over the espresso, holding back the foam.",
        "Top with a layer of milk foam and garnish with cocoa powder or cinnamon if desired.",
        "Serve hot."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void bananaCake()
{
    const char *recipeName = "Banana Cake";
    const char *ingredients[] = {
        "3 ripe Bananas (mashed)",
        "1/2 cup Sugar",
        "1/2 cup Butter (softened)",
        "1 cup All-purpose flour",
        "1 tsp Baking powder",
        "1/2 tsp Baking soda",
        "1/2 tsp Vanilla extract",
        "2 Eggs (for egg version) or 1/4 cup Yogurt (for eggless version)",
        "Pinch of salt"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Preheat oven to 180°C (350°F). Grease and flour a cake pan.",
        "In a bowl, cream butter and sugar together until light and fluffy.",
        "Add eggs (or yogurt) and mashed bananas, mix well.",
        "In another bowl, combine flour, baking powder, baking soda, and salt.",
        "Gradually add dry ingredients to the banana mixture, mixing until just combined.",
        "Pour batter into the prepared cake pan and bake for 30-35 minutes.",
        "Cool before serving."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void chocolateCake()
{
    const char *recipeName = "Chocolate Cake";
    const char *ingredients[] = {
        "1 3/4 cups All-purpose flour",
        "3/4 cup Cocoa powder",
        "2 cups Sugar",
        "1 1/2 tsp Baking powder",
        "1 1/2 tsp Baking soda",
        "1 tsp Salt",
        "2 Eggs (for egg version) or 1/2 cup Yogurt (for eggless version)",
        "1 cup Milk",
        "1/2 cup Vegetable oil",
        "2 tsp Vanilla extract",
        "1 cup Boiling water"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Preheat oven to 175°C (350°F). Grease and flour two 9-inch round cake pans.",
        "In a large bowl, mix flour, cocoa powder, sugar, baking powder, baking soda, and salt.",
        "Add eggs (or yogurt), milk, oil, and vanilla. Beat for 2 minutes.",
        "Stir in boiling water (the batter will be thin). Pour into prepared pans.",
        "Bake for 30-35 minutes. Cool for 10 minutes before removing from pans."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void carrotCake()
{
    const char *recipeName = "Carrot Cake";
    const char *ingredients[] = {
        "2 cups Grated carrots",
        "1 cup Sugar",
        "1/2 cup Brown sugar",
        "1/2 cup Vegetable oil",
        "2 cups All-purpose flour",
        "1 tsp Baking powder",
        "1/2 tsp Baking soda",
        "1 tsp Cinnamon powder",
        "1/2 tsp Nutmeg (optional)",
        "2 Eggs (for egg version) or 1/2 cup Yogurt (for eggless version)",
        "1/2 cup Chopped walnuts (optional)",
        "Pinch of salt"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Preheat oven to 180°C (350°F). Grease and flour a cake pan.",
        "In a bowl, mix sugar, brown sugar, and oil. Add eggs (or yogurt) and mix well.",
        "Stir in grated carrots.",
        "In another bowl, mix flour, baking powder, baking soda, cinnamon, nutmeg, and salt.",
        "Combine the dry ingredients with the wet mixture. Fold in walnuts.",
        "Pour into the prepared pan and bake for 30-35 minutes.",
        "Cool before serving."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void tuttiFruttiCake()
{
    const char *recipeName = "Tutti Frutti Cake";
    const char *ingredients[] = {
        "1 cup All-purpose flour",
        "1 cup Sugar",
        "1/2 cup Butter (softened)",
        "1/2 cup Milk",
        "1 tsp Baking powder",
        "1/2 tsp Baking soda",
        "1/4 tsp Vanilla extract",
        "1/2 cup Tutti frutti (candied fruit)",
        "2 Eggs (for egg version) or 1/2 cup Yogurt (for eggless version)",
        "Pinch of salt"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Preheat oven to 180°C (350°F). Grease and flour a cake pan.",
        "In a bowl, cream butter and sugar until light and fluffy.",
        "Add eggs (or yogurt), milk, and vanilla. Mix well.",
        "In another bowl, combine flour, baking powder, baking soda, and salt.",
        "Gradually add dry ingredients to the wet mixture. Fold in tutti frutti.",
        "Pour batter into the prepared pan and bake for 25-30 minutes.",
        "Cool before serving."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void spongeCake()
{
    const char *recipeName = "Sponge Cake";
    const char *ingredients[] = {
        "1 cup All-purpose flour",
        "1 cup Sugar",
        "1/2 cup Butter (melted)",
        "1/2 cup Milk",
        "2 Eggs (for egg version) or 1/2 cup Yogurt (for eggless version)",
        "1 tsp Baking powder",
        "1/2 tsp Vanilla extract",
        "Pinch of salt"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Preheat oven to 180°C (350°F). Grease and flour a cake pan.",
        "In a bowl, whisk eggs (or yogurt) and sugar until light and fluffy.",
        "Add melted butter, milk, and vanilla extract, and mix well.",
        "In another bowl, mix flour, baking powder, and salt.",
        "Gradually fold dry ingredients into the wet mixture until just combined.",
        "Pour into the prepared pan and bake for 25-30 minutes.",
        "Cool before serving."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void chocolateSpongeCake()
{
    const char *recipeName = "Chocolate Sponge Cake";
    const char *ingredients[] = {
        "1 cup All-purpose flour",
        "1 cup Sugar",
        "1/2 cup Cocoa powder",
        "1/2 cup Butter (melted)",
        "1/2 cup Milk",
        "2 Eggs (for egg version) or 1/2 cup Yogurt (for eggless version)",
        "1 tsp Baking powder",
        "1/2 tsp Vanilla extract",
        "Pinch of salt"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Preheat oven to 180°C (350°F). Grease and flour a cake pan.",
        "In a bowl, whisk eggs (or yogurt) and sugar until light and fluffy.",
        "Add melted butter, milk, and vanilla extract, and mix well.",
        "In another bowl, mix flour, cocoa powder, baking powder, and salt.",
        "Gradually fold dry ingredients into the wet mixture until just combined.",
        "Pour into the prepared pan and bake for 25-30 minutes.",
        "Cool before serving."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void butterCake()
{
    const char *recipeName = "Butter Cake";
    const char *ingredients[] = {
        "1 cup All-purpose flour",
        "1 cup Sugar",
        "1/2 cup Butter (softened)",
        "1/2 cup Milk",
        "2 Eggs (for egg version) or 1/2 cup Yogurt (for eggless version)",
        "1 tsp Baking powder",
        "1/2 tsp Vanilla extract",
        "Pinch of salt"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Preheat oven to 180°C (350°F). Grease and flour a cake pan.",
        "In a bowl, cream butter and sugar together until light and fluffy.",
        "Add eggs (or yogurt), milk, and vanilla extract, and mix well.",
        "In another bowl, mix flour, baking powder, and salt.",
        "Gradually add dry ingredients to the wet mixture until just combined.",
        "Pour into the prepared pan and bake for 25-30 minutes.",
        "Cool before serving."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void strawberryCake()
{
    const char *recipeName = "Strawberry Cake";
    const char *ingredients[] = {
        "1 cup All-purpose flour",
        "1 cup Sugar",
        "1/2 cup Butter (softened)",
        "1/2 cup Milk",
        "2 Eggs (for egg version) or 1/2 cup Yogurt (for eggless version)",
        "1 tsp Baking powder",
        "1/2 tsp Vanilla extract",
        "1 cup Strawberries (mashed or chopped)",
        "Pinch of salt"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Preheat oven to 180°C (350°F). Grease and flour a cake pan.",
        "In a bowl, cream butter and sugar together until light and fluffy.",
        "Add eggs (or yogurt), milk, and vanilla extract, and mix well.",
        "Fold in mashed strawberries.",
        "In another bowl, mix flour, baking powder, and salt.",
        "Gradually add dry ingredients to the wet mixture until just combined.",
        "Pour into the prepared pan and bake for 25-30 minutes.",
        "Cool before serving."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void chocolateBananaCake()
{
    const char *recipeName = "Chocolate Banana Cake";
    const char *ingredients[] = {
        "2 ripe Bananas (mashed)",
        "1/2 cup Sugar",
        "1/2 cup Butter (softened)",
        "1 cup All-purpose flour",
        "1/4 cup Cocoa powder",
        "1 tsp Baking powder",
        "1/2 tsp Baking soda",
        "1/2 tsp Vanilla extract",
        "2 Eggs (for egg version) or 1/4 cup Yogurt (for eggless version)",
        "Pinch of salt"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Preheat oven to 180°C (350°F). Grease and flour a cake pan.",
        "In a bowl, cream butter and sugar together until light and fluffy.",
        "Add eggs (or yogurt) and mashed bananas, mix well.",
        "In another bowl, combine flour, cocoa powder, baking powder, baking soda, and salt.",
        "Gradually add dry ingredients to the banana mixture, mixing until just combined.",
        "Pour batter into the prepared cake pan and bake for 30-35 minutes.",
        "Cool before serving."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void bananaMuffins()
{
    const char *recipeName = "Banana Muffins";
    const char *ingredients[] = {
        "2 ripe Bananas (mashed)",
        "1/2 cup Sugar",
        "1/2 cup Butter (melted)",
        "1 cup All-purpose flour",
        "1 tsp Baking powder",
        "1/2 tsp Baking soda",
        "1/2 tsp Vanilla extract",
        "2 Eggs (for egg version) or 1/4 cup Yogurt (for eggless version)",
        "Pinch of salt"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Preheat oven to 180°C (350°F). Grease a muffin tray.",
        "In a bowl, mix melted butter and sugar until well combined.",
        "Add eggs (or yogurt) and mashed bananas, and mix well.",
        "In another bowl, combine flour, baking powder, baking soda, and salt.",
        "Gradually add dry ingredients to the banana mixture, mixing until just combined.",
        "Spoon the batter into the muffin tray and bake for 15-20 minutes.",
        "Cool before serving."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void chocolateMuffins()
{
    const char *recipeName = "Chocolate Muffins";
    const char *ingredients[] = {
        "1 cup All-purpose flour",
        "1/2 cup Cocoa powder",
        "1 cup Sugar",
        "1/2 cup Butter (melted)",
        "1/2 cup Milk",
        "2 Eggs (for egg version) or 1/2 cup Yogurt (for eggless version)",
        "1 tsp Baking powder",
        "1/2 tsp Baking soda",
        "Pinch of salt"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Preheat oven to 180°C (350°F). Grease a muffin tray.",
        "In a bowl, mix melted butter and sugar until well combined.",
        "Add eggs (or yogurt), milk, and mix well.",
        "In another bowl, combine flour, cocoa powder, baking powder, baking soda, and salt.",
        "Gradually add dry ingredients to the wet mixture until just combined.",
        "Spoon the batter into the muffin tray and bake for 15-20 minutes.",
        "Cool before serving."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void jalebi()
{
    const char *recipeName = "Jalebi";
    const char *ingredients[] = {
        "1 cup All-purpose flour",
        "2 tbsp Corn flour",
        "1/2 cup Yogurt",
        "1/2 tsp Baking powder",
        "1/4 tsp Turmeric powder (optional, for color)",
        "1 cup Sugar",
        "1/2 cup Water",
        "1/2 tsp Cardamom powder",
        "Ghee or Oil for frying",
        "A few Saffron strands (optional)"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "In a bowl, mix all-purpose flour, corn flour, yogurt, baking powder, and turmeric powder. Add water gradually to make a smooth batter.",
        "Cover and let the batter ferment for 6-8 hours.",
        "To make the sugar syrup, boil sugar and water until it reaches a one-string consistency. Add cardamom powder and saffron strands.",
        "Heat ghee or oil in a pan. Pour the batter into a piping bag or squeeze bottle.",
        "Pipe the batter into spirals in hot oil. Fry until golden and crispy.",
        "Soak the fried jalebis in the warm sugar syrup for a few seconds and serve hot."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void kheer()
{
    const char *recipeName = "Kheer (Rice Pudding)";
    const char *ingredients[] = {
        "1/2 cup Basmati rice",
        "1 liter Full-fat milk",
        "1/2 cup Sugar",
        "1/4 tsp Cardamom powder",
        "2 tbsp Almonds and Cashews (chopped)",
        "2 tbsp Raisins",
        "A few Saffron strands (optional)"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Wash the basmati rice and soak for 20 minutes.",
        "In a large pan, bring milk to a boil and add the soaked rice.",
        "Cook on low heat, stirring occasionally, until the rice is cooked and the milk thickens.",
        "Add sugar and cardamom powder, and cook for a few more minutes.",
        "Garnish with chopped nuts, raisins, and saffron strands.",
        "Serve warm or chilled."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void gajarKaHalwa()
{
    const char *recipeName = "Gajar Ka Halwa (Carrot Halwa)";
    const char *ingredients[] = {
        "1 kg Carrots (grated)",
        "1 liter Milk",
        "1/2 cup Sugar",
        "4 tbsp Ghee",
        "1/4 tsp Cardamom powder",
        "2 tbsp Almonds and Cashews (chopped)",
        "2 tbsp Raisins"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Heat ghee in a large pan and sauté the grated carrots for 10 minutes.",
        "Add milk and cook on low heat, stirring occasionally, until the milk is absorbed.",
        "Add sugar and cook for another 10 minutes until the halwa thickens.",
        "Add cardamom powder, chopped nuts, and raisins. Mix well.",
        "Serve warm, garnished with more nuts if desired."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void besanLadoo()
{
    const char *recipeName = "Besan Ladoo";
    const char *ingredients[] = {
        "2 cups Gram flour (Besan)",
        "1 cup Powdered sugar",
        "1/2 cup Ghee",
        "1/4 tsp Cardamom powder",
        "2 tbsp Almonds and Pistachios (chopped)"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Heat ghee in a pan and roast the gram flour on low heat until it turns golden and aromatic.",
        "Remove from heat and let it cool slightly.",
        "Add powdered sugar, cardamom powder, and chopped nuts to the roasted gram flour. Mix well.",
        "Shape the mixture into small balls (ladoo) while it's still warm.",
        "Let the ladoos cool and set before serving."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void soanPapdi()
{
    const char *recipeName = "Soan Papdi";
    const char *ingredients[] = {
        "1 cup Gram flour (Besan)",
        "1 cup All-purpose flour (Maida)",
        "1 cup Sugar",
        "1/2 cup Ghee",
        "1/4 cup Water",
        "1/2 tsp Cardamom powder",
        "2 tbsp Almonds and Pistachios (chopped)"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "Heat ghee in a pan and roast the gram flour and all-purpose flour until golden and aromatic. Set aside.",
        "In another pan, boil sugar and water until it reaches a soft-ball consistency.",
        "Pour the sugar syrup over the roasted flour mixture and stir vigorously to mix well.",
        "Sprinkle cardamom powder and chopped nuts. Stir and stretch the mixture until flaky layers form.",
        "Press the mixture into a greased tray and let it set. Cut into pieces and serve."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
void kalakand()
{
    const char *recipeName = "Kalakand";
    const char *ingredients[] = {
        "1 liter Full-fat milk",
        "1/2 cup Sugar",
        "1/2 tsp Cardamom powder",
        "1 tbsp Lemon juice",
        "2 tbsp Pistachios and Almonds (chopped)"};
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char *instructions[] = {
        "In a large pan, bring milk to a boil. Add lemon juice to curdle the milk.",
        "Once the milk separates into whey and paneer, strain the paneer and discard the whey.",
        "In another pan, cook the paneer on low heat until it thickens.",
        "Add sugar and cardamom powder, and cook until the mixture starts leaving the sides of the pan.",
        "Transfer the mixture to a greased tray, garnish with chopped nuts, and let it set.",
        "Cut into pieces and serve."};
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}

void foodguide()
{
    printf("\033[1;35m");
    printf("                            ##########   ########    ########   ########              ######   ##     ##   ########   ########     #########  \n");
    printf("                            ##          ##      ##  ##      ##  ##      ##           ##        ##     ##      ##      ##      ##   ##         \n");
    printf("                            ##          ##      ##  ##      ##  ##      ###         ##         ##     ##      ##      ##      ###  ##         \n");
    printf("                            #########   ##      ##  ##      ##  ##      ###         ##    ###  ##     ##      ##      ##      ###  #########  \n");
    printf("                            ##          ##      ##  ##      ##  ##      ###         ##     ##  ##     ##      ##      ##      ###  ##         \n");
    printf("                            ##          ##      ##  ##      ##  ##      ##           ##    ##  ##     ##      ##      ##      ##   ##         \n");
    printf("                            ##           ########    ########   ########              #####    #########   ########   ########     #########  \n");
    printf("\033[0m");
    printf("\n\n");
}

void NonVegStarters()
{
    printf("\033[1;36m \n");
    printf("1.Chicken Chilli               \t");
    printf("2.Chicken Manchurian           \t");
    printf("3.Chicken Lollypop           \n\n");
    printf("4.Chicken 65                   \t");
    printf("5.Chicken Garlic               \t");
    printf("6.Egg Pakora                 \n\n");
    printf("7.Egg Fry                      \t");
    printf("8.Egg Bhurji                   \t");
    printf("9.Egg Omlette                \n\n");
    printf("10.Fish Fry/Tikka              \t");
    printf("11.Korean Fried Chicken        \t");
    printf("12.Mutton Paya               \n\n");
    printf("13.Fish Fry                    \t");
    printf("14.Egg Curry                 \n\n");
    printf("\033[0m");

    printf("ENTER THE NUMBER OF THE RECIPE YOU WANT TO MAKE :");
    int b;
    scanf("%d", &b);
    system("clear");
    foodguide();
    switch (b)
    {
    case 1:
        chickenChilli();
        break;
    case 2:
        chickenManchurian();
        break;
    case 3:
        chickenLollypop();
        break;
    case 4:
        chicken65();
        break;
    case 5:
        chickenGarlic();
        break;
    case 6:
        eggPakora();
        break;
    case 7:
        eggFry();
        break;
    case 8:
        eggBhurji();
        break;
    case 9:
        eggOmelette();
        break;
    case 10:
        fishTikka();
        break;
    case 11:
        koreanFriedChicken();
        break;
    case 12:
        muttonPaya();
        break;
    case 13:
        fishFry();
        break;
    case 14:
        eggcurry();
        break;

    default:
        printf("Invalid choice! Please try again.  \n\n");

        break;
    }
}

void VegStarters()
{
    printf("\033[1;36m\n");
    printf("1.Veg Manchurian                \t");
    printf("2.Gobi Manchurian               \t");
    printf("3.Paneer Manchurian             \t");
    printf("4.Paneer Chilli               \n\n");
    printf("5.Paneer Tikka                  \t");
    printf("6.Paneer Pakora                 \t");
    printf("7.Veg Pakora                    \t");
    printf("8.Onion Pakora                \n\n");
    printf("9.Mushroom Chilli               \t");
    printf("10.Mushroom Manchurian          \t");
    printf("11.Babycorn Manchurian          \t");
    printf("12. Matar Paneer              \n\n");
    printf("13. Palak Paneer                \t");
    printf("14. Paneer Masala               \t");
    printf("15. Paneer Butter Masala        \t");
    printf("16. Paneer Tikka Masala       \n\n");
    printf("17. Babycorn Crispy             \t");
    printf("18. Vegetable Stir Fry        \n\n");
    printf("\033[0m");

    printf("ENTER THE NUMBER OF THE RECIPE YOU WANT TO MAKE :");
    int b;
    scanf("%d", &b);
    system("clear");
    foodguide();
    switch (b)
    {
    case 1:
        vegManchurian();
        break;
    case 2:
        gobiManchurian();
        break;
    case 3:
        paneerManchurian();
        break;
    case 4:
        paneerChilli();
        break;
    case 5:
        paneerTikka();
        break;
    case 6:
        paneerPakora();
        break;
    case 7:
        vegPakora();
        break;
    case 8:
        onionPakora();
        break;
    case 9:
        mushroomChilli();
        break;
    case 10:
        mushroomManchurian();
        break;
    case 11:
        babycornManchurian();
        break;
    case 12:
        matarPaneer();
        break;
    case 13:
        palakPaneer();
        break;
    case 14:
        paneerMasala();
        break;
    case 15:
        paneerButterMasala();
        break;
    case 16:
        paneerTikkaMasala();
        break;
    case 17:
        babycornCrispy();
        break;
    case 18:
        vegetableStirFry();
        break;

    default:
        printf("Invalid choice! Please try again.  \n\n");
        break;
    }
}

void Rice()
{
    printf("\033[1;36m\n");
    printf("1.Jeera Rice                 \t");
    printf("2.Tomato Rice              \n\n");
    printf("3.Egg Fried Rice             \t");
    printf("4.Veg Fried Rice           \n\n");
    printf("5.Chicken Fried Rice         \t");
    printf("6.Lemon Rice                 \n");
    printf("6.Puliogare                 \n");
    printf("\033[0m");

    printf("ENTER THE NUMBER OF THE RECIPE YOU WANT TO MAKE :");
    int b;
    scanf("%d", &b);
    system("clear");
    foodguide();
    switch (b)
    {
    case 1:
        jeeraRice();
        break;
    case 2:
        tomatoRice();
        break;
    case 3:
        eggFriedRice();
        break;
    case 4:
        vegFriedRice();
        break;
    case 5:
        chickenFriedRice();
        break;
    case 6:
        lemonRice();
        break;
    case 7:
        puliyogare();
        break;

    default:
        printf("Invalid choice! Please try again.  \n\n");
        break;
    }
}
void Biryani()
{

    printf("\033[1;36m\n");
    printf("1.Chicken Biryani               \t");
    printf("2.Veg Biryani                 \n\n");
    printf("3.Paneer Biryani                \t");
    printf("4.Mushroom Biryani            \n\n");
    printf("5.Hyderabadi Egg Biryani        \t");
    printf("6.Mutton Biryani              \n\n");
    printf("7.Prawns Biryani              \n\n");
    printf("\033[0m");

    printf("\n");
    printf("ENTER THE NUMBER OF THE RECIPE YOU WANT TO MAKE :");
    int b;
    scanf("%d", &b);
    system("clear");
    foodguide();
    switch (b)
    {
    case 1:
        chickenbiryani();
        break;
    case 2:
        vegBiryani();
        break;
    case 3:
        paneerBiryani();
        break;
    case 4:
        mushroomBiryani();
        break;
    case 5:
        hyderabadiEggBiryani();
        break;
    case 6:
        muttonBiryani();
        break;
    case 7:
        prawnsBiryani();
        break;

    default:
        printf("Invalid choice! Please try again.  \n\n");
        break;
    }
}
void Cakes()
{
    printf("\033[1;36m\n");
    printf("1. Banana Cake                      \t");
    printf("2. Chocolate Cake                   \t");
    printf("3. Carrot Cake                      \t");
    printf("4. Tutti Frutti Cake              \n\n");
    printf("5. Sponge Cake                      \t");
    printf("6. Chocolate Sponge Cake            \t");
    printf("7. Butter Cake                      \t");
    printf("8. Strawberry Cake                \n\n");
    printf("9. Chocolate banana cake            \t");
    printf("10. Banana Muffins                  \t");
    printf("11. Chocolate Muffins               \t");
    printf("12. Chocolate Chip Cookies        \n\n");
    printf("13. Chocolate Brownie             \n\n");
    printf("\033[1;0m\n");

    printf("ENTER THE NUMBER OF THE RECIPE YOU WANT TO MAKE :");
    int b;
    scanf("%d", &b);
    system("clear");
    foodguide();
    switch (b)
    {
    case 1:
        bananaCake();
        break;
    case 2:
        chocolateCake();
        break;
    case 3:
        carrotCake();
        break;
    case 4:
        tuttiFruttiCake();
        break;
    case 5:
        spongeCake();
        break;
    case 6:
        chocolateSpongeCake();
        break;
    case 7:
        butterCake();
        break;
    case 8:
        strawberryCake();
        break;
    case 9:
        chocolateBananaCake();
        break;
    case 10:
        bananaMuffins();
        break;
    case 11:
        chocolateMuffins();
        break;
    case 12:
        chocolateChipCookies();
        break;
    case 13:
        chocolateBrownie();
        break;

    default:
        printf("Invalid choice! Please try again.  \n\n");
        break;
    }
}
void Snacks()
{
    printf("\033[1;36m\n");
    printf("1. Samosa                       \t");
    printf("2. French Fries                 \t");
    printf("3. Pani Puri                    \t");
    printf("4. Aloo Tikki                 \n\n");
    printf("5. Bhel Puri                    \t");
    printf("6. Pav Bhaji                    \t");
    printf("7. Onion Pakodi                 \t");
    printf("8. Mirchi Bajji               \n\n");
    printf("9. Aloo Bajji                   \t");
    printf("10. Chicken Roll                \t");
    printf("11. Paneer Roll                 \t");
    printf("12. Chicken Pasta             \n\n");
    printf("13. Red Sause Pasta             \t");
    printf("14. White Sause Pasta           \t");
    printf("15. Chicken Burger              \t");
    printf("16. Cheese Burger             \n\n");
    printf("17. Veggie Burger               \t");
    printf("18. Vegetable Sandwich          \t");
    printf("19. Chicken Sandwich            \t");
    printf("20. Paneer Sandwich           \n\n");
    printf("21. Egg Sandwich                \t");
    printf("22. Tomato Pizza                \t");
    printf("23. Paner Tikka Pizza           \t");
    printf("24. Onion Pizza               \n\n");
    printf("25. Chicken Pizza               \t");
    printf("26. Cheese BUrst Pizza          \t");
    printf("27. Spicy Veg Pizza           \n\n");
    printf("\033[0m");

    printf("ENTER THE NUMBER OF THE RECIPE YOU WANT TO MAKE :");
    int b;
    scanf("%d", &b);
    system("clear");
    foodguide();
    switch (b)
    {
    case 1:
        samosa();
        break;
    case 2:
        frenchfries();
        break;
    case 3:
        panipuri();
        break;
    case 4:
        alooTikki();
        break;
    case 5:
        bhelPuri();
        break;
    case 6:
        pavBhaji();
        break;
    case 7:
        onionPakodi();
        break;
    case 8:
        mirchiBajji();
        break;
    case 9:
        alooBajji();
        break;
    case 10:
        chickenRoll();
        break;
    case 11:
        paneerRoll();
        break;
    case 12:
        chickenpasta();
        break;
    case 13:
        redSaucePasta();
        break;
    case 14:
        whiteSaucePasta();
        break;
    case 15:
        chickenBurger();
        break;
    case 16:
        cheeseburger();
        break;
    case 17:
        veggieBurger();
        break;
    case 18:
        vegetableSandwich();
        break;
    case 19:
        chickenSandwich();
        break;
    case 20:
        paneerSandwich();
        break;
    case 21:
        eggSandwich();
        break;
    case 22:
        tomatopizza();
        break;
    case 23:
        paneerTikkaPizza();
        break;
    case 24:
        onionPizza();
        break;
    case 25:
        chickenPizza();
        break;
    case 26:
        cheeseBurstPizza();
        break;
    case 27:
        spicyVegPizza();
        break;

    default:
        printf("Invalid choice! Please try again.  \n\n");
        break;
    }
}
void Soup()
{
    printf("\033[1;36m\n");
    printf("1. Tomato Soup                 \t");
    printf("2. Sweet Corn Soup             \t");
    printf("3. Rasam                     \n\n");
    printf("4. Lemon Coriander Soup        \t");
    printf("5. Spinach(Palak) Soup         \t");
    printf("6. Carrot-Ginger Soup        \n\n");
    printf("\033[0m");

    printf("ENTER THE NUMBER OF THE RECIPE YOU WANT TO MAKE :");
    int b;
    scanf("%d", &b);
    system("clear");
    foodguide();
    switch (b)
    {
    case 1:
        tomatoSoup();
        break;
    case 2:
        sweetCornSoup();
        break;
    case 3:
        rasam();
        break;
    case 4:
        lemonCorianderSoup();
        break;
    case 5:
        spinachSoup();
        break;
    case 6:
        carrotGingerSoup();
        break;

    default:
        printf("Invalid choice! Please try again.  \n\n");
        break;
    }
}
void Dessert()
{
    printf("\033[1;36m\n");
    printf("1. Gulab Jamun                    \t");
    printf("2. Double Ka Meetha               \t");
    printf("3. Pongal                         \t");
    printf("4. Rasmalai                     \n\n");
    printf("5. Mysorepak                      \t");
    printf("6. Rasgulla                       \t");
    printf("7. Jelebi                         \t");
    printf("8. Kheer                        \n\n");
    printf("9. Carrot Halwa                   \t");
    printf("10. Besan Ladoo                   \t");
    printf("11. Soan Papdi                    \t");
    printf("12. Kalakand                    \n\n");
    printf("\033[0m");

    printf("ENTER THE NUMBER OF THE RECIPE YOU WANT TO MAKE :");
    int b;
    scanf("%d", &b);
    system("clear");
    foodguide();
    switch (b)
    {
    case 1:
        gulabJamun();
        break;
    case 2:
        doubleKaMeetha();
        break;
    case 3:
        pongal();
        break;
    case 4:
        rasmalai();
        break;
    case 5:
        mysorepak();
        break;
    case 6:
        rasagulla();
        break;
    case 7:
        jalebi();
        break;
    case 8:
        kheer();
        break;
    case 9:
        gajarKaHalwa();
        break;
    case 10:
        besanLadoo();
        break;
    case 11:
        soanPapdi();
        break;
    case 12:
        kalakand();
        break;
    default:
        printf("Invalid choice! Please try again.  \n\n");
        break;
    }
}
void Shakes()
{
    printf("\033[1;34m \n");
    printf("1. Banana Shake                      \t");
    printf("2. Mango Shake                       \t");
    printf("3. Strawberry Shake                  \t");
    printf("4. Chocolate Shake                 \n\n");
    printf("5. Vanilla Milkshake                 \t");
    printf("6. Pineapple Shake                   \t");
    printf("7. Dates Shake                       \t");
    printf("8. Oreo Shake                      \n\n");
    printf("9. Almond Milkshake                  \t");
    printf("10. Peanut Butter Banana Shake       \t");
    printf("11. Kitkat Milkshake               \n\n");
    printf("\033[0m");

    printf("ENTER THE NUMBER OF THE RECIPE YOU WANT TO MAKE :");
    int b;
    scanf("%d", &b);
    system("clear");
    foodguide();
    switch (b)
    {
    case 1:
        bananaShake();
        break;
    case 2:
        mangoShake();
        break;
    case 3:
        strawberryShake();
        break;
    case 4:
        chocolateShake();
        break;
    case 5:
        vanillaMilkshake();
        break;
    case 6:
        pineappleShake();
        break;
    case 7:
        datesShake();
        break;
    case 8:
        oreoShake();
        break;
    case 9:
        almondMilkshake();
        break;
    case 10:
        peanutButterBananaShake();
        break;
    case 11:
        kitkatmilkshake();
        break;
    default:
        printf("Invalid choice! Please try again.  \n\n");
        break;
    }
}
void Beverage()
{
    printf("\033[1;34m \n");
    printf("1. Lemonade                 \t");
    printf("2. Lassi                    \t");
    printf("3. Falooda                  \t");
    printf("4. Masala Chai             \n\n");
    printf("5. Coffee                   \t");
    printf("6. Filter Coffee            \t");
    printf("7. Cold Coffee              \t");
    printf("8. Espresso               \n\n");
    printf("9. Cappuccino               \t");
    printf("10. Latte                   \t");
    printf("11. Affogato              \n\n");
    printf("\033[1;0m \n");

    printf("ENTER THE NUMBER OF THE RECIPE YOU WANT TO MAKE :");
    int b;
    scanf("%d", &b);
    system("clear");
    foodguide();
    switch (b)
    {
    case 1:
        nimbuPani();
        break;
    case 2:
        lassi();
        break;
    case 3:
        falooda();
        break;
    case 4:
        masalatea();
        break;
    case 5:
        coffee();
        break;
    case 6:
        filterCoffee();
        break;
    case 7:
        coldCoffee();
        break;
    case 8:
        espresso();
        break;
    case 9:
        cappuccino();
        break;
    case 10:
        latte();
        break;
    case 11:
        affogato();
        break;

    default:
        printf("Invalid choice! Please try again.  \n\n");
        break;
    }
}
void Tiffins()
{
    printf("\033[1;34m \n");
    printf("1. Idli                   \t");
    printf("2. Dosa                   \t");
    printf("3. Masala Dosa            \t");
    printf("4. Aloo Parata          \n\n");
    printf("5. Upma                   \t");
    printf("6. Poha                   \t");
    printf("7. Chole Bhature          \t");
    printf("8. Puri Bhaji           \n\n");
    printf("9.Sabu Dhana Kichidi    \n\n");
    printf("\033[1;0m");

    printf("ENTER THE NUMBER OF THE RECIPE YOU WANT TO MAKE :");
    int b;
    scanf("%d", &b);
    system("clear");
    foodguide();
    switch (b)
    {
    case 1:
        idli();
        break;
    case 2:
        dosa();
        break;
    case 3:
        masalaDosa();
        break;
    case 4:
        alooParatha();
        break;
    case 5:
        upma();
        break;
    case 6:
        poha();
        break;
    case 7:
        choleBhature();
        break;
    case 8:
        puriBhaji();
        break;
    case 9:
        sabudanaKhichdi();
        break;

    default:
        printf("Invalid choice! Please try again.  \n\n");
        break;
    }
}

void menulist()
{
    printf("\033[1;34m \n");
    printf("1.NON-VEG             \t");
    printf("2.VEG                 \t");
    printf("3.RICE                \t");
    printf("4.BIRYANI           \n\n");
    printf("5.Cakes                \t");
    printf("6.SNACKS              \t");
    printf("7.SOUP                \t");
    printf("8.DESSERT           \n\n");
    printf("9.SHAKES              \t");
    printf("10.BEVERAGES           \t");
    printf("11.TIFFINS          \n\n");
    printf("\033[0m");
}
void menuselect()
{
    printf("ENTER THE NUMBER FROM THE MENU TO CHOOSE TYPE OF RECIPE YOU WANT TO MAKE : ");
    int b;
    scanf("%d", &b);
    system("clear");
    foodguide();
    switch (b)
    {
    case 1:
        NonVegStarters();
        break;
    case 2:
        VegStarters();
        break;
    case 3:
        Rice();
        break;
    case 4:
        Biryani();
        break;
    case 5:
        Cakes();
        break;
    case 6:
        Snacks();
        break;
    case 7:
        Soup();
        break;
    case 8:
        Dessert();
        break;
    case 9:
        Shakes();
        break;
    case 10:
        Beverage();
        break;
    case 11:
        Tiffins();
        break;
    default:
        printf("Invalid choice! Please try again.  \n\n");
        break;
    }
}

typedef struct
{
    char name[100];
    char ingredients[100][100];
    char instructions[100][1000];
    int *next;
} ownrecipe;
void ownrecipes()
{
    ownrecipe a;

    // Reading recipe name
    printf("ENTER THE NAME OF YOUR RECIPE: ");
    scanf(" %[^\n]", a.name); // Reads full name, including spaces

    getchar(); // Consume the newline character left in the buffer by scanf

    // Reading ingredients
    printf("ENTER '0' TO STOP GIVING INGREDIENTS INPUT\n");
    printf("ENTER THE INGREDIENTS REQUIRED FOR RECIPE %s:\n", a.name);
    int i = 0;
    while (1)
    {
        fgets(a.ingredients[i], 100, stdin);
        a.ingredients[i][strcspn(a.ingredients[i], "\n")] = '\0'; // Remove newline character
        if (a.ingredients[i][0] == '0')                           // Stop if the input is '0'
        {
            break;
        }
        i++;
    }

    // Reading instructions
    printf("ENTER '0' TO STOP GIVING INSTRUCTIONS INPUT\n");
    printf("ENTER THE INSTRUCTIONS TO MAKE %s:\n", a.name);
    int j = 0;
    while (1)
    {
        fgets(a.instructions[j], 1000, stdin);
        a.instructions[j][strcspn(a.instructions[j], "\n")] = '\0'; // Remove newline character
        if (a.instructions[j][0] == '0')                            // Stop if the input is '0'
        {
            break;
        }
        j++;
    }

    // Display the recipe
    system("clear");
    foodguide();
    printf("\n\033[1;33mRecipe:\033[0m \033[1;31m%s\n", a.name);

    printf("\n\033[1;33mIngredients:\033[0m\n");
    for (int k = 0; k < i; k++)
    {
        printf("\033[1;36m- %s\033[0m\n", a.ingredients[k]);
    }

    printf("\n\033[1;33mInstructions:\033[0m\n");
    for (int k = 0; k < j; k++)
    {
        printf("\033[1;32m%d. %s\033[0m\n", k + 1, a.instructions[k]);
    }
}

int main()
{
    system("clear");
    int a;
    foodguide();
    printf("\033[1;37mHELLO WELCOME TO FOOD GUIDE:\033[1;0m\n");
    do
    {
        printf("\033[1;33m\n");
        printf("      1.RECIPE MENU               \n");
        printf("      2.MAKE YOUR OWN RECIPE      \n");
        printf("      3.Exit           \033[1;0m\n\n");
        printf("ENTER 1 TO CHECK RECIPIE MENU     \n");
        printf("ENTER 2 TO WRITE YOUR OWN RECIPE  \n");
        printf("ENTER 3 TO EXIT                   \n");

        scanf("%d", &a);
        fflush(stdin);
        system("clear");
        if (a == 1)
        {
            foodguide();
            printf("HERE IS THE MENU :\n\n");
            menulist();
            menuselect();
        }
        if (a == 2)
        {
            foodguide();
            ownrecipes();
        }

    } while (a != 3);

    return 0;
}

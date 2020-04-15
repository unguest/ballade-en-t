# Ballade en T - Notes de développement

Le but de cet exercice est de créer une map sur laquelle un joueur peut se déplacer. 

## Notations
T : Représente je joueur sur la carte

## Fonctions du programme
### Bibliothèque Game

create_map(Map *map) => instancie une structure Map.

move(short movement, Map *map) => permet de bouger le joueur sur la carte. Affiche un message d'erreur si nécessaire.

display_map(Map *map) => afficher la carte à l'écran.

ask_movement() => demande à l'utilisateur un mouvement à effectuer. Filtre les commandes à envoyer à move

## Valeurs possibles pour la fonction move
z => déplacement d'une case vers le haut

s => déplacement d'une case vers le bas

q => déplacement d'une case vers la gauche

d => déplacement d'une case vers la droite

:wq! => quitter le programme :p

0 => signifie que l'entrée utilisateur n'était pas bonne. Aucune action.

=> à la base, il était question que l'utilisateur puisse rentrer des mots (up, down, left, right) en plus des lettres z/q/s/d mais la variation de la longueur de la chaîne de caractères avec le caractère \0 était galère à gérer donc je n'ai laissé que z/q/s/d.

## Structure Map

int pX => abcisse du joueur

int pY => ordonnée du joueur

À noter que les 2 valeurs ci-dessus sont générées aléatoirement dans la fonction create_map().

int xMax => largeur de la carte

int yMax => hauteur de la carte
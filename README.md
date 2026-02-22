# Cards Badges Detector

Un système de détection et reconnaissance de cartes NFC/RFID écrit en C.

## Description

Ce projet permet de détecter et identifier différents types de cartes:
- Cartes NFC (ISO14443A, ISO14443B)
- Badges RFID
- Cartes spéciales

## Structure du Projet

```
Cards-Badges-Detector/
├── include/          # Fichiers d'en-têtes (.h)
├── src/              # Fichiers source (.c)
├── tests/            # Tests unitaires
├── Makefile          # Compilation
└── README.md         # Documentation
```

## Compilation

```bash
make build
```

## Utilisation

```bash
./cards_detector
```

## Intégration

Ce projet s'intègre avec le service fzoc.kanjian.fr pour la validation et le traitement des cartes détectées.

## Auteur

belleaukevan8-cmd
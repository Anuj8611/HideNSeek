# 🔐 HideNSeek – File Encryptor & Decryptor in C

## 📌 About
HideNSeek is a simple **file encryption and decryption tool** built in C.  
It uses the **XOR cipher** with a single-character key to encrypt and decrypt any file (text or binary).  
This project was developed as part of my learning journey during the **NPTEL C Programming course**.  

---

## ⚙️ Features
- Encrypts and decrypts **any file type** (text, csv, images, etc.)  
- Symmetric encryption – the same key is used for both operations  
- Lightweight and fast – works byte by byte  
- Command-line utility style  

---

## 🖥️ Usage

### 1. Compile
```bash
gcc encryptx.c -o encryptx
```
### 2. Encrypt a file
```bash
./encryptx enc input.txt output.enc X
```

### 3. Decrypt a file
```bash
./encryptx dec output.enc result.txt X
```
- enc → mode (encrypt)
- dec → mode (decrypt)
- input.txt → file you want to encrypt/decrypt
- output.enc → output file
- X → key (single character) <br>

### 📂 Example
- 🚀 Future Enhancements
- Add support for multi-character string keys
- Include other ciphers (Caesar, Vigenère)
- Interactive menu-driven version for easier use <br>

### 📖 Learning Outcome

- File handling in C (fopen, fgetc, fputc)
- Command-line arguments (argv, argc)
- Bitwise operations (XOR)
- Error handling and program design

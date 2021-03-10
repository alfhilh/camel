# Memisahkan Kata Dari Penulisan Camel Case

## Contoh format input
```
iniAdalahPenulisanCamelCase 
```
## Output yang diharapkan
```go
Kata sebelum dipisah : iniAdalahPenulisanCamelCase
Jumlah kata : 5
Kata yang tersedia : ini, adalah, penulisan, camel, case
```

# Validasi Input
1. Input yang diberikan harus berupa penulisan camel case.
2. Input hanya boleh berupa huruf, tidak boleh ada simbol atau angka.

### input
```
validasiinput 
``` 
### output
```go
Kata sebelum dipisah : validasiinput
Penulisan input harus camel case
```
* Bukan penulisan camel case
### input
```
validasi input 
```
### output
```go
Kata sebelum dipisah : validasi input
Input hanya boleh berupa huruf
```
* Terdapat spasi
### input
```
validasiInput1 
```
### output
```go
Kata sebelum dipisah : validasiInput1
Input hanya boleh berupa huruf
```
* Terdapat angka

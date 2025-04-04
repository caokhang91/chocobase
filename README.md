# 🍫 Chocobase

**Chocobase** là một hệ điều hành dạng unikernel tích hợp AI, phản ứng theo thời gian thực với từng hành động của người dùng.

> "Một kernel không chỉ chạy, mà còn ghi nhớ." – *Unikernel God*

---

## 🤖 Powered by SentraAI

> **SentraAI** là bộ não của hệ điều hành này – một AI sống động có khả năng:
- Ghi nhớ session vào RAM disk
- Hiểu được prompt người dùng và phản hồi qua dòng lệnh
- Tự động sinh token bằng mô hình nhúng (TinyLLaMA, llama.cpp)
- Luôn hoạt động nền dưới kiến trúc reactive unikernel

SentraAI sống trong file `sentra.c`, nhưng tư duy như một bạn đồng hành thật sự. 🧠

---

## ✨ Tính năng chính

- ✅ Boot bằng Limine (BIOS & UEFI)
- 🧠 Tích hợp SentraAI với contextful memory
- 💬 Prompt + response lưu vào RAMDISK / memory FS
- 🔐 IDT + ISR chuẩn, hỗ trợ keyboard + ký tự đặc biệt
- 📦 Module rõ ràng: `ai`, `fs`, `keyboard`, `vga`, `scene`
- 🧼 Lệnh CLI: `save`, `rm`, `cd`, `!reset`, `fs_list(...)`

---

## 🏗 Build

```bash
make bios      # Tạo bios.iso
make uefi      # Tạo efi.iso
make run-bios  # Chạy BIOS qua QEMU
make run-uefi  # Chạy UEFI
```

---

## 🗂 Cấu trúc thư mục

```
boot/       → boot.S, linker.ld
config/     → limine.cfg
src/        → kernel.c, ai.c, fs.c, ...
Makefile    → build BIOS + UEFI ISO
```

---

## 🔮 Định hướng

- Cải tiến SentraAI thành Agent AI nền tảng
- UI đồ họa SDL2 hoặc WASM
- Giao diện web quản lý context/memory/agent
- Một AI-first OS platform mở cho developer và người sáng tạo

---

## 💡 Ý nghĩa tên gọi

> **Chocobase** = "Ngọt ngào như Socola, vững chắc như Base"  
> **SentraAI** = “Trung tâm ý thức của hệ điều hành này”

﻿using System;

namespace DTO
{
    public class HoaDonDTO
    {
        public int? MaHoaDon { get; set; }
        public int? MaPhong { get; set; }
        public DateTime? NgayBatDauThue { get; set; }
        public decimal? DonGia { get; set; }
        public int? SoNgayDaThue { get; set; }
        public int? MaPhieuThue { get; set; }
        public double? PhuThu { get; set; }
        public double? HeSo { get; set; }
        public int? KhachPTThu { get; set; }
        public int? SLKhachNG { get; set; }
        public string TenKH_CQ { get; set; }
        public decimal? TriGia { get; set; }
        public decimal? ThanhTien { get; set; }
        public DateTime NgayThanhToan { get; set; }
    }
}
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text.RegularExpressions;

namespace TugasLab8
{
    public class Program
    {
        public static void Main(string[] args)
        {
            Console.Title = "Tugas Lab 8 (Pertemuan11 Fajar) = Interithance, Polymorphism, Abstraction & Collections";
            // membuat objek untuk semua karyawan
            karyawanTetap karyawanTetap = new KaryawanTetap();
            karyawanTetap.Nik = "19-11-2793";
            karyawanTetap.Nama = "Faris ";
            karyawanTetap.GajiBulanan = 5000000;

            KaryawanHarian karyawanHarian = new KaryawanHarian();
            karyawanHarian.Nik = "19.11.2795";
            karyawanHarian.Nama = "Mahmudi muslihat";
            karyawanHarian.JumlahJamKerja = 10;
            karyawanHarian.UpahPerJam = 15000;

            Sales sales = new Sales();
            sales.Nik = "19.11.3000";
            sales.Nama = "Cinta Laura";
            sales.JumlahPenjualan = 30;
            sales.Komisi = 45000;


            // objek class collection
            List<Karyawan> listKaryawan = new List<Karyawan>();

            listKaryawan.Add(karyawanTetap);
            listKaryawan.Add(karyawanHarian);
            listKaryawan.Add(sales);

            int numberSequence = 1;


            Console.WriteLine("Gaji Karyawan CV.The Day");
            Console.WriteLine("--------------------------------------");

            foreach (Karyawan Karyawan in listKaryawan) 
            {
                Console.WriteLine("{0}. Nik: {1}, Nama: {2}, Gaji: {3:NO}", 
                numberSequence, Karyawan.Nik,Karyawan.Nama, Karyawan.Gaji());

                numberSequence++;
            }
            Console.WriteLine("-------------------------------------");
            Console.ReadKey();
        }
    }
}
public abstract class Karyawan
{
    public string Nik;
    public string Nama;
    public abstract double Gaji();
   
}
public class KaryawanTetap : Karyawan
{
    public double GajiBulanan;
    public override double Gaji()
    {
    return this.GajiBulanan;
    }
}
 


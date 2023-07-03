# Dice-rate-calculator

Bu program, kullanıcının istediği miktarda zarın atılmasıyla ilgili istatistikleri hesaplamak için kullanılır. Programın amacı, zar atma işlemi sonucunda elde edilen sayıların yüzdelik dağılımlarını göstermektir.

## Nasıl Kullanılır?

1. Program çalıştırıldığında, kullanıcıya zar miktarını hesaplamak isteyip istemediği sorulur.
2. Eğer sadece 1 zarın yüzdelik dağılımını hesaplamak istiyorsanız, 1'e basın.
3. Eğer 2 zarın toplamının yüzdelik dağılımını hesaplamak istiyorsanız, 2'ye basın.
4. Programın çalışmasını sonlandırmak için 0'a basın.

## Hesaplama Süreci

1. İstenilen zar miktarı belirlendikten sonra, belirli bir sayıda zar atılır (varsayılan olarak 10,000 kez).
2. Her zar atışında, zarların değerleri rastgele belirlenir (1 ile 6 arasında).
3. Zarların değerlerinin toplamına bağlı olarak, ilgili sayaçlar güncellenir.
4. Hesaplanan sayı miktarları yüzdelik oranlara dönüştürülür.
5. Sonuçlar, her sayının yüzdelik dağılımı ve toplam yüzdelik oranı olarak ekrana yazdırılır.

## Sonuçların Gösterimi

Program, hesaplanan yüzdelik oranları bir tablo şeklinde gösterir. Her bir satır, bir sayıyı temsil eder ve yüzdelik oranı '*' karakteriyle gösterilir. Toplam yüzdelik oranlarını içeren bir satır da tablonun en altında yer alır.

## Notlar

- Programın doğru sonuçlar vermesi için, rastgele sayı üretimi için zaman fonksiyonunu (`srand(time(NULL))`) kullanır.
- Kodun içerisindeki döngüler, değişkenler ve diziler, hesaplama sürecini desteklemek için kullanılır.

---

Bu program, zar oyunlarının istatistiklerini hesaplama ve görselleştirme için kullanılabilir. Örneğin, belirli bir zar oyununda hangi sayıların daha sık geldiğini veya iki zarın toplamının hangi değerlerde daha yaygın olduğunu görmek istediğinizde bu programı kullanabilirsiniz. Ayrıca, zar oyunlarının olasılık hesaplamalarıyla ilgilenen öğrenciler veya zar oyunları üzerine çalışan araştırmacılar için de faydalı olabilir.


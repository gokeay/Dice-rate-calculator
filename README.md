## English

# Dice-rate-calculator

This program is used to calculate statistics about the outcomes of rolling dice based on the user's input. The purpose of the program is to show the percentage distribution of numbers obtained from dice rolls.

## How to Use

1. When the program is run, the user is prompted to choose the number of dice to calculate the statistics for.
2. Press '1' if you want to calculate the statistics for a single die.
3. Press '2' if you want to calculate the statistics for the sum of two dice.
4. Press '0' to exit the program.

## Calculation Process

1. After selecting the desired number of dice, a specified number of dice rolls are performed (default is 10,000 times).
2. In each dice roll, the values of the dice are randomly determined (between 1 and 6).
3. Based on the sum of the dice values, the corresponding counters are updated.
4. The calculated counts are converted into percentage distributions.
5. The results are displayed, showing the percentage distribution of each number and the total percentage.

## Result Presentation

The program presents the calculated percentage distributions in a tabular format. Each row represents a number, and the percentage distribution is shown with the '*' character. A row at the bottom of the table displays the total percentage distribution.

## Notes

- To ensure accurate results, the program uses the time function (`srand(time(NULL))`) for random number generation.
---

This program can be used to see which numbers are more likely to occur in a specific dice game or to analyze the distribution of the sum of two dice.



## Türkçe

# Zar-istatistiği-hesaplayıcı

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

---

Bu program, belirli bir zar oyununda hangi sayıların daha sık geldiğini veya iki zarın toplamının hangi değerlerde daha yaygın olduğunu görmek istediğinizde bu programı kullanabilirsiniz.


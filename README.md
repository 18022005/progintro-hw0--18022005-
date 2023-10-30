(bandit0 to bandit1)
ls για να δω το αρχειο readme,
cat readme ωστε να μας εμφανησει τον κωδικο που χρειαζομαστε για να παμε στο επομενο επιπεδο. 
(bandit1 to bandit2)
ls για να δω το αρχειο - 
μετα cat ./- για να δω τον κωδικο 
(bandit2 to bandit3)
ls για να δω τα αρχεια
cat "spaces in this filename"
(bandit3 to bandit4)
ls για να δω τα directories,
cd inhere 
find για να βρει αρχεια στο directory
 cat ./.hidden 
(bandit4 to bandit5)
ls ωστε να δω directories
cd inhere
ls για να δω τα αρχεια που βρισκονται μεσα στο inhere
file./*  για να παρουμε περισσοτερες πληροφοριες για τα files 
cat ./-file07
(bandit5 to bandit6)
ls να δω τα directories
cd inhere
find -readable -size 1033c ! -executable   οπου -readable για human-readale -size 1033c για την χωριτηκοτητα και το c για τα bytes και ! -executable για το not executable.Επειτα μας εβαγλε ενα αρχειο με αυτα τα στοιχεια το ./maybehere07/.file2 αρα cat ./maybehere07/.file2 ωστε να δουμε τα περιεχομενα του.
(bandit6 to bandit7)
find /  -size 33c -group bandit6 -user bandit7
(bandit7 to bandit8)
ls για να δω τα directories, cat data.txt ομως επειδη εχει πολλα δεδομενα και για να μην ψαχνουμε μεσα σε αυτα παταμε την εντολη grep millionth data.txt
(bandit8 to bandit9)
ls για να δω τα directories,sort data.txt και ψαχνω να βρω ποιος απο ολους τους κωδικους εχει επαναληυθει μια μονο φορα 
(bandit9 to bandit10)
ls, strings data.txt, strings data.txt | grep -E "=+"


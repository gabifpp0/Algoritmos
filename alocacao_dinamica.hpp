#ifndef __ARRAY_LIST_IFRN__
#define __ARRAY_LIST_IFRN__

class array_list {
    private:
        int *data;
        int size_;
        int capacity_;
        
        void increase_capacity() {
            capacity_ = 100;
            int *novo_array = new int[capacity_];
            for (int i = 0; i < size_; i++){
                novo_array[i] = data[i];
            }
            delete [] data;
            data = novo_array;
        };
     
    public:
        
        void Construtor() {
            capacity_ = 100;
            size_ = sizeof(data) / sizeof(data[0]);
            data = new int[capacity_];
        }; //Construtor
        ~array_list() {
            delete [] data;
        }; //Destrutor
        
        unsigned int size() {
            return size_;
        }; //Retorna a quantidade de elementos armazenados
        
        unsigned int capacity() {
            return capacity_;
        };  //Retorna o espaço reservado para armazenar os elementos
        
        double percent_occupied() {
            return size_/capacity_;
        }; //Retorna um valor entre 0.0 a 1.0 com percentual da memmória usada

        bool insert_at(unsigned int index, int value) {           
            if (index >= 0 && index < size_) { // Verifica se o index bate com o tamanho do array
                for (int t = size_ - 1; t > index; --t) { // Percorre os elementos até que t ser maior que index 
                    data[t] = data[t - 1]; // Redefine os valores dos elementos e os move para a direita durante o loop
                }
            }
                data[index] = value; // Insere o valor no index
            }
        bool remove_at(unsigned int index) {
             for (int t = index; t < size_ - 1; t++) { // Percorre os valores até t ser igualado a size - 1
                data[t] = data[t + 1]; // Substitui valores a partir do inder já que t = index, e os move para a esquerda 
            }
            size_--; // Reajusta o tamanho do array diminuindo
            return true;
    }
        void push_back(int value) {
            increase_capacity();
            for (int t = 0; t < size_ - 1; t++) { //
                data[t] = data[t + 1]; //
            }
            data[size_] = value;
        }

        void push_front(int value) {
            increase_capacity();
            for (int t = size_; t > size_; --t) {
                data[t] = data[t - 1];
            }
            data[0] = value;
        }

        bool pop_back() {

        }

        bool pop_front() {

        }

        void clear() {
            delete [] data;
            capacity_ = 100;
            data = new int[capacity_];
        }
        
        int back() {
            return data[size_];
        }

        int front() {
            return data[0];
        }
};
        bool remove(int value) {
            
        }

        int find () {

        }

        int sum(int value){
            for (i = 0; i < size_, i++) {
                value += data[i]
            }
            return value;
        }
#endif 

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
            size_ = 0;
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
                for (int t = size_ - 1; t > index; --t) { // Move os elementos para do lado até chegar ao valor de index
                    data[t] = data[t - 1]; // Move os elementos para do lado até chegar ao valor de index
                }
            }
                data[index] = value; // Insere o valor no index
            }
        bool remove_at(unsigned int index) {
            return 0;
    }
};

#endif 
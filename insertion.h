#ifndef _INSERTION_H_
#define _INSERTION_H_

class cinsertion{
    public:
        cinsertion(); // construcotr
        virtual ~cinsertion(); // destructor
        void show(int *num);
        void swap(int *x, int *y);
        void isort(int *num);
        int size = 10;
};

#endif
class AddCommand {
    protected:
        Base* root;
    
    public:
        Command(*BaseFactory factory) { this->root = factory; }
        double execute() { return root->evaluate(); }
        std::string stringify() { return root->stringify(); }
        Base* get_root() { return root; }
};

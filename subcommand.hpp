class SubCommand {
    protected:
        Base* root;
    
    public:
        Command(*Ba) { this->root = nullptr; }
        double execute() { return root->evaluate(); }
        std::string stringify() { return root->stringify(); }
        Base* get_root() { return root; }
};

#ifndef UNIFIER_HH
#define UNIFIER_HH

#include "utils/gdl/literal.hh"
#include "utils/gdl/term.hh"
#include "utils/gdl/variable.hh"
namespace Ares
{
    class Unifier
    {
    private:
        Unifier(/* args */){};
    public:
        static bool unifyPredicate(Literal& l1, Literal& l2,Substitution& sub);
        static bool unifyTerm(Term& t1, Term& t2,Substitution& sub);
        ~Unifier();
    };
    Unifier::~Unifier()
    {
    }
} // namespace Ares

#endif
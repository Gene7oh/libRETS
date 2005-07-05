/*
 * Copyright (C) 2005 National Association of REALTORS(R)
 *
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, and/or sell copies of the
 * Software, and to permit persons to whom the Software is furnished
 * to do so, provided that the above copyright notice(s) and this
 * permission notice appear in all copies of the Software and that
 * both the above copyright notice(s) and this permission notice
 * appear in supporting documentation.
 */
#ifndef LIBRETS_LITERAL_CRITERION_H
#define LIBRETS_LITERAL_CRITERION_H

#include <string>
#include "librets/DmqlCriterion.h"

namespace librets {

class LiteralCriterion : public DmqlCriterion
{
  public:
    LiteralCriterion();
    LiteralCriterion(std::string aString);

    virtual std::ostream & ToDmql(std::ostream & outputStream) const;

    virtual std::ostream & Print(std::ostream & outputStream) const;

    virtual bool Equals(const RetsObject * object) const;

  private:
    std::string mString;
};

};

#endif

/* Local Variables: */
/* mode: c++ */
/* End: */
// File:        option.h
// Author:      Zakhary Kaplan <https://zakharykaplan.ca>
// Created:     23 Dec 2020
// SPDX-License-Identifier: MIT

#pragma once

#include <iosfwd>
#include <string>

#include "clip/param.h"

namespace clip {

// class Option
class Option : public virtual Param {
private:
    // mut members
    std::string longname_;
    char shortname_;

protected:
    // impl members
    unsigned int count_;

public:
    // ctors
    Option(const char *name);

    // dtor
    ~Option() = 0;

    // builders
    virtual Option &longname(const char *s);
    virtual Option &shortname(char c);
    // builders (override)
    virtual Option &help(const char *s) override;

    // accessors
    virtual const char *longname() const final;
    virtual char shortname() const final;
    virtual unsigned int count() const final;
    // accessors (using)
    using Param::help;

    // methods
    virtual void match() final;
};

} // namespace clip

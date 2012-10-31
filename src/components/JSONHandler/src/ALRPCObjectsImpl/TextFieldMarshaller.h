#ifndef TEXTFIELDMARSHALLER_INCLUDE
#define TEXTFIELDMARSHALLER_INCLUDE

#include <string>
#include <json/value.h>
#include <json/reader.h>
#include <json/writer.h>

#include "../../include/JSONHandler/ALRPCObjects/TextField.h"


/*
  interface	Ford Sync RAPI
  version	1.2
  date		2011-05-17
  generated at	Tue Oct 30 08:29:32 2012
  source stamp	Thu Oct 25 06:49:27 2012
  author	robok0der
*/


struct TextFieldMarshaller
{
  static bool checkIntegrity(TextField& e);
  static bool checkIntegrityConst(const TextField& e);

  static bool fromString(const std::string& s,TextField& e);
  static const std::string toString(const TextField& e);

  static bool fromJSON(const Json::Value& s,TextField& e);
  static Json::Value toJSON(const TextField& e);
};
#endif

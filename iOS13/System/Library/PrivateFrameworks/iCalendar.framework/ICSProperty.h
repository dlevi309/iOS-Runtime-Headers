/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/ICSWriting.h>

@class NSMutableDictionary;

@interface ICSProperty : NSObject <NSSecureCoding, ICSWriting> {

	NSMutableDictionary* _parameters;
	unsigned long long _type;
	id _value;

}
+(BOOL)supportsSecureCoding;
-(id)description;
-(unsigned long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)stringValue;
-(id)value;
-(id)parameters;
-(void)setParameters:(id)arg1 ;
-(id)initWithValue:(id)arg1 type:(unsigned long long)arg2 ;
-(id)allParameters;
-(BOOL)isMultiValued;
-(id)parameterValueForName:(id)arg1 ;
-(void)setValue:(id)arg1 type:(unsigned long long)arg2 ;
-(void)setParameterValue:(id)arg1 forName:(id)arg2 ;
-(id)ICSStringWithOptions:(unsigned long long)arg1 ;
-(void)addParametersFromDictionary:(id)arg1 ;
-(id)propertiesToIncludeForChecksumVersion:(int)arg1 ;
-(id)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)arg1 ;
-(id)propertiesToObscure;
-(void)ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(id)parametersToIncludeForChecksumVersion:(int)arg1 ;
-(id)parametersToObscure;
-(BOOL)shouldObscureValue;
-(void)removeParameterValueForName:(id)arg1 ;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(BOOL)alwaysHasParametersToSerialize;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 additionalParameters:(id)arg3 ;
-(void)_appendDateTimeInDate:(id)arg1 asUTCToResult:(id)arg2 ;
-(void)addParameter:(id)arg1 withRawValue:(id)arg2 options:(unsigned long long)arg3 ;
-(void)setValueAsProperty:(id)arg1 withRawValue:(const char*)arg2 options:(unsigned long long)arg3 ;
-(void)_setParsedValues:(id)arg1 type:(unsigned long long)arg2 ;
@end


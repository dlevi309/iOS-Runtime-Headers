/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)parameters;
-(void)setParameters:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)stringValue;
-(id)description;
-(BOOL)isMultiValued;
-(id)allParameters;
-(unsigned long long)type;
-(void)addParametersFromDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)parameterValueForName:(id)arg1 ;
-(void)setParameterValue:(id)arg1 forName:(id)arg2 ;
-(void)setValue:(id)arg1 type:(unsigned long long)arg2 ;
-(id)ICSStringWithOptions:(unsigned long long)arg1 ;
-(id)initWithValue:(id)arg1 type:(unsigned long long)arg2 ;
-(id)value;
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


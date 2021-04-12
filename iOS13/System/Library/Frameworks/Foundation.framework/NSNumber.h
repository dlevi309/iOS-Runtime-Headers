/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSValue.h>

@class NSString;

@interface NSNumber : NSValue

@property (readonly) SCD_Struct_NS48 decimalValue; 
@property (readonly) char charValue; 
@property (readonly) unsigned char unsignedCharValue; 
@property (readonly) short shortValue; 
@property (readonly) unsigned short unsignedShortValue; 
@property (readonly) int intValue; 
@property (readonly) unsigned unsignedIntValue; 
@property (readonly) long long longValue; 
@property (readonly) unsigned long long unsignedLongValue; 
@property (readonly) long long longLongValue; 
@property (readonly) unsigned long long unsignedLongLongValue; 
@property (readonly) float floatValue; 
@property (readonly) double doubleValue; 
@property (readonly) BOOL boolValue; 
@property (readonly) long long integerValue; 
@property (readonly) unsigned long long unsignedIntegerValue; 
@property (copy,readonly) NSString * stringValue; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)numberWithFloat:(float)arg1 ;
+(id)numberWithUnsignedInteger:(unsigned long long)arg1 ;
+(id)numberWithInteger:(long long)arg1 ;
+(id)numberWithInt:(int)arg1 ;
+(id)numberWithDouble:(double)arg1 ;
+(id)numberWithUnsignedLong:(unsigned long long)arg1 ;
+(id)numberWithBool:(BOOL)arg1 ;
+(id)numberWithUnsignedLongLong:(unsigned long long)arg1 ;
+(id)numberWithLongLong:(long long)arg1 ;
+(id)numberWithChar:(char)arg1 ;
+(id)numberWithUnsignedChar:(unsigned char)arg1 ;
+(id)numberWithShort:(short)arg1 ;
+(id)numberWithUnsignedShort:(unsigned short)arg1 ;
+(id)numberWithUnsignedInt:(unsigned)arg1 ;
+(id)numberWithLong:(long long)arg1 ;
-(float)floatValue;
-(double)doubleValue;
-(long long)longLongValue;
-(unsigned long long)unsignedLongLongValue;
-(id)initWithChar:(char)arg1 ;
-(id)initWithUnsignedChar:(unsigned char)arg1 ;
-(id)initWithShort:(short)arg1 ;
-(id)initWithUnsignedShort:(unsigned short)arg1 ;
-(id)initWithInt:(int)arg1 ;
-(id)initWithUnsignedInt:(unsigned)arg1 ;
-(id)initWithLong:(long long)arg1 ;
-(id)initWithLongLong:(long long)arg1 ;
-(id)initWithUnsignedLongLong:(unsigned long long)arg1 ;
-(id)initWithDouble:(double)arg1 ;
-(BOOL)isNSNumber__;
-(char)charValue;
-(unsigned char)unsignedCharValue;
-(short)shortValue;
-(unsigned short)unsignedShortValue;
-(int)intValue;
-(unsigned)unsignedIntValue;
-(long long)longValue;
-(unsigned long long)unsignedLongValue;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)redactedDescription;
-(BOOL)boolValue;
-(long long)_cfNumberType;
-(unsigned char)_getValue:(void*)arg1 forType:(long long)arg2 ;
-(long long)compare:(id)arg1 ;
-(long long)_reverseCompare:(id)arg1 ;
-(BOOL)_getCString:(char*)arg1 length:(int)arg2 multiplier:(double)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(BOOL)isEqualToNumber:(id)arg1 ;
-(id)descriptionWithLocale:(id)arg1 ;
-(NSString *)stringValue;
-(long long)integerValue;
-(unsigned long long)unsignedIntegerValue;
-(unsigned long long)_cfTypeID;
-(BOOL)_allowsDirectEncoding;
-(id)initWithBool:(BOOL)arg1 ;
-(id)initWithFloat:(float)arg1 ;
-(id)initWithUnsignedLong:(unsigned long long)arg1 ;
-(SCD_Struct_NS48)decimalValue;
-(id)initWithInteger:(long long)arg1 ;
-(id)initWithUnsignedInteger:(unsigned long long)arg1 ;
@end


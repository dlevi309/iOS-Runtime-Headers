/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSValue.h>
#import <libobjc.A.dylib/RBSProcessIdentifier.h>
#import <libobjc.A.dylib/NSFetchRequestResult.h>

@class NSString;

@interface NSNumber : NSValue <RBSProcessIdentifier, NSFetchRequestResult>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) SCD_Struct_NS16 decimalValue; 
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
+(void)initialize;
+(id)numberWithInt:(int)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)numberWithBool:(BOOL)arg1 ;
+(id)numberWithDouble:(double)arg1 ;
+(id)numberWithUnsignedInteger:(unsigned long long)arg1 ;
+(id)numberWithFloat:(float)arg1 ;
+(id)numberWithUnsignedShort:(unsigned short)arg1 ;
+(id)numberWithUnsignedChar:(unsigned char)arg1 ;
+(id)numberWithUnsignedInt:(unsigned)arg1 ;
+(id)numberWithUnsignedLongLong:(unsigned long long)arg1 ;
+(id)numberWithUnsignedLong:(unsigned long long)arg1 ;
+(id)numberWithInteger:(long long)arg1 ;
+(id)numberWithLongLong:(long long)arg1 ;
+(id)numberWithLong:(long long)arg1 ;
+(id)numberWithChar:(char)arg1 ;
+(id)numberWithShort:(short)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
-(BOOL)matchesProcess:(id)arg1 ;
-(int)rbs_pid;
-(id)processPredicate;
-(BOOL)isNSNumber__;
-(long long)_cfNumberType;
-(long long)_reverseCompare:(id)arg1 ;
-(BOOL)isEqualToNumber:(id)arg1 ;
-(unsigned char)_getValue:(void*)arg1 forType:(long long)arg2 ;
-(BOOL)_getCString:(char*)arg1 length:(int)arg2 multiplier:(double)arg3 ;
-(long long)integerValue;
-(double)doubleValue;
-(unsigned long long)unsignedLongValue;
-(long long)compare:(id)arg1 ;
-(BOOL)boolValue;
-(unsigned long long)_cfTypeID;
-(id)initWithLongLong:(long long)arg1 ;
-(float)floatValue;
-(unsigned)unsignedIntValue;
-(id)descriptionWithLocale:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithFloat:(float)arg1 ;
-(NSString *)stringValue;
-(id)initWithDouble:(double)arg1 ;
-(id)initWithLong:(long long)arg1 ;
-(id)initWithUnsignedLongLong:(unsigned long long)arg1 ;
-(NSString *)description;
-(Class)classForCoder;
-(id)initWithShort:(short)arg1 ;
-(unsigned long long)unsignedIntegerValue;
-(id)initWithChar:(char)arg1 ;
-(unsigned short)unsignedShortValue;
-(id)initWithUnsignedShort:(unsigned short)arg1 ;
-(long long)longValue;
-(id)initWithUnsignedLong:(unsigned long long)arg1 ;
-(char)charValue;
-(unsigned char)unsignedCharValue;
-(unsigned long long)hash;
-(id)initWithInteger:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithUnsignedChar:(unsigned char)arg1 ;
-(int)intValue;
-(short)shortValue;
-(id)initWithUnsignedInt:(unsigned)arg1 ;
-(id)initWithBool:(BOOL)arg1 ;
-(id)initWithInt:(int)arg1 ;
-(SCD_Struct_NS16)decimalValue;
-(id)initWithUnsignedInteger:(unsigned long long)arg1 ;
-(id)redactedDescription;
-(BOOL)_allowsDirectEncoding;
-(long long)longLongValue;
-(unsigned long long)unsignedLongLongValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


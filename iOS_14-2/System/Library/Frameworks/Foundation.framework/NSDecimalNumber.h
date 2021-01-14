/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSNumber.h>

@interface NSDecimalNumber : NSNumber {

	unsigned _exponent : 8;
	unsigned _length : 4;
	unsigned _isNegative : 1;
	unsigned _isCompact : 1;
	unsigned _reserved : 1;
	unsigned _hasExternalRefCount : 1;
	unsigned _refs : 16;
	unsigned short _mantissa[0];

}

@property (readonly) SCD_Struct_NS16 decimalValue; 
@property (readonly) const char* objCType; 
@property (readonly) double doubleValue; 
+(id)one;
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
+(id)decimalNumberWithDecimal:(SCD_Struct_NS16)arg1 ;
+(id)decimalNumberWithMantissa:(unsigned long long)arg1 exponent:(short)arg2 isNegative:(BOOL)arg3 ;
+(id)numberWithLongLong:(long long)arg1 ;
+(id)numberWithLong:(long long)arg1 ;
+(id)notANumber;
+(id)decimalNumberWithString:(id)arg1 locale:(id)arg2 ;
+(id)minimumDecimalNumber;
+(id)numberWithChar:(char)arg1 ;
+(id)maximumDecimalNumber;
+(id)decimalNumberWithString:(id)arg1 ;
+(id)numberWithShort:(short)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)zero;
+(void)setDefaultBehavior:(id)arg1 ;
+(id)defaultBehavior;
-(BOOL)_getCString:(char*)arg1 length:(int)arg2 multiplier:(double)arg3 ;
-(id)initWithString:(id)arg1 ;
-(double)doubleValue;
-(unsigned long long)unsignedLongValue;
-(long long)compare:(id)arg1 ;
-(BOOL)boolValue;
-(id)decimalNumberByMultiplyingByPowerOf10:(short)arg1 withBehavior:(id)arg2 ;
-(id)decimalNumberBySubstracting:(id)arg1 withBehavior:(id)arg2 ;
-(float)floatValue;
-(id)decimalNumberByDividingBy:(id)arg1 withBehavior:(id)arg2 ;
-(id)decimalNumberByRaisingToPower:(unsigned long long)arg1 withBehavior:(id)arg2 ;
-(id)decimalNumberByMultiplyingBy:(id)arg1 withBehavior:(id)arg2 ;
-(id)decimalNumberByRoundingAccordingToBehavior:(id)arg1 ;
-(id)decimalNumberBySubtracting:(id)arg1 withBehavior:(id)arg2 ;
-(unsigned)unsignedIntValue;
-(id)decimalNumberByMultiplyingByPowerOf10:(short)arg1 ;
-(id)initWithMantissa:(unsigned long long)arg1 exponent:(short)arg2 isNegative:(BOOL)arg3 ;
-(id)decimalNumberByAdding:(id)arg1 withBehavior:(id)arg2 ;
-(id)descriptionWithLocale:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)decimalNumberByRaisingToPower:(unsigned long long)arg1 ;
-(id)decimalNumberBySubstracting:(id)arg1 ;
-(id)decimalNumberByMultiplyingBy:(id)arg1 ;
-(id)decimalNumberBySubtracting:(id)arg1 ;
-(id)decimalNumberByDividingBy:(id)arg1 ;
-(id)description;
-(id)initWithDecimal:(SCD_Struct_NS16)arg1 ;
-(id)decimalNumberByAdding:(id)arg1 ;
-(Class)classForCoder;
-(id)copy;
-(void)getValue:(void*)arg1 ;
-(unsigned short)unsignedShortValue;
-(long long)longValue;
-(id)initWithString:(id)arg1 locale:(id)arg2 ;
-(char)charValue;
-(unsigned char)unsignedCharValue;
-(id)initWithCoder:(id)arg1 ;
-(int)intValue;
-(short)shortValue;
-(SCD_Struct_NS16)decimalValue;
-(BOOL)_allowsDirectEncoding;
-(long long)longLongValue;
-(unsigned long long)unsignedLongLongValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(const char*)objCType;
-(BOOL)isEqual:(id)arg1 ;
@end


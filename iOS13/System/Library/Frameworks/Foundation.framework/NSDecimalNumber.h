/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) SCD_Struct_NS48 decimalValue; 
@property (readonly) const char* objCType; 
@property (readonly) double doubleValue; 
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
+(id)zero;
+(id)decimalNumberWithDecimal:(SCD_Struct_NS48)arg1 ;
+(id)numberWithLongLong:(long long)arg1 ;
+(id)numberWithChar:(char)arg1 ;
+(id)numberWithUnsignedChar:(unsigned char)arg1 ;
+(id)numberWithShort:(short)arg1 ;
+(id)numberWithUnsignedShort:(unsigned short)arg1 ;
+(id)numberWithUnsignedInt:(unsigned)arg1 ;
+(id)numberWithLong:(long long)arg1 ;
+(id)notANumber;
+(id)defaultBehavior;
+(id)decimalNumberWithMantissa:(unsigned long long)arg1 exponent:(short)arg2 isNegative:(BOOL)arg3 ;
+(id)decimalNumberWithString:(id)arg1 ;
+(id)decimalNumberWithString:(id)arg1 locale:(id)arg2 ;
+(id)minimumDecimalNumber;
+(id)maximumDecimalNumber;
+(id)one;
+(void)setDefaultBehavior:(id)arg1 ;
-(float)floatValue;
-(double)doubleValue;
-(long long)longLongValue;
-(unsigned long long)unsignedLongLongValue;
-(const char*)objCType;
-(char)charValue;
-(unsigned char)unsignedCharValue;
-(short)shortValue;
-(unsigned short)unsignedShortValue;
-(int)intValue;
-(unsigned)unsignedIntValue;
-(long long)longValue;
-(unsigned long long)unsignedLongValue;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(BOOL)boolValue;
-(long long)compare:(id)arg1 ;
-(BOOL)_getCString:(char*)arg1 length:(int)arg2 multiplier:(double)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(id)descriptionWithLocale:(id)arg1 ;
-(void)getValue:(void*)arg1 ;
-(id)initWithString:(id)arg1 ;
-(BOOL)_allowsDirectEncoding;
-(SCD_Struct_NS48)decimalValue;
-(id)decimalNumberByDividingBy:(id)arg1 ;
-(id)initWithString:(id)arg1 locale:(id)arg2 ;
-(id)initWithDecimal:(SCD_Struct_NS48)arg1 ;
-(id)initWithMantissa:(unsigned long long)arg1 exponent:(short)arg2 isNegative:(BOOL)arg3 ;
-(id)decimalNumberByAdding:(id)arg1 withBehavior:(id)arg2 ;
-(id)decimalNumberBySubtracting:(id)arg1 withBehavior:(id)arg2 ;
-(id)decimalNumberByMultiplyingBy:(id)arg1 withBehavior:(id)arg2 ;
-(id)decimalNumberByDividingBy:(id)arg1 withBehavior:(id)arg2 ;
-(id)decimalNumberByRaisingToPower:(unsigned long long)arg1 withBehavior:(id)arg2 ;
-(id)decimalNumberByMultiplyingByPowerOf10:(short)arg1 withBehavior:(id)arg2 ;
-(id)decimalNumberByMultiplyingBy:(id)arg1 ;
-(id)decimalNumberByAdding:(id)arg1 ;
-(id)decimalNumberBySubstracting:(id)arg1 ;
-(id)decimalNumberBySubstracting:(id)arg1 withBehavior:(id)arg2 ;
-(id)decimalNumberBySubtracting:(id)arg1 ;
-(id)decimalNumberByRaisingToPower:(unsigned long long)arg1 ;
-(id)decimalNumberByMultiplyingByPowerOf10:(short)arg1 ;
-(id)decimalNumberByRoundingAccordingToBehavior:(id)arg1 ;
@end


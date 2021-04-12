/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <Foundation/NSValue.h>

@interface CMTimeAsValue : NSValue {

	SCD_Struct_AV7 _time;

}
+(BOOL)supportsSecureCoding;
+(id)valueWithCMTime:(SCD_Struct_AV7)arg1 ;
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
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)boolValue;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(void)getValue:(void*)arg1 ;
-(long long)integerValue;
-(unsigned long long)unsignedIntegerValue;
-(BOOL)isEqualToValue:(id)arg1 ;
-(SCD_Struct_AV7)CMTimeValue;
@end


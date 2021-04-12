/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <Foundation/NSValue.h>

@interface CMTimeAsValue : NSValue {

	SCD_Struct_AV6 _time;

}
+(BOOL)supportsSecureCoding;
+(id)valueWithCMTime:(SCD_Struct_AV6)arg1 ;
-(long long)integerValue;
-(double)doubleValue;
-(unsigned long long)unsignedLongValue;
-(BOOL)boolValue;
-(float)floatValue;
-(unsigned)unsignedIntValue;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(Class)classForCoder;
-(SCD_Struct_AV6)CMTimeValue;
-(unsigned long long)unsignedIntegerValue;
-(void)getValue:(void*)arg1 ;
-(unsigned short)unsignedShortValue;
-(long long)longValue;
-(char)charValue;
-(unsigned char)unsignedCharValue;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToValue:(id)arg1 ;
-(int)intValue;
-(short)shortValue;
-(long long)longLongValue;
-(unsigned long long)unsignedLongLongValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(const char*)objCType;
@end


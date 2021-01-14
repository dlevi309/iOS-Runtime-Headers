/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <Foundation/NSValue.h>

@interface CMTimeRangeAsValue : NSValue {

	SCD_Struct_AV7 _timeRange;

}
+(BOOL)supportsSecureCoding;
+(id)valueWithCMTimeRange:(SCD_Struct_AV7)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(SCD_Struct_AV7)CMTimeRangeValue;
-(Class)classForCoder;
-(void)getValue:(void*)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToValue:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(const char*)objCType;
@end


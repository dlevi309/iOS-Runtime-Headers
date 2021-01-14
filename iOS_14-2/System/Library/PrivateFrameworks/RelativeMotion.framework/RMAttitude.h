/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelativeMotion.framework/RelativeMotion
*/

#import <RelativeMotion/RelativeMotion-Structs.h>
#import <RelativeMotion/RMLogItem.h>

@interface RMAttitude : RMLogItem {

	SCD_Struct_RM3 _quaternion;

}

@property (nonatomic,readonly) SCD_Struct_RM3 quaternion;              //@synthesize quaternion=_quaternion - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(SCD_Struct_RM3)quaternion;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithQuaternion:(SCD_Struct_RM3)arg1 timestamp:(double)arg2 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@interface CMAccelerometerData : CMLogItem {

	id _internal;

}

@property (nonatomic,readonly) SCD_Struct_CM2 acceleration; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(SCD_Struct_CM2)acceleration;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithAcceleration:(SCD_Struct_CM1)arg1 andTimestamp:(double)arg2 ;
-(void)dealloc;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@class CMAttitude;

@interface CMPose : CMLogItem {

	id _internal;

}

@property (nonatomic,readonly) CMAttitude * attitude; 
@property (nonatomic,readonly) SCD_Struct_CM9 translation; 
@property (nonatomic,readonly) double consumedAuxTimestamp; 
@property (nonatomic,readonly) double receivedAuxTimestamp; 
@property (nonatomic,readonly) double machAbsTimestamp; 
+(BOOL)supportsSecureCoding;
-(id)initWithPose:(SCD_Struct_CM65)arg1 timestamp:(double)arg2 ;
-(double)machAbsTimestamp;
-(double)consumedAuxTimestamp;
-(double)receivedAuxTimestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqualToPose:(id)arg1 ;
-(id)description;
-(SCD_Struct_CM9)translation;
-(id)initWithCoder:(id)arg1 ;
-(CMAttitude *)attitude;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end


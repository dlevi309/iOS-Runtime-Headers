/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@class CMAttitude;

@interface CMDeviceMotion : CMLogItem {

	id _internal;

}

@property (nonatomic,readonly) BOOL doingYawCorrection; 
@property (nonatomic,readonly) BOOL doingBiasEstimation; 
@property (nonatomic,readonly) int magneticFieldCalibrationLevel; 
@property (nonatomic,readonly) double headingAccuracy; 
@property (nonatomic,readonly) CMAttitude * attitude; 
@property (nonatomic,readonly) SCD_Struct_CM9 rotationRate; 
@property (nonatomic,readonly) SCD_Struct_CM9 gravity; 
@property (nonatomic,readonly) SCD_Struct_CM9 userAcceleration; 
@property (nonatomic,readonly) SCD_Struct_CM13 magneticField; 
@property (nonatomic,readonly) double heading; 
@property (nonatomic,readonly) long long sensorLocation; 
+(BOOL)supportsSecureCoding;
-(double)heading;
-(SCD_Struct_CM9)userAcceleration;
-(long long)sensorLocation;
-(void)encodeWithCoder:(id)arg1 ;
-(int)magneticFieldCalibrationLevel;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(SCD_Struct_CM9)rotationRate;
-(BOOL)doingBiasEstimation;
-(CMAttitude *)attitude;
-(SCD_Struct_CM13)magneticField;
-(id)initWithDeviceMotion:(SCD_Struct_CM11)arg1 internal:(SCD_Struct_CM12)arg2 timestamp:(double)arg3 ;
-(double)headingAccuracy;
-(BOOL)doingYawCorrection;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCD_Struct_CM9)gravity;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end


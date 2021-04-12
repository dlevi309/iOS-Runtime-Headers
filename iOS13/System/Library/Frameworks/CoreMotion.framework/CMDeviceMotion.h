/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (nonatomic,readonly) SCD_Struct_CM316 rotationRate; 
@property (nonatomic,readonly) SCD_Struct_CM316 gravity; 
@property (nonatomic,readonly) SCD_Struct_CM316 userAcceleration; 
@property (nonatomic,readonly) SCD_Struct_CM320 magneticField; 
@property (nonatomic,readonly) double heading; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SCD_Struct_CM316)gravity;
-(double)heading;
-(double)headingAccuracy;
-(SCD_Struct_CM320)magneticField;
-(CMAttitude *)attitude;
-(SCD_Struct_CM316)userAcceleration;
-(SCD_Struct_CM316)rotationRate;
-(id)initWithDeviceMotion:(SCD_Struct_CM318)arg1 internal:(SCD_Struct_CM319)arg2 timestamp:(double)arg3 ;
-(int)magneticFieldCalibrationLevel;
-(BOOL)doingYawCorrection;
-(BOOL)doingBiasEstimation;
@end


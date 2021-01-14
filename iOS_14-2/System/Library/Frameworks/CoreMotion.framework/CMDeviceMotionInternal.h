/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CMAttitude;

@interface CMDeviceMotionInternal : NSObject <NSCopying> {

	SCD_Struct_CM9 fGravity;
	SCD_Struct_CM9 fUserAcceleration;
	SCD_Struct_CM9 fRotationRate;
	CMAttitude* fAttitude;
	SCD_Struct_CM9 fMagneticField;
	int fMagneticFieldCalibrationLevel;
	BOOL fDoingYawCorrection;
	BOOL fDoingBiasEstimation;
	float fHeading;
	float fHeadingAccuracy;
	long long fSensorLocation;

}
-(id)initWithDeviceMotion:(SCD_Struct_CM11)arg1 internal:(SCD_Struct_CM12)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setDeviceMotion:(SCD_Struct_CM11)arg1 internal:(SCD_Struct_CM12)arg2 ;
@end


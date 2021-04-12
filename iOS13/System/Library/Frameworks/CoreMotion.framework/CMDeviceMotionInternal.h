/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CMAttitude;

@interface CMDeviceMotionInternal : NSObject <NSCopying> {

	SCD_Struct_CM316 fGravity;
	SCD_Struct_CM316 fUserAcceleration;
	SCD_Struct_CM316 fRotationRate;
	CMAttitude* fAttitude;
	SCD_Struct_CM316 fMagneticField;
	int fMagneticFieldCalibrationLevel;
	BOOL fDoingYawCorrection;
	BOOL fDoingBiasEstimation;
	float fHeading;
	float fHeadingAccuracy;

}
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDeviceMotion:(SCD_Struct_CM318)arg1 internal:(SCD_Struct_CM319)arg2 ;
-(id)initWithDeviceMotion:(SCD_Struct_CM318)arg1 internal:(SCD_Struct_CM319)arg2 ;
@end


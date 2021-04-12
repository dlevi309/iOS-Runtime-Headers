/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
*/


@class CVACLMotionTypeDoubleVector4, CVACLMotionTypeVector3;

@interface CVACMMotionTypeDeviceMotionData : NSObject {

	BOOL _doingYawCorrection;
	BOOL _doingBiasEstimation;
	BOOL _isInitialized;
	int _magneticFieldCalibrationLevel;
	CVACLMotionTypeDoubleVector4* _quaternion;
	CVACLMotionTypeVector3* _userAcceleration;
	CVACLMotionTypeVector3* _gravity;
	CVACLMotionTypeVector3* _rotationRate;
	CVACLMotionTypeVector3* _magneticField;

}

@property (nonatomic,retain) CVACLMotionTypeDoubleVector4 * quaternion;              //@synthesize quaternion=_quaternion - In the implementation block
@property (nonatomic,retain) CVACLMotionTypeVector3 * userAcceleration;              //@synthesize userAcceleration=_userAcceleration - In the implementation block
@property (nonatomic,retain) CVACLMotionTypeVector3 * gravity;                       //@synthesize gravity=_gravity - In the implementation block
@property (nonatomic,retain) CVACLMotionTypeVector3 * rotationRate;                  //@synthesize rotationRate=_rotationRate - In the implementation block
@property (nonatomic,retain) CVACLMotionTypeVector3 * magneticField;                 //@synthesize magneticField=_magneticField - In the implementation block
@property (assign) int magneticFieldCalibrationLevel;                                //@synthesize magneticFieldCalibrationLevel=_magneticFieldCalibrationLevel - In the implementation block
@property (assign) BOOL doingYawCorrection;                                          //@synthesize doingYawCorrection=_doingYawCorrection - In the implementation block
@property (assign) BOOL doingBiasEstimation;                                         //@synthesize doingBiasEstimation=_doingBiasEstimation - In the implementation block
@property (assign) BOOL isInitialized;                                               //@synthesize isInitialized=_isInitialized - In the implementation block
-(id)init;
-(CVACLMotionTypeVector3 *)gravity;
-(CVACLMotionTypeVector3 *)magneticField;
-(void)setGravity:(CVACLMotionTypeVector3 *)arg1 ;
-(CVACLMotionTypeDoubleVector4 *)quaternion;
-(BOOL)isInitialized;
-(CVACLMotionTypeVector3 *)userAcceleration;
-(CVACLMotionTypeVector3 *)rotationRate;
-(void)setQuaternion:(CVACLMotionTypeDoubleVector4 *)arg1 ;
-(int)magneticFieldCalibrationLevel;
-(BOOL)doingYawCorrection;
-(BOOL)doingBiasEstimation;
-(void)setRotationRate:(CVACLMotionTypeVector3 *)arg1 ;
-(void)setMagneticField:(CVACLMotionTypeVector3 *)arg1 ;
-(void)setUserAcceleration:(CVACLMotionTypeVector3 *)arg1 ;
-(void)setIsInitialized:(BOOL)arg1 ;
-(void)setMagneticFieldCalibrationLevel:(int)arg1 ;
-(void)setDoingYawCorrection:(BOOL)arg1 ;
-(void)setDoingBiasEstimation:(BOOL)arg1 ;
@end


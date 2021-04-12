/*
* Generated on Monday, March 1, 2021 at 2:35:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/AccessibilityBundles/CameraUI.axbundle/CameraUI
*/


@class CMDeviceMotion;

@interface AXCameraLevelingMotionAnalyzer : NSObject {

	BOOL __cameraStableForLeveling;
	CMDeviceMotion* __lastDeviceMotion;
	double __lastUnstableMotionTimestamp;

}

@property (nonatomic,retain) CMDeviceMotion * _lastDeviceMotion;               //@synthesize _lastDeviceMotion=__lastDeviceMotion - In the implementation block
@property (assign,nonatomic) BOOL _cameraStableForLeveling;                    //@synthesize _cameraStableForLeveling=__cameraStableForLeveling - In the implementation block
@property (assign,nonatomic) double _lastUnstableMotionTimestamp;              //@synthesize _lastUnstableMotionTimestamp=__lastUnstableMotionTimestamp - In the implementation block
+(long long)_levelZoneForDeviceMotion:(id)arg1 previousZone:(long long)arg2 ;
+(long long)_deviceOrientationForRotation:(double)arg1 shift:(double)arg2 ;
+(double)_offsetFromLevelForOrientation:(long long)arg1 rotation:(double)arg2 shift:(double)arg3 ;
-(void)reset;
-(void)set_lastDeviceMotion:(CMDeviceMotion *)arg1 ;
-(void)set_cameraStableForLeveling:(BOOL)arg1 ;
-(void)set_lastUnstableMotionTimestamp:(double)arg1 ;
-(CMDeviceMotion *)_lastDeviceMotion;
-(void)_updateCameraStableForMotion:(id)arg1 previousMotion:(id)arg2 ;
-(BOOL)_cameraStableForLeveling;
-(double)_lastUnstableMotionTimestamp;
-(long long)updateWithDeviceMotion:(id)arg1 previousZone:(long long)arg2 ;
@end


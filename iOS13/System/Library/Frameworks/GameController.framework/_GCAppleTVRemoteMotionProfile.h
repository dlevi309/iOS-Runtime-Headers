/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <GameController/GameController-Structs.h>
#import <GameController/GCMotion.h>

@class CMMotionManager, GCController;

@interface _GCAppleTVRemoteMotionProfile : GCMotion {

	SCD_Struct_GC1 _gravity;
	SCD_Struct_GC1 _prevGravity;
	SCD_Struct_GC1 _userAcceleration;
	GCQuaternion _attitude;
	GCQuaternion _prevAttitude;
	SCD_Struct_GC1 _eulerAngles;
	SCD_Struct_GC1 _prevEulerAngles;
	SCD_Struct_GC1 _rotationRate;
	float _tip;
	float _tilt;
	CMMotionManager* _motionMgr;
	BOOL _linkedOnOrAfterCompassFeature;
	BOOL _motionLite;
	BOOL _compassEnabled;
	/*^block*/id _valueChangedHandler;
	/*^block*/id _internalValueChangedHandler;
	BOOL _emulatedMotionEnabled;
	BOOL _motionUpdatedEnabled;
	BOOL _paused;
	GCController* _controller;

}
-(SCD_Struct_GC1)gravity;
-(id)controller;
-(GCQuaternion)attitude;
-(float)_tilt;
-(float)_tip;
-(void)setValueChangedHandler:(/*^block*/id)arg1 ;
-(SCD_Struct_GC1)userAcceleration;
-(SCD_Struct_GC1)rotationRate;
-(id)initWithController:(id)arg1 ;
-(void)_setCompassEnabled:(BOOL)arg1 ;
-(/*^block*/id)valueChangedHandler;
-(void)_setMotionLite:(BOOL)arg1 ;
-(BOOL)hasAttitudeAndRotationRate;
-(BOOL)isEmulatedMicroGamepad;
-(void)_setGravity:(SCD_Struct_GC1)arg1 ;
-(void)_setUserAcceleration:(SCD_Struct_GC1)arg1 ;
-(void)_setAttitude:(GCQuaternion)arg1 ;
-(void)_setRotationRate:(SCD_Struct_GC1)arg1 ;
-(void)_startDeviceMotionUpdates;
-(void)_stopDeviceMotionUpdates;
-(BOOL)_isUpdatingDeviceMotion;
-(void)_pauseMotionUpdates:(BOOL)arg1 ;
-(void)setInternalValueChangedHandler:(/*^block*/id)arg1 ;
-(/*^block*/id)internalValueChangedHandler;
-(/*^block*/id)_motionLiteFusedHandler;
-(void)_startDeviceMotionUpdatesHelper;
-(void)_stopDeviceMotionUpdatesHelper;
@end


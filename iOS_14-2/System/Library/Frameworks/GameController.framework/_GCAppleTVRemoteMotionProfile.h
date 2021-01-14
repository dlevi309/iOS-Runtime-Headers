/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <GameController/GameController-Structs.h>
#import <GameController/GCMotion.h>

@class CMMotionManager, GCController;

@interface _GCAppleTVRemoteMotionProfile : GCMotion {

	SCD_Struct_GC5 _gravity;
	SCD_Struct_GC5 _prevGravity;
	SCD_Struct_GC5 _userAcceleration;
	GCQuaternion _attitude;
	GCQuaternion _prevAttitude;
	SCD_Struct_GC5 _eulerAngles;
	SCD_Struct_GC5 _prevEulerAngles;
	SCD_Struct_GC5 _rotationRate;
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
-(float)_tip;
-(float)_tilt;
-(void)setValueChangedHandler:(/*^block*/id)arg1 ;
-(SCD_Struct_GC5)userAcceleration;
-(id)initWithController:(id)arg1 ;
-(SCD_Struct_GC5)rotationRate;
-(GCQuaternion)attitude;
-(id)controller;
-(void)_setCompassEnabled:(BOOL)arg1 ;
-(SCD_Struct_GC5)gravity;
-(/*^block*/id)valueChangedHandler;
-(BOOL)hasGravityAndUserAcceleration;
-(void)_setAttitude:(GCQuaternion)arg1 ;
-(void)_setRotationRate:(SCD_Struct_GC5)arg1 ;
-(void)_setMotionLite:(BOOL)arg1 ;
-(BOOL)hasAttitude;
-(BOOL)hasRotationRate;
-(BOOL)hasAttitudeAndRotationRate;
-(BOOL)isEmulatedMicroGamepad;
-(void)_setGravity:(SCD_Struct_GC5)arg1 ;
-(void)_setUserAcceleration:(SCD_Struct_GC5)arg1 ;
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


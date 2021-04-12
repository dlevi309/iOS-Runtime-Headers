/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/


#import <GameController/GameController-Structs.h>
@class GCController;

@interface GCMotion : NSObject {

	SCD_Struct_GC1 _gravity;
	SCD_Struct_GC1 _userAcceleration;
	GCQuaternion _attitude;
	GCQuaternion _prevAttitude;
	SCD_Struct_GC1 _eulerAngles;
	SCD_Struct_GC1 _prevEulerAngles;
	SCD_Struct_GC1 _rotationRate;
	float _tip;
	float _tilt;
	BOOL _motionLite;
	BOOL _compassEnabled;
	/*^block*/id _valueChangedHandler;
	GCController* _controller;

}

@property (nonatomic,__weak,readonly) GCController * controller;              //@synthesize controller=_controller - In the implementation block
@property (nonatomic,copy) id valueChangedHandler; 
@property (nonatomic,readonly) SCD_Struct_GC1 gravity;                        //@synthesize gravity=_gravity - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GC1 userAcceleration;               //@synthesize userAcceleration=_userAcceleration - In the implementation block
@property (nonatomic,readonly) BOOL hasAttitudeAndRotationRate; 
@property (nonatomic,readonly) GCQuaternion attitude;                         //@synthesize attitude=_attitude - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GC1 rotationRate;                   //@synthesize rotationRate=_rotationRate - In the implementation block
-(SCD_Struct_GC1)gravity;
-(GCController *)controller;
-(void)setGravity:(SCD_Struct_GC1)arg1 ;
-(GCQuaternion)attitude;
-(float)_tilt;
-(float)_tip;
-(void)setValueChangedHandler:(id)arg1 ;
-(SCD_Struct_GC1)userAcceleration;
-(SCD_Struct_GC1)rotationRate;
-(id)initWithController:(id)arg1 ;
-(void)setRotationRate:(SCD_Struct_GC1)arg1 ;
-(void)setUserAcceleration:(SCD_Struct_GC1)arg1 ;
-(void)setAttitude:(GCQuaternion)arg1 ;
-(void)_setCompassEnabled:(BOOL)arg1 ;
-(id)valueChangedHandler;
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
-(void)setStateFromMotion:(id)arg1 ;
-(void)_pauseMotionUpdates:(BOOL)arg1 ;
@end


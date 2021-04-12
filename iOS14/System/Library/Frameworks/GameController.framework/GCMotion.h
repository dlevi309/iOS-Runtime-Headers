/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <GameController/GameController-Structs.h>
#import <libobjc.A.dylib/_GCMotionEventSink.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSObjectNSCopyingNSSecureCoding;
@class GCController, NSString;

@interface GCMotion : NSObject <_GCMotionEventSink, NSSecureCoding> {

	id _motionEventObservation;
	SCD_Struct_GC5 _gravity;
	SCD_Struct_GC5 _userAcceleration;
	SCD_Struct_GC5 _acceleration;
	GCQuaternion _attitude;
	GCQuaternion _prevAttitude;
	SCD_Struct_GC5 _eulerAngles;
	SCD_Struct_GC5 _prevEulerAngles;
	SCD_Struct_GC5 _rotationRate;
	float _tip;
	float _tilt;
	BOOL _motionLite;
	BOOL _compassEnabled;
	BOOL _hasAttitude;
	BOOL _hasRotationRate;
	/*^block*/id _valueChangedHandler;
	BOOL _sensorsActive;
	GCController* _controller;
	id<NSObject><NSCopying><NSSecureCoding> _identifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) GCController * controller;                 //@synthesize controller=_controller - In the implementation block
@property (nonatomic,copy) id valueChangedHandler; 
@property (nonatomic,readonly) BOOL sensorsRequireManualActivation; 
@property (assign,nonatomic) BOOL sensorsActive;                                 //@synthesize sensorsActive=_sensorsActive - In the implementation block
@property (nonatomic,readonly) BOOL hasGravityAndUserAcceleration; 
@property (nonatomic,readonly) SCD_Struct_GC5 gravity;                           //@synthesize gravity=_gravity - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GC5 userAcceleration;                  //@synthesize userAcceleration=_userAcceleration - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GC5 acceleration; 
@property (nonatomic,readonly) BOOL hasAttitudeAndRotationRate; 
@property (nonatomic,readonly) BOOL hasAttitude; 
@property (nonatomic,readonly) BOOL hasRotationRate; 
@property (nonatomic,readonly) GCQuaternion attitude;                            //@synthesize attitude=_attitude - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GC5 rotationRate;                      //@synthesize rotationRate=_rotationRate - In the implementation block
+(BOOL)supportsSecureCoding;
-(float)_tip;
-(float)_tilt;
-(void)setValueChangedHandler:(id)arg1 ;
-(SCD_Struct_GC5)userAcceleration;
-(void)setRotationRate:(SCD_Struct_GC5)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setController:(GCController *)arg1 ;
-(SCD_Struct_GC5)acceleration;
-(id)initWithController:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SCD_Struct_GC5)rotationRate;
-(void)setGravity:(SCD_Struct_GC5)arg1 ;
-(GCQuaternion)attitude;
-(id)identifier;
-(GCController *)controller;
-(id)initWithIdentifier:(id)arg1 ;
-(void)_setCompassEnabled:(BOOL)arg1 ;
-(SCD_Struct_GC5)gravity;
-(void)setAcceleration:(SCD_Struct_GC5)arg1 ;
-(id)valueChangedHandler;
-(void)setSensorsActive:(BOOL)arg1 ;
-(BOOL)sensorsActive;
-(BOOL)hasGravityAndUserAcceleration;
-(void)_setAttitude:(GCQuaternion)arg1 ;
-(void)_setRotationRate:(SCD_Struct_GC5)arg1 ;
-(void)setUserAcceleration:(SCD_Struct_GC5)arg1 ;
-(void)setAttitude:(GCQuaternion)arg1 ;
-(BOOL)sensorsRequireManualActivation;
-(void)_setMotionLite:(BOOL)arg1 ;
-(BOOL)hasAttitude;
-(void)_setHasAttitude:(BOOL)arg1 ;
-(BOOL)hasRotationRate;
-(void)_setHasRotationRate:(BOOL)arg1 ;
-(BOOL)hasAttitudeAndRotationRate;
-(BOOL)isEmulatedMicroGamepad;
-(void)_setGravity:(SCD_Struct_GC5)arg1 ;
-(void)_setUserAcceleration:(SCD_Struct_GC5)arg1 ;
-(void)_setAcceleration:(SCD_Struct_GC5)arg1 ;
-(void)_startDeviceMotionUpdates;
-(void)_stopDeviceMotionUpdates;
-(BOOL)_isUpdatingDeviceMotion;
-(void)setStateFromMotion:(id)arg1 ;
-(void)_pauseMotionUpdates:(BOOL)arg1 ;
-(void)setMotionEventSource:(id)arg1 ;
@end


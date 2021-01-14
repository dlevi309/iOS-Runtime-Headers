/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIEvent.h>

@class BKSAccelerometer, NSTimer;

@interface UIMotionEvent : UIEvent {

	BKSAccelerometer* _motionAccelerometer;
	long long _subtype;
	int _shakeState;
	long long _stateMachineState;
	double _shakeStartTime;
	double _lastMovementTime;
	double _highLevelTime;
	double _lowEndTimeout;
	NSTimer* _idleTimer;
	BOOL _sentMotionBegan;
	float _lowPassState[10];
	unsigned long long _lowPassStateIndex;
	unsigned long long _highPassStateIndex;
	float _highPassState[2];
	int notifyToken;

}

@property (assign,nonatomic) int shakeState;              //@synthesize shakeState=_shakeState - In the implementation block
-(long long)subtype;
-(void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6 ;
-(BOOL)_detectWhenNotActive;
-(float)_highPass:(float)arg1 ;
-(long long)_feedStateMachine:(float)arg1 currentState:(long long)arg2 timestamp:(double)arg3 ;
-(void)_setSubtype:(long long)arg1 ;
-(id)_windows;
-(void)setShakeState:(int)arg1 ;
-(void)_enablePeakDetectionForScreenBlanked:(id)arg1 ;
-(int)shakeState;
-(id)description;
-(BOOL)_isDetectingMotionEvents;
-(float)_determineShakeLevelX:(float)arg1 y:(float)arg2 z:(float)arg3 currentState:(long long)arg4 ;
-(void)_idleTimerFired;
-(float)_lowPass:(float)arg1 ;
-(long long)type;
-(void)_sendEventToResponder:(id)arg1 ;
-(void)_updateAccelerometerEnabled;
-(void)_willResume;
-(void)_accelerometerDidDetectMovementWithTimestamp:(double)arg1 ;
-(void)_willSuspend;
-(void)_resetLowPassState;
-(id)_init;
-(int)_shakeState;
-(void)_enablePeakDetectionIfNecessary;
-(void)dealloc;
@end


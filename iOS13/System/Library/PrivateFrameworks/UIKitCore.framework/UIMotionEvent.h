/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(long long)type;
-(id)_init;
-(long long)subtype;
-(id)_windows;
-(void)_sendEventToResponder:(id)arg1 ;
-(void)_setSubtype:(long long)arg1 ;
-(void)_enablePeakDetectionForScreenBlanked:(id)arg1 ;
-(void)_willResume;
-(void)_willSuspend;
-(void)_updateAccelerometerEnabled;
-(int)shakeState;
-(BOOL)_detectWhenNotActive;
-(void)_idleTimerFired;
-(void)_resetLowPassState;
-(void)_accelerometerDidDetectMovementWithTimestamp:(double)arg1 ;
-(float)_determineShakeLevelX:(float)arg1 y:(float)arg2 z:(float)arg3 currentState:(long long)arg4 ;
-(long long)_feedStateMachine:(float)arg1 currentState:(long long)arg2 timestamp:(double)arg3 ;
-(float)_highPass:(float)arg1 ;
-(float)_lowPass:(float)arg1 ;
-(BOOL)_isDetectingMotionEvents;
-(void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6 ;
-(int)_shakeState;
-(void)_enablePeakDetectionIfNecessary;
-(void)setShakeState:(int)arg1 ;
@end


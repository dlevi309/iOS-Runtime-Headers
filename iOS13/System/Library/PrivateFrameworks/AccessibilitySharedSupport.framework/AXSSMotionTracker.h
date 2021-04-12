/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
*/

#import <libobjc.A.dylib/AXSSMotionTrackingDaemonDelegateProtocol.h>

@protocol AXSSMotionTrackerDelegate;
@class AXSSMotionTrackingInputConfiguration, AXSSMotionTrackingState, NSXPCConnection, NSValue;

@interface AXSSMotionTracker : NSObject <AXSSMotionTrackingDaemonDelegateProtocol> {

	BOOL _debugOverlayEnabled;
	BOOL __tracking;
	BOOL __hasBeenStarted;
	unsigned long long _motionTrackingMode;
	double _sensitivity;
	double _joystickModeMovementThreshold;
	AXSSMotionTrackingInputConfiguration* _inputConfiguration;
	AXSSMotionTrackingState* _state;
	id<AXSSMotionTrackerDelegate> _delegate;
	NSXPCConnection* __motionTrackingDaemonConnection;

}

@property (nonatomic,readonly) id<AXSSMotionTrackingDaemonProtocol> _motionTrackingDaemon; 
@property (nonatomic,retain) NSXPCConnection * _motionTrackingDaemonConnection;                         //@synthesize _motionTrackingDaemonConnection=__motionTrackingDaemonConnection - In the implementation block
@property (assign,nonatomic) BOOL _tracking;                                                            //@synthesize _tracking=__tracking - In the implementation block
@property (assign,nonatomic) BOOL _hasBeenStarted;                                                      //@synthesize _hasBeenStarted=__hasBeenStarted - In the implementation block
@property (assign,nonatomic) BOOL debugOverlayEnabled;                                                  //@synthesize debugOverlayEnabled=_debugOverlayEnabled - In the implementation block
@property (nonatomic,copy) AXSSMotionTrackingState * state;                                             //@synthesize state=_state - In the implementation block
@property (getter=isTracking,nonatomic,readonly) BOOL tracking; 
@property (assign,nonatomic,__weak) id<AXSSMotionTrackerDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long motionTrackingMode;                                     //@synthesize motionTrackingMode=_motionTrackingMode - In the implementation block
@property (assign,nonatomic) double sensitivity;                                                        //@synthesize sensitivity=_sensitivity - In the implementation block
@property (nonatomic,retain) NSValue * lookAtPoint; 
@property (nonatomic,copy) AXSSMotionTrackingInputConfiguration * inputConfiguration;                   //@synthesize inputConfiguration=_inputConfiguration - In the implementation block
@property (assign,nonatomic) double joystickModeMovementThreshold;                                      //@synthesize joystickModeMovementThreshold=_joystickModeMovementThreshold - In the implementation block
+(id)supportedExpressions;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id<AXSSMotionTrackerDelegate>)delegate;
-(void)setDelegate:(id<AXSSMotionTrackerDelegate>)arg1 ;
-(void)stop;
-(void)start;
-(AXSSMotionTrackingState *)state;
-(void)setState:(AXSSMotionTrackingState *)arg1 ;
-(BOOL)_tracking;
-(BOOL)isTracking;
-(double)sensitivity;
-(void)_updateState:(id)arg1 ;
-(void)setSensitivity:(double)arg1 ;
-(NSValue *)lookAtPoint;
-(void)setLookAtPoint:(NSValue *)arg1 ;
-(NSXPCConnection *)_motionTrackingDaemonConnection;
-(BOOL)_hasBeenStarted;
-(void)setMotionTrackingMode:(unsigned long long)arg1 ;
-(void)setInputConfiguration:(AXSSMotionTrackingInputConfiguration *)arg1 ;
-(void)setJoystickModeMovementThreshold:(double)arg1 ;
-(void)motionTrackingDaemonUpdatedState:(id)arg1 ;
-(void)_motionTrackingDaemonWasInterruptedFromXPC;
-(void)set_motionTrackingDaemonConnection:(NSXPCConnection *)arg1 ;
-(void)_changeState:(id)arg1 ;
-(id<AXSSMotionTrackingDaemonProtocol>)_motionTrackingDaemon;
-(unsigned long long)motionTrackingMode;
-(double)joystickModeMovementThreshold;
-(AXSSMotionTrackingInputConfiguration *)inputConfiguration;
-(void)set_tracking:(BOOL)arg1 ;
-(BOOL)debugOverlayEnabled;
-(void)setDebugOverlayEnabled:(BOOL)arg1 ;
-(void)set_hasBeenStarted:(BOOL)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
*/

#import <libobjc.A.dylib/AXSSMotionTrackingDaemonDelegateProtocol.h>

@protocol AXSSMotionTrackerDelegate;
@class AXSSMotionTrackingInputConfiguration, AXSSMotionTrackingExpressionConfiguration, AXSSMotionTrackingState, NSXPCConnection, AXSSRateLimitingLogger, NSValue;

@interface AXSSMotionTracker : NSObject <AXSSMotionTrackingDaemonDelegateProtocol> {

	BOOL _debugOverlayEnabled;
	BOOL __tracking;
	BOOL __hasBeenStarted;
	unsigned long long _motionTrackingMode;
	double _sensitivity;
	double _joystickModeMovementThreshold;
	AXSSMotionTrackingInputConfiguration* _inputConfiguration;
	AXSSMotionTrackingExpressionConfiguration* _expressionConfiguration;
	AXSSMotionTrackingState* _state;
	id<AXSSMotionTrackerDelegate> _delegate;
	NSXPCConnection* __motionTrackingDaemonConnection;
	AXSSRateLimitingLogger* __loggingRateLimiter;

}

@property (nonatomic,readonly) id<AXSSMotionTrackingDaemonProtocol> _motionTrackingDaemon; 
@property (nonatomic,retain) NSXPCConnection * _motionTrackingDaemonConnection;                              //@synthesize _motionTrackingDaemonConnection=__motionTrackingDaemonConnection - In the implementation block
@property (assign,nonatomic) BOOL _tracking;                                                                 //@synthesize _tracking=__tracking - In the implementation block
@property (assign,nonatomic) BOOL _hasBeenStarted;                                                           //@synthesize _hasBeenStarted=__hasBeenStarted - In the implementation block
@property (nonatomic,retain) AXSSRateLimitingLogger * _loggingRateLimiter;                                   //@synthesize _loggingRateLimiter=__loggingRateLimiter - In the implementation block
@property (assign,nonatomic) BOOL debugOverlayEnabled;                                                       //@synthesize debugOverlayEnabled=_debugOverlayEnabled - In the implementation block
@property (nonatomic,copy) AXSSMotionTrackingState * state;                                                  //@synthesize state=_state - In the implementation block
@property (getter=isTracking,nonatomic,readonly) BOOL tracking; 
@property (assign,nonatomic,__weak) id<AXSSMotionTrackerDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long motionTrackingMode;                                          //@synthesize motionTrackingMode=_motionTrackingMode - In the implementation block
@property (assign,nonatomic) double sensitivity;                                                             //@synthesize sensitivity=_sensitivity - In the implementation block
@property (nonatomic,retain) NSValue * lookAtPoint; 
@property (nonatomic,copy) AXSSMotionTrackingInputConfiguration * inputConfiguration;                        //@synthesize inputConfiguration=_inputConfiguration - In the implementation block
@property (nonatomic,copy) AXSSMotionTrackingExpressionConfiguration * expressionConfiguration;              //@synthesize expressionConfiguration=_expressionConfiguration - In the implementation block
@property (assign,nonatomic) double joystickModeMovementThreshold;                                           //@synthesize joystickModeMovementThreshold=_joystickModeMovementThreshold - In the implementation block
+(id)supportedExpressions;
+(id)supportedExpressionSensitivitiesAscending;
-(id)init;
-(BOOL)isTracking;
-(id<AXSSMotionTrackerDelegate>)delegate;
-(void)start;
-(BOOL)_tracking;
-(void)stop;
-(void)setDelegate:(id<AXSSMotionTrackerDelegate>)arg1 ;
-(void)setSensitivity:(double)arg1 ;
-(double)sensitivity;
-(void)setState:(AXSSMotionTrackingState *)arg1 ;
-(AXSSMotionTrackingState *)state;
-(void)invalidate;
-(void)_updateState:(id)arg1 ;
-(void)dealloc;
-(void)setLookAtPoint:(NSValue *)arg1 ;
-(NSValue *)lookAtPoint;
-(NSXPCConnection *)_motionTrackingDaemonConnection;
-(BOOL)_hasBeenStarted;
-(void)setMotionTrackingMode:(unsigned long long)arg1 ;
-(void)setInputConfiguration:(AXSSMotionTrackingInputConfiguration *)arg1 ;
-(void)setExpressionConfiguration:(AXSSMotionTrackingExpressionConfiguration *)arg1 ;
-(void)setJoystickModeMovementThreshold:(double)arg1 ;
-(void)recalibrateFace;
-(void)motionTrackingDaemonUpdatedState:(id)arg1 ;
-(void)_motionTrackingDaemonWasInterruptedFromXPC;
-(void)set_motionTrackingDaemonConnection:(NSXPCConnection *)arg1 ;
-(void)_changeState:(id)arg1 ;
-(id<AXSSMotionTrackingDaemonProtocol>)_motionTrackingDaemon;
-(unsigned long long)motionTrackingMode;
-(double)joystickModeMovementThreshold;
-(AXSSMotionTrackingInputConfiguration *)inputConfiguration;
-(AXSSMotionTrackingExpressionConfiguration *)expressionConfiguration;
-(void)set_tracking:(BOOL)arg1 ;
-(BOOL)debugOverlayEnabled;
-(AXSSRateLimitingLogger *)_loggingRateLimiter;
-(void)setDebugOverlayEnabled:(BOOL)arg1 ;
-(void)set_hasBeenStarted:(BOOL)arg1 ;
-(void)set_loggingRateLimiter:(AXSSRateLimitingLogger *)arg1 ;
@end


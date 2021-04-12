/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@protocol OS_dispatch_queue, CMWakeGestureDelegate;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject, NSString;

@interface CMWakeGestureManager : NSObject {

	NSObject*<OS_dispatch_queue> fDispatchQ;
	BOOL gestureUpdatesStarted;
	Dispatcher* fWakeDispatcher;
	Dispatcher* fPowerStateDispatcher;
	unique_ptr<CMWakeGestureVisitor, std::__1::default_delete<CMWakeGestureVisitor> >* fWakeGestureVisitor;
	long long fCurrentState;
	int fMeasureLatencyState;
	double fWakePacketTimestamp;
	IONotificationPortRef fIoNotifyPort;
	unsigned fIoNotification;
	unsigned backlightService;
	double fLastNotificationTime;
	int fScreenDimmingNotificationToken;
	int fLockScreenToken;
	double fLastDisplayOnTime;
	NSString* fProcessName;
	BOOL fIsRunningInPrimaryProcess;
	BOOL fEnableLatencyAlert;
	BOOL fEnableAudioAlert;
	int fLatencyAlertThreshold;
	char fDisplayState;
	int fSelector;
	id<CMWakeGestureDelegate> _delegate;

}

@property (assign,nonatomic) id<CMWakeGestureDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedManager;
+(BOOL)isWakeGestureAvailable;
+(BOOL)isWakeGestureOverrideEnabled;
+(unsigned char)toRaw:(long long)arg1 ;
+(BOOL)hasSlowBootArgs;
+(id)stringForNotification:(unsigned char)arg1 ;
+(id)stringForMode:(unsigned char)arg1 ;
+(id)stringForStartPose:(unsigned char)arg1 ;
+(id)stringForViewPose:(unsigned char)arg1 ;
+(long long)toState:(unsigned char)arg1 ;
+(id)stringForGestureState:(long long)arg1 ;
-(void)dealloc;
-(id<CMWakeGestureDelegate>)delegate;
-(void)setDelegate:(id<CMWakeGestureDelegate>)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(void)loadPreferences;
-(void)stopWakeGestureUpdates;
-(void)onNotificationControl:(id)arg1 ;
-(void)invokeDelegateWithState:(long long)arg1 ;
-(void)onWakeUpdated:(const Sample*)arg1 ;
-(void)onPowerStateUpdated:(const Sample*)arg1 ;
-(void)onBacklightServiceUpdated:(unsigned)arg1 ;
-(void)writeAggdScalarForKey:(id)arg1 withValue:(id)arg2 ;
-(void)playAlert;
-(void)logWakeLatency;
-(void)startWakeGestureUpdates;
-(BOOL)simulateGestureWithDelay:(double)arg1 Duration:(double)arg2 ;
-(void)simulateGesture:(long long)arg1 after:(double)arg2 ;
-(void)forceDetected;
-(void)reenableDetectedStateRecognition;
@end


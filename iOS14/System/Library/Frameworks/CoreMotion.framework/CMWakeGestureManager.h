/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	id<CMWakeGestureDelegate> fUpdatedDelegate;
	id<CMWakeGestureDelegate> fDelegate;

}

@property (assign,nonatomic) id<CMWakeGestureDelegate> delegate; 
+(unsigned char)toRaw:(long long)arg1 ;
+(id)sharedManager;
+(id)stringForNotification:(unsigned char)arg1 ;
+(long long)toState:(unsigned char)arg1 ;
+(BOOL)isWakeGestureOverrideEnabled;
+(BOOL)hasSlowBootArgs;
+(id)stringForViewPose:(unsigned char)arg1 ;
+(id)stringForGestureState:(long long)arg1 ;
+(id)stringForStartPose:(unsigned char)arg1 ;
+(BOOL)isWakeGestureAvailable;
+(id)stringForMode:(unsigned char)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(void)forceDetected;
-(void)onNotificationControl:(id)arg1 ;
-(id<CMWakeGestureDelegate>)delegate;
-(void)onWakeUpdated:(const Sample*)arg1 ;
-(void)setDelegate:(id<CMWakeGestureDelegate>)arg1 ;
-(void)reenableDetectedStateRecognition;
-(void)playAlert;
-(void)onBacklightServiceUpdated:(unsigned)arg1 ;
-(void)sendWakeTriggerAnalytics:(unsigned char)arg1 withDisplay:(int)arg2 ;
-(BOOL)simulateGestureWithDelay:(double)arg1 Duration:(double)arg2 ;
-(void)stopWakeGestureUpdates;
-(void)startWakeGestureUpdates;
-(void)onPowerStateUpdated:(const Sample*)arg1 ;
-(void)logWakeLatency;
-(void)invokeDelegateWithState:(long long)arg1 ;
-(void)simulateGesture:(long long)arg1 after:(double)arg2 ;
-(void)loadPreferences;
-(void)dealloc;
@end


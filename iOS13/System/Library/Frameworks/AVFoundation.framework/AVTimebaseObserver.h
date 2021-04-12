/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <AVFoundation/AVFoundation-Structs.h>
@class NSObject, AVWeakReference;

@interface AVTimebaseObserver : NSObject {

	NSObject*<OS_dispatch_queue> _timerQueue;
	AVWeakReference* _weakReference;
	NSObject*<OS_dispatch_source> _timerSource;
	OpaqueCMTimebaseRef _timebase;
	BOOL _isObservingTimebase;
	double _lastRate;
	double _currentRate;
	BOOL _invalid;

}

@property (getter=_weakReference,nonatomic,readonly) AVWeakReference * weakReference;              //@synthesize weakReference=_weakReference - In the implementation block
@property (readonly) OpaqueCMTimebaseRef timebase; 
@property (nonatomic,readonly) BOOL invalidated; 
-(void)dealloc;
-(void)invalidate;
-(BOOL)invalidated;
-(OpaqueCMTimebaseRef)timebase;
-(id)_weakReference;
-(void)_reallyInvalidate;
-(void)_removeTimebaseFromTimerSource;
-(void)_stopObservingTimebaseNotifications;
-(void)_attachTimerSourceToTimebase;
-(void)_startObservingTimebaseNotifications;
-(void)_effectiveRateChanged;
-(id)initWithTimebase:(OpaqueCMTimebaseRef)arg1 queue:(id)arg2 ;
-(void)_resetNextFireTime;
-(void)_handleTimeDiscontinuity;
-(void)_finishInitializationWithTimerEventHandler:(/*^block*/id)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <AVFCore/AVFCore-Structs.h>
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
-(void)_handleTimeDiscontinuity;
-(void)_effectiveRateChanged;
-(BOOL)invalidated;
-(void)_reallyInvalidate;
-(void)_removeTimebaseFromTimerSource;
-(void)_attachTimerSourceToTimebase;
-(void)_stopObservingTimebaseNotifications;
-(void)_startObservingTimebaseNotifications;
-(id)initWithTimebase:(OpaqueCMTimebaseRef)arg1 queue:(id)arg2 ;
-(void)_finishInitializationWithTimerEventHandler:(/*^block*/id)arg1 ;
-(OpaqueCMTimebaseRef)timebase;
-(id)_weakReference;
-(void)invalidate;
-(void)_resetNextFireTime;
-(void)dealloc;
@end


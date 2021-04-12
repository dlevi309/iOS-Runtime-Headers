/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface PLThrottleTimer : NSObject {

	id _target;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _invocationQueue;
	unsigned long long _timeoutId;
	unsigned long long _maxTimeoutId;
	BOOL _isPingedSinceLastFire;
	BOOL _isPaused;
	BOOL _isInvalid;
	SEL _action;
	double _timeout;
	double _maxTimeout;

}

@property (nonatomic,__weak,readonly) id target; 
@property (nonatomic,readonly) SEL action;                     //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) double timeout;                 //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,readonly) double maxTimeout;              //@synthesize maxTimeout=_maxTimeout - In the implementation block
-(void)ping;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 invocationQueue:(id)arg3 timeout:(double)arg4 maxTimeout:(double)arg5 ;
-(void)_inqScheduleTimeout:(BOOL)arg1 maxTimeout:(BOOL)arg2 ;
-(void)setPaused:(BOOL)arg1 ;
-(SEL)action;
-(double)timeout;
-(void)_inqFireWithTimeout:(BOOL)arg1 timeoutId:(unsigned long long)arg2 maxTimeout:(BOOL)arg3 maxTimeoutId:(unsigned long long)arg4 ;
-(void)invalidate;
-(id)target;
-(double)maxTimeout;
@end


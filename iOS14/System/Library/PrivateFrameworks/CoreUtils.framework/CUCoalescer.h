/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject;

@interface CUCoalescer : NSObject {

	BOOL _invalidateCalled;
	double _startTime;
	NSObject*<OS_dispatch_source> _timer;
	int _triggered;
	/*^block*/id _actionHandler;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	double _leeway;
	double _maxDelay;
	double _minDelay;

}

@property (nonatomic,copy) id actionHandler;                                          //@synthesize actionHandler=_actionHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (assign,nonatomic) double leeway;                                           //@synthesize leeway=_leeway - In the implementation block
@property (assign,nonatomic) double maxDelay;                                         //@synthesize maxDelay=_maxDelay - In the implementation block
@property (assign,nonatomic) double minDelay;                                         //@synthesize minDelay=_minDelay - In the implementation block
-(void)_invalidate;
-(void)trigger;
-(id)init;
-(double)minDelay;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)actionHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setActionHandler:(id)arg1 ;
-(void)_cancel;
-(void)_timerFired;
-(double)maxDelay;
-(void)invalidate;
-(double)leeway;
-(void)setMaxDelay:(double)arg1 ;
-(void)_trigger;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(void)cancel;
-(void)setLeeway:(double)arg1 ;
-(void)setMinDelay:(double)arg1 ;
-(void)dealloc;
@end


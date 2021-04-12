/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)_invalidate;
-(void)cancel;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setActionHandler:(id)arg1 ;
-(id)actionHandler;
-(void)_cancel;
-(void)_trigger;
-(void)trigger;
-(void)_timerFired;
-(double)leeway;
-(void)setLeeway:(double)arg1 ;
-(double)maxDelay;
-(void)setMaxDelay:(double)arg1 ;
-(double)minDelay;
-(void)setMinDelay:(double)arg1 ;
@end


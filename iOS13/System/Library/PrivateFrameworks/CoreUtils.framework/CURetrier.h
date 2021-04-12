/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject;

@interface CURetrier : NSObject {

	BOOL _invalidateCalled;
	NSObject*<OS_dispatch_source> _retryTimer;
	/*^block*/id _actionHandler;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	double _interval;
	double _leeway;
	/*^block*/id _invalidationHandler;
	double _startTime;

}

@property (nonatomic,copy) id actionHandler;                                          //@synthesize actionHandler=_actionHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) double interval;                                         //@synthesize interval=_interval - In the implementation block
@property (assign,nonatomic) double leeway;                                           //@synthesize leeway=_leeway - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (assign,nonatomic) double startTime;                                        //@synthesize startTime=_startTime - In the implementation block
-(id)init;
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)start;
-(double)interval;
-(void)setInterval:(double)arg1 ;
-(id)invalidationHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)failed;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(void)setActionHandler:(id)arg1 ;
-(id)actionHandler;
-(void)invalidateDirect;
-(double)leeway;
-(void)setLeeway:(double)arg1 ;
-(void)failedDirect;
-(void)startDirect;
-(void)succeeded;
-(void)succeededDirect;
@end


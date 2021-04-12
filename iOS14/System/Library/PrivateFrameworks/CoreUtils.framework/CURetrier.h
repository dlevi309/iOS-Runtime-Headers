/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)succeeded;
-(void)setInterval:(double)arg1 ;
-(id)init;
-(void)startDirect;
-(double)interval;
-(void)start;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)actionHandler;
-(void)setStartTime:(double)arg1 ;
-(void)invalidateDirect;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setActionHandler:(id)arg1 ;
-(void)failedDirect;
-(void)failed;
-(void)succeededDirect;
-(void)invalidate;
-(double)leeway;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(void)setLeeway:(double)arg1 ;
-(double)startTime;
@end


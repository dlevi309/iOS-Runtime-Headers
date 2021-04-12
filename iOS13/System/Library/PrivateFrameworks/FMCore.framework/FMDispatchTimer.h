/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject;

@interface FMDispatchTimer : NSObject {

	double _leewayTimeInterval;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _completion;
	double _timeout;
	NSObject*<OS_dispatch_source> _timerSource;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id completion;                                            //@synthesize completion=_completion - In the implementation block
@property (assign,nonatomic) double timeout;                                         //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timerSource;              //@synthesize timerSource=_timerSource - In the implementation block
@property (assign,nonatomic) double leewayTimeInterval;                              //@synthesize leewayTimeInterval=_leewayTimeInterval - In the implementation block
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)cancel;
-(void)start;
-(double)timeout;
-(void)setTimeout:(double)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(id)initWithQueue:(id)arg1 timeout:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)setTimerSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)timerSource;
-(double)leewayTimeInterval;
-(void)setLeewayTimeInterval:(double)arg1 ;
@end


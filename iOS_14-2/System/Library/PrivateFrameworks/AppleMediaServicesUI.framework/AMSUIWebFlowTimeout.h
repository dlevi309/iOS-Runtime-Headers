/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/


@protocol OS_dispatch_queue;
@class NSObject, NSDate;

@interface AMSUIWebFlowTimeout : NSObject {

	/*^block*/id _enqueuedBlock;
	/*^block*/id _block;
	NSObject*<OS_dispatch_queue> _queue;
	NSDate* _startTime;
	double _timeout;
	double _timeRemaining;

}

@property (nonatomic,copy) id enqueuedBlock;                                  //@synthesize enqueuedBlock=_enqueuedBlock - In the implementation block
@property (nonatomic,copy) id block;                                          //@synthesize block=_block - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                              //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double timeout;                                  //@synthesize timeout=_timeout - In the implementation block
@property (assign,nonatomic) double timeRemaining;                            //@synthesize timeRemaining=_timeRemaining - In the implementation block
+(id)timeoutWithTimeout:(double)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(id)block;
-(void)start;
-(void)pause;
-(void)setStartTime:(NSDate *)arg1 ;
-(void)setBlock:(id)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(double)timeout;
-(void)setTimeRemaining:(double)arg1 ;
-(double)timeRemaining;
-(void)reset;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSDate *)startTime;
-(id)initWithTimeout:(double)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(id)enqueuedBlock;
-(void)setEnqueuedBlock:(id)arg1 ;
@end


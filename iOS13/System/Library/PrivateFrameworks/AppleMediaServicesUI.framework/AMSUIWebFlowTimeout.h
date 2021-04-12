/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/


@protocol OS_dispatch_queue;
@class NSLock, NSObject, NSDate;

@interface AMSUIWebFlowTimeout : NSObject {

	/*^block*/id _enqueuedBlock;
	/*^block*/id _block;
	NSLock* _lock;
	NSObject*<OS_dispatch_queue> _queue;
	NSDate* _startTime;
	double _timeout;
	double _timeRemaining;

}

@property (nonatomic,copy) id enqueuedBlock;                                  //@synthesize enqueuedBlock=_enqueuedBlock - In the implementation block
@property (nonatomic,copy) id block;                                          //@synthesize block=_block - In the implementation block
@property (nonatomic,retain) NSLock * lock;                                   //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                              //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double timeout;                                  //@synthesize timeout=_timeout - In the implementation block
@property (assign,nonatomic) double timeRemaining;                            //@synthesize timeRemaining=_timeRemaining - In the implementation block
+(id)timeoutWithTimeout:(double)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSLock *)lock;
-(double)pause;
-(void)start;
-(id)block;
-(void)reset;
-(double)timeout;
-(void)setTimeout:(double)arg1 ;
-(void)setBlock:(id)arg1 ;
-(void)setLock:(NSLock *)arg1 ;
-(NSDate *)startTime;
-(void)setStartTime:(NSDate *)arg1 ;
-(void)_lock:(/*^block*/id)arg1 ;
-(void)setTimeRemaining:(double)arg1 ;
-(double)timeRemaining;
-(id)initWithTimeout:(double)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(id)enqueuedBlock;
-(void)setEnqueuedBlock:(id)arg1 ;
@end


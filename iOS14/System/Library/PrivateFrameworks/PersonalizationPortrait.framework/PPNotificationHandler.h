/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/


@protocol OS_dispatch_queue;
@class _PASLock, NSObject, NSString;

@interface PPNotificationHandler : NSObject {

	_PASLock* _lock;
	NSObject*<OS_dispatch_queue> _waiterQueue;
	double _waitSeconds;
	NSString* _name;

}

@property (assign,nonatomic) double waitSeconds;              //@synthesize waitSeconds=_waitSeconds - In the implementation block
@property (nonatomic,retain) NSString * name;                 //@synthesize name=_name - In the implementation block
-(void)waitOnQueueToDrain;
-(NSString *)name;
-(id)description;
-(double)waitSeconds;
-(void)fireWithObjects:(id)arg1 ;
-(void)setWaitSeconds:(double)arg1 ;
-(id)initWithName:(id)arg1 waitSeconds:(double)arg2 ;
-(void)_executeBlocksWithGuardedData:(id)arg1 ;
-(void)_delayedExecutionAfterSeconds:(double)arg1 ;
-(void)addObserverBlock:(/*^block*/id)arg1 forLifetimeOfObject:(id)arg2 ;
-(void)setName:(NSString *)arg1 ;
@end


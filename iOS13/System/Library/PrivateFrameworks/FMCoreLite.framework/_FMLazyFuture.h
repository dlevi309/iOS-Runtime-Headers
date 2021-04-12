/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
*/

#import <FMCoreLite/FMFuture.h>

@protocol FMScheduler, OS_dispatch_queue;
@class NSObject;

@interface _FMLazyFuture : FMFuture {

	BOOL _started;
	/*^block*/id _block;
	id<FMScheduler> _scheduler;
	NSObject*<OS_dispatch_queue> _accessQueue;

}

@property (nonatomic,copy) id block;                                                //@synthesize block=_block - In the implementation block
@property (nonatomic,retain) id<FMScheduler> scheduler;                             //@synthesize scheduler=_scheduler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;              //@synthesize accessQueue=_accessQueue - In the implementation block
@property (assign,nonatomic) BOOL started;                                          //@synthesize started=_started - In the implementation block
-(id)block;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(id)addCompletionBlock:(/*^block*/id)arg1 ;
-(void)setBlock:(id)arg1 ;
-(BOOL)started;
-(id)addSuccessBlock:(/*^block*/id)arg1 ;
-(id)addFailureBlock:(/*^block*/id)arg1 ;
-(void)setStarted:(BOOL)arg1 ;
-(id<FMScheduler>)scheduler;
-(void)setScheduler:(id<FMScheduler>)arg1 ;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_runIfNecessary;
-(id)initWithBlock:(/*^block*/id)arg1 scheduler:(id)arg2 ;
@end


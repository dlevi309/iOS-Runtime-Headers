/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithBlock:(/*^block*/id)arg1 scheduler:(id)arg2 ;
-(BOOL)started;
-(id)addSuccessBlock:(/*^block*/id)arg1 ;
-(void)setBlock:(id)arg1 ;
-(id)addFailureBlock:(/*^block*/id)arg1 ;
-(void)setScheduler:(id<FMScheduler>)arg1 ;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(id)addCompletionBlock:(/*^block*/id)arg1 ;
-(void)setStarted:(BOOL)arg1 ;
-(void)_runIfNecessary;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id<FMScheduler>)scheduler;
@end


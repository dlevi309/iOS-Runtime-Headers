/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
*/

#import <NetAppsUtilities/NAFuture.h>

@protocol NAScheduler, OS_dispatch_queue;
@class NSObject;

@interface _NALazyFuture : NAFuture {

	BOOL _started;
	/*^block*/id _block;
	id<NAScheduler> _scheduler;
	NSObject*<OS_dispatch_queue> _accessQueue;

}

@property (nonatomic,copy) id block;                                                //@synthesize block=_block - In the implementation block
@property (nonatomic,retain) id<NAScheduler> scheduler;                             //@synthesize scheduler=_scheduler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;              //@synthesize accessQueue=_accessQueue - In the implementation block
@property (assign,nonatomic) BOOL started;                                          //@synthesize started=_started - In the implementation block
-(id)block;
-(id)initWithBlock:(/*^block*/id)arg1 scheduler:(id)arg2 ;
-(BOOL)started;
-(void)setBlock:(id)arg1 ;
-(void)setScheduler:(id<NAScheduler>)arg1 ;
-(void)willAddCompletionBlock;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(void)setStarted:(BOOL)arg1 ;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id<NAScheduler>)scheduler;
@end


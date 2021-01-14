/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <libobjc.A.dylib/CNScheduler.h>

@protocol CNScheduler;
@class NSString;

@interface CNBlockCountingSchedulerDecorator : NSObject <CNScheduler> {

	id<CNScheduler> _scheduler;
	unsigned long long _pendingBlockCount;
	unsigned long long _activeBlockCount;
	unsigned long long _completedBlockCount;

}

@property (nonatomic,readonly) id<CNScheduler> scheduler;                           //@synthesize scheduler=_scheduler - In the implementation block
@property (nonatomic,readonly) unsigned long long pendingBlockCount;                //@synthesize pendingBlockCount=_pendingBlockCount - In the implementation block
@property (nonatomic,readonly) unsigned long long activeBlockCount;                 //@synthesize activeBlockCount=_activeBlockCount - In the implementation block
@property (nonatomic,readonly) unsigned long long completedBlockCount;              //@synthesize completedBlockCount=_completedBlockCount - In the implementation block
@property (readonly) double timestamp; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)os_log;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 qualityOfService:(unsigned long long)arg3 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 ;
-(void)performBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2 ;
-(double)timestamp;
-(void)performBlock:(/*^block*/id)arg1 ;
-(id)initWithScheduler:(id)arg1 ;
-(NSString *)description;
-(void)blockBecamePending;
-(void)blockBecameActive;
-(void)blockBecameCompleted;
-(unsigned long long)pendingBlockCount;
-(unsigned long long)activeBlockCount;
-(unsigned long long)completedBlockCount;
-(id<CNScheduler>)scheduler;
@end


/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) double timestamp; 
+(id)os_log;
-(NSString *)description;
-(void)performBlock:(/*^block*/id)arg1 ;
-(double)timestamp;
-(id<CNScheduler>)scheduler;
-(void)performBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 qualityOfService:(unsigned long long)arg3 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 ;
-(id)initWithScheduler:(id)arg1 ;
-(void)blockBecamePending;
-(void)blockBecameActive;
-(void)blockBecameCompleted;
-(unsigned long long)pendingBlockCount;
-(unsigned long long)activeBlockCount;
-(unsigned long long)completedBlockCount;
@end


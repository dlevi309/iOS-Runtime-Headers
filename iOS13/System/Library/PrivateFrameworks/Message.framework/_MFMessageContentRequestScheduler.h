/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <libobjc.A.dylib/EFScheduler.h>

@protocol EFScheduler;
@class EDMessagePersistence, NSString;

@interface _MFMessageContentRequestScheduler : NSObject <EFScheduler> {

	unsigned long long _requestID;
	id<EFScheduler> _scheduler;
	EDMessagePersistence* _messagePersistence;

}

@property (nonatomic,retain) id<EFScheduler> scheduler;                              //@synthesize scheduler=_scheduler - In the implementation block
@property (nonatomic,retain) EDMessagePersistence * messagePersistence;              //@synthesize messagePersistence=_messagePersistence - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)performSyncBlock:(/*^block*/id)arg1 ;
-(id<EFScheduler>)scheduler;
-(void)setScheduler:(id<EFScheduler>)arg1 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 ;
-(EDMessagePersistence *)messagePersistence;
-(id)initWithScheduler:(id)arg1 requestID:(unsigned long long)arg2 messagePersistence:(id)arg3 ;
-(void)performBlockWithActivity:(/*^block*/id)arg1 requestID:(unsigned long long)arg2 ;
-(void)performVoucherPreservingBlock:(/*^block*/id)arg1 ;
-(id)performWithObject:(id)arg1 ;
-(id)initWithScheduler:(id)arg1 messagePersistence:(id)arg2 ;
-(void)setMessagePersistence:(EDMessagePersistence *)arg1 ;
@end


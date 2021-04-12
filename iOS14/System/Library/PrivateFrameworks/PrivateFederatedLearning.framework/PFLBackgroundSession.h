/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
*/

#import <libobjc.A.dylib/PFLForegroundSessionDelegate.h>

@protocol OS_dispatch_queue, PFLDataSource;
@class NSObject, BGTask, PFLForegroundSession, NSCondition;

@interface PFLBackgroundSession : NSObject <PFLForegroundSessionDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	BGTask* _task;
	PFLForegroundSession* _session;
	NSCondition* _readyCondition;
	id<PFLDataSource> _dataSource;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) BGTask * task;                                     //@synthesize task=_task - In the implementation block
@property (nonatomic,retain) PFLForegroundSession * session;                    //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) NSCondition * readyCondition;                    //@synthesize readyCondition=_readyCondition - In the implementation block
@property (nonatomic,retain) id<PFLDataSource> dataSource;                      //@synthesize dataSource=_dataSource - In the implementation block
+(id)sharedInstance;
-(BGTask *)task;
-(id)init;
-(id<PFLDataSource>)dataSource;
-(void)setTask:(BGTask *)arg1 ;
-(PFLForegroundSession *)session;
-(void)setDataSource:(id<PFLDataSource>)arg1 ;
-(void)setSession:(PFLForegroundSession *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)submitTaskRequestWithIdentifier:(id)arg1 andError:(id*)arg2 ;
-(NSCondition *)readyCondition;
-(void)didCompleteAllTasks;
-(void)registerWithIdentifier:(id)arg1 ;
-(BOOL)resumeWithDataSource:(id)arg1 ;
@end


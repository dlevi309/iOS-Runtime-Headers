/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <TrialServer/TRIBaseTask.h>

@protocol TRITaskQueuing;
@class NSMutableArray, NSDate;

@interface TRIFetchRollbacksTask : TRIBaseTask {

	NSMutableArray* _nextTasks;
	id<TRITaskQueuing> _taskQueue;
	NSDate* _earliestDate;

}

@property (readonly) NSDate * earliestDate;              //@synthesize earliestDate=_earliestDate - In the implementation block
+(id)taskWithQueue:(id)arg1 earliestDate:(id)arg2 ;
+(id)taskWithQueue:(id)arg1 ;
-(NSDate *)earliestDate;
-(id)nextTasksForRunStatus:(int)arg1 ;
-(int)runTask;
-(id)initWithQueue:(id)arg1 earliestDate:(id)arg2 ;
-(id)getNextTaskForExperiment:(id)arg1 ;
-(void)addNextTask:(id)arg1 ;
-(BOOL)processRollback:(id)arg1 ;
@end


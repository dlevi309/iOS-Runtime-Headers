/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RETrainingScheduler.h>

@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface REOpportunisticTrainingScheduler : RETrainingScheduler {

	NSObject*<OS_xpc_object> _criteria;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _blocks;
	BOOL _scheduled;

}
-(id)init;
-(void)dealloc;
-(void)performTask:(/*^block*/id)arg1 ;
-(void)cancelPendindTasks;
-(void)_queue_unschedule;
-(void)_performAllTasks;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)performTask:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)cancelPendindTasks;
-(void)_queue_unschedule;
-(void)_performAllTasks;
@end


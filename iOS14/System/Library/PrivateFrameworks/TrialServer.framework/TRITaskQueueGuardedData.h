/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/


@protocol TRITaskPersisting;
@class NSMutableDictionary, NSDate;

@interface TRITaskQueueGuardedData : NSObject {

	BOOL stopRequested;
	id<TRITaskPersisting> taskStore;
	NSMutableDictionary* queuedTasks;
	NSDate* nextScheduledTaskStartTime;
	unsigned long long currentCapabilities;
	NSMutableDictionary* xpcDescriptorToState;
	/*^block*/id taskQueueCompletionBlock;

}
@end


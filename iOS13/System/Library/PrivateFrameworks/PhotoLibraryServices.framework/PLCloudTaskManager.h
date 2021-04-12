/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface PLCloudTaskManager : NSObject {

	NSMutableDictionary* _pendingTaskForTaskIdentifier;
	NSMutableDictionary* _highPriorityResourceToTaskIdentifierMap;
	NSMutableDictionary* _lowPriorityResourceToTaskIdentifierMap;
	NSObject*<OS_dispatch_queue> _isolationQueue;

}
-(id)init;
-(void)reset;
-(void)reportCompletionForResourceIdentifier:(id)arg1 highPriority:(BOOL)arg2 withError:(id)arg3 ;
-(void)reportProgress:(float)arg1 forResourceIdentifier:(id)arg2 highPriority:(BOOL)arg3 ;
-(void)setPendingTaskWithTransferTask:(id)arg1 withTaskIdentifier:(id)arg2 ;
-(BOOL)addProgressBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 forResourceIdentifier:(id)arg3 highPriority:(BOOL)arg4 withTaskIdentifier:(id)arg5 ;
-(id)getPendingTaskForTaskIdentifier:(id)arg1 ;
-(void)cancelTaskWithTaskIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_taskForResourceIdentifier:(id)arg1 highPriority:(BOOL)arg2 ;
-(id)_taskIdentifiersForResourceIdentifier:(id)arg1 highPriority:(BOOL)arg2 ;
-(void)_setTaskIdentifiers:(id)arg1 forResourceIdentifier:(id)arg2 highPriority:(BOOL)arg3 ;
-(void)_removeTaskIdentifiersForResourceIdentifier:(id)arg1 highPriority:(BOOL)arg2 ;
@end


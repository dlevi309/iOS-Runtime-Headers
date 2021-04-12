/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSMutableDictionary;

@interface PLCloudInMemoryTaskManager : NSObject {

	NSMutableDictionary* _resourceIDsToDownloadTasks;
	NSMutableDictionary* _taskIDsToDownloadTasks;

}
-(id)init;
-(void)reset;
-(id)_identifierForResource:(id)arg1 ;
-(void)reportCompletionForResource:(id)arg1 withData:(id)arg2 error:(id)arg3 ;
-(void)setTransferTask:(id)arg1 forResource:(id)arg2 ;
-(BOOL)addClientHandlerAndCreateTaskIfNecessaryForResource:(id)arg1 taskIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)cancelTaskWithTaskIdentifier:(id)arg1 ;
@end


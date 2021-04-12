/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class CPLResourceTransferTask, NSDate, NSMutableDictionary;

@interface PLCloudPendingResourceTask : NSObject {

	CPLResourceTransferTask* _transferTask;
	NSDate* _lastUpdated;
	BOOL _completed;
	BOOL _transferTaskRemoved;
	NSMutableDictionary* _taskIdentifierToProgressBlock;
	NSMutableDictionary* _taskIdentifierToCompletionHandler;

}
-(void)cancelTaskWithIdentifier:(id)arg1 ;
-(void)reportProgress:(float)arg1 ;
-(void)keepAlive;
-(id)lastUpdated;
-(void)reportCompletionWithError:(id)arg1 ;
-(id)taskIDs;
-(void)setTransferTask:(id)arg1 ;
-(id)initWithProgressBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 forTaskIdentifier:(id)arg3 ;
-(void)addProgressBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 withTaskIdentifier:(id)arg3 ;
@end


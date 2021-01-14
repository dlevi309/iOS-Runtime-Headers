/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)lastUpdated;
-(id)taskIDs;
-(void)cancelTaskWithIdentifier:(id)arg1 ;
-(void)reportProgress:(float)arg1 ;
-(void)reportCompletionWithError:(id)arg1 ;
-(void)setTransferTask:(id)arg1 ;
-(id)initWithProgressBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 forTaskIdentifier:(id)arg3 ;
-(void)addProgressBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 withTaskIdentifier:(id)arg3 ;
-(void)keepAlive;
@end


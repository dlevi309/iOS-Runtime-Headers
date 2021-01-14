/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDFetchBatchedRecordsOperation.h>
#import <libobjc.A.dylib/CKDOperationPipelining.h>

@class NSString;

@interface CKDFetchArchivedRecordsOperation : CKDFetchBatchedRecordsOperation <CKDOperationPipelining> {

	/*^block*/id _recordFetchedBlock;
	/*^block*/id _serverChangeTokenUpdatedBlock;

}

@property (nonatomic,retain) id<CKFetchArchivedRecordsOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,copy) id recordFetchedBlock;                                                                    //@synthesize recordFetchedBlock=_recordFetchedBlock - In the implementation block
@property (nonatomic,copy) id serverChangeTokenUpdatedBlock;                                                         //@synthesize serverChangeTokenUpdatedBlock=_serverChangeTokenUpdatedBlock - In the implementation block
@property (nonatomic,readonly) NSString * pipeliningDescription; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(int)operationType;
-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(id)recordFetchedBlock;
-(void)setRecordFetchedBlock:(id)arg1 ;
-(void)setServerChangeTokenUpdatedBlock:(id)arg1 ;
-(NSString *)pipeliningDescription;
-(void)_noteCompletedURLRequest:(id)arg1 withSchedulerInfo:(id)arg2 ;
-(void)_noteChangedRecordWithID:(id)arg1 record:(id)arg2 error:(id)arg3 ;
-(void)_noteDeletedRecordWithID:(id)arg1 recordType:(id)arg2 ;
-(id)_createAndConfigureURLRequestForZoneIDs:(id)arg1 optionsByZoneID:(id)arg2 ;
-(id)_optionsForZonesWithPendingChangesAfterRequest:(id)arg1 ;
-(void)_noteOperationBeginning;
-(void)_noteOperationFinishedBlockEnd;
-(void)_noteOperationEnding;
-(id)serverChangeTokenUpdatedBlock;
@end


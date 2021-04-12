/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDFetchBatchedRecordsOperation.h>

@class CKDFetchZoneChangesRequestOperationResult;

@interface CKDFetchRecordZoneChangesOperation : CKDFetchBatchedRecordsOperation {

	BOOL _clientIsUsingLegacyCKFetchRecordChangesOperationAPI;
	/*^block*/id _recordChangedBlock;
	/*^block*/id _serverChangeTokenUpdatedBlock;
	long long _changeTypes;
	CKDFetchZoneChangesRequestOperationResult* _savedResult;

}

@property (assign,nonatomic) long long changeTypes;                                                 //@synthesize changeTypes=_changeTypes - In the implementation block
@property (nonatomic,retain) CKDFetchZoneChangesRequestOperationResult * savedResult;               //@synthesize savedResult=_savedResult - In the implementation block
@property (assign,nonatomic) BOOL clientIsUsingLegacyCKFetchRecordChangesOperationAPI;              //@synthesize clientIsUsingLegacyCKFetchRecordChangesOperationAPI=_clientIsUsingLegacyCKFetchRecordChangesOperationAPI - In the implementation block
@property (nonatomic,copy) id recordChangedBlock;                                                   //@synthesize recordChangedBlock=_recordChangedBlock - In the implementation block
@property (nonatomic,copy) id serverChangeTokenUpdatedBlock;                                        //@synthesize serverChangeTokenUpdatedBlock=_serverChangeTokenUpdatedBlock - In the implementation block
-(void)setRecordChangedBlock:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)setChangeTypes:(long long)arg1 ;
-(id)recordChangedBlock;
-(long long)changeTypes;
-(id)analyticsPayload;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setServerChangeTokenUpdatedBlock:(id)arg1 ;
-(id)pipeliningDescription;
-(Class)operationResultClass;
-(void)fillOutOperationResult:(id)arg1 ;
-(void)_noteCompletedURLRequest:(id)arg1 withSchedulerInfo:(id)arg2 ;
-(void)_noteChangedRecordWithID:(id)arg1 recordType:(id)arg2 record:(id)arg3 error:(id)arg4 ;
-(void)_noteDeletedRecordWithID:(id)arg1 recordType:(id)arg2 ;
-(id)_createAndConfigureURLRequestForZoneIDs:(id)arg1 optionsByZoneID:(id)arg2 ;
-(id)_optionsForZonesWithPendingChangesAfterRequest:(id)arg1 ;
-(void)_noteOperationBeginning;
-(void)_noteOperationFinishedBlockEnd;
-(void)_noteOperationEnding;
-(BOOL)clientIsUsingLegacyCKFetchRecordChangesOperationAPI;
-(void)setSavedResult:(CKDFetchZoneChangesRequestOperationResult *)arg1 ;
-(id)serverChangeTokenUpdatedBlock;
-(CKDFetchZoneChangesRequestOperationResult *)savedResult;
-(void)setClientIsUsingLegacyCKFetchRecordChangesOperationAPI:(BOOL)arg1 ;
@end


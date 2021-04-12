/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDFetchBatchedRecordsOperation.h>

@class CKServerChangeToken, NSData;

@interface CKDFetchRecordZoneChangesOperation : CKDFetchBatchedRecordsOperation {

	BOOL _clientIsUsingLegacyCKFetchRecordChangesOperationAPI;
	/*^block*/id _recordChangedBlock;
	/*^block*/id _recordDeletedBlock;
	/*^block*/id _serverChangeTokenUpdatedBlock;
	CKServerChangeToken* _resultServerChangeToken;
	NSData* _resultClientChangeTokenData;
	long long _resultStatus;
	long long _changeTypes;

}

@property (assign,nonatomic) long long changeTypes;                                                 //@synthesize changeTypes=_changeTypes - In the implementation block
@property (assign,nonatomic) BOOL clientIsUsingLegacyCKFetchRecordChangesOperationAPI;              //@synthesize clientIsUsingLegacyCKFetchRecordChangesOperationAPI=_clientIsUsingLegacyCKFetchRecordChangesOperationAPI - In the implementation block
@property (nonatomic,retain) CKServerChangeToken * resultServerChangeToken;                         //@synthesize resultServerChangeToken=_resultServerChangeToken - In the implementation block
@property (nonatomic,retain) NSData * resultClientChangeTokenData;                                  //@synthesize resultClientChangeTokenData=_resultClientChangeTokenData - In the implementation block
@property (assign,nonatomic) long long resultStatus;                                                //@synthesize resultStatus=_resultStatus - In the implementation block
@property (nonatomic,copy) id recordChangedBlock;                                                   //@synthesize recordChangedBlock=_recordChangedBlock - In the implementation block
@property (nonatomic,copy) id recordDeletedBlock;                                                   //@synthesize recordDeletedBlock=_recordDeletedBlock - In the implementation block
@property (nonatomic,copy) id serverChangeTokenUpdatedBlock;                                        //@synthesize serverChangeTokenUpdatedBlock=_serverChangeTokenUpdatedBlock - In the implementation block
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(int)operationType;
-(id)activityCreate;
-(void)setResultStatus:(long long)arg1 ;
-(id)analyticsPayload;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setResultServerChangeToken:(CKServerChangeToken *)arg1 ;
-(CKServerChangeToken *)resultServerChangeToken;
-(void)setChangeTypes:(long long)arg1 ;
-(id)recordChangedBlock;
-(void)setResultClientChangeTokenData:(NSData *)arg1 ;
-(NSData *)resultClientChangeTokenData;
-(long long)changeTypes;
-(long long)resultStatus;
-(void)setRecordChangedBlock:(id)arg1 ;
-(void)setServerChangeTokenUpdatedBlock:(id)arg1 ;
-(void)setRecordDeletedBlock:(id)arg1 ;
-(id)pipeliningDescription;
-(void)_noteCompletedURLRequest:(id)arg1 withSchedulerInfo:(id)arg2 ;
-(void)_noteChangedRecordWithID:(id)arg1 record:(id)arg2 error:(id)arg3 ;
-(void)_noteDeletedRecordWithID:(id)arg1 recordType:(id)arg2 ;
-(id)_createAndConfigureURLRequestForZoneIDs:(id)arg1 optionsByZoneID:(id)arg2 ;
-(id)_optionsForZonesWithPendingChangesAfterRequest:(id)arg1 ;
-(void)_noteOperationBeginning;
-(void)_noteOperationFinishedBlockEnd;
-(void)_noteOperationEnding;
-(BOOL)clientIsUsingLegacyCKFetchRecordChangesOperationAPI;
-(id)serverChangeTokenUpdatedBlock;
-(id)recordDeletedBlock;
-(void)setClientIsUsingLegacyCKFetchRecordChangesOperationAPI:(BOOL)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKDatabaseOperation.h>
#import <libobjc.A.dylib/CKFetchRecordChangesOperationCallbacks.h>

@class CKRecordZoneID, CKServerChangeToken, NSArray, NSData, NSMutableDictionary, CKFetchRecordZoneChangesOperationInfo;

@interface CKFetchRecordChangesOperation : CKDatabaseOperation <CKFetchRecordChangesOperationCallbacks> {

	BOOL _shouldFetchAssetContents;
	BOOL _fetchAllChanges;
	/*^block*/id _recordChangedBlock;
	/*^block*/id _recordWithIDWasDeletedBlock;
	/*^block*/id _fetchRecordChangesCompletionBlock;
	/*^block*/id _serverChangeTokenFetchedBlock;
	/*^block*/id _changeTokensUpdatedBlock;
	CKRecordZoneID* _recordZoneID;
	CKServerChangeToken* _previousServerChangeToken;
	unsigned long long _resultsLimit;
	NSArray* _desiredKeys;
	CKServerChangeToken* _resultServerChangeToken;
	NSData* _resultClientChangeTokenData;
	long long _status;
	NSMutableDictionary* _recordErrors;

}

@property (nonatomic,retain) CKServerChangeToken * resultServerChangeToken;                                          //@synthesize resultServerChangeToken=_resultServerChangeToken - In the implementation block
@property (nonatomic,retain) NSData * resultClientChangeTokenData;                                                   //@synthesize resultClientChangeTokenData=_resultClientChangeTokenData - In the implementation block
@property (assign,nonatomic) long long status;                                                                       //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContents;                                                          //@synthesize shouldFetchAssetContents=_shouldFetchAssetContents - In the implementation block
@property (assign,nonatomic) BOOL fetchAllChanges;                                                                   //@synthesize fetchAllChanges=_fetchAllChanges - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordErrors;                                                     //@synthesize recordErrors=_recordErrors - In the implementation block
@property (nonatomic,copy) id serverChangeTokenFetchedBlock;                                                         //@synthesize serverChangeTokenFetchedBlock=_serverChangeTokenFetchedBlock - In the implementation block
@property (nonatomic,copy) id changeTokensUpdatedBlock;                                                              //@synthesize changeTokensUpdatedBlock=_changeTokensUpdatedBlock - In the implementation block
@property (nonatomic,readonly) id<CKFetchRecordChangesOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,readonly) CKFetchRecordZoneChangesOperationInfo * operationInfo; 
@property (nonatomic,copy) CKRecordZoneID * recordZoneID;                                                            //@synthesize recordZoneID=_recordZoneID - In the implementation block
@property (nonatomic,copy) CKServerChangeToken * previousServerChangeToken;                                          //@synthesize previousServerChangeToken=_previousServerChangeToken - In the implementation block
@property (assign,nonatomic) unsigned long long resultsLimit;                                                        //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (nonatomic,copy) NSArray * desiredKeys;                                                                    //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (nonatomic,copy) id recordChangedBlock;                                                                    //@synthesize recordChangedBlock=_recordChangedBlock - In the implementation block
@property (nonatomic,copy) id recordWithIDWasDeletedBlock;                                                           //@synthesize recordWithIDWasDeletedBlock=_recordWithIDWasDeletedBlock - In the implementation block
@property (nonatomic,readonly) BOOL moreComing; 
@property (nonatomic,copy) id fetchRecordChangesCompletionBlock;                                                     //@synthesize fetchRecordChangesCompletionBlock=_fetchRecordChangesCompletionBlock - In the implementation block
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg1 ;
+(SEL)daemonCallbackCompletionSelector;
+(Class)operationInfoClass;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(BOOL)moreComing;
-(void)handleOperationDidCompleteWithServerChangeToken:(id)arg1 clientChangeTokenData:(id)arg2 recordChangesStatus:(long long)arg3 metrics:(id)arg4 error:(id)arg5 ;
-(void)handleChangeSetCompletionWithServerChangeToken:(id)arg1 clientChangeTokenData:(id)arg2 recordChangesStatus:(long long)arg3 reply:(/*^block*/id)arg4 ;
-(void)performCKOperation;
-(id)init;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)setResultServerChangeToken:(CKServerChangeToken *)arg1 ;
-(CKServerChangeToken *)resultServerChangeToken;
-(long long)changeTypesFromSetCallbacks;
-(id)recordChangedBlock;
-(id)recordWithIDWasDeletedBlock;
-(id)serverChangeTokenFetchedBlock;
-(id)changeTokensUpdatedBlock;
-(id)fetchRecordChangesCompletionBlock;
-(void)setResultClientChangeTokenData:(NSData *)arg1 ;
-(NSData *)resultClientChangeTokenData;
-(void)setFetchRecordChangesCompletionBlock:(id)arg1 ;
-(void)handleDeleteForRecordID:(id)arg1 ;
-(void)setRecordZoneID:(CKRecordZoneID *)arg1 ;
-(void)handleChangeForRecordID:(id)arg1 record:(id)arg2 error:(id)arg3 ;
-(id)initWithRecordZoneID:(id)arg1 previousServerChangeToken:(id)arg2 ;
-(void)setServerChangeTokenFetchedBlock:(id)arg1 ;
-(void)setChangeTokensUpdatedBlock:(id)arg1 ;
-(NSMutableDictionary *)recordErrors;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)setResultsLimit:(unsigned long long)arg1 ;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(void)setFetchAllChanges:(BOOL)arg1 ;
-(void)setRecordChangedBlock:(id)arg1 ;
-(void)setPreviousServerChangeToken:(CKServerChangeToken *)arg1 ;
-(void)setRecordWithIDWasDeletedBlock:(id)arg1 ;
-(NSArray *)desiredKeys;
-(id)relevantZoneIDs;
-(CKRecordZoneID *)recordZoneID;
-(void)setStatus:(long long)arg1 ;
-(BOOL)fetchAllChanges;
-(CKServerChangeToken *)previousServerChangeToken;
-(unsigned long long)resultsLimit;
-(BOOL)shouldFetchAssetContents;
-(void)setShouldFetchAssetContents:(BOOL)arg1 ;
-(void)setRecordErrors:(NSMutableDictionary *)arg1 ;
-(long long)status;
@end


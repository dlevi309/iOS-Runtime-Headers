/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKDatabaseOperation.h>
#import <libobjc.A.dylib/CKFetchRecordZoneChangesOperationCallbacks.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, CKFetchRecordZoneChangesOperationInfo;

@interface CKFetchRecordZoneChangesOperation : CKDatabaseOperation <CKFetchRecordZoneChangesOperationCallbacks> {

	BOOL _fetchAllChanges;
	BOOL _shouldFetchAssetContents;
	BOOL _shouldReportAllPerItemFailures;
	/*^block*/id _recordChangedBlock;
	/*^block*/id _perRecordChangeCompletionBlock;
	/*^block*/id _recordWithIDWasDeletedBlock;
	/*^block*/id _recordZoneChangeTokensUpdatedBlock;
	/*^block*/id _recordZoneFetchCompletionBlock;
	/*^block*/id _fetchRecordZoneChangesCompletionBlock;
	NSArray* _recordZoneIDs;
	NSDictionary* _configurationsByRecordZoneID;
	NSMutableDictionary* _statusByZoneID;
	NSMutableSet* _zoneIDsWithPendingArchivedRecords;
	NSMutableDictionary* _perItemErrors;
	NSDictionary* _assetTransferOptionsByRecordTypeAndKey;

}

@property (nonatomic,copy) NSDictionary * optionsByRecordZoneID; 
@property (nonatomic,retain) NSMutableDictionary * statusByZoneID;                                                       //@synthesize statusByZoneID=_statusByZoneID - In the implementation block
@property (nonatomic,retain) NSMutableSet * zoneIDsWithPendingArchivedRecords;                                           //@synthesize zoneIDsWithPendingArchivedRecords=_zoneIDsWithPendingArchivedRecords - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContents;                                                              //@synthesize shouldFetchAssetContents=_shouldFetchAssetContents - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * perItemErrors;                                                        //@synthesize perItemErrors=_perItemErrors - In the implementation block
@property (nonatomic,retain) NSDictionary * assetTransferOptionsByRecordTypeAndKey;                                      //@synthesize assetTransferOptionsByRecordTypeAndKey=_assetTransferOptionsByRecordTypeAndKey - In the implementation block
@property (nonatomic,copy) id perRecordChangeCompletionBlock;                                                            //@synthesize perRecordChangeCompletionBlock=_perRecordChangeCompletionBlock - In the implementation block
@property (assign,nonatomic) BOOL shouldReportAllPerItemFailures;                                                        //@synthesize shouldReportAllPerItemFailures=_shouldReportAllPerItemFailures - In the implementation block
@property (nonatomic,readonly) id<CKFetchRecordZoneChangesOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,readonly) CKFetchRecordZoneChangesOperationInfo * operationInfo; 
@property (nonatomic,copy) NSArray * recordZoneIDs;                                                                      //@synthesize recordZoneIDs=_recordZoneIDs - In the implementation block
@property (nonatomic,copy) NSDictionary * configurationsByRecordZoneID;                                                  //@synthesize configurationsByRecordZoneID=_configurationsByRecordZoneID - In the implementation block
@property (assign,nonatomic) BOOL fetchAllChanges;                                                                       //@synthesize fetchAllChanges=_fetchAllChanges - In the implementation block
@property (nonatomic,copy) id recordChangedBlock;                                                                        //@synthesize recordChangedBlock=_recordChangedBlock - In the implementation block
@property (nonatomic,copy) id recordWithIDWasDeletedBlock;                                                               //@synthesize recordWithIDWasDeletedBlock=_recordWithIDWasDeletedBlock - In the implementation block
@property (nonatomic,copy) id recordZoneChangeTokensUpdatedBlock;                                                        //@synthesize recordZoneChangeTokensUpdatedBlock=_recordZoneChangeTokensUpdatedBlock - In the implementation block
@property (nonatomic,copy) id recordZoneFetchCompletionBlock;                                                            //@synthesize recordZoneFetchCompletionBlock=_recordZoneFetchCompletionBlock - In the implementation block
@property (nonatomic,copy) id fetchRecordZoneChangesCompletionBlock;                                                     //@synthesize fetchRecordZoneChangesCompletionBlock=_fetchRecordZoneChangesCompletionBlock - In the implementation block
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(NSArray *)recordZoneIDs;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(void)setAssetTransferOptionsByRecordTypeAndKey:(NSDictionary *)arg1 ;
-(void)handleChangeSetCompletionForRecordZoneID:(id)arg1 serverChangeToken:(id)arg2 clientChangeTokenData:(id)arg3 recordChangesStatus:(long long)arg4 hasPendingArchivedRecords:(BOOL)arg5 error:(id)arg6 reply:(/*^block*/id)arg7 ;
-(NSDictionary *)assetTransferOptionsByRecordTypeAndKey;
-(void)performCKOperation;
-(id)init;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)setRecordZoneIDs:(NSArray *)arg1 ;
-(long long)changeTypesFromSetCallbacks;
-(void)setShouldReportAllPerItemFailures:(BOOL)arg1 ;
-(id)recordChangedBlock;
-(id)recordWithIDWasDeletedBlock;
-(void)handleChangeForRecordID:(id)arg1 record:(id)arg2 error:(id)arg3 ;
-(void)fillOutOperationInfo:(id)arg1 ;
-(NSMutableSet *)zoneIDsWithPendingArchivedRecords;
-(id)perRecordChangeCompletionBlock;
-(id)fetchRecordZoneChangesCompletionBlock;
-(id)partialFailureForItemsInZone:(id)arg1 ;
-(void)setPerRecordChangeCompletionBlock:(id)arg1 ;
-(void)handleDeleteForRecordID:(id)arg1 recordType:(id)arg2 ;
-(id)recordZoneChangesStatusByZoneID;
-(id)recordZoneIDsWithPendingArchivedRecords;
-(void)setZoneIDsWithPendingArchivedRecords:(NSMutableSet *)arg1 ;
-(NSDictionary *)optionsByRecordZoneID;
-(void)setOptionsByRecordZoneID:(NSDictionary *)arg1 ;
-(void)setFetchAllChanges:(BOOL)arg1 ;
-(void)setRecordChangedBlock:(id)arg1 ;
-(id)initWithRecordZoneIDs:(id)arg1 optionsByRecordZoneID:(id)arg2 ;
-(void)setRecordWithIDWasDeletedBlock:(id)arg1 ;
-(void)setRecordZoneFetchCompletionBlock:(id)arg1 ;
-(void)setFetchRecordZoneChangesCompletionBlock:(id)arg1 ;
-(id)relevantZoneIDs;
-(void)setPerItemErrors:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)perItemErrors;
-(BOOL)fetchAllChanges;
-(void)setRecordZoneChangeTokensUpdatedBlock:(id)arg1 ;
-(BOOL)shouldReportAllPerItemFailures;
-(NSMutableDictionary *)statusByZoneID;
-(NSDictionary *)configurationsByRecordZoneID;
-(void)setConfigurationsByRecordZoneID:(NSDictionary *)arg1 ;
-(BOOL)shouldFetchAssetContents;
-(void)setShouldFetchAssetContents:(BOOL)arg1 ;
-(id)recordZoneChangeTokensUpdatedBlock;
-(id)recordZoneFetchCompletionBlock;
-(void)setStatusByZoneID:(NSMutableDictionary *)arg1 ;
-(id)initWithRecordZoneIDs:(id)arg1 configurationsByRecordZoneID:(id)arg2 ;
@end


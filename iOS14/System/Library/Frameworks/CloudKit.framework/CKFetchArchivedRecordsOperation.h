/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKDatabaseOperation.h>
#import <libobjc.A.dylib/CKFetchArchivedRecordsOperationCallbacks.h>

@class NSArray, NSDictionary, NSMutableDictionary, CKFetchArchivedRecordsOperationInfo;

@interface CKFetchArchivedRecordsOperation : CKDatabaseOperation <CKFetchArchivedRecordsOperationCallbacks> {

	BOOL _fetchAllChanges;
	BOOL _shouldFetchAssetContents;
	/*^block*/id _recordFetchedBlock;
	/*^block*/id _recordZoneChangeTokensUpdatedBlock;
	/*^block*/id _recordZoneFetchCompletionBlock;
	/*^block*/id _fetchArchivedRecordsCompletionBlock;
	NSArray* _recordZoneIDs;
	NSDictionary* _configurationsByRecordZoneID;
	NSMutableDictionary* _statusByZoneID;
	NSMutableDictionary* _perItemErrors;
	NSDictionary* _assetTransferOptionsByRecordTypeAndKey;

}

@property (nonatomic,retain) NSMutableDictionary * statusByZoneID;                                                     //@synthesize statusByZoneID=_statusByZoneID - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContents;                                                            //@synthesize shouldFetchAssetContents=_shouldFetchAssetContents - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * perItemErrors;                                                      //@synthesize perItemErrors=_perItemErrors - In the implementation block
@property (nonatomic,retain) NSDictionary * assetTransferOptionsByRecordTypeAndKey;                                    //@synthesize assetTransferOptionsByRecordTypeAndKey=_assetTransferOptionsByRecordTypeAndKey - In the implementation block
@property (nonatomic,readonly) id<CKFetchArchivedRecordsOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,readonly) CKFetchArchivedRecordsOperationInfo * operationInfo; 
@property (nonatomic,copy) NSArray * recordZoneIDs;                                                                    //@synthesize recordZoneIDs=_recordZoneIDs - In the implementation block
@property (nonatomic,copy) NSDictionary * configurationsByRecordZoneID;                                                //@synthesize configurationsByRecordZoneID=_configurationsByRecordZoneID - In the implementation block
@property (assign,nonatomic) BOOL fetchAllChanges;                                                                     //@synthesize fetchAllChanges=_fetchAllChanges - In the implementation block
@property (nonatomic,copy) id recordFetchedBlock;                                                                      //@synthesize recordFetchedBlock=_recordFetchedBlock - In the implementation block
@property (nonatomic,copy) id recordZoneChangeTokensUpdatedBlock;                                                      //@synthesize recordZoneChangeTokensUpdatedBlock=_recordZoneChangeTokensUpdatedBlock - In the implementation block
@property (nonatomic,copy) id recordZoneFetchCompletionBlock;                                                          //@synthesize recordZoneFetchCompletionBlock=_recordZoneFetchCompletionBlock - In the implementation block
@property (nonatomic,copy) id fetchArchivedRecordsCompletionBlock;                                                     //@synthesize fetchArchivedRecordsCompletionBlock=_fetchArchivedRecordsCompletionBlock - In the implementation block
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(NSArray *)recordZoneIDs;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(void)setAssetTransferOptionsByRecordTypeAndKey:(NSDictionary *)arg1 ;
-(NSDictionary *)assetTransferOptionsByRecordTypeAndKey;
-(void)performCKOperation;
-(id)init;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)setRecordZoneIDs:(NSArray *)arg1 ;
-(void)handleFetchForRecordID:(id)arg1 record:(id)arg2 error:(id)arg3 ;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)setFetchAllChanges:(BOOL)arg1 ;
-(void)setRecordZoneFetchCompletionBlock:(id)arg1 ;
-(id)relevantZoneIDs;
-(void)setPerItemErrors:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)perItemErrors;
-(id)recordFetchedBlock;
-(BOOL)fetchAllChanges;
-(void)setRecordZoneChangeTokensUpdatedBlock:(id)arg1 ;
-(void)setRecordFetchedBlock:(id)arg1 ;
-(NSMutableDictionary *)statusByZoneID;
-(NSDictionary *)configurationsByRecordZoneID;
-(void)setConfigurationsByRecordZoneID:(NSDictionary *)arg1 ;
-(BOOL)shouldFetchAssetContents;
-(void)setShouldFetchAssetContents:(BOOL)arg1 ;
-(id)recordZoneChangeTokensUpdatedBlock;
-(id)recordZoneFetchCompletionBlock;
-(void)setStatusByZoneID:(NSMutableDictionary *)arg1 ;
-(id)fetchArchivedRecordsCompletionBlock;
-(void)setFetchArchivedRecordsCompletionBlock:(id)arg1 ;
-(void)handleChangeSetCompletionForRecordZoneID:(id)arg1 serverChangeToken:(id)arg2 archivedRecordStatus:(long long)arg3 error:(id)arg4 reply:(/*^block*/id)arg5 ;
-(id)initWithRecordZoneIDs:(id)arg1 configurationsByRecordZoneID:(id)arg2 ;
-(id)recordZoneArchivesStatusByZoneID;
@end


/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSDictionary, NSMutableDictionary;

@interface CKFetchArchivedRecordsOperation : CKDatabaseOperation {

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

@property (nonatomic,retain) NSMutableDictionary * statusByZoneID;                               //@synthesize statusByZoneID=_statusByZoneID - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContents;                                      //@synthesize shouldFetchAssetContents=_shouldFetchAssetContents - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * perItemErrors;                                //@synthesize perItemErrors=_perItemErrors - In the implementation block
@property (nonatomic,retain) NSDictionary * assetTransferOptionsByRecordTypeAndKey;              //@synthesize assetTransferOptionsByRecordTypeAndKey=_assetTransferOptionsByRecordTypeAndKey - In the implementation block
@property (nonatomic,copy) NSArray * recordZoneIDs;                                              //@synthesize recordZoneIDs=_recordZoneIDs - In the implementation block
@property (nonatomic,copy) NSDictionary * configurationsByRecordZoneID;                          //@synthesize configurationsByRecordZoneID=_configurationsByRecordZoneID - In the implementation block
@property (assign,nonatomic) BOOL fetchAllChanges;                                               //@synthesize fetchAllChanges=_fetchAllChanges - In the implementation block
@property (nonatomic,copy) id recordFetchedBlock;                                                //@synthesize recordFetchedBlock=_recordFetchedBlock - In the implementation block
@property (nonatomic,copy) id recordZoneChangeTokensUpdatedBlock;                                //@synthesize recordZoneChangeTokensUpdatedBlock=_recordZoneChangeTokensUpdatedBlock - In the implementation block
@property (nonatomic,copy) id recordZoneFetchCompletionBlock;                                    //@synthesize recordZoneFetchCompletionBlock=_recordZoneFetchCompletionBlock - In the implementation block
@property (nonatomic,copy) id fetchArchivedRecordsCompletionBlock;                               //@synthesize fetchArchivedRecordsCompletionBlock=_fetchArchivedRecordsCompletionBlock - In the implementation block
-(id)init;
-(void)setFetchAllChanges:(BOOL)arg1 ;
-(void)setRecordZoneFetchCompletionBlock:(id)arg1 ;
-(void)setRecordFetchedBlock:(id)arg1 ;
-(id)initWithRecordZoneIDs:(id)arg1 configurationsByRecordZoneID:(id)arg2 ;
-(void)setRecordZoneChangeTokensUpdatedBlock:(id)arg1 ;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(NSMutableDictionary *)perItemErrors;
-(void)setPerItemErrors:(NSMutableDictionary *)arg1 ;
-(NSArray *)recordZoneIDs;
-(void)setRecordZoneIDs:(NSArray *)arg1 ;
-(BOOL)fetchAllChanges;
-(NSMutableDictionary *)statusByZoneID;
-(NSDictionary *)configurationsByRecordZoneID;
-(void)setConfigurationsByRecordZoneID:(NSDictionary *)arg1 ;
-(BOOL)shouldFetchAssetContents;
-(void)setShouldFetchAssetContents:(BOOL)arg1 ;
-(NSDictionary *)assetTransferOptionsByRecordTypeAndKey;
-(void)setAssetTransferOptionsByRecordTypeAndKey:(NSDictionary *)arg1 ;
-(id)recordFetchedBlock;
-(id)recordZoneChangeTokensUpdatedBlock;
-(id)recordZoneFetchCompletionBlock;
-(id)fetchArchivedRecordsCompletionBlock;
-(void)setFetchArchivedRecordsCompletionBlock:(id)arg1 ;
-(id)recordZoneArchivesStatusByZoneID;
-(void)setStatusByZoneID:(NSMutableDictionary *)arg1 ;
@end


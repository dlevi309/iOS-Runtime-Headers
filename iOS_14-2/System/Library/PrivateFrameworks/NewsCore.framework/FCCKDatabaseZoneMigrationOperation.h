/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@protocol FCCKDatabaseMigrator, FCCKZonePruningAssistant;
@class FCCKPrivateDatabase, CKRecordZoneID, NSMutableSet, NSMutableArray;

@interface FCCKDatabaseZoneMigrationOperation : FCOperation {

	FCCKPrivateDatabase* _database;
	CKRecordZoneID* _recordZoneID;
	id<FCCKDatabaseMigrator> _migrator;
	id<FCCKZonePruningAssistant> _pruningAssistant;
	/*^block*/id _migrationCompletionHandler;
	NSMutableSet* _createdZones;
	NSMutableArray* _resultZoneIDsEligibleForDeletion;
	NSMutableArray* _resultRecordIDsEligibleForDeletion;

}

@property (nonatomic,retain) NSMutableSet * createdZones;                                      //@synthesize createdZones=_createdZones - In the implementation block
@property (nonatomic,retain) NSMutableArray * resultZoneIDsEligibleForDeletion;                //@synthesize resultZoneIDsEligibleForDeletion=_resultZoneIDsEligibleForDeletion - In the implementation block
@property (nonatomic,retain) NSMutableArray * resultRecordIDsEligibleForDeletion;              //@synthesize resultRecordIDsEligibleForDeletion=_resultRecordIDsEligibleForDeletion - In the implementation block
@property (nonatomic,retain) FCCKPrivateDatabase * database;                                   //@synthesize database=_database - In the implementation block
@property (nonatomic,copy) CKRecordZoneID * recordZoneID;                                      //@synthesize recordZoneID=_recordZoneID - In the implementation block
@property (nonatomic,retain) id<FCCKDatabaseMigrator> migrator;                                //@synthesize migrator=_migrator - In the implementation block
@property (nonatomic,retain) id<FCCKZonePruningAssistant> pruningAssistant;                    //@synthesize pruningAssistant=_pruningAssistant - In the implementation block
@property (nonatomic,copy) id migrationCompletionHandler;                                      //@synthesize migrationCompletionHandler=_migrationCompletionHandler - In the implementation block
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(void)prepareOperation;
-(void)setDatabase:(FCCKPrivateDatabase *)arg1 ;
-(void)setMigrator:(id<FCCKDatabaseMigrator>)arg1 ;
-(void)setMigrationCompletionHandler:(id)arg1 ;
-(void)setRecordZoneID:(CKRecordZoneID *)arg1 ;
-(id<FCCKDatabaseMigrator>)migrator;
-(NSMutableSet *)createdZones;
-(void)setCreatedZones:(NSMutableSet *)arg1 ;
-(void)setResultZoneIDsEligibleForDeletion:(NSMutableArray *)arg1 ;
-(void)setResultRecordIDsEligibleForDeletion:(NSMutableArray *)arg1 ;
-(void)_migrateEntireZoneWithCompletionHandler:(/*^block*/id)arg1 ;
-(id<FCCKZonePruningAssistant>)pruningAssistant;
-(void)_migrateIndividualRecordsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)migrationCompletionHandler;
-(NSMutableArray *)resultZoneIDsEligibleForDeletion;
-(NSMutableArray *)resultRecordIDsEligibleForDeletion;
-(void)_migrateAndUpdateRecords:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_gatherRecordsToMigrateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_migrateRecordIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_pruneRecords:(id)arg1 ;
-(void)_continueGatheringRecordsWithPreviousServerChangeToken:(id)arg1 recordsAlreadyFetched:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_migratedRecord:(id)arg1 error:(id*)arg2 ;
-(BOOL)_shouldStopGatheringAfterFetchingRecords:(id)arg1 cumulativeRecords:(id)arg2 ;
-(id)_uncreatedZonesInRecords:(id)arg1 ;
-(void)_saveMigratedRecords:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setPruningAssistant:(id<FCCKZonePruningAssistant>)arg1 ;
-(void)_createZones:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_migrateRecords:(id)arg1 completion:(/*^block*/id)arg2 ;
-(CKRecordZoneID *)recordZoneID;
-(FCCKPrivateDatabase *)database;
@end


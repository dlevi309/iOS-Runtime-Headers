/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@protocol FCCKDatabaseMigrator;
@class FCCKPrivateDatabase, NSMutableArray;

@interface FCCKDatabaseMigrationOperation : FCOperation {

	FCCKPrivateDatabase* _database;
	id<FCCKDatabaseMigrator> _migrator;
	/*^block*/id _migrationCompletionHandler;
	NSMutableArray* _resultZoneIDsEligibleForDeletion;
	NSMutableArray* _resultRecordIDsEligibleForDeletion;

}

@property (nonatomic,retain) NSMutableArray * resultZoneIDsEligibleForDeletion;                //@synthesize resultZoneIDsEligibleForDeletion=_resultZoneIDsEligibleForDeletion - In the implementation block
@property (nonatomic,retain) NSMutableArray * resultRecordIDsEligibleForDeletion;              //@synthesize resultRecordIDsEligibleForDeletion=_resultRecordIDsEligibleForDeletion - In the implementation block
@property (nonatomic,retain) FCCKPrivateDatabase * database;                                   //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) id<FCCKDatabaseMigrator> migrator;                                //@synthesize migrator=_migrator - In the implementation block
@property (nonatomic,copy) id migrationCompletionHandler;                                      //@synthesize migrationCompletionHandler=_migrationCompletionHandler - In the implementation block
-(void)setDatabase:(FCCKPrivateDatabase *)arg1 ;
-(FCCKPrivateDatabase *)database;
-(id<FCCKDatabaseMigrator>)migrator;
-(void)setMigrator:(id<FCCKDatabaseMigrator>)arg1 ;
-(void)performOperation;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)prepareOperation;
-(BOOL)canRetryWithError:(id)arg1 retryAfter:(id*)arg2 ;
-(void)setResultZoneIDsEligibleForDeletion:(NSMutableArray *)arg1 ;
-(void)setResultRecordIDsEligibleForDeletion:(NSMutableArray *)arg1 ;
-(id)migrationCompletionHandler;
-(NSMutableArray *)resultZoneIDsEligibleForDeletion;
-(NSMutableArray *)resultRecordIDsEligibleForDeletion;
-(void)setMigrationCompletionHandler:(id)arg1 ;
-(void)_migrateZoneIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_migrateZoneID:(id)arg1 completion:(/*^block*/id)arg2 ;
@end


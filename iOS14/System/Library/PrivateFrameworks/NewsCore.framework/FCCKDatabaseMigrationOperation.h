/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)validateOperation;
-(BOOL)canRetryWithError:(id)arg1 retryAfter:(id*)arg2 ;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(void)prepareOperation;
-(void)setDatabase:(FCCKPrivateDatabase *)arg1 ;
-(void)setMigrator:(id<FCCKDatabaseMigrator>)arg1 ;
-(void)setMigrationCompletionHandler:(id)arg1 ;
-(id<FCCKDatabaseMigrator>)migrator;
-(void)setResultZoneIDsEligibleForDeletion:(NSMutableArray *)arg1 ;
-(void)setResultRecordIDsEligibleForDeletion:(NSMutableArray *)arg1 ;
-(id)migrationCompletionHandler;
-(NSMutableArray *)resultZoneIDsEligibleForDeletion;
-(NSMutableArray *)resultRecordIDsEligibleForDeletion;
-(FCCKPrivateDatabase *)database;
-(void)_migrateZoneIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_migrateZoneID:(id)arg1 completion:(/*^block*/id)arg2 ;
@end


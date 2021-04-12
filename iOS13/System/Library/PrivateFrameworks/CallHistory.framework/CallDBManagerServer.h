/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
*/

#import <CallHistory/CallDBManager.h>

@interface CallDBManagerServer : CallDBManager
+(id)getDestinationModelForVersion:(long long)arg1 ;
+(long long)getNextVersionToDowngradeTo:(long long)arg1 ;
+(long long)getNextVersionToMigrateToCurrentVersion:(long long)arg1 ;
+(long long)getNextVersionToDowngradeTo:(long long)arg1 withSourceVersion:(long long)arg2 ;
+(id)getUniqueIdsForAllRecords:(id)arg1 ;
+(id)getObjectIdsForAllRecords:(id)arg1 ;
+(id)getObjectIdsForDuplicateRecordsWithUniqueIds:(id)arg1 andHavingObjectIds:(id)arg2 ;
+(id)getDestinationModel:(long long)arg1 ;
+(id)downgradeDatabaseAtLocation:(id)arg1 toVersion:(long long)arg2 ;
-(id)tempDBLocation:(unsigned char*)arg1 ;
-(void)moveCallsFromTempDatabase;
-(id)permDBLocation:(unsigned char*)arg1 ;
-(void)createPermanent;
-(void)createTemporary;
-(BOOL)bootUpDBAtLocationWithRecovery:(id)arg1 isEncrypted:(BOOL)arg2 ;
-(BOOL)createCallDBProperties;
-(BOOL)bootUpDBAtLocation:(id)arg1 isEncrypted:(BOOL)arg2 ;
-(BOOL)handleBootUpFailure:(id)arg1 ;
-(id)createMOCForDBAtLocation:(id)arg1 dbVersion:(long long)arg2 isEncrypted:(BOOL)arg3 ;
-(void)modifyCallRecordForDBAtLocation:(id)arg1 dbVersion:(long long)arg2 isEncrypted:(BOOL)arg3 modifyCallRecord:(/*^block*/id)arg4 ;
-(void)populateServiceProviderAndCallCategory:(id)arg1 dbVersion:(long long)arg2 isEncrypted:(BOOL)arg3 ;
-(void)populateHandleType:(id)arg1 dbVersion:(long long)arg2 isEncrypted:(BOOL)arg3 ;
-(void)populateRecentCallRemoteParticipantHandles:(id)arg1 dbVersion:(long long)arg2 isEncrypted:(BOOL)arg3 ;
-(void)prepareDatabaseForNextStepInMigration:(id)arg1 dbVersion:(long long)arg2 isEncrypted:(BOOL)arg3 ;
-(BOOL)removeDuplicatesFromDBAtLocation:(id)arg1 dbVersion:(long long)arg2 isEncrypted:(BOOL)arg3 ;
-(BOOL)handleDatabaseMigration:(id)arg1 isEncrypted:(BOOL)arg2 isRetry:(BOOL)arg3 ;
-(id)getUUIDsOfNMostRecentRecords:(unsigned long long)arg1 fromManagedObjectContext:(id)arg2 ;
-(void)prepareForMigrationDBAtURL:(id)arg1 withModelAtURL:(id)arg2 andIsEncrypted:(BOOL)arg3 ;
@end


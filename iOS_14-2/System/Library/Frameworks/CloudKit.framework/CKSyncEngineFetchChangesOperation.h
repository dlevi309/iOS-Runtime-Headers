/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <Foundation/NSOperation.h>

@class CKDatabase, CKServerChangeToken, CKOperationGroup, NSSet, NSError, NSOperationQueue;

@interface CKSyncEngineFetchChangesOperation : NSOperation {

	BOOL _shouldFetchDatabaseChanges;
	BOOL _isExecuting;
	BOOL _isFinished;
	CKDatabase* _database;
	CKServerChangeToken* _previousDatabaseServerChangeToken;
	CKOperationGroup* _group;
	NSSet* _zoneIDs;
	/*^block*/id _recordZoneWithIDChangedBlock;
	/*^block*/id _recordZoneWithIDWasDeletedBlock;
	/*^block*/id _recordZoneWithIDWasPurgedBlock;
	/*^block*/id _databaseChangeTokenUpdatedBlock;
	/*^block*/id _fetchDatabaseChangesCompletionBlock;
	/*^block*/id _recordZoneChangesConfigurationBlock;
	/*^block*/id _recordChangedBlock;
	/*^block*/id _recordWithIDWasDeletedBlock;
	/*^block*/id _recordZoneChangeTokensUpdatedBlock;
	/*^block*/id _recordZoneFetchCompletionBlock;
	/*^block*/id _willEnqueueOperationBlock;
	/*^block*/id _fetchChangesCompletionBlock;
	NSError* _error;
	NSOperationQueue* _operationQueue;

}

@property (nonatomic,retain) NSError * error;                                                    //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                                  //@synthesize operationQueue=_operationQueue - In the implementation block
@property (assign,nonatomic) BOOL isExecuting;                                                   //@synthesize isExecuting=_isExecuting - In the implementation block
@property (assign,nonatomic) BOOL isFinished;                                                    //@synthesize isFinished=_isFinished - In the implementation block
@property (nonatomic,readonly) CKDatabase * database;                                            //@synthesize database=_database - In the implementation block
@property (nonatomic,copy) CKServerChangeToken * previousDatabaseServerChangeToken;              //@synthesize previousDatabaseServerChangeToken=_previousDatabaseServerChangeToken - In the implementation block
@property (nonatomic,retain) CKOperationGroup * group;                                           //@synthesize group=_group - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchDatabaseChanges;                                    //@synthesize shouldFetchDatabaseChanges=_shouldFetchDatabaseChanges - In the implementation block
@property (nonatomic,retain) NSSet * zoneIDs;                                                    //@synthesize zoneIDs=_zoneIDs - In the implementation block
@property (nonatomic,copy) id recordZoneWithIDChangedBlock;                                      //@synthesize recordZoneWithIDChangedBlock=_recordZoneWithIDChangedBlock - In the implementation block
@property (nonatomic,copy) id recordZoneWithIDWasDeletedBlock;                                   //@synthesize recordZoneWithIDWasDeletedBlock=_recordZoneWithIDWasDeletedBlock - In the implementation block
@property (nonatomic,copy) id recordZoneWithIDWasPurgedBlock;                                    //@synthesize recordZoneWithIDWasPurgedBlock=_recordZoneWithIDWasPurgedBlock - In the implementation block
@property (nonatomic,copy) id databaseChangeTokenUpdatedBlock;                                   //@synthesize databaseChangeTokenUpdatedBlock=_databaseChangeTokenUpdatedBlock - In the implementation block
@property (nonatomic,copy) id fetchDatabaseChangesCompletionBlock;                               //@synthesize fetchDatabaseChangesCompletionBlock=_fetchDatabaseChangesCompletionBlock - In the implementation block
@property (nonatomic,copy) id recordZoneChangesConfigurationBlock;                               //@synthesize recordZoneChangesConfigurationBlock=_recordZoneChangesConfigurationBlock - In the implementation block
@property (nonatomic,copy) id recordChangedBlock;                                                //@synthesize recordChangedBlock=_recordChangedBlock - In the implementation block
@property (nonatomic,copy) id recordWithIDWasDeletedBlock;                                       //@synthesize recordWithIDWasDeletedBlock=_recordWithIDWasDeletedBlock - In the implementation block
@property (nonatomic,copy) id recordZoneChangeTokensUpdatedBlock;                                //@synthesize recordZoneChangeTokensUpdatedBlock=_recordZoneChangeTokensUpdatedBlock - In the implementation block
@property (nonatomic,copy) id recordZoneFetchCompletionBlock;                                    //@synthesize recordZoneFetchCompletionBlock=_recordZoneFetchCompletionBlock - In the implementation block
@property (nonatomic,copy) id willEnqueueOperationBlock;                                         //@synthesize willEnqueueOperationBlock=_willEnqueueOperationBlock - In the implementation block
@property (nonatomic,copy) id fetchChangesCompletionBlock;                                       //@synthesize fetchChangesCompletionBlock=_fetchChangesCompletionBlock - In the implementation block
+(unsigned long long)maxZonesPerOperation;
+(void)setMaxZonesPerOperation:(unsigned long long)arg1 ;
-(void)setGroup:(CKOperationGroup *)arg1 ;
-(CKOperationGroup *)group;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSSet *)zoneIDs;
-(NSOperationQueue *)operationQueue;
-(id)init;
-(void)start;
-(BOOL)isAsynchronous;
-(void)setError:(NSError *)arg1 ;
-(id)recordChangedBlock;
-(id)recordWithIDWasDeletedBlock;
-(BOOL)isFinished;
-(NSError *)error;
-(void)fetchRecordZoneChanges;
-(id)cancelledError;
-(id)fetchChangesCompletionBlock;
-(BOOL)shouldFetchDatabaseChanges;
-(CKServerChangeToken *)previousDatabaseServerChangeToken;
-(void)fetchDatabaseChangesThenRecordZoneChanges;
-(id)databaseChangeTokenUpdatedBlock;
-(id)willEnqueueOperationBlock;
-(id)recordZoneChangesConfigurationBlock;
-(void)setRecordChangedBlock:(id)arg1 ;
-(void)setRecordWithIDWasDeletedBlock:(id)arg1 ;
-(void)setRecordZoneFetchCompletionBlock:(id)arg1 ;
-(void)setRecordZoneWithIDChangedBlock:(id)arg1 ;
-(void)setRecordZoneWithIDWasDeletedBlock:(id)arg1 ;
-(void)setFetchDatabaseChangesCompletionBlock:(id)arg1 ;
-(BOOL)isExecuting;
-(void)setZoneIDs:(NSSet *)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(void)setIsExecuting:(BOOL)arg1 ;
-(CKDatabase *)database;
-(void)setWillEnqueueOperationBlock:(id)arg1 ;
-(void)setShouldFetchDatabaseChanges:(BOOL)arg1 ;
-(void)setPreviousDatabaseServerChangeToken:(CKServerChangeToken *)arg1 ;
-(void)setRecordZoneWithIDWasPurgedBlock:(id)arg1 ;
-(void)setDatabaseChangeTokenUpdatedBlock:(id)arg1 ;
-(void)setRecordZoneChangesConfigurationBlock:(id)arg1 ;
-(void)setRecordZoneChangeTokensUpdatedBlock:(id)arg1 ;
-(void)setFetchChangesCompletionBlock:(id)arg1 ;
-(id)recordZoneWithIDChangedBlock;
-(id)recordZoneWithIDWasDeletedBlock;
-(id)recordZoneWithIDWasPurgedBlock;
-(id)fetchDatabaseChangesCompletionBlock;
-(void)cancel;
-(id)initWithDatabase:(id)arg1 ;
-(id)recordZoneChangeTokensUpdatedBlock;
-(id)recordZoneFetchCompletionBlock;
-(void)setIsFinished:(BOOL)arg1 ;
@end


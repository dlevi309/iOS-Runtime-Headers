/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSSQLCore, NSManagedObjectContext, PFCloudKitMetadataMigrationContext, CKRecordZoneID, PFCloudKitMetricsClient;

@interface PFCloudKitMetadataModelMigrator : NSObject {

	NSSQLCore* _store;
	NSManagedObjectContext* _metadataContext;
	PFCloudKitMetadataMigrationContext* _context;
	long long _databaseScope;
	CKRecordZoneID* _defaultZoneID;
	PFCloudKitMetricsClient* _metricsClient;

}

@property (nonatomic,readonly) NSSQLCore * store;                                         //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) NSManagedObjectContext * metadataContext;                  //@synthesize metadataContext=_metadataContext - In the implementation block
@property (nonatomic,readonly) PFCloudKitMetadataMigrationContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) long long databaseScope;                                   //@synthesize databaseScope=_databaseScope - In the implementation block
@property (nonatomic,readonly) CKRecordZoneID * defaultZoneID;                            //@synthesize defaultZoneID=_defaultZoneID - In the implementation block
@property (nonatomic,readonly) PFCloudKitMetricsClient * metricsClient;                   //@synthesize metricsClient=_metricsClient - In the implementation block
-(void)addMigrationStatementForAddingAttribute:(id)arg1 toContext:(id)arg2 inStore:(id)arg3 ;
-(NSSQLCore *)store;
-(void)addMigrationStatementToContext:(id)arg1 forRenamingAttributeNamed:(id)arg2 withOldColumnName:(id)arg3 toAttributeName:(id)arg4 onOldSQLEntity:(id)arg5 andCurrentSQLEntity:(id)arg6 ;
-(BOOL)commitMigrationMetadataAndCleanup:(id*)arg1 ;
-(BOOL)checkForRecordMetadataZoneCorruptionInStore:(id)arg1 error:(id*)arg2 ;
-(BOOL)migrateMetadataForObjectsInStore:(id)arg1 toNSCKRecordMetadataUsingContext:(id)arg2 error:(id*)arg3 ;
-(PFCloudKitMetadataMigrationContext *)context;
-(BOOL)addMigrationStatementsToDeleteDuplicateMirroredRelationshipsToContext:(id)arg1 withManagedObjectContext:(id)arg2 andSQLEntity:(id)arg3 error:(id*)arg4 ;
-(BOOL)calculateMigrationStepsWithConnection:(id)arg1 error:(id*)arg2 ;
-(BOOL)computeAncillaryEntityPrimaryKeyTableEntriesForStore:(id)arg1 error:(id*)arg2 ;
-(BOOL)checkForCorruptedRecordMetadataInStore:(id)arg1 inManagedObjectContext:(id)arg2 error:(id*)arg3 ;
-(void)addDropTableStatementsForOldMetadataTablesToContext:(id)arg1 withAdapter:(id)arg2 ;
-(BOOL)checkAndPerformMigrationIfNecessary:(id*)arg1 ;
-(BOOL)migrateBatchOfObjects:(id)arg1 forStore:(id)arg2 inContext:(id)arg3 error:(id*)arg4 ;
-(NSManagedObjectContext *)metadataContext;
-(BOOL)applyMigrationChangesWithConnection:(id)arg1 error:(id*)arg2 ;
-(long long)databaseScope;
-(id)initWithStore:(id)arg1 metadataContext:(id)arg2 databaseScope:(long long)arg3 defaultZoneID:(id)arg4 metricsClient:(id)arg5 ;
-(BOOL)cleanUpAfterClientMigrationWithStore:(id)arg1 andContext:(id)arg2 error:(id*)arg3 ;
-(PFCloudKitMetricsClient *)metricsClient;
-(BOOL)prepareContextWithConnection:(id)arg1 error:(id*)arg2 ;
-(id)fetchSchemaSQLForEntity:(id)arg1 usingConnection:(id)arg2 ;
-(CKRecordZoneID *)defaultZoneID;
-(void)dealloc;
@end


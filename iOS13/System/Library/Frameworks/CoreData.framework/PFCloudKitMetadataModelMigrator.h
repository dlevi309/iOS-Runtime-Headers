/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSSQLCore, NSManagedObjectContext, PFCloudKitMetadataMigrationContext;

@interface PFCloudKitMetadataModelMigrator : NSObject {

	NSSQLCore* _store;
	NSManagedObjectContext* _metadataContext;
	PFCloudKitMetadataMigrationContext* _context;

}

@property (nonatomic,readonly) NSSQLCore * store;                                         //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) NSManagedObjectContext * metadataContext;                  //@synthesize metadataContext=_metadataContext - In the implementation block
@property (nonatomic,readonly) PFCloudKitMetadataMigrationContext * context;              //@synthesize context=_context - In the implementation block
-(void)dealloc;
-(PFCloudKitMetadataMigrationContext *)context;
-(NSSQLCore *)store;
-(id)initWithStore:(id)arg1 metadataContext:(id)arg2 ;
-(BOOL)checkAndPerformMigrationIfNecessary:(id*)arg1 ;
-(BOOL)computeAncillaryEntityPrimaryKeyTableEntriesForStore:(id)arg1 error:(id*)arg2 ;
-(void)addDropTableStatementsForOldMetadataTablesToContext:(id)arg1 withAdapter:(id)arg2 ;
-(id)fetchSchemaSQLForEntity:(id)arg1 usingConnection:(id)arg2 ;
-(void)addMigrationStatementToContext:(id)arg1 forRenamingAttributeNamed:(id)arg2 withOldColumnName:(id)arg3 toAttributeName:(id)arg4 onOldSQLEntity:(id)arg5 andCurrentSQLEntity:(id)arg6 ;
-(BOOL)addMigrationStatementsToDeleteDuplicateMirroredRelationshipsToContext:(id)arg1 withManagedObjectContext:(id)arg2 andSQLEntity:(id)arg3 error:(id*)arg4 ;
-(void)addMigrationStatementForAddingAttribute:(id)arg1 toContext:(id)arg2 inStore:(id)arg3 ;
-(BOOL)checkForCorruptedRecordMetadataInStore:(id)arg1 inManagedObjectContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)cleanUpAfterClientMigrationWithStore:(id)arg1 andContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)migrateMetadataForObjectsInStore:(id)arg1 toNSCKRecordMetadataUsingContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)checkForRecordMetadataZoneCorruptionInStore:(id)arg1 error:(id*)arg2 ;
-(BOOL)prepareContextWithConnection:(id)arg1 error:(id*)arg2 ;
-(BOOL)calculateMigrationStepsWithConnection:(id)arg1 error:(id*)arg2 ;
-(BOOL)applyMigrationChangesWithConnection:(id)arg1 error:(id*)arg2 ;
-(BOOL)commitMigrationMetadataAndCleanup:(id*)arg1 ;
-(BOOL)migrateBatchOfObjects:(id)arg1 forStore:(id)arg2 inContext:(id)arg3 error:(id*)arg4 ;
-(NSManagedObjectContext *)metadataContext;
@end


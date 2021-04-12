/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSMutableArray, NSManagedObjectModel, NSSQLModel, NSNumber, NSDictionary, NSArray;

@interface PFCloudKitMetadataMigrationContext : NSObject {

	NSMutableArray* _migrationStatements;
	NSMutableArray* _sqlEntitiesToCreate;
	BOOL _hasWorkToDo;
	BOOL _needsMetdataMigrationToNSCKRecordMetadata;
	BOOL _needsOldTableDrop;
	BOOL _needsMirroredRelationshipsLinkedToZone;
	BOOL _needsImportAfterClientMigration;
	BOOL _needsBatchUpdateForSystemFieldsAndLastExportedTransaction;
	BOOL _needsAnalyzedHistoryCheck;
	NSManagedObjectModel* _currentModel;
	NSSQLModel* _sqlModel;
	NSManagedObjectModel* _storeMetadataModel;
	NSSQLModel* _storeSQLModel;
	NSNumber* _storeMetadataVersion;
	NSDictionary* _storeMetadataVersionHashes;

}

@property (nonatomic,readonly) NSArray * migrationStatements;                                             //@synthesize migrationStatements=_migrationStatements - In the implementation block
@property (nonatomic,readonly) NSArray * sqlEntitiesToCreate;                                             //@synthesize sqlEntitiesToCreate=_sqlEntitiesToCreate - In the implementation block
@property (nonatomic,readonly) BOOL hasWorkToDo;                                                          //@synthesize hasWorkToDo=_hasWorkToDo - In the implementation block
@property (nonatomic,retain) NSManagedObjectModel * currentModel;                                         //@synthesize currentModel=_currentModel - In the implementation block
@property (nonatomic,retain) NSSQLModel * sqlModel;                                                       //@synthesize sqlModel=_sqlModel - In the implementation block
@property (nonatomic,retain) NSManagedObjectModel * storeMetadataModel;                                   //@synthesize storeMetadataModel=_storeMetadataModel - In the implementation block
@property (nonatomic,retain) NSSQLModel * storeSQLModel;                                                  //@synthesize storeSQLModel=_storeSQLModel - In the implementation block
@property (nonatomic,retain) NSNumber * storeMetadataVersion;                                             //@synthesize storeMetadataVersion=_storeMetadataVersion - In the implementation block
@property (nonatomic,retain) NSDictionary * storeMetadataVersionHashes;                                   //@synthesize storeMetadataVersionHashes=_storeMetadataVersionHashes - In the implementation block
@property (assign,nonatomic) BOOL needsMetdataMigrationToNSCKRecordMetadata;                              //@synthesize needsMetdataMigrationToNSCKRecordMetadata=_needsMetdataMigrationToNSCKRecordMetadata - In the implementation block
@property (assign,nonatomic) BOOL needsOldTableDrop;                                                      //@synthesize needsOldTableDrop=_needsOldTableDrop - In the implementation block
@property (assign,nonatomic) BOOL needsMirroredRelationshipsLinkedToZone;                                 //@synthesize needsMirroredRelationshipsLinkedToZone=_needsMirroredRelationshipsLinkedToZone - In the implementation block
@property (assign,nonatomic) BOOL needsImportAfterClientMigration;                                        //@synthesize needsImportAfterClientMigration=_needsImportAfterClientMigration - In the implementation block
@property (assign,nonatomic) BOOL needsBatchUpdateForSystemFieldsAndLastExportedTransaction;              //@synthesize needsBatchUpdateForSystemFieldsAndLastExportedTransaction=_needsBatchUpdateForSystemFieldsAndLastExportedTransaction - In the implementation block
@property (assign,nonatomic) BOOL needsAnalyzedHistoryCheck;                                              //@synthesize needsAnalyzedHistoryCheck=_needsAnalyzedHistoryCheck - In the implementation block
-(void)setNeedsAnalyzedHistoryCheck:(BOOL)arg1 ;
-(NSManagedObjectModel *)currentModel;
-(id)init;
-(BOOL)hasWorkToDo;
-(void)addSQLEntityToCreate:(id)arg1 ;
-(NSDictionary *)storeMetadataVersionHashes;
-(void)setNeedsOldTableDrop:(BOOL)arg1 ;
-(BOOL)needsMirroredRelationshipsLinkedToZone;
-(void)setStoreSQLModel:(NSSQLModel *)arg1 ;
-(BOOL)needsBatchUpdateForSystemFieldsAndLastExportedTransaction;
-(BOOL)needsOldTableDrop;
-(NSArray *)migrationStatements;
-(void)setNeedsMirroredRelationshipsLinkedToZone:(BOOL)arg1 ;
-(NSArray *)sqlEntitiesToCreate;
-(BOOL)needsMetdataMigrationToNSCKRecordMetadata;
-(void)setCurrentModel:(NSManagedObjectModel *)arg1 ;
-(BOOL)needsImportAfterClientMigration;
-(void)setNeedsBatchUpdateForSystemFieldsAndLastExportedTransaction:(BOOL)arg1 ;
-(BOOL)needsAnalyzedHistoryCheck;
-(void)setStoreMetadataVersionHashes:(NSDictionary *)arg1 ;
-(void)setStoreMetadataModel:(NSManagedObjectModel *)arg1 ;
-(void)addMigrationStatement:(id)arg1 ;
-(void)setNeedsMetdataMigrationToNSCKRecordMetadata:(BOOL)arg1 ;
-(void)setSqlModel:(NSSQLModel *)arg1 ;
-(void)setStoreMetadataVersion:(NSNumber *)arg1 ;
-(NSSQLModel *)storeSQLModel;
-(NSManagedObjectModel *)storeMetadataModel;
-(NSSQLModel *)sqlModel;
-(NSNumber *)storeMetadataVersion;
-(void)setNeedsImportAfterClientMigration:(BOOL)arg1 ;
-(void)dealloc;
@end


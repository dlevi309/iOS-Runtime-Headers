/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	NSManagedObjectModel* _currentModel;
	NSSQLModel* _sqlModel;
	NSManagedObjectModel* _storeMetadataModel;
	NSSQLModel* _storeSQLModel;
	NSNumber* _storeMetadataVersion;
	NSDictionary* _storeMetadataVersionHashes;

}

@property (nonatomic,readonly) NSArray * migrationStatements;                             //@synthesize migrationStatements=_migrationStatements - In the implementation block
@property (nonatomic,readonly) NSArray * sqlEntitiesToCreate;                             //@synthesize sqlEntitiesToCreate=_sqlEntitiesToCreate - In the implementation block
@property (nonatomic,readonly) BOOL hasWorkToDo;                                          //@synthesize hasWorkToDo=_hasWorkToDo - In the implementation block
@property (nonatomic,retain) NSManagedObjectModel * currentModel;                         //@synthesize currentModel=_currentModel - In the implementation block
@property (nonatomic,retain) NSSQLModel * sqlModel;                                       //@synthesize sqlModel=_sqlModel - In the implementation block
@property (nonatomic,retain) NSManagedObjectModel * storeMetadataModel;                   //@synthesize storeMetadataModel=_storeMetadataModel - In the implementation block
@property (nonatomic,retain) NSSQLModel * storeSQLModel;                                  //@synthesize storeSQLModel=_storeSQLModel - In the implementation block
@property (nonatomic,retain) NSNumber * storeMetadataVersion;                             //@synthesize storeMetadataVersion=_storeMetadataVersion - In the implementation block
@property (nonatomic,retain) NSDictionary * storeMetadataVersionHashes;                   //@synthesize storeMetadataVersionHashes=_storeMetadataVersionHashes - In the implementation block
@property (assign,nonatomic) BOOL needsMetdataMigrationToNSCKRecordMetadata;              //@synthesize needsMetdataMigrationToNSCKRecordMetadata=_needsMetdataMigrationToNSCKRecordMetadata - In the implementation block
@property (assign,nonatomic) BOOL needsOldTableDrop;                                      //@synthesize needsOldTableDrop=_needsOldTableDrop - In the implementation block
@property (assign,nonatomic) BOOL needsMirroredRelationshipsLinkedToZone;                 //@synthesize needsMirroredRelationshipsLinkedToZone=_needsMirroredRelationshipsLinkedToZone - In the implementation block
-(id)init;
-(void)dealloc;
-(BOOL)hasWorkToDo;
-(void)addMigrationStatement:(id)arg1 ;
-(void)addSQLEntityToCreate:(id)arg1 ;
-(NSArray *)migrationStatements;
-(NSArray *)sqlEntitiesToCreate;
-(NSManagedObjectModel *)currentModel;
-(void)setCurrentModel:(NSManagedObjectModel *)arg1 ;
-(NSSQLModel *)sqlModel;
-(void)setSqlModel:(NSSQLModel *)arg1 ;
-(NSManagedObjectModel *)storeMetadataModel;
-(void)setStoreMetadataModel:(NSManagedObjectModel *)arg1 ;
-(NSSQLModel *)storeSQLModel;
-(void)setStoreSQLModel:(NSSQLModel *)arg1 ;
-(BOOL)needsMetdataMigrationToNSCKRecordMetadata;
-(void)setNeedsMetdataMigrationToNSCKRecordMetadata:(BOOL)arg1 ;
-(NSNumber *)storeMetadataVersion;
-(void)setStoreMetadataVersion:(NSNumber *)arg1 ;
-(NSDictionary *)storeMetadataVersionHashes;
-(void)setStoreMetadataVersionHashes:(NSDictionary *)arg1 ;
-(BOOL)needsOldTableDrop;
-(void)setNeedsOldTableDrop:(BOOL)arg1 ;
-(BOOL)needsMirroredRelationshipsLinkedToZone;
-(void)setNeedsMirroredRelationshipsLinkedToZone:(BOOL)arg1 ;
@end


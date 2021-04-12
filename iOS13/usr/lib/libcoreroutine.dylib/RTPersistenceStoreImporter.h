/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class NSPersistentStore, RTPersistenceStore, NSPersistentStoreCoordinator, NSManagedObjectModel, NSString;

@interface RTPersistenceStoreImporter : NSObject {

	NSPersistentStore* _affectedStore;
	RTPersistenceStore* _sourceStore;
	NSPersistentStoreCoordinator* _sourceCoordinator;
	RTPersistenceStore* _destinationStore;
	NSPersistentStoreCoordinator* _destinationCoordinator;
	NSManagedObjectModel* _model;
	NSString* _configuration;

}

@property (nonatomic,retain) RTPersistenceStore * sourceStore;                                   //@synthesize sourceStore=_sourceStore - In the implementation block
@property (nonatomic,retain) NSPersistentStoreCoordinator * sourceCoordinator;                   //@synthesize sourceCoordinator=_sourceCoordinator - In the implementation block
@property (nonatomic,retain) RTPersistenceStore * destinationStore;                              //@synthesize destinationStore=_destinationStore - In the implementation block
@property (nonatomic,retain) NSPersistentStoreCoordinator * destinationCoordinator;              //@synthesize destinationCoordinator=_destinationCoordinator - In the implementation block
@property (nonatomic,retain) NSManagedObjectModel * model;                                       //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSString * configuration;                                             //@synthesize configuration=_configuration - In the implementation block
-(id)init;
-(NSManagedObjectModel *)model;
-(void)setModel:(NSManagedObjectModel *)arg1 ;
-(void)setConfiguration:(NSString *)arg1 ;
-(NSString *)configuration;
-(BOOL)import:(id*)arg1 ;
-(NSPersistentStoreCoordinator *)sourceCoordinator;
-(void)setSourceCoordinator:(NSPersistentStoreCoordinator *)arg1 ;
-(id)initWithManagedObjectModel:(id)arg1 configuration:(id)arg2 sourceStore:(id)arg3 sourceCoordinator:(id)arg4 destinationStore:(id)arg5 destinationCoordinator:(id)arg6 ;
-(id)managedObjectContextTargetingType:(long long)arg1 ;
-(id)entityDescriptions;
-(id)fetchDestinationObjectWithEntityDescription:(id)arg1 predicate:(id)arg2 context:(id)arg3 error:(id*)arg4 ;
-(BOOL)updateRelationshipWithEntity:(id)arg1 relationshipDescription:(id)arg2 relationshipIdentifiers:(id)arg3 context:(id)arg4 error:(id*)arg5 ;
-(BOOL)enumerateRelationshipsInEntityDescription:(id)arg1 sourceObject:(id)arg2 error:(id*)arg3 ;
-(BOOL)importEntityRowsAndAttributes:(id*)arg1 ;
-(BOOL)establishEntityRelationships:(id*)arg1 ;
-(RTPersistenceStore *)sourceStore;
-(void)setSourceStore:(RTPersistenceStore *)arg1 ;
-(RTPersistenceStore *)destinationStore;
-(void)setDestinationStore:(RTPersistenceStore *)arg1 ;
-(NSPersistentStoreCoordinator *)destinationCoordinator;
-(void)setDestinationCoordinator:(NSPersistentStoreCoordinator *)arg1 ;
@end


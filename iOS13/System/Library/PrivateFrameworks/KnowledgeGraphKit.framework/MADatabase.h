/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/

#import <libobjc.A.dylib/MAPersistentStoreProtocol.h>

@class NSManagedObjectModel, NSManagedObjectContext, NSPersistentStoreCoordinator, NSMutableArray, NSMutableDictionary, NSPredicate, NSURL, NSString, NSUUID;

@interface MADatabase : NSObject <MAPersistentStoreProtocol> {

	unsigned long long _batchCounter;
	unsigned long long _markerCounter;
	long long _options;
	NSManagedObjectModel* _managedObjectModel;
	NSManagedObjectContext* _managedObjectContext;
	NSPersistentStoreCoordinator* _persistentStoreCoordinator;
	NSMutableArray* _localLabelStrings;
	NSMutableDictionary* _localLabelsForStrings;
	NSPredicate* _predicateIdentifierTemplate;
	NSPredicate* _predicateIdentifiersTemplate;
	NSPredicate* _predicateIdentifierAndKeyTemplate;
	NSMutableDictionary* _identifiersByEntityNameToRemove;
	NSURL* _fileURL;

}

@property (nonatomic,retain) NSManagedObjectModel * managedObjectModel;                              //@synthesize managedObjectModel=_managedObjectModel - In the implementation block
@property (nonatomic,retain) NSPersistentStoreCoordinator * persistentStoreCoordinator;              //@synthesize persistentStoreCoordinator=_persistentStoreCoordinator - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * managedObjectContext;                          //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasMarker; 
@property (nonatomic,readonly) NSUUID * graphIdentifier; 
@property (assign,nonatomic) unsigned long long graphVersion; 
@property (nonatomic,readonly) NSURL * fileURL;                                                      //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,readonly) BOOL doesCascadeEdgeDelete; 
+(id)persistentStoreFileExtension;
+(BOOL)hasMarker:(id)arg1 ;
+(BOOL)setMarkerAtURL:(id)arg1 ;
+(void)deleteMarkerAtURL:(id)arg1 ;
+(void)deleteClosedDatabaseFilesAtBaseURL:(id)arg1 ;
+(BOOL)copyFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
+(BOOL)migrateFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
+(BOOL)destroyAtURL:(id)arg1 error:(id*)arg2 ;
+(id)_markerFilePathForPersistentStoreFileURL:(id)arg1 ;
+(id)persistentStoreCoordinatorOptions;
-(id)init;
-(void)dealloc;
-(NSURL *)fileURL;
-(void)save:(/*^block*/id)arg1 ;
-(NSManagedObjectModel *)managedObjectModel;
-(void)setPersistentStoreCoordinator:(NSPersistentStoreCoordinator *)arg1 ;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(void)setManagedObjectModel:(NSManagedObjectModel *)arg1 ;
-(NSManagedObjectContext *)managedObjectContext;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(void)setGraphVersion:(unsigned long long)arg1 ;
-(unsigned long long)graphVersion;
-(void)_resetCoreDataStack;
-(void)invalidateMemoryCaches;
-(id)initWithFileURL:(id)arg1 options:(long long)arg2 ;
-(void)invalidatePersistentStores;
-(void)closePersistentStore;
-(void)setMarker;
-(void)deleteMarker;
-(void)enterBatch;
-(void)leaveBatch;
-(void)enumerateModelNodesWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateModelEdgesWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateModelNodesForIdentifiers:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)enumerateModelEdgesForIdentifiers:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)enumerateModelNodesForDomains:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)enumerateModelEdgesForDomains:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)enumerateModelNodesForLabels:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)enumerateModelEdgesForLabels:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)enumerateModelNodesPropertiesWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateModelEdgesPropertiesWithBlock:(/*^block*/id)arg1 ;
-(void)addNode:(id)arg1 requiresTesting:(BOOL)arg2 ;
-(void)addEdge:(id)arg1 requiresTesting:(BOOL)arg2 ;
-(void)removeModelNodeForIdentifier:(unsigned long long)arg1 ;
-(void)removeModelEdgeForIdentifier:(unsigned long long)arg1 ;
-(void)removeModelNodesForIdentifiers:(id)arg1 ;
-(void)removeModelEdgesForIdentifiers:(id)arg1 ;
-(void)setModelNodeProperties:(id)arg1 forIdentifier:(long long)arg2 clobberExisting:(BOOL)arg3 ;
-(void)setModelEdgeProperties:(id)arg1 forIdentifier:(long long)arg2 clobberExisting:(BOOL)arg3 ;
-(void)setModelNodePropertyValue:(id)arg1 forKey:(id)arg2 andIdentifier:(long long)arg3 ;
-(void)setModelEdgePropertyValue:(id)arg1 forKey:(id)arg2 andIdentifier:(long long)arg3 ;
-(void)removeModelNodePropertiesForIdentifier:(long long)arg1 ;
-(void)removeModelEdgePropertiesForIdentifier:(long long)arg1 ;
-(void)removeModelNodesPropertiesForIdentifiers:(id)arg1 ;
-(void)removeModelEdgesPropertiesForIdentifiers:(id)arg1 ;
-(void)removeModelNodePropertyForKey:(id)arg1 andIdentifier:(long long)arg2 ;
-(void)removeModelEdgePropertyForKey:(id)arg1 andIdentifier:(long long)arg2 ;
-(BOOL)migrateToURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)hasMarker;
-(NSUUID *)graphIdentifier;
-(BOOL)doesCascadeEdgeDelete;
-(void)removePreviousPersistenceStore;
-(id)_markerFilePath;
-(void)_cleanupElementIdentifiers;
-(void)_save:(/*^block*/id)arg1 force:(BOOL)arg2 ;
-(BOOL)hasElementIdentifiersToRemove;
-(id)_modelGraph;
-(void)_loadLabelStrings;
-(void)_saveLabelStrings;
-(void)enumerateModelNodesWithPredicate:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)enumerateModelEdgesWithPredicate:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)valueForModelProperty:(id)arg1 ;
-(BOOL)_addProperty:(id)arg1 toProperties:(id)arg2 ;
-(BOOL)_setValue:(id)arg1 onProperty:(id)arg2 ;
-(void)_loadPropertiesForEntityName:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)_cleanupIdentifiers:(id)arg1 forEntity:(id)arg2 ;
-(BOOL)_saveSynchonously:(id*)arg1 ;
-(id)_stringForLabel:(unsigned)arg1 ;
-(unsigned)_labelForString:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(void)_setLocalLabelStrings:(id)arg1 ;
@end


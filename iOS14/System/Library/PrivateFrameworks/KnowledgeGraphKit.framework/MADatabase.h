/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/

#import <libobjc.A.dylib/MAPersistentStoreProtocol.h>

@class NSManagedObjectModel, NSManagedObjectContext, NSPersistentStoreCoordinator, NSMutableArray, NSMutableDictionary, NSPredicate, NSURL, NSUUID, NSString;

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
@property (nonatomic,readonly) BOOL hasMarker; 
@property (nonatomic,readonly) NSUUID * graphIdentifier; 
@property (assign,nonatomic) unsigned long long graphVersion; 
@property (nonatomic,readonly) NSURL * fileURL;                                                      //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,readonly) BOOL doesCascadeEdgeDelete; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_markerFilePathForPersistentStoreFileURL:(id)arg1 ;
+(id)persistentStoreFileExtension;
+(id)persistentStoreCoordinatorOptions;
+(void)deleteClosedDatabaseFilesAtBaseURL:(id)arg1 ;
+(BOOL)hasMarker:(id)arg1 ;
+(BOOL)copyFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
+(void)deleteMarkerAtURL:(id)arg1 ;
+(BOOL)setMarkerAtURL:(id)arg1 ;
+(BOOL)destroyAtURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)migrateFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(void)save:(/*^block*/id)arg1 ;
-(void)removeModelNodesForIdentifiers:(id)arg1 ;
-(NSManagedObjectContext *)managedObjectContext;
-(void)removeModelEdgePropertyForKey:(id)arg1 andIdentifier:(long long)arg2 ;
-(void)setModelEdgeProperties:(id)arg1 forIdentifier:(long long)arg2 clobberExisting:(BOOL)arg3 ;
-(void)setGraphVersion:(unsigned long long)arg1 ;
-(void)enumerateModelNodesPropertiesWithBlock:(/*^block*/id)arg1 ;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(void)removeModelNodeForIdentifier:(unsigned long long)arg1 ;
-(void)enumerateModelEdgesForLabels:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)_markerFilePath;
-(id)init;
-(void)enumerateModelNodesWithBlock:(/*^block*/id)arg1 ;
-(void)leaveBatch;
-(void)setManagedObjectModel:(NSManagedObjectModel *)arg1 ;
-(void)setPersistentStoreCoordinator:(NSPersistentStoreCoordinator *)arg1 ;
-(void)enumerateModelEdgesPropertiesWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateModelEdgesForDomains:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)removeModelNodePropertiesForIdentifier:(long long)arg1 ;
-(void)enumerateModelNodesForDomains:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(BOOL)doesCascadeEdgeDelete;
-(BOOL)hasMarker;
-(void)enumerateModelEdgesWithBlock:(/*^block*/id)arg1 ;
-(void)setEdgeWeight:(float)arg1 forIdentifier:(long long)arg2 ;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(NSURL *)fileURL;
-(NSUUID *)graphIdentifier;
-(void)removePreviousPersistenceStore;
-(void)enterBatch;
-(void)invalidateMemoryCaches;
-(void)enumerateModelNodesForLabels:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)deleteMarker;
-(void)setModelNodePropertyValue:(id)arg1 forKey:(id)arg2 andIdentifier:(long long)arg3 ;
-(void)closePersistentStore;
-(void)setModelEdgePropertyValue:(id)arg1 forKey:(id)arg2 andIdentifier:(long long)arg3 ;
-(void)enumerateModelNodesForIdentifiers:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)addEdge:(id)arg1 requiresTesting:(BOOL)arg2 ;
-(void)removeModelNodePropertyForKey:(id)arg1 andIdentifier:(long long)arg2 ;
-(void)setNodeWeight:(float)arg1 forIdentifier:(long long)arg2 ;
-(void)removeModelEdgesForIdentifiers:(id)arg1 ;
-(void)setMarker;
-(BOOL)copyToURL:(id)arg1 error:(id*)arg2 ;
-(id)initWithFileURL:(id)arg1 options:(long long)arg2 ;
-(void)addNode:(id)arg1 requiresTesting:(BOOL)arg2 ;
-(void)removeModelNodesPropertiesForIdentifiers:(id)arg1 ;
-(void)invalidatePersistentStores;
-(void)removeModelEdgeForIdentifier:(unsigned long long)arg1 ;
-(void)setModelNodeProperties:(id)arg1 forIdentifier:(long long)arg2 clobberExisting:(BOOL)arg3 ;
-(void)enumerateModelEdgesForIdentifiers:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(NSManagedObjectModel *)managedObjectModel;
-(BOOL)migrateToURL:(id)arg1 error:(id*)arg2 ;
-(void)removeModelEdgePropertiesForIdentifier:(long long)arg1 ;
-(void)dealloc;
-(unsigned long long)graphVersion;
-(void)removeModelEdgesPropertiesForIdentifiers:(id)arg1 ;
-(void)_resetCoreDataStack;
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


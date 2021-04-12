/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


#import <CoreData/CoreData-Structs.h>
@class NSPersistentStoreCoordinator, NSString, NSURL, NSDictionary, NSCoreDataCoreSpotlightDelegate;

@interface NSPersistentStore : NSObject {

	NSPersistentStoreCoordinator* _coordinator;
	NSString* _configurationName;
	NSURL* _url;
	NSDictionary* _options;
	id* _oidFactories;
	id _defaultFaultHandler;
	struct {
		unsigned isReadOnly : 1;
		unsigned cleanOnRemove : 1;
		unsigned isMDDirty : 1;
		unsigned _RESERVED : 29;
	}  _flags;
	void* _temporaryIDClass;
	id _coreSpotlightDelegate;
	void* _reserved1;

}

@property (nonatomic,__weak,readonly) NSPersistentStoreCoordinator * persistentStoreCoordinator; 
@property (copy,readonly) NSString * configurationName; 
@property (readonly) NSDictionary * options; 
@property (retain) NSURL * URL; 
@property (copy) NSString * identifier; 
@property (copy,readonly) NSString * type; 
@property (getter=isReadOnly) BOOL readOnly; 
@property (nonatomic,retain) NSDictionary * metadata; 
@property (nonatomic,readonly) NSCoreDataCoreSpotlightDelegate * coreSpotlightExporter; 
+(void)initialize;
+(BOOL)accessInstanceVariablesDirectly;
+(id)cachedModelForPersistentStoreWithURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)metadataForPersistentStoreWithURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)doURLStuff:(id)arg1 createdStubFile:(BOOL*)arg2 readOnly:(BOOL*)arg3 error:(id*)arg4 options:(id)arg5 ;
+(BOOL)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id*)arg3 ;
+(Class)migrationManagerClass;
+(Class)rowCacheClass;
+(BOOL)_replacePersistentStoreAtURL:(id)arg1 destinationOptions:(id)arg2 withPersistentStoreFromURL:(id)arg3 sourceOptions:(id)arg4 error:(id*)arg5 ;
+(BOOL)_destroyPersistentStoreAtURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(BOOL)_rekeyPersistentStoreAtURL:(id)arg1 options:(id)arg2 withKey:(id)arg3 error:(id*)arg4 ;
+(id)_figureOutWhereExternalReferencesEndedUpRelativeTo:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)options;
-(NSString *)type;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)metadata;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(BOOL)load:(id*)arg1 ;
-(void)setReadOnly:(BOOL)arg1 ;
-(id)_persistentStoreCoordinator;
-(NSString *)configurationName;
-(id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4 ;
-(id)faultHandler;
-(BOOL)loadMetadata:(id*)arg1 ;
-(id)_updatedMetadataWithSeed:(id)arg1 includeVersioning:(BOOL)arg2 ;
-(void)_setMetadataDirty:(BOOL)arg1 ;
-(BOOL)_isMetadataDirty;
-(id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(void)willRemoveFromPersistentStoreCoordinator:(id)arg1 ;
-(BOOL)supportsConcurrentRequestHandling;
-(id)_rawMetadata__;
-(BOOL)supportsGenerationalQuerying;
-(id)currentQueryGeneration;
-(void)freeQueryGenerationWithIdentifier:(id)arg1 ;
-(id)reopenQueryGenerationWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1 generation:(id)arg2 ;
-(void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1 generation:(id)arg2 ;
-(id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4 ;
-(id)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2 ;
-(id)ancillaryModels;
-(id)objectIDFactoryForEntity:(id)arg1 ;
-(id)currentChangeToken;
-(Class)_objectIDClass;
-(id)_storeInfoForEntityDescription:(id)arg1 ;
-(BOOL)isReadOnly;
-(void)_didLoadMetadata;
-(void)_preflightCrossCheck;
-(void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1 ;
-(void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1 ;
-(void)doFilesystemCleanupOnRemove:(BOOL)arg1 ;
-(NSCoreDataCoreSpotlightDelegate *)coreSpotlightExporter;
-(void)_setCoreSpotlightDelegate:(id)arg1 ;
-(id)_newOrderedRelationshipInformationForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4 ;
-(void)_setPersistentStoreCoordinator:(id)arg1 ;
-(id)_allOrderKeysForDestination:(id)arg1 inRelationship:(id)arg2 error:(id*)arg3 ;
-(BOOL)_unload:(id*)arg1 ;
-(void)didAddToPersistentStoreCoordinator:(id)arg1 ;
-(Class)faultHandlerClass;
-(Class)objectIDClassForEntity:(id)arg1 ;
-(void)_resetObjectIDFactoriesForStoreUUIDChange;
-(BOOL)_prepareForExecuteRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)_isCloudKitOptioned;
-(id)_defaultMetadata;
-(void)_updateMetadata;
-(void)_setupObserver;
-(void)_rebuildIndiciesSynchronously:(BOOL)arg1 ;
@end


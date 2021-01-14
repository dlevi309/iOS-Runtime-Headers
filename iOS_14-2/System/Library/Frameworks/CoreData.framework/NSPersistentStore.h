/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	id _managedObjectModel;
	CFSetRef _entitiesInConfiguration;

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
+(BOOL)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id*)arg3 ;
+(id)cachedModelForPersistentStoreWithURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(Class)migrationManagerClass;
+(Class)rowCacheClass;
+(id)_figureOutWhereExternalReferencesEndedUpRelativeTo:(id)arg1 ;
+(id)metadataForPersistentStoreWithURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)_replacePersistentStoreAtURL:(id)arg1 destinationOptions:(id)arg2 withPersistentStoreFromURL:(id)arg3 sourceOptions:(id)arg4 error:(id*)arg5 ;
+(BOOL)doURLStuff:(id)arg1 createdStubFile:(BOOL*)arg2 readOnly:(BOOL*)arg3 error:(id*)arg4 options:(id)arg5 ;
+(BOOL)accessInstanceVariablesDirectly;
+(BOOL)_rekeyPersistentStoreAtURL:(id)arg1 options:(id)arg2 withKey:(id)arg3 error:(id*)arg4 ;
+(BOOL)_destroyPersistentStoreAtURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4 ;
-(id)objectIDFactoryForEntity:(id)arg1 ;
-(Class)objectIDClassForEntity:(id)arg1 ;
-(void)_setPersistentStoreCoordinator:(id)arg1 ;
-(void)freeQueryGenerationWithIdentifier:(id)arg1 ;
-(id)faultHandler;
-(void)doFilesystemCleanupOnRemove:(BOOL)arg1 ;
-(BOOL)_unload:(id*)arg1 ;
-(BOOL)supportsConcurrentRequestHandling;
-(id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4 ;
-(Class)_objectIDClass;
-(BOOL)_prepareForExecuteRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)loadMetadata:(id*)arg1 ;
-(id)mirroringDelegate;
-(Class)faultHandlerClass;
-(id)_newOrderedRelationshipInformationForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4 ;
-(id)_persistentStoreCoordinator;
-(void)_rebuildIndiciesSynchronously:(BOOL)arg1 ;
-(void)_setupObserver;
-(id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(void)_didLoadMetadata;
-(id)_defaultMetadata;
-(id)currentChangeToken;
-(NSString *)configurationName;
-(BOOL)load:(id*)arg1 ;
-(void)_updateMetadata;
-(id)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2 ;
-(void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1 ;
-(id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1 ;
-(void)willRemoveFromPersistentStoreCoordinator:(id)arg1 ;
-(void)_setMetadataDirty:(BOOL)arg1 ;
-(void)didAddToPersistentStoreCoordinator:(id)arg1 ;
-(id)currentQueryGeneration;
-(void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1 generation:(id)arg2 ;
-(BOOL)finishDeferredLightweightMigration:(BOOL)arg1 withError:(id*)arg2 ;
-(void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1 generation:(id)arg2 ;
-(BOOL)isCloudKitEnabled;
-(id)_retainedPersistentStoreCoordinator;
-(BOOL)_isPersistentStoreAlive;
-(id)ancillaryModels;
-(id)_storeInfoForEntityDescription:(id)arg1 ;
-(void)_preflightCrossCheck;
-(id)_updatedMetadataWithSeed:(id)arg1 includeVersioning:(BOOL)arg2 ;
-(void)setReadOnly:(BOOL)arg1 ;
-(BOOL)isReadOnly;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(id)init;
-(void)setURL:(NSURL *)arg1 ;
-(BOOL)_isMetadataDirty;
-(NSDictionary *)options;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(id)_allOrderKeysForDestination:(id)arg1 inRelationship:(id)arg2 error:(id*)arg3 ;
-(id)description;
-(void)_setCoreSpotlightDelegate:(id)arg1 ;
-(CFSetRef)_entitiesForConfiguration;
-(NSString *)type;
-(NSURL *)URL;
-(BOOL)supportsGenerationalQuerying;
-(id)reopenQueryGenerationWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSCoreDataCoreSpotlightDelegate *)coreSpotlightExporter;
-(void)_resetObjectIDFactoriesForStoreUUIDChange;
-(NSDictionary *)metadata;
-(id)_rawMetadata__;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)_isCloudKitOptioned;
-(void)dealloc;
@end


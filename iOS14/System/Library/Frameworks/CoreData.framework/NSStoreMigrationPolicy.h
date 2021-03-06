/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSPersistentStoreCoordinator, NSURL, NSString, NSDictionary, NSManagedObjectModel, NSMappingModel, NSMigrationManager, NSArray;

@interface NSStoreMigrationPolicy : NSObject {

	NSPersistentStoreCoordinator* _coordinator;
	NSURL* _sourceURL;
	NSString* _sourceConfiguration;
	NSDictionary* _sourceOptions;
	NSManagedObjectModel* _sourceModel;
	NSDictionary* _sourceMetadata;
	NSMappingModel* _mappingModel;
	NSURL* _destinationURL;
	NSString* _destinationType;
	NSString* _destinationConfiguration;
	NSDictionary* _destinationOptions;
	NSMigrationManager* _migrationManager;
	NSArray* _resourceBundles;
	long long _workingWithSkewedSource;
	void* _reserved2;
	void* _reserved3;
	void* _reserved4;

}
+(id)migrationStoreOptionsFromStoreOptions:(id)arg1 ;
+(id)destinationURLForMigrationSourceURL:(id)arg1 createDocumentReplacementDirectory:(BOOL)arg2 error:(id*)arg3 ;
+(int)migrationDebugLevel;
+(void)setMigrationDebugLevel:(int)arg1 ;
-(void)setSourceURL:(id)arg1 ;
-(id)sourceType;
-(id)sourceURL;
-(id)destinationURL;
-(id)persistentStoreCoordinator;
-(void)setDestinationURL:(id)arg1 ;
-(id)destinationType;
-(void)setPersistentStoreCoordinator:(id)arg1 ;
-(id)resourceBundles;
-(id)sourceOptions;
-(id)_sourceModelForVersionHashes:(id)arg1 withMetadata:(id)arg2 inBundles:(id)arg3 outPaths:(id)arg4 ;
-(id)sourceMetadata;
-(void)setSourceMetadata:(id)arg1 ;
-(BOOL)migrateStoreAtURL:(id)arg1 toURL:(id)arg2 storeType:(id)arg3 options:(id)arg4 withManager:(id)arg5 error:(id*)arg6 ;
-(id)sourceModelForStoreAtURL:(id)arg1 metadata:(id)arg2 error:(id*)arg3 ;
-(id)createMigrationManagerForSourceModel:(id)arg1 destinationModel:(id)arg2 error:(id*)arg3 ;
-(id)migrateStoreAtURL:(id)arg1 withManager:(id)arg2 metadata:(id)arg3 options:(id)arg4 error:(id*)arg5 ;
-(void)setSourceModel:(id)arg1 ;
-(id)sourceConfiguration;
-(void)setMappingModel:(id)arg1 ;
-(id)externalDataReferencesURLForDestination:(id)arg1 forStoreOfType:(id)arg2 ;
-(void)setDestinationOptions:(id)arg1 ;
-(id)mappingModelForSourceModel:(id)arg1 destinationModel:(id)arg2 error:(id*)arg3 ;
-(id)destinationConfiguration;
-(void)setResourceBundles:(id)arg1 ;
-(id)destinationOptionsForMigration:(id)arg1 sourceMetadata:(id)arg2 error:(id*)arg3 ;
-(id)destinationOptions;
-(void)setMigrationManager:(id)arg1 ;
-(id)destinationTypeForMigration:(id)arg1 sourceMetadata:(id)arg2 error:(id*)arg3 ;
-(void)willPerformMigrationWithManager:(id)arg1 ;
-(id)destinationConfigurationForMigration:(id)arg1 sourceMetadata:(id)arg2 error:(id*)arg3 ;
-(void)setDestinationConfiguration:(id)arg1 ;
-(void)setSourceOptions:(id)arg1 ;
-(void)handleMigrationError:(id)arg1 inManager:(id)arg2 ;
-(void)didPerformMigrationWithManager:(id)arg1 ;
-(id)addMigratedStoreToCoordinator:(id)arg1 withType:(id)arg2 configuration:(id)arg3 URL:(id)arg4 options:(id)arg5 error:(id*)arg6 ;
-(void)setSourceConfiguration:(id)arg1 ;
-(id)migrationManager;
-(void)setDestinationType:(id)arg1 ;
-(id)sourceModel;
-(id)destinationModel;
-(id)mappingModel;
-(void)setPersistentStoreCoordinator:(id)arg1 sourceURL:(id)arg2 configuration:(id)arg3 metadata:(id)arg4 options:(id)arg5 ;
-(id)_gatherDataAndPerformMigration:(id*)arg1 ;
-(void)dealloc;
@end


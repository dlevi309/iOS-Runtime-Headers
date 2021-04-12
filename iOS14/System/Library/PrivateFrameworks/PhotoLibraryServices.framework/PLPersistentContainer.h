/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLPersistentContainerStoreAccess.h>

@protocol PLXPCPhotoLibraryStorePolicy;
@class NSPersistentStoreCoordinator, PLLazyObject, NSURL;

@interface PLPersistentContainer : NSObject <PLPersistentContainerStoreAccess> {

	PLLazyObject* _lazyAssetdClient;
	os_unfair_lock_s _sharedPersistentStoreCoordinatorLock;
	NSPersistentStoreCoordinator* _sharedPersistentStoreCoordinator;
	BOOL _sharedPersistentStoreCoordinatorRemoved;
	NSURL* _libraryURL;
	id<PLXPCPhotoLibraryStorePolicy> _xpcStorePolicy;

}

@property (readonly) NSURL * libraryURL;                                                           //@synthesize libraryURL=_libraryURL - In the implementation block
@property (retain) id<PLXPCPhotoLibraryStorePolicy> xpcStorePolicy;                                //@synthesize xpcStorePolicy=_xpcStorePolicy - In the implementation block
@property (readonly) NSPersistentStoreCoordinator * sharedPersistentStoreCoordinator; 
+(void)getConfigurationForDatabasePath:(id)arg1 withBlock:(/*^block*/id)arg2 ;
+(id)managedObjectModelURL;
+(void)getPersistentStoreURL:(id*)arg1 options:(id*)arg2 forDatabasePath:(id)arg3 ;
+(BOOL)hasConfiguredPhotoLibrary;
+(void)removePhotosDatabaseWithPathManager:(id)arg1 ;
+(void)_getPersistentStoreURL:(id*)arg1 options:(id*)arg2 forDatabasePath:(id)arg3 enableOrderKeyNotifications:(BOOL)arg4 ;
+(BOOL)shouldTrackIndexUse;
+(long long)_migrateOrRebuildDatabaseWithSharedPersistentStoreCoordinator:(id)arg1 modelMigrator:(id)arg2 migrationPolicy:(unsigned)arg3 error:(id*)arg4 ;
+(BOOL)_destroyPhotosDatabaseWithPath:(id)arg1 backupToPath:(id)arg2 ;
+(id)managedObjectModel;
+(long long)_openAndMigrateStoreWithURL:(id)arg1 options:(id)arg2 coordinator:(id)arg3 modelMigrator:(id)arg4 migrationPolicy:(unsigned)arg5 error:(id*)arg6 ;
-(NSURL *)libraryURL;
-(void)removeSharedPersistentStoreCoordinator;
-(id)newPersistentStoreCoordinatorForMigration:(id*)arg1 ;
-(BOOL)_configureXPCPersistentStoreCoordinator:(id)arg1 error:(id*)arg2 ;
-(BOOL)shouldUseXPCPhotoLibraryStore;
-(long long)configureSharedPersistentStoreCoordinatorAndMigrateOrRebuildIfNecessaryWithModelMigrator:(id)arg1 migrationPolicy:(unsigned)arg2 error:(id*)arg3 ;
-(NSPersistentStoreCoordinator *)sharedPersistentStoreCoordinator;
-(void)setXpcStorePolicy:(id<PLXPCPhotoLibraryStorePolicy>)arg1 ;
-(BOOL)_configurePersistentStoreCoordinator:(id)arg1 overrideCurrentModelVersionInStore:(BOOL)arg2 error:(id*)arg3 ;
-(id<PLXPCPhotoLibraryStorePolicy>)xpcStorePolicy;
-(id)initWithLibraryURL:(id)arg1 lazyAssetsdClient:(id)arg2 ;
-(void)dealloc;
-(id)newSharedPersistentStoreCoordinator;
@end


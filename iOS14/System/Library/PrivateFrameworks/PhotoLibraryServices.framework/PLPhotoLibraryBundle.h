/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLFileSystemVolumeUnmountObserver.h>

@class NSURL, NSError, PLAtomicObject, PLLazyObject, NSNumber, PLFileSystemVolumeUnmountMonitor, PLPhotoLibraryPathManager, PLPhotoLibraryBundleController, PLIndicatorFileCoordinator, PLPersistentContainer, PLChangeHandlingContainer, PLPhotoKitVariationCache, PLManagedObjectLookupItemCache, PLPersonInfoManager, PLEmailAddressManager, PLPhotoAnalysisServiceClient, PLConstraintsDirector, PFTimeZoneLookup, PLClientSandboxExtensionCache, PLAssetsdClient, PLLibraryServicesManager, NSArray;

@interface PLPhotoLibraryBundle : NSObject <PLFileSystemVolumeUnmountObserver> {

	NSURL* _libraryURL;
	os_unfair_lock_s _lock;
	NSError* _shutdownReason;
	PLAtomicObject* _atomicPhotoLibraries;
	PLLazyObject* _lazyPersistentContainer;
	PLLazyObject* _lazyIndicatorFileCoordinator;
	PLLazyObject* _lazyChangeHandlingContainer;
	PLLazyObject* _lazyAssetsdClient;
	PLLazyObject* _lazyLibraryServicesManager;
	PLLazyObject* _lazyVariationCache;
	PLLazyObject* _lazyUniformTypeIdentiferCache;
	PLLazyObject* _lazyCodecCache;
	PLLazyObject* _lazyPersonInfoManager;
	PLLazyObject* _lazyEmailAddressManager;
	PLLazyObject* _lazyBoundAssetsdServicesTable;
	PLLazyObject* _lazyPhotoAnalysisServiceClient;
	PLLazyObject* _lazyConstraintsDirector;
	PLLazyObject* _lazyTimeZoneLookup;
	NSNumber* _sqliteErrorIndicatorFileExists;
	os_unfair_lock_s _sqliteErrorIndicatorLock;
	PLFileSystemVolumeUnmountMonitor* _volumeUnmountMonitor;
	PLPhotoLibraryPathManager* _pathManager;
	PLPhotoLibraryBundleController* _bundleController;

}

@property (copy,readonly) NSURL * libraryURL;                                                         //@synthesize libraryURL=_libraryURL - In the implementation block
@property (copy,readonly) NSError * shutdownReason; 
@property (readonly) PLPhotoLibraryPathManager * pathManager;                                         //@synthesize pathManager=_pathManager - In the implementation block
@property (readonly) PLIndicatorFileCoordinator * indicatorFileCoordinator; 
@property (readonly) PLPersistentContainer * persistentContainer; 
@property (readonly) PLChangeHandlingContainer * changeHandlingContainer; 
@property (readonly) PLPhotoKitVariationCache * variationCache; 
@property (readonly) PLManagedObjectLookupItemCache * uniformTypeIdentiferCache; 
@property (readonly) PLManagedObjectLookupItemCache * codecCache; 
@property (readonly) PLPersonInfoManager * personInfoManager; 
@property (readonly) PLEmailAddressManager * emailAddressManager; 
@property (nonatomic,__weak,readonly) PLPhotoLibraryBundleController * bundleController;              //@synthesize bundleController=_bundleController - In the implementation block
@property (readonly) PLPhotoAnalysisServiceClient * photoAnalysisServiceClient; 
@property (readonly) PLConstraintsDirector * constraintsDirector; 
@property (readonly) PFTimeZoneLookup * timeZoneLookup; 
@property (readonly) PLClientSandboxExtensionCache * clientSandboxExtensionCache; 
@property (readonly) PLAssetsdClient * assetsdClient; 
@property (readonly) PLLibraryServicesManager * libraryServicesManager; 
@property (readonly) NSArray * boundAssetsdServices; 
-(NSURL *)libraryURL;
-(PLLibraryServicesManager *)libraryServicesManager;
-(void)distributeChangesSinceLastCheckpoint;
-(void)initializeChangeHandling;
-(PLAssetsdClient *)assetsdClient;
-(PLPersistentContainer *)persistentContainer;
-(PLPhotoLibraryPathManager *)pathManager;
-(PLPersonInfoManager *)personInfoManager;
-(PLIndicatorFileCoordinator *)indicatorFileCoordinator;
-(PLManagedObjectLookupItemCache *)codecCache;
-(void)_invalidateClientSandboxExtensionCache;
-(void)_invalidateChangeHandlingContainer;
-(void)touch;
-(PLClientSandboxExtensionCache *)clientSandboxExtensionCache;
-(BOOL)registerPLPhotoLibrary:(id)arg1 ;
-(BOOL)sqliteErrorIndicatorFileExists;
-(void)close;
-(void)unbindAssetsdService:(id)arg1 ;
-(id)newLibraryServicesManager;
-(void)setPhotoStreamEnabled:(BOOL)arg1 ;
-(PLPhotoLibraryBundleController *)bundleController;
-(id)newChangeHandlingContainer;
-(void)setSharedAlbumEnabled:(BOOL)arg1 ;
-(id)description;
-(void)_invalidatePhotoAnalysisServiceClient;
-(void)_invalidatePersistentContainer;
-(void)resetClientSandboxExtensionCache;
-(id)boundAssetsdServicesTable;
-(PFTimeZoneLookup *)timeZoneLookup;
-(id)newBoundAssetsdServicesTable;
-(BOOL)bindAssetsdService:(id)arg1 error:(id*)arg2 ;
-(id)initWithLibraryURL:(id)arg1 bundleController:(id)arg2 ;
-(PLPhotoAnalysisServiceClient *)photoAnalysisServiceClient;
-(void)volumeWillUnmount:(id)arg1 ;
-(id)newAssetsdClient;
-(NSArray *)boundAssetsdServices;
-(void)shutdownWithReason:(id)arg1 ;
-(void)setCloudPhotoLibraryEnabled:(BOOL)arg1 ;
-(PLConstraintsDirector *)constraintsDirector;
-(NSError *)shutdownReason;
-(PLManagedObjectLookupItemCache *)uniformTypeIdentiferCache;
-(PLChangeHandlingContainer *)changeHandlingContainer;
-(PLEmailAddressManager *)emailAddressManager;
-(void)dealloc;
-(id)newChangePublisher;
-(BOOL)isSystemPhotoLibrary;
-(PLPhotoKitVariationCache *)variationCache;
@end


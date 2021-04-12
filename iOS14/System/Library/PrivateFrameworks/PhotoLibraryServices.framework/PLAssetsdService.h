/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/PLAssetsdServiceProtocol.h>

@class PLAssetsdInnerService, NSXPCConnection, PLPhotoLibraryBundleController, PLPhotoLibraryBundle, PLPhotoLibrary, PLAssetsdConnectionAuthorization, PLAssetsdCPLResourceDownloader, NSURL, PLCacheMetricsCollectorServerShell, PLLibraryServicesManager, NSString;

@interface PLAssetsdService : NSObject <PLAssetsdServiceProtocol> {

	PLAssetsdInnerService* _innerLibraryService;
	PLAssetsdInnerService* _innerLibraryInternalService;
	PLAssetsdInnerService* _innerSystemLibraryURLReadOnlyService;
	PLAssetsdInnerService* _innerLibraryManagementService;
	PLAssetsdInnerService* _innerPhotoKitService;
	PLAssetsdInnerService* _innerPhotoKitAddService;
	PLAssetsdInnerService* _innerResourceAvailabilityService;
	PLAssetsdInnerService* _innerResourceService;
	PLAssetsdInnerService* _innerResourceWriteOnlyService;
	PLAssetsdInnerService* _innerResourceInternalService;
	PLAssetsdInnerService* _innerCloudService;
	PLAssetsdInnerService* _innerCloudInternalService;
	PLAssetsdInnerService* _innerMigrationService;
	PLAssetsdInnerService* _innerSyncService;
	PLAssetsdInnerService* _innerNotificationService;
	PLAssetsdInnerService* _innerDemoService;
	PLAssetsdInnerService* _innerDiagnosticsService;
	PLAssetsdInnerService* _innerDebugService;
	PLAssetsdInnerService* _innerPrivacySupportService;
	BOOL _readyForDaemonJobs;
	NSXPCConnection* _connection;
	int _remotePID;
	PLPhotoLibraryBundleController* _libraryBundleController;
	PLPhotoLibraryBundle* _libraryBundle;
	PLPhotoLibrary* _photoLibrary;
	PLAssetsdConnectionAuthorization* _connectionAuthorization;
	PLAssetsdCPLResourceDownloader* _resourceDownloader;
	NSURL* _libraryURL;
	PLCacheMetricsCollectorServerShell* _cacheMetricsShellObject;

}

@property (nonatomic,readonly) NSURL * libraryURL;                                                        //@synthesize libraryURL=_libraryURL - In the implementation block
@property (nonatomic,readonly) PLLibraryServicesManager * libraryServicesManager; 
@property (nonatomic,readonly) BOOL isPhotosClient; 
@property (nonatomic,readonly) PLCacheMetricsCollectorServerShell * cacheMetricsShellObject;              //@synthesize cacheMetricsShellObject=_cacheMetricsShellObject - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURL *)libraryURL;
-(PLLibraryServicesManager *)libraryServicesManager;
-(long long)requiredStateForPhotoKitAddService;
-(void)getResourceServiceWithReply:(/*^block*/id)arg1 ;
-(long long)requiredStateForCloudService;
-(id)newCloudInternalService;
-(void)getResourceInternalServiceWithReply:(/*^block*/id)arg1 ;
-(long long)requiredStateForResourceWriteOnlyService;
-(id)permissionsForPhotoKitService;
-(id)newResourceService;
-(void)getLibraryServiceWithReply:(/*^block*/id)arg1 ;
-(id)serviceContextWithSelector:(SEL)arg1 ;
-(id)newSystemLibraryURLReadOnlyService;
-(id)newDemoService;
-(id)newDiagnosticsService;
-(id)permissionsForDemoService;
-(long long)requiredStateForSystemLibraryURLReadOnlyService;
-(id)permissionsForSystemLibraryURLReadOnlyService;
-(id)newPhotoKitAddService;
-(long long)requiredStateForDemoService;
-(id)newResourceInternalService;
-(id)permissionsForDiagnosticsService;
-(id)_waitForLibraryServicesForDaemonJob;
-(void)runDaemonJob:(id)arg1 isSerial:(BOOL)arg2 withReply:(/*^block*/id)arg3 ;
-(BOOL)isPhotosClient;
-(id)permissionsForSyncService;
-(id)permissionsForLibraryManagementService;
-(void)invalidateConnectionWithReason:(id)arg1 ;
-(id)newLibraryManagementService;
-(void)getPrivacySupportServiceWithReply:(/*^block*/id)arg1 ;
-(id)permissionsForLibraryInternalService;
-(long long)requiredStateForLibraryInternalService;
-(void)getPhotoKitServiceWithReply:(/*^block*/id)arg1 ;
-(void)getPhotoKitAddServiceWithReply:(/*^block*/id)arg1 ;
-(NSString *)description;
-(long long)requiredStateForDebugService;
-(void)getCloudServiceWithReply:(/*^block*/id)arg1 ;
-(long long)requiredStateForPhotoKitService;
-(id)newResourceWriteOnlyService;
-(long long)requiredStateForLibraryManagementService;
-(void)getDebugServiceWithReply:(/*^block*/id)arg1 ;
-(long long)requiredStateForResourceInternalService;
-(void)bindToPhotoLibraryURL:(id)arg1 sandboxExtension:(id)arg2 clientOptions:(id)arg3 withReply:(/*^block*/id)arg4 ;
-(PLCacheMetricsCollectorServerShell *)cacheMetricsShellObject;
-(id)permissionsForLibraryService;
-(long long)requiredStateForDiagnosticsService;
-(void)runDaemonJob:(id)arg1 isSerial:(BOOL)arg2 ;
-(id)newLibraryInternalService;
-(id)permissionsForCloudService;
-(id)permissionsForMigrationService;
-(id)newPrivacySupportService;
-(id)permissionsForResourceService;
-(void)getSystemLibraryURLReadOnlyServiceWithReply:(/*^block*/id)arg1 ;
-(void)getCloudInternalServiceWithReply:(/*^block*/id)arg1 ;
-(id)permissionsForCloudInternalService;
-(id)permissionsForResourceInternalService;
-(id)newDebugService;
-(void)handleInterruption;
-(id)newCloudService;
-(id)newMigrationService;
-(void)getNotificationServiceWithReply:(/*^block*/id)arg1 ;
-(id)_photoLibrary;
-(void)logStatus;
-(long long)requiredStateForLibraryService;
-(void)getLibraryManagementServiceWithReply:(/*^block*/id)arg1 ;
-(id)permissionsForResourceAvailabilityService;
-(long long)requiredStateForNotificationService;
-(long long)requiredStateForSyncService;
-(void)bindToPhotoLibraryURL:(id)arg1 sandboxExtension:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(BOOL)_prepareToRunDaemonJob:(id)arg1 error:(id*)arg2 ;
-(void)getResourceAvailabilityServiceWithReply:(/*^block*/id)arg1 ;
-(id)permissionsForPrivacySupportService;
-(id)clientDebugDescription;
-(void)getLibraryInternalServiceWithReply:(/*^block*/id)arg1 ;
-(long long)requiredStateForMigrationService;
-(void)getMigrationServiceWithReply:(/*^block*/id)arg1 ;
-(id)newPhotoKitService;
-(id)newSyncService;
-(long long)requiredStateForCloudInternalService;
-(id)resourceDownloader;
-(void)getSyncServiceWithReply:(/*^block*/id)arg1 ;
-(void)getDemoServiceWithReply:(/*^block*/id)arg1 ;
-(id)permissionsForResourceWriteOnlyService;
-(void)getResourceWriteOnlyServiceWithReply:(/*^block*/id)arg1 ;
-(long long)requiredStateForPrivacySupportService;
-(long long)requiredStateForResourceService;
-(id)newResourceAvailabilityService;
-(id)permissionsForNotificationService;
-(void)getDiagnosticsServiceWithReply:(/*^block*/id)arg1 ;
-(id)newLibraryService;
-(id)newNotificationService;
-(void)handleInvalidation;
-(id)initWithConnection:(id)arg1 libraryBundleController:(id)arg2 ;
-(long long)requiredStateForResourceAvailabilityService;
-(id)permissionsForDebugService;
-(id)permissionsForPhotoKitAddService;
@end


/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/PLAssetsdServiceProtocol.h>

@class PLAssetsdInnerService, NSXPCConnection, PLPhotoLibraryBundleController, PLPhotoLibraryBundle, PLPhotoLibrary, PLAssetsdConnectionAuthorization, PLAssetsdCPLResourceDownloader, NSURL, PLLibraryServicesManager, NSString;

@interface PLAssetsdService : NSObject <PLAssetsdServiceProtocol> {

	PLAssetsdInnerService* _innerLibraryService;
	PLAssetsdInnerService* _innerLibraryInternalService;
	PLAssetsdInnerService* _innerSystemLibraryURLReadOnlyService;
	PLAssetsdInnerService* _innerLibraryManagementService;
	PLAssetsdInnerService* _innerPhotoKitService;
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
	BOOL _readyForDaemonJobs;
	NSXPCConnection* _connection;
	int _remotePID;
	PLPhotoLibraryBundleController* _libraryBundleController;
	PLPhotoLibraryBundle* _libraryBundle;
	PLPhotoLibrary* _photoLibrary;
	PLAssetsdConnectionAuthorization* _connectionAuthorization;
	PLAssetsdCPLResourceDownloader* _resourceDownloader;
	NSURL* _libraryURL;

}

@property (nonatomic,readonly) NSURL * libraryURL;                                             //@synthesize libraryURL=_libraryURL - In the implementation block
@property (nonatomic,readonly) PLLibraryServicesManager * libraryServicesManager; 
@property (nonatomic,readonly) BOOL isPhotosClient; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)handleInvalidation;
-(NSURL *)libraryURL;
-(id)_photoLibrary;
-(PLLibraryServicesManager *)libraryServicesManager;
-(id)clientDebugDescription;
-(void)runDaemonJob:(id)arg1 isSerial:(BOOL)arg2 ;
-(void)runDaemonJob:(id)arg1 isSerial:(BOOL)arg2 withReply:(/*^block*/id)arg3 ;
-(void)bindToPhotoLibraryURL:(id)arg1 sandboxExtension:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)bindToPhotoLibraryURL:(id)arg1 bookmark:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)getLibraryServiceWithReply:(/*^block*/id)arg1 ;
-(void)getLibraryInternalServiceWithReply:(/*^block*/id)arg1 ;
-(void)getSystemLibraryURLReadOnlyServiceWithReply:(/*^block*/id)arg1 ;
-(void)getLibraryManagementServiceWithReply:(/*^block*/id)arg1 ;
-(void)getPhotoKitServiceWithReply:(/*^block*/id)arg1 ;
-(void)getResourceServiceWithReply:(/*^block*/id)arg1 ;
-(void)getResourceWriteOnlyServiceWithReply:(/*^block*/id)arg1 ;
-(void)getResourceInternalServiceWithReply:(/*^block*/id)arg1 ;
-(void)getCloudServiceWithReply:(/*^block*/id)arg1 ;
-(void)getCloudInternalServiceWithReply:(/*^block*/id)arg1 ;
-(void)getMigrationServiceWithReply:(/*^block*/id)arg1 ;
-(void)getSyncServiceWithReply:(/*^block*/id)arg1 ;
-(void)getNotificationServiceWithReply:(/*^block*/id)arg1 ;
-(void)getDemoServiceWithReply:(/*^block*/id)arg1 ;
-(void)getDiagnosticsServiceWithReply:(/*^block*/id)arg1 ;
-(void)getDebugServiceWithReply:(/*^block*/id)arg1 ;
-(id)initWithConnection:(id)arg1 libraryBundleController:(id)arg2 ;
-(void)initializeAllServices;
-(BOOL)isPhotosClient;
-(id)resourceDownloader;
-(void)logStatus;
-(void)handleInterruption;
-(id)serviceContextWithSelector:(SEL)arg1 ;
-(void)initializeLibraryService;
-(void)initializeLibraryInternalService;
-(void)initializeSystemLibraryURLReadOnlyService;
-(void)initializeLibraryManagementService;
-(void)initializePhotoKitService;
-(void)initializeResourceService;
-(void)initializeResourceWriteOnlyService;
-(void)initializeResourceInternalService;
-(void)initializeCloudService;
-(void)initializeCloudInternalService;
-(void)initializeMigrationService;
-(void)initializeSyncService;
-(void)initializeNotificationService;
-(void)initializeDemoService;
-(void)initializeDiagnosticsService;
-(void)initializeDebugService;
-(long long)requiredStateForLibraryService;
-(id)permissionsForLibraryService;
-(id)newLibraryService;
-(long long)requiredStateForLibraryInternalService;
-(id)permissionsForLibraryInternalService;
-(id)newLibraryInternalService;
-(long long)requiredStateForSystemLibraryURLReadOnlyService;
-(id)permissionsForSystemLibraryURLReadOnlyService;
-(id)newSystemLibraryURLReadOnlyService;
-(long long)requiredStateForLibraryManagementService;
-(id)permissionsForLibraryManagementService;
-(id)newLibraryManagementService;
-(long long)requiredStateForPhotoKitService;
-(id)permissionsForPhotoKitService;
-(id)newPhotoKitService;
-(long long)requiredStateForResourceService;
-(id)permissionsForResourceService;
-(id)newResourceService;
-(long long)requiredStateForResourceWriteOnlyService;
-(id)permissionsForResourceWriteOnlyService;
-(id)newResourceWriteOnlyService;
-(long long)requiredStateForResourceInternalService;
-(id)permissionsForResourceInternalService;
-(id)newResourceInternalService;
-(long long)requiredStateForCloudService;
-(id)permissionsForCloudService;
-(id)newCloudService;
-(long long)requiredStateForCloudInternalService;
-(id)permissionsForCloudInternalService;
-(id)newCloudInternalService;
-(long long)requiredStateForMigrationService;
-(id)permissionsForMigrationService;
-(id)newMigrationService;
-(long long)requiredStateForSyncService;
-(id)permissionsForSyncService;
-(id)newSyncService;
-(long long)requiredStateForNotificationService;
-(id)permissionsForNotificationService;
-(id)newNotificationService;
-(long long)requiredStateForDemoService;
-(id)permissionsForDemoService;
-(id)newDemoService;
-(long long)requiredStateForDiagnosticsService;
-(id)permissionsForDiagnosticsService;
-(id)newDiagnosticsService;
-(long long)requiredStateForDebugService;
-(id)permissionsForDebugService;
-(id)newDebugService;
-(id)_waitForLibraryServicesForDaemonJob;
-(BOOL)_prepareToRunDaemonJob:(id)arg1 error:(id*)arg2 ;
-(void)invalidateConnectionWithReason:(id)arg1 ;
@end


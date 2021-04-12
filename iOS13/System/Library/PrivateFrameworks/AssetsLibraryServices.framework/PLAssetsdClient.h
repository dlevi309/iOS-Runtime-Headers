/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/


@protocol OS_dispatch_queue;
@class NSObject, PLAssetsdClientXPCConnection, PLAutoBindingProxyFactory, PLAssetsdClientSandboxExtensions, PLAssetsdLibraryClient, PLAssetsdSystemLibraryURLReadOnlyClient, PLAssetsdLibraryManagementClient, PLAssetsdLibraryInternalClient, PLAssetsdPhotoKitClient, PLAssetsdResourceClient, PLAssetsdResourceWriteOnlyClient, PLAssetsdResourceInternalClient, PLAssetsdCloudClient, PLAssetsdCloudInternalClient, PLAssetsdMigrationClient, PLAssetsdSyncClient, PLAssetsdNotificationClient, PLAssetsdDemoClient, PLAssetsdDiagnosticsClient, PLAssetsdDebugClient;

@interface PLAssetsdClient : NSObject {

	NSObject*<OS_dispatch_queue> _isolationQueue;
	PLAssetsdClientXPCConnection* _connection;
	PLAutoBindingProxyFactory* _autoBindingProxyFactory;
	PLAssetsdClientSandboxExtensions* _sandboxExtensions;
	PLAssetsdLibraryClient* _libraryClient;
	PLAssetsdSystemLibraryURLReadOnlyClient* _systemLibraryURLReadOnlyClient;
	PLAssetsdLibraryManagementClient* _libraryManagementClient;
	PLAssetsdLibraryInternalClient* _libraryInternalClient;
	PLAssetsdPhotoKitClient* _photoKitClient;
	PLAssetsdResourceClient* _resourceClient;
	PLAssetsdResourceWriteOnlyClient* _resourceWriteOnlyClient;
	PLAssetsdResourceInternalClient* _resourceInternalClient;
	PLAssetsdCloudClient* _cloudClient;
	PLAssetsdCloudInternalClient* _cloudInternalClient;
	PLAssetsdMigrationClient* _migrationClient;
	PLAssetsdSyncClient* _syncClient;
	PLAssetsdNotificationClient* _notificationClient;
	PLAssetsdDemoClient* _demoClient;
	PLAssetsdDiagnosticsClient* _diagnosticsClient;
	PLAssetsdDebugClient* _debugClient;

}

@property (readonly) PLAssetsdDebugClient * debugClient; 
@property (readonly) PLAssetsdDiagnosticsClient * diagnosticsClient; 
@property (readonly) PLAssetsdDemoClient * demoClient; 
@property (readonly) PLAssetsdNotificationClient * notificationClient; 
@property (readonly) PLAssetsdSyncClient * syncClient; 
@property (readonly) PLAssetsdMigrationClient * migrationClient; 
@property (readonly) PLAssetsdCloudInternalClient * cloudInternalClient; 
@property (readonly) PLAssetsdCloudClient * cloudClient; 
@property (readonly) PLAssetsdResourceInternalClient * resourceInternalClient; 
@property (readonly) PLAssetsdResourceClient * resourceClient; 
@property (readonly) PLAssetsdPhotoKitClient * photoKitClient; 
@property (readonly) PLAssetsdLibraryManagementClient * libraryManagementClient; 
@property (readonly) PLAssetsdLibraryInternalClient * libraryInternalClient; 
@property (readonly) PLAssetsdLibraryClient * libraryClient; 
+(id)sharedSystemLibraryAssetsdClient;
-(id)init;
-(PLAssetsdCloudInternalClient *)cloudInternalClient;
-(PLAssetsdLibraryClient *)libraryClient;
-(PLAssetsdResourceClient *)resourceClient;
-(id)resourceWriteOnlyClient;
-(id)initWithPhotoLibraryURL:(id)arg1 ;
-(PLAssetsdLibraryInternalClient *)libraryInternalClient;
-(PLAssetsdDiagnosticsClient *)diagnosticsClient;
-(PLAssetsdDebugClient *)debugClient;
-(void)sendDaemonJob:(id)arg1 shouldRunSerially:(BOOL)arg2 replyHandler:(/*^block*/id)arg3 ;
-(void)waitUntilConnectionSendsAllMessages;
-(PLAssetsdCloudClient *)cloudClient;
-(PLAssetsdPhotoKitClient *)photoKitClient;
-(void)addPhotoLibraryUnavailabilityHandler:(/*^block*/id)arg1 ;
-(PLAssetsdNotificationClient *)notificationClient;
-(id)_setupClientClass:(Class)arg1 proxyGetter:(SEL)arg2 options:(long long)arg3 ;
-(id)systemLibraryURLReadOnlyClient;
-(PLAssetsdLibraryManagementClient *)libraryManagementClient;
-(PLAssetsdResourceInternalClient *)resourceInternalClient;
-(PLAssetsdMigrationClient *)migrationClient;
-(PLAssetsdSyncClient *)syncClient;
-(PLAssetsdDemoClient *)demoClient;
-(void)_updateLibraryStateConnectionInterrupted:(id)arg1 ;
-(void)prepareToShutdown;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/


@protocol OS_dispatch_queue;
@class NSObject, PLAssetsdClientXPCConnection, PLAutoBindingProxyFactory, PLAssetsdClientSandboxExtensions, PLAssetsdLibraryClient, PLAssetsdLibraryInternalClient, PLAssetsdSystemLibraryURLReadOnlyClient, PLAssetsdLibraryManagementClient, PLAssetsdPhotoKitClient, PLAssetsdResourceAvailabilityClient, PLAssetsdPhotoKitAddClient, PLAssetsdResourceClient, PLAssetsdResourceWriteOnlyClient, PLAssetsdResourceInternalClient, PLAssetsdCloudClient, PLAssetsdCloudInternalClient, PLAssetsdMigrationClient, PLAssetsdSyncClient, PLAssetsdNotificationClient, PLAssetsdDemoClient, PLAssetsdDiagnosticsClient, PLAssetsdDebugClient, PLAssetsdPrivacySupportClient;

@interface PLAssetsdClient : NSObject {

	NSObject*<OS_dispatch_queue> _isolationQueue;
	PLAssetsdClientXPCConnection* _connection;
	PLAutoBindingProxyFactory* _autoBindingProxyFactory;
	PLAssetsdClientSandboxExtensions* _sandboxExtensions;
	PLAssetsdLibraryClient* _libraryClient;
	PLAssetsdLibraryInternalClient* _libraryInternalClient;
	PLAssetsdSystemLibraryURLReadOnlyClient* _systemLibraryURLReadOnlyClient;
	PLAssetsdLibraryManagementClient* _libraryManagementClient;
	PLAssetsdPhotoKitClient* _photoKitClient;
	PLAssetsdResourceAvailabilityClient* _resourceAvailabilityClient;
	PLAssetsdPhotoKitAddClient* _photoKitAddClient;
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
	PLAssetsdPrivacySupportClient* _privacySupportClient;

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
@property (readonly) PLAssetsdPhotoKitAddClient * photoKitAddClient; 
@property (readonly) PLAssetsdResourceAvailabilityClient * resourceAvailabilityClient; 
@property (readonly) PLAssetsdPhotoKitClient * photoKitClient; 
@property (readonly) PLAssetsdLibraryManagementClient * libraryManagementClient; 
@property (readonly) PLAssetsdLibraryInternalClient * libraryInternalClient; 
@property (readonly) PLAssetsdLibraryClient * libraryClient; 
+(id)sharedSystemLibraryAssetsdClient;
-(PLAssetsdLibraryInternalClient *)libraryInternalClient;
-(id)init;
-(PLAssetsdResourceInternalClient *)resourceInternalClient;
-(PLAssetsdLibraryManagementClient *)libraryManagementClient;
-(PLAssetsdSyncClient *)syncClient;
-(PLAssetsdResourceAvailabilityClient *)resourceAvailabilityClient;
-(PLAssetsdPhotoKitAddClient *)photoKitAddClient;
-(void)waitUntilConnectionSendsAllMessages;
-(PLAssetsdDiagnosticsClient *)diagnosticsClient;
-(PLAssetsdCloudClient *)cloudClient;
-(PLAssetsdResourceClient *)resourceClient;
-(PLAssetsdLibraryClient *)libraryClient;
-(id)systemLibraryURLReadOnlyClient;
-(void)prepareToShutdown;
-(PLAssetsdDemoClient *)demoClient;
-(id)resourceWriteOnlyClient;
-(id)_setupClientClass:(Class)arg1 proxyGetter:(SEL)arg2 options:(long long)arg3 ;
-(void)_updateLibraryStateConnectionInterrupted:(id)arg1 ;
-(PLAssetsdDebugClient *)debugClient;
-(PLAssetsdCloudInternalClient *)cloudInternalClient;
-(void)sendDaemonJob:(id)arg1 shouldRunSerially:(BOOL)arg2 replyHandler:(/*^block*/id)arg3 ;
-(id)privacySupportClient;
-(PLAssetsdPhotoKitClient *)photoKitClient;
-(PLAssetsdMigrationClient *)migrationClient;
-(void)addPhotoLibraryUnavailabilityHandler:(/*^block*/id)arg1 ;
-(id)initWithPhotoLibraryURL:(id)arg1 ;
-(PLAssetsdNotificationClient *)notificationClient;
@end


/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


@protocol OS_dispatch_queue, OS_os_log;
@class NSString, NSDictionary, NSObject, _PASNotificationTracker, _PASLock;

@interface _PASAsset2 : NSObject {

	NSString* _assetTypeIdentifier;
	NSString* _defaultBundlePathBackup;
	NSDictionary* _requiredMobileAssetProperties;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	NSObject*<OS_os_log> _logHandle;
	int _installNotificationToken;
	int _metadataNotificationToken;
	_PASNotificationTracker* _updateNotificationTracker;
	_PASLock* _lock;
	unsigned long long _compatibilityVersion;

}

@property (nonatomic,readonly) NSString * bundlePath; 
@property (nonatomic,readonly) unsigned long long assetVersion; 
@property (nonatomic,readonly) NSString * assetType; 
@property (nonatomic,readonly) unsigned long long compatibilityVersion;                  //@synthesize compatibilityVersion=_compatibilityVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long bestAssetVersionObserved; 
-(id)init;
-(void)dealloc;
-(NSString *)bundlePath;
-(unsigned long long)compatibilityVersion;
-(unsigned long long)assetVersion;
-(NSString *)assetType;
-(id)_assetDescription;
-(void)clearOverrides;
-(id)registerUpdateHandler:(/*^block*/id)arg1 ;
-(BOOL)deregisterUpdateHandlerAsyncWithToken:(id)arg1 ;
-(unsigned long long)bestAssetVersionObserved;
-(BOOL)_loadDefaultBundleVersionWithGuardedData:(id)arg1 ;
-(BOOL)deregisterUpdateHandlerWithToken:(id)arg1 ;
-(void)_updateAssetMetadata;
-(void)_issueUpdateNotificationsWithCallback:(/*^block*/id)arg1 ;
-(void)invokeWithBundleOverride:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)callAssetUpdateHandlers;
-(id)initWithAssetTypeDescriptorPath:(id)arg1 defaultBundlePath:(id)arg2 matchingKeysAndValues:(id)arg3 notificationQueue:(id)arg4 logHandle:(id)arg5 ;
-(id)initWithAssetTypeDescriptorPath:(id)arg1 defaultBundlePath:(id)arg2 matchingKeysAndValues:(id)arg3 notificationQueue:(id)arg4 logHandle:(id)arg5 enableAssetUpdates:(BOOL)arg6 ;
-(id)initWithAssetTypeDescriptorPath:(id)arg1 defaultBundlePath:(id)arg2 matchingKeysAndValues:(id)arg3 notificationQueue:(id)arg4 logHandle:(id)arg5 enableAssetUpdates:(BOOL)arg6 purgeObsoleteInstalledAssets:(BOOL)arg7 ;
-(id)_initWithAssetTypeIdentifier:(id)arg1 defaultBundlePath:(id)arg2 compatibilityVersion:(unsigned long long)arg3 matchingKeysAndValues:(id)arg4 notificationQueue:(id)arg5 logHandle:(id)arg6 enableAssetUpdates:(BOOL)arg7 purgeObsoleteInstalledAssets:(BOOL)arg8 ;
-(void)downloadMetadataWithCompletion:(/*^block*/id)arg1 ;
-(id)_maFilesystemPathsForAssetDataRelativePaths:(id)arg1 guardedData:(id)arg2 isMissingData:(BOOL*)arg3 assetVersion:(unsigned long long*)arg4 ;
-(id)_defaultBundleFilesystemPathsForAssetDataRelativePaths:(id)arg1 guardedData:(id)arg2 assetVersion:(unsigned long long*)arg3 ;
-(id)filesystemPathsForAssetDataRelativePaths:(id)arg1 assetVersion:(unsigned long long*)arg2 ;
-(id)filesystemPathsForAssetDataRelativePaths:(id)arg1 ;
-(id)filesystemPathForAssetDataRelativePath:(id)arg1 assetVersion:(unsigned long long*)arg2 ;
-(id)filesystemPathForAssetDataRelativePath:(id)arg1 ;
-(BOOL)updateAssetMetadataUsingQueryResults:(id)arg1 ;
-(void)_purgeObsoleteInstalledAssetsFromCandidates:(id)arg1 guardedData:(id)arg2 ;
-(BOOL)overrideDefaultBundleWithBundleAtPath:(id)arg1 ;
-(void)addOverridePath:(id)arg1 forResourceWithRelativePath:(id)arg2 ;
@end


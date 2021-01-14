/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)compatibilityVersion;
-(unsigned long long)assetVersion;
-(void)callAssetUpdateHandlers;
-(NSString *)assetType;
-(BOOL)overrideDefaultBundleWithBundleAtPath:(id)arg1 ;
-(id)filesystemPathForAssetDataRelativePath:(id)arg1 assetVersion:(unsigned long long*)arg2 ;
-(id)init;
-(void)_purgeObsoleteInstalledAssetsFromCandidates:(id)arg1 guardedData:(id)arg2 ;
-(id)_initWithAssetTypeIdentifier:(id)arg1 defaultBundlePath:(id)arg2 compatibilityVersion:(unsigned long long)arg3 matchingKeysAndValues:(id)arg4 notificationQueue:(id)arg5 logHandle:(id)arg6 enableAssetUpdates:(BOOL)arg7 purgeObsoleteInstalledAssets:(BOOL)arg8 ;
-(NSString *)bundlePath;
-(void)invokeWithBundleOverride:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)filesystemPathsForAssetDataRelativePaths:(id)arg1 ;
-(id)_maFilesystemPathsForAssetDataRelativePaths:(id)arg1 guardedData:(id)arg2 isMissingData:(BOOL*)arg3 assetVersion:(unsigned long long*)arg4 ;
-(BOOL)updateAssetMetadataUsingQueryResults:(id)arg1 ;
-(id)initWithAssetTypeDescriptorPath:(id)arg1 defaultBundlePath:(id)arg2 matchingKeysAndValues:(id)arg3 notificationQueue:(id)arg4 logHandle:(id)arg5 ;
-(BOOL)deregisterUpdateHandlerWithToken:(id)arg1 ;
-(id)filesystemPathForAssetDataRelativePath:(id)arg1 ;
-(void)_issueUpdateNotificationsWithCallback:(/*^block*/id)arg1 ;
-(void)downloadMetadataWithCompletion:(/*^block*/id)arg1 ;
-(void)addOverridePath:(id)arg1 forResourceWithRelativePath:(id)arg2 ;
-(BOOL)deregisterUpdateHandlerAsyncWithToken:(id)arg1 ;
-(id)initWithAssetTypeDescriptorPath:(id)arg1 defaultBundlePath:(id)arg2 matchingKeysAndValues:(id)arg3 notificationQueue:(id)arg4 logHandle:(id)arg5 enableAssetUpdates:(BOOL)arg6 ;
-(id)registerUpdateHandler:(/*^block*/id)arg1 ;
-(BOOL)_loadDefaultBundleVersionWithGuardedData:(id)arg1 ;
-(void)clearOverrides;
-(void)_updateAssetMetadata;
-(unsigned long long)bestAssetVersionObserved;
-(id)initWithAssetTypeDescriptorPath:(id)arg1 defaultBundlePath:(id)arg2 matchingKeysAndValues:(id)arg3 notificationQueue:(id)arg4 logHandle:(id)arg5 enableAssetUpdates:(BOOL)arg6 purgeObsoleteInstalledAssets:(BOOL)arg7 ;
-(id)_defaultBundleFilesystemPathsForAssetDataRelativePaths:(id)arg1 guardedData:(id)arg2 assetVersion:(unsigned long long*)arg3 ;
-(id)_assetDescription;
-(id)filesystemPathsForAssetDataRelativePaths:(id)arg1 assetVersion:(unsigned long long*)arg2 ;
-(void)dealloc;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/

#import <libobjc.A.dylib/_PASAssetProtocol.h>

@protocol OS_dispatch_queue;
@class NSString, NSDictionary, NSObject, _PASNotificationTracker, _PASLock;

@interface _PASAsset : NSObject <_PASAssetProtocol> {

	NSString* _bundleIdentifier;
	NSDictionary* _requiredMobileAssetProperties;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	int _installNotificationToken;
	int _metadataNotificationToken;
	_PASNotificationTracker* _updateNotificationTracker;
	_PASLock* _lock;
	unsigned long long _compatibilityVersion;

}

@property (nonatomic,readonly) unsigned long long assetVersion; 
@property (nonatomic,readonly) NSString * assetType; 
@property (nonatomic,readonly) unsigned long long compatibilityVersion;                  //@synthesize compatibilityVersion=_compatibilityVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long bestAssetVersionObserved; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setBundlePath:(id)arg1 ;
-(unsigned long long)compatibilityVersion;
-(unsigned long long)assetVersion;
-(void)callAssetUpdateHandlers;
-(NSString *)assetType;
-(void)addOverridePath:(id)arg1 forResource:(id)arg2 ofType:(id)arg3 ;
-(id)init;
-(id)bundlePath;
-(void)invokeWithBundleOverride:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)deregisterUpdateHandlerWithToken:(id)arg1 ;
-(void)_issueUpdateNotificationsWithCallback:(/*^block*/id)arg1 ;
-(id)pathForResourceWithName:(id)arg1 extension:(id)arg2 ;
-(id)initWithAssetTypeDescriptorPath:(id)arg1 defaultBundlePath:(id)arg2 matchingKeysAndValues:(id)arg3 notificationQueue:(id)arg4 ;
-(id)pathForResourceWithName:(id)arg1 extension:(id)arg2 assetVersion:(unsigned long long*)arg3 ;
-(BOOL)deregisterUpdateHandlerAsyncWithToken:(id)arg1 ;
-(id)initWithAssetTypeDescriptorPath:(id)arg1 defaultBundlePath:(id)arg2 matchingKeysAndValues:(id)arg3 notificationQueue:(id)arg4 enableAssetUpdates:(BOOL)arg5 ;
-(id)_initWithBundleIdentifier:(id)arg1 defaultBundlePath:(id)arg2 compatibilityVersion:(unsigned long long)arg3 matchingKeysAndValues:(id)arg4 notificationQueue:(id)arg5 enableAssetUpdates:(BOOL)arg6 ;
-(id)pathForResourceWithNameAndExtension:(id)arg1 assetVersion:(unsigned long long*)arg2 ;
-(id)pathForResourceWithNameAndExtension:(id)arg1 ;
-(id)pathsForResourcesWithNames:(id)arg1 ;
-(id)pathsForResourcesWithNames:(id)arg1 assetVersion:(unsigned long long*)arg2 ;
-(BOOL)_updateAssetMetadataUsingQueryResults:(id)arg1 ;
-(id)registerUpdateHandler:(/*^block*/id)arg1 ;
-(void)_loadDefaultBundleVersionWithGuardedData:(id)arg1 ;
-(void)clearOverrides;
-(void)_updateAssetMetadata;
-(unsigned long long)bestAssetVersionObserved;
-(id)_assetDescription;
-(void)dealloc;
@end


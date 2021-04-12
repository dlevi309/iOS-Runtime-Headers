/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@protocol OS_dispatch_queue;
@class NSString, SSUpdatableAssetManifest, SSUpdatableAssetCacheManager, SSXPCConnection, NSURL, NSObject;

@interface SSUpdatableAssetController : NSObject {

	NSString* _bundledManifestVersion;
	SSUpdatableAssetManifest* _bundledManifest;
	SSUpdatableAssetManifest* _currentManifest;
	SSUpdatableAssetCacheManager* _cacheManager;
	SSXPCConnection* _connection;
	NSURL* _manifestURL;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSURL* _bundledManifestURL;

}

@property (nonatomic,readonly) SSUpdatableAssetManifest * currentManifest; 
@property (nonatomic,readonly) SSUpdatableAssetManifest * newestCachedManifest; 
@property (nonatomic,readonly) NSURL * bundledManifestURL;                                   //@synthesize bundledManifestURL=_bundledManifestURL - In the implementation block
@property (nonatomic,copy) NSURL * manifestURL;                                              //@synthesize manifestURL=_manifestURL - In the implementation block
-(void)dealloc;
-(id)_connection;
-(id)initWithBundledManifestURL:(id)arg1 clientIdentifier:(id)arg2 ;
-(SSUpdatableAssetManifest *)newestCachedManifest;
-(id)_bundledManifestVersion;
-(id)_bundledManifest;
-(id)initWithBundledManifestURL:(id)arg1 ;
-(SSUpdatableAssetManifest *)currentManifest;
-(void)clearCache:(/*^block*/id)arg1 ;
-(void)refreshCachedManifest:(/*^block*/id)arg1 ;
-(NSURL *)bundledManifestURL;
-(NSURL *)manifestURL;
-(void)setManifestURL:(NSURL *)arg1 ;
@end


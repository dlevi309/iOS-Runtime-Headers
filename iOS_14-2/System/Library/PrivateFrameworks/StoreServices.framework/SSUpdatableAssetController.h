/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithBundledManifestURL:(id)arg1 clientIdentifier:(id)arg2 ;
-(id)_bundledManifest;
-(SSUpdatableAssetManifest *)newestCachedManifest;
-(id)_bundledManifestVersion;
-(id)initWithBundledManifestURL:(id)arg1 ;
-(SSUpdatableAssetManifest *)currentManifest;
-(void)clearCache:(/*^block*/id)arg1 ;
-(void)refreshCachedManifest:(/*^block*/id)arg1 ;
-(NSURL *)bundledManifestURL;
-(NSURL *)manifestURL;
-(void)setManifestURL:(NSURL *)arg1 ;
-(id)_connection;
-(void)dealloc;
@end


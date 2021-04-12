/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCAVAssetFactoryType.h>

@protocol FCAVAssetCacheType, FCAVAssetKeyManagerType, FCAVAssetResourceLoaderType;
@class NSMapTable, NFUnfairLock, NSString;

@interface FCAVAssetFactory : NSObject <FCAVAssetFactoryType> {

	id<FCAVAssetCacheType> _assetCache;
	id<FCAVAssetKeyManagerType> _assetKeyManager;
	id<FCAVAssetResourceLoaderType> _assetResourceLoader;
	NSMapTable* _assets;
	NFUnfairLock* _assetsLock;

}

@property (nonatomic,readonly) id<FCAVAssetCacheType> assetCache;                                //@synthesize assetCache=_assetCache - In the implementation block
@property (nonatomic,readonly) id<FCAVAssetKeyManagerType> assetKeyManager;                      //@synthesize assetKeyManager=_assetKeyManager - In the implementation block
@property (nonatomic,readonly) id<FCAVAssetResourceLoaderType> assetResourceLoader;              //@synthesize assetResourceLoader=_assetResourceLoader - In the implementation block
@property (nonatomic,readonly) NSMapTable * assets;                                              //@synthesize assets=_assets - In the implementation block
@property (nonatomic,readonly) NFUnfairLock * assetsLock;                                        //@synthesize assetsLock=_assetsLock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMapTable *)assets;
-(id)assetWithIdentifier:(id)arg1 remoteURL:(id)arg2 overrideMIMEType:(id)arg3 ;
-(id)init;
-(id<FCAVAssetCacheType>)assetCache;
-(id<FCAVAssetResourceLoaderType>)assetResourceLoader;
-(NFUnfairLock *)assetsLock;
-(id<FCAVAssetKeyManagerType>)assetKeyManager;
-(id)initWithAssetCache:(id)arg1 assetKeyManager:(id)arg2 assetResourceLoader:(id)arg3 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol FCAVAssetCacheType, FCAVAssetResourceLoaderType, FCAVAssetKeyManagerType;
@class AVURLAsset, NSString, NSDictionary, NSURL, NFUnfairLock;

@interface FCAVAsset : NSObject <NSCopying> {

	AVURLAsset* _asset;
	NSString* _identifier;
	NSDictionary* _assetOptions;
	NSURL* _remoteURL;
	NFUnfairLock* _assetLock;
	id<FCAVAssetCacheType> _assetCache;
	id<FCAVAssetResourceLoaderType> _assetResourceLoader;
	id<FCAVAssetKeyManagerType> _assetKeyManager;

}

@property (nonatomic,copy,readonly) NSDictionary * assetOptions;                                        //@synthesize assetOptions=_assetOptions - In the implementation block
@property (nonatomic,copy,readonly) NSURL * remoteURL;                                                  //@synthesize remoteURL=_remoteURL - In the implementation block
@property (nonatomic,readonly) NFUnfairLock * assetLock;                                                //@synthesize assetLock=_assetLock - In the implementation block
@property (nonatomic,__weak,readonly) id<FCAVAssetCacheType> assetCache;                                //@synthesize assetCache=_assetCache - In the implementation block
@property (nonatomic,__weak,readonly) id<FCAVAssetResourceLoaderType> assetResourceLoader;              //@synthesize assetResourceLoader=_assetResourceLoader - In the implementation block
@property (nonatomic,__weak,readonly) id<FCAVAssetKeyManagerType> assetKeyManager;                      //@synthesize assetKeyManager=_assetKeyManager - In the implementation block
@property (nonatomic,readonly) BOOL isHLS; 
@property (nonatomic,copy,readonly) NSString * identifier;                                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) AVURLAsset * asset;                                                      //@synthesize asset=_asset - In the implementation block
-(NSURL *)remoteURL;
-(id)init;
-(BOOL)isHLS;
-(AVURLAsset *)asset;
-(id<FCAVAssetCacheType>)assetCache;
-(id<FCAVAssetResourceLoaderType>)assetResourceLoader;
-(NFUnfairLock *)assetLock;
-(void)_resetUnderlyingAsset;
-(NSDictionary *)assetOptions;
-(id)initWithIdentifier:(id)arg1 remoteURL:(id)arg2 assetCache:(id)arg3 assetKeyManager:(id)arg4 assetResourceLoader:(id)arg5 overrideMIMEType:(id)arg6 ;
-(id<FCAVAssetKeyManagerType>)assetKeyManager;
-(unsigned long long)hash;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


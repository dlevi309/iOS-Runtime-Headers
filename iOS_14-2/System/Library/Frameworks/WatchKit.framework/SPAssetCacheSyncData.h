/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
*/


@class SPAssetCacheAssets, NSString;

@interface SPAssetCacheSyncData : NSObject {

	SPAssetCacheAssets* _permanentCache;
	SPAssetCacheAssets* _transientCache;
	NSString* _cacheIdentifier;

}

@property (nonatomic,retain) SPAssetCacheAssets * permanentCache;              //@synthesize permanentCache=_permanentCache - In the implementation block
@property (nonatomic,retain) SPAssetCacheAssets * transientCache;              //@synthesize transientCache=_transientCache - In the implementation block
@property (nonatomic,retain) NSString * cacheIdentifier;                       //@synthesize cacheIdentifier=_cacheIdentifier - In the implementation block
+(id)toProto:(id)arg1 ;
+(id)fromProto:(id)arg1 ;
-(id)init;
-(void)setCacheIdentifier:(NSString *)arg1 ;
-(NSString *)cacheIdentifier;
-(SPAssetCacheAssets *)permanentCache;
-(void)setPermanentCache:(SPAssetCacheAssets *)arg1 ;
-(SPAssetCacheAssets *)transientCache;
-(void)setTransientCache:(SPAssetCacheAssets *)arg1 ;
@end


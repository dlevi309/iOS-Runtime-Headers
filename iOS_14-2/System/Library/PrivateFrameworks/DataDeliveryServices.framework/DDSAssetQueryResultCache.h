/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
*/

#import <libobjc.A.dylib/NSCacheDelegate.h>
#import <libobjc.A.dylib/DDSAssetQueryResultCaching.h>

@protocol OS_dispatch_queue;
@class NSCache, NSObject, NSString;

@interface DDSAssetQueryResultCache : NSObject <NSCacheDelegate, DDSAssetQueryResultCaching> {

	NSCache* _assetsByQueryCache;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSCache * assetsByQueryCache;                      //@synthesize assetsByQueryCache=_assetsByQueryCache - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cacheAssets:(id)arg1 forQuery:(id)arg2 ;
-(id)init;
-(void)cache:(id)arg1 willEvictObject:(id)arg2 ;
-(NSCache *)assetsByQueryCache;
-(void)clearCache;
-(id)cachedAssetsForQuery:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setAssetsByQueryCache:(NSCache *)arg1 ;
@end


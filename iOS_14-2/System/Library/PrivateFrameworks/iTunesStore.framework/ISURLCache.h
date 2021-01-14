/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/


@class NSURLCache, ISURLCacheConfiguration, NSString;

@interface ISURLCache : NSObject {

	NSURLCache* _cache;
	ISURLCacheConfiguration* _configuration;

}

@property (readonly) NSString * persistentIdentifier; 
@property (nonatomic,readonly) unsigned long long currentDiskUsage; 
@property (nonatomic,readonly) unsigned long long currentMemoryUsage; 
@property (nonatomic,readonly) unsigned long long diskCapacity; 
@property (nonatomic,readonly) unsigned long long memoryCapacity; 
+(id)cacheDirectoryPath;
-(unsigned long long)currentMemoryUsage;
-(unsigned long long)memoryCapacity;
-(id)init;
-(void)removeAllCachedResponses;
-(unsigned long long)currentDiskUsage;
-(unsigned long long)diskCapacity;
-(void)storeCachedResponse:(id)arg1 forRequest:(id)arg2 ;
-(NSString *)persistentIdentifier;
-(void)saveMemoryCacheToDisk;
-(id)cachedResponseForRequest:(id)arg1 ;
-(void)removeCachedResponseForRequest:(id)arg1 ;
-(void)dealloc;
-(id)initWithCacheConfiguration:(id)arg1 ;
-(void)reloadWithCacheConfiguration:(id)arg1 ;
-(void)purgeMemoryCache;
@end


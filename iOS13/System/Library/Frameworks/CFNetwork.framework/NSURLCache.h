/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


#import <CFNetwork/CFNetwork-Structs.h>
@class NSURLCacheInternal;

@interface NSURLCache : NSObject {

	NSURLCacheInternal* _internal;

}

@property (assign) unsigned long long memoryCapacity; 
@property (assign) unsigned long long diskCapacity; 
@property (readonly) unsigned long long currentMemoryUsage; 
@property (readonly) unsigned long long currentDiskUsage; 
+(id)sharedURLCache;
+(void)setSharedURLCache:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)_isVaryHeaderSupportEnabled;
-(unsigned long long)currentDiskUsage;
-(id)_varyStateForURL:(id)arg1 ;
-(void)_updateVaryState:(id)arg1 forURL:(id)arg2 ;
-(CFCachedURLResponse*)_nscfBridgeURLCacheCopyResponseForRequest:(id)arg1 ;
-(void)_nscfBridgeURLCacheStoreCachedResponse:(CFCachedURLResponse*)arg1 forRequest:(id)arg2 ;
-(long long)_nscfBridgeURLCacheDiskCapacity;
-(void)_nscfBridgeURLCacheSetMemoryCapacity:(long long)arg1 ;
-(void)_nscfBridgeURLCacheSetDiskCapacity:(long long)arg1 ;
-(void)_nscfBridgeURLCacheRemoveCachedResponseForRequest:(id)arg1 ;
-(void)_nscfBridgeURLCacheRemoveAllCachedResponses;
-(long long)_nscfBridgeURLCacheMemoryCapacity;
-(long long)_nscfBridgeURLCacheCurrentMemoryUsage;
-(long long)_nscfBridgeURLCacheCurrentDiskUsage;
-(id)_initWithIdentifier:(id)arg1 memoryCapacity:(long long)arg2 diskCapacity:(long long)arg3 private:(BOOL)arg4 ;
-(id)_initVaryHeaderEnabledWithPath:(id)arg1 ;
-(id)initWithExistingSharedCFURLCache:(CFURLCache*)arg1 ;
-(id)_initWithExistingCFURLCache:(CFURLCache*)arg1 ;
-(id)initWithMemoryCapacity:(unsigned long long)arg1 diskCapacity:(unsigned long long)arg2 directoryURL:(id)arg3 ;
-(id)initWithMemoryCapacity:(unsigned long long)arg1 diskCapacity:(unsigned long long)arg2 diskPath:(id)arg3 ;
-(id)_initWithMemoryCapacity:(unsigned long long)arg1 diskCapacity:(unsigned long long)arg2 relativePath:(id)arg3 ;
-(void)flushWithCompletion:(/*^block*/id)arg1 ;
-(id)cachedResponseForRequest:(id)arg1 ;
-(void)storeCachedResponse:(id)arg1 forRequest:(id)arg2 ;
-(void)removeCachedResponseForRequest:(id)arg1 ;
-(void)removeAllCachedResponses;
-(void)removeCachedResponsesSinceDate:(id)arg1 ;
-(unsigned long long)memoryCapacity;
-(unsigned long long)diskCapacity;
-(void)setMemoryCapacity:(unsigned long long)arg1 ;
-(void)setDiskCapacity:(unsigned long long)arg1 ;
-(unsigned long long)currentMemoryUsage;
-(const CFURLCache*)_CFURLCache;
-(id)_cacheDirectory;
-(id)_diskCacheDefaultPath;
-(void)storeCachedResponse:(id)arg1 forDataTask:(id)arg2 ;
-(void)getCachedResponseForDataTask:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeCachedResponseForDataTask:(id)arg1 ;
@end


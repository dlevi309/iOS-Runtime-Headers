/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/NSCacheDelegate.h>

@protocol OS_dispatch_semaphore, OS_dispatch_queue;
@class NSCache, TSUPointerKeyDictionary, NSObject, NSMutableDictionary, NSString;

@interface TSDTileStorage : NSObject <NSCacheDelegate> {

	NSCache* mCache;
	TSUPointerKeyDictionary* mReverseCacheKeys;
	NSObject*<OS_dispatch_semaphore> mReverseCacheKeysLock;
	NSObject*<OS_dispatch_queue> mCacheKeysQueue;
	NSMutableDictionary* mCacheKeysByBucket;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)cache:(id)arg1 willEvictObject:(id)arg2 ;
-(void)removeAllContents;
-(id)contentsInRect:(CGRect)arg1 contentsScale:(double)arg2 forTileAtLocation:(NSRange)arg3 inBucket:(id)arg4 ;
-(void)storeContents:(id)arg1 inRect:(CGRect)arg2 contentsScale:(double)arg3 forTileAtLocation:(NSRange)arg4 inBucket:(id)arg5 ;
-(void)removeImagesInBucket:(id)arg1 ;
-(id)p_cacheKeyForImageInRect:(CGRect)arg1 contentsScale:(double)arg2 tileLocation:(NSRange)arg3 ;
@end


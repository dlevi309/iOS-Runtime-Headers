/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/


@protocol OS_dispatch_queue;
#import <PhotosPlayer/PhotosPlayer-Structs.h>
@class NSObject, NSMutableDictionary, NSMutableIndexSet;

@interface ISFrameCache : NSObject {

	CGImageSourceRef _gifSource;
	unsigned long long _frameCount;
	unsigned long long _fullCachingCost;
	NSObject*<OS_dispatch_queue> _frameGenerationQueue;
	NSObject*<OS_dispatch_queue> _cacheIsolationQueue;
	unsigned long long _frameCacheSize;
	NSMutableDictionary* _frameCache;
	unsigned long long _lastRequestedIdx;
	NSMutableIndexSet* _cachedIndexes;
	SCD_Struct_IS9 _isValid;
	long long _cacheStrategy;

}

@property (assign,nonatomic) long long cacheStrategy;              //@synthesize cacheStrategy=_cacheStrategy - In the implementation block
+(id)sharedFrameGenerationQueue;
-(void)dealloc;
-(void)_invalidateCache;
-(id)initWithImageSource:(CGImageSourceRef)arg1 ;
-(void)_updateIfNeeded;
-(CGImageRef)frameAtIndex:(unsigned long long)arg1 ;
-(id)initWithImageSource:(CGImageSourceRef)arg1 cachingStrategy:(long long)arg2 ;
-(id)initWithImageSource:(CGImageSourceRef)arg1 cachingStrategy:(long long)arg2 useGlobalDecodeQueue:(BOOL)arg3 ;
-(long long)cacheStrategy;
-(void)setCacheStrategy:(long long)arg1 ;
-(CGImageRef)frameAtIndexIfReady:(unsigned long long)arg1 ;
-(CGImageRef)_frameAtIndex:(unsigned long long)arg1 allowLazy:(BOOL)arg2 ;
-(void)_invalidateCacheSize;
-(void)_updateDesiredCacheSize;
-(void)_updateFrameCache;
-(void)_frameGenerationQueue_cacheFrameAtIndex:(unsigned long long)arg1 ;
-(void)_frameGenerationQueue_updateFrameCache;
-(CGImageRef)_createPredrawnImage:(CGImageRef)arg1 ;
@end


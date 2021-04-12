/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


@class NSRecursiveLock, NSMapTable;

@interface PMObjectCache : NSObject {

	NSRecursiveLock* _cacheLock;
	int _purgesInProgress;
	unsigned long long _currentSize;
	unsigned long long _setSize;
	unsigned long long _maxSize;
	unsigned long long _reservedMemory;
	unsigned long long _numberOfCalls;
	NSMapTable* _mapTable;
	float _responseRate;
	float _decayRate;
	float _penalty;

}
+(id)sharedInstance;
+(void)releaseSharedInstance;
-(void)dealloc;
-(void)clearCache;
-(void)removeObjectForKey:(id)arg1 ;
-(unsigned long long)currentSize;
-(id)initWithCacheSize:(unsigned long long)arg1 ;
-(void)setCacheSize:(unsigned long long)arg1 ;
-(int)addObject:(id)arg1 cacheKey:(id)arg2 size:(unsigned long long)arg3 cost:(double)arg4 ;
-(id)copyObjectForKey:(id)arg1 cost:(double*)arg2 ;
-(id)copyObjectForKeyDontUpdateAccessTime:(id)arg1 cost:(double*)arg2 ;
-(void)shutdownCache;
-(int)addObject:(id)arg1 cacheKey:(id)arg2 size:(unsigned long long)arg3 cost:(double)arg4 retDidAddObject:(BOOL*)arg5 ;
-(id)copyObjectForKeyImpl:(id)arg1 cost:(double*)arg2 updateAccessTime:(BOOL)arg3 ;
-(unsigned long long)reservedMemorySize;
-(unsigned long long)getCacheMemoryUsed;
-(unsigned long long)getCacheSize;
-(void)reserveCacheMemory:(long long)arg1 ;
@end


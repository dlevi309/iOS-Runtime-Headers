/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)currentSize;
-(void)removeObjectForKey:(id)arg1 ;
-(void)clearCache;
-(void)setCacheSize:(unsigned long long)arg1 ;
-(id)initWithCacheSize:(unsigned long long)arg1 ;
-(void)dealloc;
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


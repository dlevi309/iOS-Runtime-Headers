/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailingDaemon.framework/QuickLookThumbnailingDaemon
*/


@protocol OS_os_transaction;
@class NSMutableDictionary, NSMutableArray, NSLock, NSObject, _QLCacheThread;

@interface QLMemoryCache : NSObject {

	BOOL _cacheEnabled;
	NSMutableDictionary* _thumbnailData;
	NSMutableArray* _thumbnailDataToSave;
	unsigned long long _memoryUsed;
	NSLock* _memoryLock;
	NSObject*<OS_os_transaction> _pendingSavesTransaction;
	_QLCacheThread* _cacheThread;

}

@property (assign) unsigned long long memoryUsed;              //@synthesize memoryUsed=_memoryUsed - In the implementation block
@property (__weak) _QLCacheThread * cacheThread;               //@synthesize cacheThread=_cacheThread - In the implementation block
-(void)reset;
-(unsigned long long)memoryUsed;
-(id)initWithCacheThread:(id)arg1 ;
-(_QLCacheThread *)cacheThread;
-(void)setCacheThread:(_QLCacheThread *)arg1 ;
-(BOOL)sendThumbnailDataForThumbnailRequest:(id)arg1 withCacheThread:(id)arg2 ;
-(void)removeCachedThumbnailsFromUninstalledFileProvidersWithRemainingFileProviderIdentifiers:(id)arg1 ;
-(id)thumbnailDataToSaveWithBatch:(unsigned long long)arg1 ;
-(void)thumbnailDataBatchSaved:(id)arg1 ;
-(BOOL)addThumbnailData:(id)arg1 ;
-(unsigned long long)thumbnailToSaveCount;
-(void)_getWriteLock;
-(void)_releaseWriteLock;
-(void)_invalidateThumbnailData:(id)arg1 ;
-(void)_getReadLock;
-(void)_releaseReadLock;
-(void)setMemoryUsed:(unsigned long long)arg1 ;
-(BOOL)hasThumbnailDataToSave;
@end


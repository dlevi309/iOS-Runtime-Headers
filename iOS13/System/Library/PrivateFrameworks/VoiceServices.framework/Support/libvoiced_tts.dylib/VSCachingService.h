/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/


@protocol OS_dispatch_queue;
@class NSLock, NSMutableArray, VSSpeechCache, VSShortTermCache, NSObject;

@interface VSCachingService : NSObject {

	NSLock* _threadLock;
	NSMutableArray* _inMemoryCaches;
	VSSpeechCache* _cacheStore;
	VSShortTermCache* _shortTermCache;
	NSObject*<OS_dispatch_queue> _cachingQueue;

}

@property (nonatomic,retain) NSLock * threadLock;                                    //@synthesize threadLock=_threadLock - In the implementation block
@property (nonatomic,retain) NSMutableArray * inMemoryCaches;                        //@synthesize inMemoryCaches=_inMemoryCaches - In the implementation block
@property (nonatomic,retain) VSSpeechCache * cacheStore;                             //@synthesize cacheStore=_cacheStore - In the implementation block
@property (nonatomic,retain) VSShortTermCache * shortTermCache;                      //@synthesize shortTermCache=_shortTermCache - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> cachingQueue;              //@synthesize cachingQueue=_cachingQueue - In the implementation block
+(id)standardService;
-(void)fetchCacheForTask:(id)arg1 ;
-(void)enqueueCacheSpeakTask:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)shortTermCacheForHash:(id)arg1 ;
-(void)enqueueShortTermCacheWithHash:(id)arg1 audio:(id)arg2 timingInfo:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)enqueueCacheWithHash:(id)arg1 audio:(id)arg2 timingInfo:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)inMemoryCacheForHash:(id)arg1 ;
-(id)onDiskCacheForHash:(id)arg1 ;
-(id)initWithCache:(id)arg1 shortTermMemory:(id)arg2 ;
-(NSLock *)threadLock;
-(NSMutableArray *)inMemoryCaches;
-(NSObject*<OS_dispatch_queue>)cachingQueue;
-(id)cacheWithHash:(id)arg1 audio:(id)arg2 timingInfo:(id)arg3 ;
-(VSSpeechCache *)cacheStore;
-(VSShortTermCache *)shortTermCache;
-(id)onDiskCacheForSimilarTask:(id)arg1 ;
-(void)setThreadLock:(NSLock *)arg1 ;
-(void)setInMemoryCaches:(NSMutableArray *)arg1 ;
-(void)setCacheStore:(VSSpeechCache *)arg1 ;
-(void)setShortTermCache:(VSShortTermCache *)arg1 ;
-(void)setCachingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end


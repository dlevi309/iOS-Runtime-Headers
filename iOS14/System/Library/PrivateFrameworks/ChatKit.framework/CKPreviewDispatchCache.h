/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <libobjc.A.dylib/IMSystemMonitorListener.h>

@class CKDispatchCache, CKMultiDict;

@interface CKPreviewDispatchCache : NSObject <IMSystemMonitorListener> {

	CKDispatchCache* _dispatchCache;
	CKMultiDict* _pendingBlocks;

}

@property (nonatomic,retain) CKDispatchCache * dispatchCache;              //@synthesize dispatchCache=_dispatchCache - In the implementation block
@property (nonatomic,retain) CKMultiDict * pendingBlocks;                  //@synthesize pendingBlocks=_pendingBlocks - In the implementation block
+(id)snapshotCache;
+(id)previewPrewarmQueue;
+(id)detailsPreviewCache;
+(id)transcriptPreviewCache;
+(id)mapThumbnailQueue;
+(id)stickerPreviewCache;
+(void)_invalidateStickerPreviewCache;
-(void)flush;
-(void)suspend;
-(id)init;
-(id)notificationCenter;
-(void)transferRemoved:(id)arg1 ;
-(void)enqueueSaveBlock:(/*^block*/id)arg1 forMediaObject:(id)arg2 withPriority:(long long)arg3 ;
-(void)endGeneratingForKey:(id)arg1 ;
-(void)beginGeneratingForKey:(id)arg1 ;
-(id)cachedPreviewForKey:(id)arg1 ;
-(void)setCachedPreview:(id)arg1 key:(id)arg2 ;
-(BOOL)isGeneratingPreviewForKey:(id)arg1 ;
-(void)enqueueSaveBlock:(/*^block*/id)arg1 withPriority:(long long)arg2 ;
-(void)enqueueGenerationBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 withPriority:(long long)arg3 forKey:(id)arg4 ;
-(void)systemApplicationDidSuspend;
-(CKDispatchCache *)dispatchCache;
-(CKMultiDict *)pendingBlocks;
-(id)initWithCacheLimit:(unsigned long long)arg1 ;
-(void)setDispatchCache:(CKDispatchCache *)arg1 ;
-(void)setPendingBlocks:(CKMultiDict *)arg1 ;
-(BOOL)shouldReplaceCachedPreview:(id)arg1 withPreview:(id)arg2 ;
-(id)mediaObjectManager;
-(void)transferFinished:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)clearQueueAndCachedPreviews;
-(void)resume;
-(void)dealloc;
@end


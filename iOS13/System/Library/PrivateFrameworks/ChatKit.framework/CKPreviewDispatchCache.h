/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)detailsPreviewCache;
+(id)transcriptPreviewCache;
+(id)mapThumbnailQueue;
+(id)snapshotCache;
+(id)previewPrewarmQueue;
+(void)_invalidateStickerPreviewCache;
+(id)stickerPreviewCache;
-(id)init;
-(void)dealloc;
-(void)resume;
-(void)suspend;
-(void)flush;
-(id)notificationCenter;
-(void)didReceiveMemoryWarning;
-(void)systemApplicationDidSuspend;
-(id)cachedPreviewForKey:(id)arg1 ;
-(void)setCachedPreview:(id)arg1 key:(id)arg2 ;
-(BOOL)isGeneratingPreviewForKey:(id)arg1 ;
-(void)enqueueSaveBlock:(/*^block*/id)arg1 withPriority:(long long)arg2 ;
-(void)enqueueGenerationBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 withPriority:(long long)arg3 forKey:(id)arg4 ;
-(void)clearQueueAndCachedPreviews;
-(void)enqueueSaveBlock:(/*^block*/id)arg1 forMediaObject:(id)arg2 withPriority:(long long)arg3 ;
-(void)transferRemoved:(id)arg1 ;
-(void)beginGeneratingForKey:(id)arg1 ;
-(void)endGeneratingForKey:(id)arg1 ;
-(id)initWithCacheLimit:(unsigned long long)arg1 ;
-(void)setDispatchCache:(CKDispatchCache *)arg1 ;
-(void)setPendingBlocks:(CKMultiDict *)arg1 ;
-(CKDispatchCache *)dispatchCache;
-(BOOL)shouldReplaceCachedPreview:(id)arg1 withPreview:(id)arg2 ;
-(CKMultiDict *)pendingBlocks;
-(id)mediaObjectManager;
-(void)transferFinished:(id)arg1 ;
@end


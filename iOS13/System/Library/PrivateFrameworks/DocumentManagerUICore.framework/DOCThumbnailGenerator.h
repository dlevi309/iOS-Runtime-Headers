/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
*/


@class DOCThumbnailCache, QLThumbnailGenerator;

@interface DOCThumbnailGenerator : NSObject {

	DOCThumbnailCache* _thumbnailCache;
	QLThumbnailGenerator* _thumbnailGenerator;

}

@property (nonatomic,readonly) QLThumbnailGenerator * thumbnailGenerator;              //@synthesize thumbnailGenerator=_thumbnailGenerator - In the implementation block
+(id)sharedGenerator;
+(void)setMaximumCachedThumbnailCount:(unsigned long long)arg1 ;
-(id)init;
-(QLThumbnailGenerator *)thumbnailGenerator;
-(void)performInBatch:(/*^block*/id)arg1 ;
-(void)markThumbnailAsRecentlyUsed:(id)arg1 ;
-(id)thumbnailForItem:(id)arg1 descriptor:(id)arg2 ;
-(id)thumbnailForItem:(id)arg1 descriptor:(id)arg2 forceFetch:(BOOL)arg3 ;
-(id)_thumbnailForItem:(id)arg1 descriptor:(id)arg2 forceFetch:(BOOL)arg3 ;
-(id)_thumbnailFallbackForItem:(id)arg1 descriptor:(id)arg2 currentThumbnail:(id)arg3 ;
-(id)iconForItem:(id)arg1 descriptor:(id)arg2 ;
-(id)_currentItemThumbnailsBatch;
-(id)startBatching;
-(void)endBatching:(id)arg1 ;
-(id)_endCurrentThumbnailsBatch;
-(id)iconForURL:(id)arg1 descriptor:(id)arg2 ;
@end


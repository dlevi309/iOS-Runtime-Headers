/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

@class AVAsset, AVVideoComposition;


@protocol PXLivePhotoTrimScrubberFilmStripView <NSObject>
@property (assign,nonatomic) CGRect visibleRect; 
@property (nonatomic,readonly) AVAsset * asset; 
@property (nonatomic,readonly) AVVideoComposition * videoComposition; 
@property (assign,nonatomic) BOOL useContentAspectRatio; 
@property (assign,nonatomic,__weak) id thumbnailUpdatingDelegate; 
@optional
-(void)setUseContentAspectRatio:(BOOL)arg1;
-(BOOL)useContentAspectRatio;
-(id)thumbnailUpdatingDelegate;
-(void)setThumbnailUpdatingDelegate:(id)arg1;

@required
-(void)setVisibleRect:(CGRect)arg1;
-(CGRect)visibleRect;
-(AVAsset *)asset;
-(void)setAsset:(id)arg1 videoComposition:(id)arg2;
-(void)setLivePhotoTrimScrubberThumbnail:(id)arg1;
-(AVVideoComposition *)videoComposition;

@end


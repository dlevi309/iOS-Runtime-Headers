/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

@class AVAsset, UIImage, AVVideoComposition;


@protocol PHVideoScrubberFilmstripView <NSObject>
@property (nonatomic,copy) AVAsset * asset; 
@property (nonatomic,retain) UIImage * placeholderImage; 
@property (assign,nonatomic) CGRect visibleRect; 
@property (nonatomic,copy) AVVideoComposition * videoComposition; 
@optional
-(AVVideoComposition *)videoComposition;
-(void)setVideoComposition:(id)arg1;

@required
-(AVAsset *)asset;
-(void)setAsset:(id)arg1;
-(CGRect)visibleRect;
-(void)setVisibleRect:(CGRect)arg1;
-(void)setPlaceholderImage:(id)arg1;
-(UIImage *)placeholderImage;

@end


/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

@class AVAsset, UIImage;


@protocol PHVideoScrubberFilmstripView <NSObject>
@property (nonatomic,copy) AVAsset * asset; 
@property (nonatomic,retain) UIImage * placeholderImage; 
@property (assign,nonatomic) CGRect visibleRect; 
@optional
-(void)setAsset:(id)arg1 videoComposition:(id)arg2;

@required
-(void)setAsset:(id)arg1;
-(void)setVisibleRect:(CGRect)arg1;
-(CGRect)visibleRect;
-(AVAsset *)asset;
-(UIImage *)placeholderImage;
-(void)setPlaceholderImage:(id)arg1;

@end


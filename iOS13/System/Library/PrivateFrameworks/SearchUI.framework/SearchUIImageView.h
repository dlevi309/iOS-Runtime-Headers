/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <TemplateKit/TLKImageView.h>

@class SFImage, SearchUIButton, UIView;

@interface SearchUIImageView : TLKImageView {

	SFImage* _currentImage;
	SearchUIButton* _overlayPlayButton;
	UIView* _tintView;

}

@property (nonatomic,retain) SFImage * currentImage;                          //@synthesize currentImage=_currentImage - In the implementation block
@property (nonatomic,retain) SearchUIButton * overlayPlayButton;              //@synthesize overlayPlayButton=_overlayPlayButton - In the implementation block
@property (nonatomic,retain) UIView * tintView;                               //@synthesize tintView=_tintView - In the implementation block
+(id)imageViewWithImage:(id)arg1 ;
+(id)thumbnailForResult:(id)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(SFImage *)currentImage;
-(UIView *)tintView;
-(void)setTintView:(UIView *)arg1 ;
-(void)updateWithImage:(id)arg1 ;
-(void)appIconDidChange:(id)arg1 ;
-(void)updateWithImage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateWithImage:(id)arg1 needsOverlayButton:(BOOL)arg2 preventImageScaling:(BOOL)arg3 useMinimumWidthIfPossible:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setCurrentImage:(SFImage *)arg1 ;
-(SearchUIButton *)overlayPlayButton;
-(void)setOverlayPlayButton:(SearchUIButton *)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)thumbnailForRowModel:(id)arg1 ;
+(id)imageViewWithImage:(id)arg1 ;
-(UIView *)tintView;
-(id)init;
-(void)updateWithImage:(id)arg1 ;
-(void)appIconDidChange:(id)arg1 ;
-(void)updateWithImage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setCurrentImage:(SFImage *)arg1 ;
-(void)setOverlayPlayButton:(SearchUIButton *)arg1 ;
-(void)setTintView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(void)updateWithImage:(id)arg1 needsOverlayButton:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(SearchUIButton *)overlayPlayButton;
-(SFImage *)currentImage;
@end


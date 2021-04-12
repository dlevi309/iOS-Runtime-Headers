/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
*/

#import <RelevanceEngineUI/RelevanceEngineUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UIColor, UIImage;

@interface REUpNextImageView : UIView {

	UIImageView* _foregroundImageView;
	UIImageView* _backgroundImageView;
	UIImageView* _foregroundAccentImageView;
	UIColor* _fallbackTintColor;
	UIImage* _overrideImage;

}

@property (nonatomic,retain) UIColor * fallbackTintColor;              //@synthesize fallbackTintColor=_fallbackTintColor - In the implementation block
@property (nonatomic,retain) UIImage * overrideImage;                  //@synthesize overrideImage=_overrideImage - In the implementation block
-(UIImage *)overrideImage;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContentMode:(long long)arg1 ;
-(void)layoutSubviews;
-(void)_updateColors;
-(void)setOverrideImage:(UIImage *)arg1 ;
-(void)setFallbackTintColor:(UIColor *)arg1 ;
-(BOOL)_hasMultipartImages;
-(UIColor *)fallbackTintColor;
@end


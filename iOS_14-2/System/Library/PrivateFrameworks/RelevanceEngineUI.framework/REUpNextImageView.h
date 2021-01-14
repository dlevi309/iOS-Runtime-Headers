/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_updateColors;
-(void)setOverrideImage:(UIImage *)arg1 ;
-(CGSize)intrinsicContentSize;
-(UIImage *)overrideImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setContentMode:(long long)arg1 ;
-(BOOL)_hasMultipartImages;
-(UIColor *)fallbackTintColor;
-(void)setFallbackTintColor:(UIColor *)arg1 ;
@end


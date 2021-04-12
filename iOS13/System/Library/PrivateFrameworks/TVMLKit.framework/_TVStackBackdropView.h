/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <UIKitCore/UIView.h>

@class UIImageView, UIVisualEffectView, UIImage;

@interface _TVStackBackdropView : UIView {

	UIImageView* _imageView;
	UIVisualEffectView* _visualEffectView;
	UIImage* _image;
	long long _blurEffectStyle;

}

@property (nonatomic,retain) UIImage * image;                        //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) long long blurEffectStyle;              //@synthesize blurEffectStyle=_blurEffectStyle - In the implementation block
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(void)setBlurEffectStyle:(long long)arg1 ;
-(long long)blurEffectStyle;
-(id)initWithBlurEffectStyle:(long long)arg1 ;
@end


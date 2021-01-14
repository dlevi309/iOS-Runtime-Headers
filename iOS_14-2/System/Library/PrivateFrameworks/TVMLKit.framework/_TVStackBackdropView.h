/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(void)layoutSubviews;
-(long long)blurEffectStyle;
-(void)setBlurEffectStyle:(long long)arg1 ;
-(id)initWithBlurEffectStyle:(long long)arg1 ;
@end


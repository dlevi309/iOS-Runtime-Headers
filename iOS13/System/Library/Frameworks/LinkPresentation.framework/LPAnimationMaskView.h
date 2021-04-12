/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <UIKitCore/UIView.h>

@class UIImage, UIView;

@interface LPAnimationMaskView : UIView {

	UIImage* _image;
	long long _animationOrigin;
	UIView* _imageView;

}

@property (nonatomic,retain) UIImage * image;                          //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) long long animationOrigin;                //@synthesize animationOrigin=_animationOrigin - In the implementation block
@property (nonatomic,retain,readonly) UIView * imageView; 
-(id)init;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(UIView *)imageView;
-(void)setAnimationOrigin:(long long)arg1 ;
-(long long)animationOrigin;
@end


/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage, UIImageView;

@interface AVTUIAnimatingImageView : UIView {

	UIImage* _image;
	UIImageView* _imageView;
	UIImageView* _fadeInImageView;

}

@property (nonatomic,readonly) UIImageView * imageView;                    //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) UIImageView * fadeInImageView;              //@synthesize fadeInImageView=_fadeInImageView - In the implementation block
@property (nonatomic,retain) UIImage * image;                              //@synthesize image=_image - In the implementation block
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContentMode:(long long)arg1 ;
-(UIImageView *)imageView;
-(void)setContinuousCornerRadius:(double)arg1 ;
-(void)setImage:(id)arg1 animated:(BOOL)arg2 ;
-(UIImageView *)fadeInImageView;
@end


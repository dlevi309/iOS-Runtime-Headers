/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUI.framework/CarPlayUI
*/

#import <CarPlayUI/CarPlayUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage, UIImageView;

@interface CPUIShadowImageView : UIView {

	UIImage* _image;
	UIImage* _placeholderImage;
	UIImageView* _imageView;
	UIImageView* _placeholderView;

}

@property (nonatomic,readonly) UIImageView * imageView;                    //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) UIImageView * placeholderView;              //@synthesize placeholderView=_placeholderView - In the implementation block
@property (nonatomic,retain) UIImage * image;                              //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage;                   //@synthesize placeholderImage=_placeholderImage - In the implementation block
-(long long)contentMode;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(UIImageView *)placeholderView;
-(UIImage *)image;
-(UIImage *)placeholderImage;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setContentMode:(long long)arg1 ;
-(void)setupEffects;
-(BOOL)_isDarkMode;
@end


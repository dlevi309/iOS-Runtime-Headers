/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UIImage;

@interface SBFluidSwitcherIconImageContainerView : UIView {

	UIImageView* _imageView;
	UIImage* _image;

}

@property (nonatomic,retain) UIImage * image;              //@synthesize image=_image - In the implementation block
-(void)_configureIconImageView:(id)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImage *)image;
-(void)layoutSubviews;
-(void)setImage:(id)arg1 animated:(BOOL)arg2 ;
-(void)_crossfadeToImage:(id)arg1 ;
@end


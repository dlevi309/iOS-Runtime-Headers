/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/ICCollapsibleBaseView.h>

@class UIImage, UIColor, UIImageView;

@interface ICCollapsibleImageView : ICCollapsibleBaseView {

	UIImage* _image;
	UIColor* _tintColor;
	UIImageView* _imageView;

}

@property (nonatomic,retain) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIImage * image;                      //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                  //@synthesize tintColor=_tintColor - In the implementation block
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)setTintColor:(UIColor *)arg1 ;
-(UIImageView *)imageView;
-(UIImage *)image;
-(UIColor *)tintColor;
-(void)performSetup;
@end


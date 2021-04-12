/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(UIImageView *)imageView;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)performSetup;
@end


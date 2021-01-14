/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIImageView, UIImage;

@interface HUNamedWallpaperCell : UICollectionViewCell {

	long long _contentMode;
	UIImageView* _imageView;

}

@property (nonatomic,retain) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,copy) UIImage * image; 
@property (assign,nonatomic) long long contentMode;                //@synthesize contentMode=_contentMode - In the implementation block
-(void)setImageView:(UIImageView *)arg1 ;
-(long long)contentMode;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(UIImage *)image;
-(void)setContentMode:(long long)arg1 ;
@end


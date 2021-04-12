/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Settings/WallpaperSettings.framework/WallpaperSettings
*/

#import <WallpaperSettings/WallpaperSettings-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIImageView, UIView, UIImage;

@interface WallpaperPhotoCell : UICollectionViewCell {

	UIImageView* _imageView;
	UIView* _highlightOverlayView;
	UIImageView* _badgeView;
	BOOL _appearanceAware;
	UIImage* _image;

}

@property (nonatomic,retain) UIImage * image;                   //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) BOOL appearanceAware;              //@synthesize appearanceAware=_appearanceAware - In the implementation block
-(void)_updateHighlight;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepareForReuse;
-(UIImage *)image;
-(void)layoutSubviews;
-(void)_updateImageView;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_configureView;
-(BOOL)appearanceAware;
-(void)setAppearanceAware:(BOOL)arg1 ;
@end


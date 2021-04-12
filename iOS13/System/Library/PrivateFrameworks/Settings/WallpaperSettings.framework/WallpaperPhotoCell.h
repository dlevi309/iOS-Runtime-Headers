/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)prepareForReuse;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_updateImageView;
-(void)_updateHighlight;
-(void)_configureView;
-(BOOL)appearanceAware;
-(void)setAppearanceAware:(BOOL)arg1 ;
@end


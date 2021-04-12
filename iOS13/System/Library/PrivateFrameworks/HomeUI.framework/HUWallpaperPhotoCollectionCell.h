/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UIImageView, UILabel, NSArray, NSLayoutConstraint, UIImage, NSString;

@interface HUWallpaperPhotoCollectionCell : UITableViewCell {

	UIImageView* _imageThumbnailView;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	NSArray* _imageSizeConstraints;
	NSArray* _horizontalConstraints;
	NSLayoutConstraint* _imageWidthConstraint;
	NSLayoutConstraint* _imageHeightConstraint;
	CGSize _imageSize;

}

@property (nonatomic,retain) UIImageView * imageThumbnailView;                        //@synthesize imageThumbnailView=_imageThumbnailView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                              //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) NSArray * imageSizeConstraints;                          //@synthesize imageSizeConstraints=_imageSizeConstraints - In the implementation block
@property (nonatomic,retain) NSArray * horizontalConstraints;                         //@synthesize horizontalConstraints=_horizontalConstraints - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imageWidthConstraint;               //@synthesize imageWidthConstraint=_imageWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imageHeightConstraint;              //@synthesize imageHeightConstraint=_imageHeightConstraint - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) NSString * titleText; 
@property (nonatomic,retain) NSString * descriptionText; 
@property (assign,nonatomic) CGSize imageSize;                                        //@synthesize imageSize=_imageSize - In the implementation block
-(void)prepareForReuse;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(UILabel *)titleLabel;
-(void)updateConstraints;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(CGSize)imageSize;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(UILabel *)descriptionLabel;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTitleText:(NSString *)arg1 ;
-(void)setImageSize:(CGSize)arg1 ;
-(NSArray *)horizontalConstraints;
-(void)setHorizontalConstraints:(NSArray *)arg1 ;
-(NSString *)titleText;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(NSLayoutConstraint *)imageHeightConstraint;
-(void)setImageHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)imageWidthConstraint;
-(void)setImageWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(UIImageView *)imageThumbnailView;
-(void)setImageThumbnailView:(UIImageView *)arg1 ;
-(NSArray *)imageSizeConstraints;
-(void)setImageSizeConstraints:(NSArray *)arg1 ;
@end


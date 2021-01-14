/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UILabel *)titleLabel;
-(CGSize)imageSize;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(NSString *)titleText;
-(NSArray *)horizontalConstraints;
-(void)prepareForReuse;
-(UIImage *)image;
-(void)setTitleText:(NSString *)arg1 ;
-(void)updateConstraints;
-(NSLayoutConstraint *)imageHeightConstraint;
-(void)setImageHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setHorizontalConstraints:(NSArray *)arg1 ;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(void)setImageSize:(CGSize)arg1 ;
-(UILabel *)descriptionLabel;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSLayoutConstraint *)imageWidthConstraint;
-(UIImageView *)imageThumbnailView;
-(void)setImageThumbnailView:(UIImageView *)arg1 ;
-(NSArray *)imageSizeConstraints;
-(void)setImageSizeConstraints:(NSArray *)arg1 ;
-(void)setImageWidthConstraint:(NSLayoutConstraint *)arg1 ;
@end


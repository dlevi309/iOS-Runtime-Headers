/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIImageView, UIImage, NSString;

@interface PUCurationKeyAssetComparisonViewCell : UICollectionViewCell {

	UIImageView* _imageView;
	UIImage* _thumbnailImage;
	NSString* _representedAssetIdentifier;

}

@property (nonatomic,retain) UIImage * thumbnailImage;                           //@synthesize thumbnailImage=_thumbnailImage - In the implementation block
@property (nonatomic,retain) NSString * representedAssetIdentifier;              //@synthesize representedAssetIdentifier=_representedAssetIdentifier - In the implementation block
+(double)cellHeightWithCellWidth:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(UIImage *)thumbnailImage;
-(NSString *)representedAssetIdentifier;
-(void)setRepresentedAssetIdentifier:(NSString *)arg1 ;
-(void)setThumbnailImage:(UIImage *)arg1 ;
@end


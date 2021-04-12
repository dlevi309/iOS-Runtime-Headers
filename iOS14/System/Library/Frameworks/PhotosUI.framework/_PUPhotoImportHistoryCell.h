/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIImageView, PHAsset;

@interface _PUPhotoImportHistoryCell : UICollectionViewCell {

	int _currentImageRequestToken;
	UIImageView* _imageView;
	PHAsset* _asset;

}

@property (nonatomic,retain) UIImageView * imageView;                   //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) PHAsset * asset;                           //@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) int currentImageRequestToken;              //@synthesize currentImageRequestToken=_currentImageRequestToken - In the implementation block
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setAsset:(PHAsset *)arg1 ;
-(void)_updateBorderColor;
-(int)currentImageRequestToken;
-(void)setCurrentImageRequestToken:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(PHAsset *)asset;
-(void)prepareForReuse;
-(void)layoutSubviews;
@end


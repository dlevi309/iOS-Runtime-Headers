/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIImageView, UILabel, PXRoundedCornerOverlayView;

@interface PXSearchZeroKeywordCollectionViewCell : UICollectionViewCell {

	UIImageView* _imageView;
	UILabel* _textLabel;
	PXRoundedCornerOverlayView* _imageCornerOverlayView;

}

@property (nonatomic,retain) UILabel * textLabel;                                                //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                            //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) PXRoundedCornerOverlayView * imageCornerOverlayView;              //@synthesize imageCornerOverlayView=_imageCornerOverlayView - In the implementation block
+(double)verticalSpacing;
+(CGSize)thumbnailSize;
+(CGSize)_thumbnailSizeWithMetric:(double)arg1 ;
+(id)thumbnailWidthInterpolator;
+(double)_calculateHeightNeededForTextLabelWithNumberOfLines:(unsigned long long)arg1 ;
+(id)reuseIdentifier;
+(CGSize)thumbnailSizeForAccessibilityTextUsingCollectionInset:(UIEdgeInsets)arg1 cellSpacing:(double)arg2 screenWidth:(double)arg3 ;
+(CGSize)cellSizeWithTextLabelNumberOfLines:(unsigned long long)arg1 ;
+(CGSize)cellSizeForAccessibilityTextWithTextLabelNumberOfLines:(unsigned long long)arg1 collectionInset:(UIEdgeInsets)arg2 collectionCellSpacing:(double)arg3 screenWidth:(double)arg4 ;
+(CGSize)cellSizeWithoutTextLabel;
+(CGSize)cellSizeForAccessibilityTextWithoutTextLabelUsingCollectionInset:(UIEdgeInsets)arg1 collectionCellSpacing:(double)arg2 screenWidth:(double)arg3 ;
+(id)attributedStringForCellLabelWithString:(id)arg1 ;
+(BOOL)cellLabelTextNeedsMultipleLines:(id)arg1 cellWidth:(double)arg2 ;
+(double)expectedNumberOfCellsVisibleWithAccessibilityText:(BOOL)arg1 withInset:(UIEdgeInsets)arg2 cellSpacing:(double)arg3 screenWidth:(double)arg4 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(void)prepareForReuse;
-(void)setTextLabel:(UILabel *)arg1 ;
-(PXRoundedCornerOverlayView *)imageCornerOverlayView;
-(UILabel *)textLabel;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/_UICollectionViewListCell.h>

@class UIImageView, UILabel, UIStackView, UILayoutGuide, NSLayoutConstraint;

@interface PXSearchSuggestionCell : _UICollectionViewListCell {

	UIImageView* _imageView;
	UILabel* _titleLabel;
	UILabel* _countLabel;
	UIStackView* _textStackView;
	UILayoutGuide* _imageViewLayoutGuide;
	NSLayoutConstraint* _imageViewLayoutGuideWidthConstraint;

}

@property (nonatomic,readonly) UIImageView * imageView;                                               //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                                  //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * countLabel;                                                  //@synthesize countLabel=_countLabel - In the implementation block
@property (nonatomic,readonly) UIStackView * textStackView;                                           //@synthesize textStackView=_textStackView - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * imageViewLayoutGuide;                                  //@synthesize imageViewLayoutGuide=_imageViewLayoutGuide - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * imageViewLayoutGuideWidthConstraint;              //@synthesize imageViewLayoutGuideWidthConstraint=_imageViewLayoutGuideWidthConstraint - In the implementation block
+(id)reuseIdentifier;
-(UILabel *)titleLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(void)prepareForReuse;
-(UIStackView *)textStackView;
-(double)imageViewLayoutGuideWidth;
-(void)setSearchSuggestion:(id)arg1 ;
-(UILayoutGuide *)imageViewLayoutGuide;
-(NSLayoutConstraint *)imageViewLayoutGuideWidthConstraint;
-(UILabel *)countLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
@end


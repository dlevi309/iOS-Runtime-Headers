/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class MKBrowseCategoryItem, UIFont, UIImageView, UILabel, NSLayoutConstraint;

@interface MKBrowseCategoryCollectionViewCell : UICollectionViewCell {

	MKBrowseCategoryItem* _browseItem;
	UIFont* _preferredTitleLabelFont;
	UIImageView* _imageView;
	UIImageView* _highlightedImageView;
	UILabel* _titleLabel;
	NSLayoutConstraint* _titleLabelTopConstraint;
	CGSize _preferredSize;

}

@property (nonatomic,retain) UIImageView * imageView;                                   //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIImageView * highlightedImageView;                        //@synthesize highlightedImageView=_highlightedImageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                      //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleLabelTopConstraint;              //@synthesize titleLabelTopConstraint=_titleLabelTopConstraint - In the implementation block
@property (nonatomic,retain) MKBrowseCategoryItem * browseItem;                         //@synthesize browseItem=_browseItem - In the implementation block
@property (assign,nonatomic) CGSize preferredSize;                                      //@synthesize preferredSize=_preferredSize - In the implementation block
@property (nonatomic,retain) UIFont * preferredTitleLabelFont;                          //@synthesize preferredTitleLabelFont=_preferredTitleLabelFont - In the implementation block
+(id)reuseIdentifier;
-(UILabel *)titleLabel;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(CGSize)preferredSize;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(void)prepareForReuse;
-(void)setPreferredSize:(CGSize)arg1 ;
-(MKBrowseCategoryItem *)browseItem;
-(UIFont *)preferredTitleLabelFont;
-(NSLayoutConstraint *)titleLabelTopConstraint;
-(UIImageView *)highlightedImageView;
-(void)setHighlightedImageView:(UIImageView *)arg1 ;
-(void)setTitleLabelTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setBrowseItem:(MKBrowseCategoryItem *)arg1 ;
-(void)setPreferredTitleLabelFont:(UIFont *)arg1 ;
-(void)setTitleLabelTextColor:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end


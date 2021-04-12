/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class MKPlaceVenueBrowseItem, UIFont, UIImageView, UILabel, NSLayoutConstraint;

@interface MKVenuesBrowseCollectionViewCell : UICollectionViewCell {

	MKPlaceVenueBrowseItem* _browseItem;
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
@property (nonatomic,retain) MKPlaceVenueBrowseItem * browseItem;                       //@synthesize browseItem=_browseItem - In the implementation block
@property (assign,nonatomic) CGSize preferredSize;                                      //@synthesize preferredSize=_preferredSize - In the implementation block
@property (nonatomic,retain) UIFont * preferredTitleLabelFont;                          //@synthesize preferredTitleLabelFont=_preferredTitleLabelFont - In the implementation block
+(id)reuseIdentifier;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(CGSize)preferredSize;
-(void)setPreferredSize:(CGSize)arg1 ;
-(UIImageView *)imageView;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(UIImageView *)highlightedImageView;
-(void)setHighlightedImageView:(UIImageView *)arg1 ;
-(void)setPreferredTitleLabelFont:(UIFont *)arg1 ;
-(void)setTitleLabelTextColor:(id)arg1 ;
-(void)setBrowseItem:(MKPlaceVenueBrowseItem *)arg1 ;
-(UIFont *)preferredTitleLabelFont;
-(NSLayoutConstraint *)titleLabelTopConstraint;
-(MKPlaceVenueBrowseItem *)browseItem;
-(void)setTitleLabelTopConstraint:(NSLayoutConstraint *)arg1 ;
@end


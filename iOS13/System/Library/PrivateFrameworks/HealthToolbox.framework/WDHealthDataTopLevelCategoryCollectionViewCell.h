/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/HealthToolbox-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIImageView, UILabel, NSLayoutConstraint, HKDisplayCategory;

@interface WDHealthDataTopLevelCategoryCollectionViewCell : UICollectionViewCell {

	UIImageView* _categoryImageView;
	UILabel* _categoryLabel;
	NSLayoutConstraint* _categoryLabelBaselineAnchor;
	HKDisplayCategory* _displayCategory;
	double _fontSize;

}

@property (nonatomic,retain) HKDisplayCategory * displayCategory;              //@synthesize displayCategory=_displayCategory - In the implementation block
@property (assign,nonatomic) double fontSize;                                  //@synthesize fontSize=_fontSize - In the implementation block
+(id)reuseIdentifier;
+(id)categoryNameLabelWithText:(id)arg1 ;
+(double)internalHorizontalPadding;
+(id)categoryNameLabelFontWithSize:(double)arg1 ;
+(id)categoryNameLabelFont;
+(double)categoryNameLabelDefaultFontSize;
-(double)fontSize;
-(void)setFontSize:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)_updateForCurrentSizeCategory;
-(HKDisplayCategory *)displayCategory;
-(void)setDisplayCategory:(HKDisplayCategory *)arg1 ;
@end


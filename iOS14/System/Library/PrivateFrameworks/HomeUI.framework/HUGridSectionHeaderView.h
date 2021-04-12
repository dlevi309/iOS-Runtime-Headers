/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class NSString, UIButton, HUGridLayoutOptions, UILabel, NSArray;

@interface HUGridSectionHeaderView : UICollectionReusableView {

	NSString* _sectionTitle;
	UIButton* _button;
	HUGridLayoutOptions* _layoutOptions;
	UILabel* _titleLabel;
	NSArray* _headerCellConstraints;

}

@property (nonatomic,retain) UILabel * titleLabel;                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIButton * button;                                //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) NSArray * headerCellConstraints;                  //@synthesize headerCellConstraints=_headerCellConstraints - In the implementation block
@property (nonatomic,retain) NSString * sectionTitle;                          //@synthesize sectionTitle=_sectionTitle - In the implementation block
@property (nonatomic,retain) HUGridLayoutOptions * layoutOptions;              //@synthesize layoutOptions=_layoutOptions - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIButton *)button;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_invalidateConstraints;
-(NSString *)sectionTitle;
-(void)setSectionTitle:(NSString *)arg1 ;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(void)setButton:(UIButton *)arg1 ;
-(void)prepareForReuse;
-(void)updateConstraints;
-(HUGridLayoutOptions *)layoutOptions;
-(void)_updateTitleLabel;
-(void)setLayoutOptions:(HUGridLayoutOptions *)arg1 ;
-(NSArray *)headerCellConstraints;
-(void)setHeaderCellConstraints:(NSArray *)arg1 ;
@end


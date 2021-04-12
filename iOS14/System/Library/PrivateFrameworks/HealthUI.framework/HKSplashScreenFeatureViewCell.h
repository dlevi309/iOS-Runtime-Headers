/*
* Generated on Thursday, January 14, 2021 at 2:24:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <UIKitCore/UITableViewCell.h>

@class HKSplashScreenItem, UILabel, UIImageView, NSLayoutConstraint, UIImage, NSString;

@interface HKSplashScreenFeatureViewCell : UITableViewCell {

	HKSplashScreenItem* _splashScreenItem;
	UILabel* _fullDescriptionLabel;
	UIImageView* _itemIconView;
	double _cellPadding;
	NSLayoutConstraint* _iconTopConstraint;
	UIImage* _icon;
	NSString* _title;
	NSString* _featureDescription;

}

@property (nonatomic,retain) NSLayoutConstraint * iconTopConstraint;              //@synthesize iconTopConstraint=_iconTopConstraint - In the implementation block
@property (nonatomic,retain) UIImage * icon;                                      //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) NSString * title;                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * featureDescription;                       //@synthesize featureDescription=_featureDescription - In the implementation block
@property (nonatomic,retain) HKSplashScreenItem * splashScreenItem;               //@synthesize splashScreenItem=_splashScreenItem - In the implementation block
@property (nonatomic,retain) UILabel * fullDescriptionLabel;                      //@synthesize fullDescriptionLabel=_fullDescriptionLabel - In the implementation block
@property (nonatomic,retain) UIImageView * itemIconView;                          //@synthesize itemIconView=_itemIconView - In the implementation block
@property (readonly) double cellPadding;                                          //@synthesize cellPadding=_cellPadding - In the implementation block
+(id)_titleFont;
+(id)_descriptionFont;
+(id)defaultReuseIdentifier;
-(void)setFeatureDescription:(NSString *)arg1 ;
-(NSString *)featureDescription;
-(UIImage *)icon;
-(void)setTitle:(NSString *)arg1 ;
-(id)firstBaselineAnchor;
-(void)setIcon:(UIImage *)arg1 ;
-(id)lastBaselineAnchor;
-(void)createSubviews;
-(double)cellPadding;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSString *)title;
-(void)updateForFontOrTextChange;
-(UILabel *)fullDescriptionLabel;
-(UIImageView *)itemIconView;
-(NSLayoutConstraint *)iconTopConstraint;
-(void)setIcon:(id)arg1 title:(id)arg2 description:(id)arg3 ;
-(void)setItemIconView:(UIImageView *)arg1 ;
-(void)setFullDescriptionLabel:(UILabel *)arg1 ;
-(void)setIconTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setSplashScreenItem:(HKSplashScreenItem *)arg1 ;
-(HKSplashScreenItem *)splashScreenItem;
@end


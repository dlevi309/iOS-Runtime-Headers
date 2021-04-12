/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class UIView, NSString, NSLayoutConstraint, UILabel;

@interface _HKDisplayTypeSectionedHeaderView : UICollectionReusableView {

	UIView* _contentView;
	NSString* _title;
	NSLayoutConstraint* _maxTitleWidthConstraint;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;                                      //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                      //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) NSString * title;                                          //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * maxTitleWidthConstraint;              //@synthesize maxTitleWidthConstraint=_maxTitleWidthConstraint - In the implementation block
+(id)reuseIdentifier;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)prepareForReuse;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(NSLayoutConstraint *)maxTitleWidthConstraint;
-(void)setMaxTitleWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_updatePreferredTitleFont;
@end


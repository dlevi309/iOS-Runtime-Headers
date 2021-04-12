/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class HKDisplayTypeContextItem, UILabel, UIStackView, HKUIMetricColors, NSLayoutConstraint;

@interface HKDisplayTypeContextVerticalCollectionViewCell : UICollectionViewCell {

	HKDisplayTypeContextItem* _contextItem;
	long long _mode;
	UILabel* _titleLabel;
	UILabel* _valueLabel;
	UILabel* _unitLabel;
	UIStackView* _contentStackView;
	HKUIMetricColors* _currentMetricColors;
	NSLayoutConstraint* _widthConstraint;
	NSLayoutConstraint* _maxTitleWidthConstraint;

}

@property (nonatomic,retain) HKDisplayTypeContextItem * contextItem;                    //@synthesize contextItem=_contextItem - In the implementation block
@property (assign,nonatomic) long long mode;                                            //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                      //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * valueLabel;                                      //@synthesize valueLabel=_valueLabel - In the implementation block
@property (nonatomic,retain) UILabel * unitLabel;                                       //@synthesize unitLabel=_unitLabel - In the implementation block
@property (nonatomic,retain) UIStackView * contentStackView;                            //@synthesize contentStackView=_contentStackView - In the implementation block
@property (nonatomic,retain) HKUIMetricColors * currentMetricColors;                    //@synthesize currentMetricColors=_currentMetricColors - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * widthConstraint;                      //@synthesize widthConstraint=_widthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * maxTitleWidthConstraint;              //@synthesize maxTitleWidthConstraint=_maxTitleWidthConstraint - In the implementation block
+(id)reuseIdentifier;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(long long)mode;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_titleFont;
-(void)setSelected:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)setMode:(long long)arg1 ;
-(NSLayoutConstraint *)widthConstraint;
-(UILabel *)valueLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setValueLabel:(UILabel *)arg1 ;
-(void)setWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(id)_labelWithFont:(id)arg1 allowsMultiline:(BOOL)arg2 supportsDyanmicType:(BOOL)arg3 ;
-(id)_valueAndUnitFont;
-(id)_stackViewWithArrangedSubviews:(id)arg1 ;
-(void)_configureForTraitCollection:(id)arg1 ;
-(void)_updateUI:(BOOL)arg1 ;
-(UILabel *)unitLabel;
-(UIStackView *)contentStackView;
-(NSLayoutConstraint *)maxTitleWidthConstraint;
-(void)setContextItem:(HKDisplayTypeContextItem *)arg1 ;
-(void)_configureForContextItem:(id)arg1 ;
-(id)_backgroundViewWithColor:(id)arg1 ;
-(void)setCurrentMetricColors:(HKUIMetricColors *)arg1 ;
-(HKUIMetricColors *)currentMetricColors;
-(void)updateWithContextItem:(id)arg1 mode:(long long)arg2 ;
-(HKDisplayTypeContextItem *)contextItem;
-(void)setUnitLabel:(UILabel *)arg1 ;
-(void)setContentStackView:(UIStackView *)arg1 ;
-(void)setMaxTitleWidthConstraint:(NSLayoutConstraint *)arg1 ;
@end


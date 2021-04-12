/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	NSLayoutConstraint* _heightConstraint;
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
@property (nonatomic,retain) NSLayoutConstraint * heightConstraint;                     //@synthesize heightConstraint=_heightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * maxTitleWidthConstraint;              //@synthesize maxTitleWidthConstraint=_maxTitleWidthConstraint - In the implementation block
+(id)reuseIdentifier;
-(void)setMode:(long long)arg1 ;
-(long long)mode;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(id)_titleFont;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(NSLayoutConstraint *)widthConstraint;
-(NSLayoutConstraint *)heightConstraint;
-(void)setWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setValueLabel:(UILabel *)arg1 ;
-(UILabel *)valueLabel;
-(UIStackView *)contentStackView;
-(void)setContentStackView:(UIStackView *)arg1 ;
-(UILabel *)unitLabel;
-(void)setUnitLabel:(UILabel *)arg1 ;
-(void)setContextItem:(HKDisplayTypeContextItem *)arg1 ;
-(HKDisplayTypeContextItem *)contextItem;
-(id)_labelWithFont:(id)arg1 allowsMultiline:(BOOL)arg2 supportsDyanmicType:(BOOL)arg3 ;
-(id)_valueAndUnitFont;
-(id)_stackViewWithArrangedSubviews:(id)arg1 ;
-(void)_configureForTraitCollection:(id)arg1 ;
-(void)_updateUI:(BOOL)arg1 ;
-(NSLayoutConstraint *)maxTitleWidthConstraint;
-(void)_configureForContextItem:(id)arg1 ;
-(id)_backgroundViewWithColor:(id)arg1 ;
-(void)setCurrentMetricColors:(HKUIMetricColors *)arg1 ;
-(HKUIMetricColors *)currentMetricColors;
-(void)updateWithContextItem:(id)arg1 mode:(long long)arg2 ;
-(void)setMaxTitleWidthConstraint:(NSLayoutConstraint *)arg1 ;
@end


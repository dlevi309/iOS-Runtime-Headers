/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
*/

#import <TelephonyUI/TPView.h>

@class NSString, UILabel, NSLayoutConstraint;

@interface TPBadgeView : TPView {

	unsigned long long _sizeCategory;
	unsigned long long _theme;
	NSString* _title;
	UILabel* _titleLabel;
	double _titleLabelFontSize;
	double _layerCornerRadius;
	NSLayoutConstraint* _heightAnchorLayoutConstraint;
	NSLayoutConstraint* _widthAnchorLayoutConstraint;
	NSLayoutConstraint* _titleLabelLeadingAnchorLayoutConstraint;
	NSLayoutConstraint* _titleLabelTrailingAnchorLayoutConstraint;
	double _heightAnchorLayoutConstraintConstantFontMultiplier;
	double _titleLabelLeadingAnchorLayoutConstraintConstant;
	double _titleLabelTrailingAnchorLayoutConstraintConstant;

}

@property (nonatomic,readonly) UILabel * titleLabel;                                                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) double titleLabelFontSize;                                                  //@synthesize titleLabelFontSize=_titleLabelFontSize - In the implementation block
@property (assign,nonatomic) double layerCornerRadius;                                                   //@synthesize layerCornerRadius=_layerCornerRadius - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * heightAnchorLayoutConstraint;                          //@synthesize heightAnchorLayoutConstraint=_heightAnchorLayoutConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * widthAnchorLayoutConstraint;                           //@synthesize widthAnchorLayoutConstraint=_widthAnchorLayoutConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleLabelLeadingAnchorLayoutConstraint;               //@synthesize titleLabelLeadingAnchorLayoutConstraint=_titleLabelLeadingAnchorLayoutConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleLabelTrailingAnchorLayoutConstraint;              //@synthesize titleLabelTrailingAnchorLayoutConstraint=_titleLabelTrailingAnchorLayoutConstraint - In the implementation block
@property (assign,nonatomic) double heightAnchorLayoutConstraintConstantFontMultiplier;                  //@synthesize heightAnchorLayoutConstraintConstantFontMultiplier=_heightAnchorLayoutConstraintConstantFontMultiplier - In the implementation block
@property (assign,nonatomic) double titleLabelLeadingAnchorLayoutConstraintConstant;                     //@synthesize titleLabelLeadingAnchorLayoutConstraintConstant=_titleLabelLeadingAnchorLayoutConstraintConstant - In the implementation block
@property (assign,nonatomic) double titleLabelTrailingAnchorLayoutConstraintConstant;                    //@synthesize titleLabelTrailingAnchorLayoutConstraintConstant=_titleLabelTrailingAnchorLayoutConstraintConstant - In the implementation block
@property (assign,nonatomic) unsigned long long sizeCategory;                                            //@synthesize sizeCategory=_sizeCategory - In the implementation block
@property (assign,nonatomic) unsigned long long theme;                                                   //@synthesize theme=_theme - In the implementation block
@property (nonatomic,copy) NSString * title;                                                             //@synthesize title=_title - In the implementation block
-(UILabel *)titleLabel;
-(unsigned long long)theme;
-(id)initWithTitle:(id)arg1 ;
-(void)setTitleLabelLeadingAnchorLayoutConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)titleLabelTrailingAnchorLayoutConstraint;
-(NSLayoutConstraint *)heightAnchorLayoutConstraint;
-(void)loadConstraints;
-(void)setTitleLabelFontSize:(double)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(double)titleLabelFontSize;
-(id)firstBaselineAnchor;
-(void)setTitleLabelTrailingAnchorLayoutConstraintConstant:(double)arg1 ;
-(double)scaledLayoutValueForBaseValue:(double)arg1 shouldLowerBound:(BOOL)arg2 ;
-(void)setTheme:(unsigned long long)arg1 ;
-(double)titleLabelTrailingAnchorLayoutConstraintConstant;
-(void)updateConstraintsConstants;
-(void)commonInit;
-(id)initWithTitle:(id)arg1 theme:(unsigned long long)arg2 ;
-(void)updateSizeCategory;
-(NSLayoutConstraint *)widthAnchorLayoutConstraint;
-(void)setSizeCategory:(unsigned long long)arg1 ;
-(void)updateFonts;
-(void)setTitleLabelTrailingAnchorLayoutConstraint:(NSLayoutConstraint *)arg1 ;
-(void)updateActiveHorizontalConstraints;
-(void)setHeightAnchorLayoutConstraintConstantFontMultiplier:(double)arg1 ;
-(NSLayoutConstraint *)titleLabelLeadingAnchorLayoutConstraint;
-(id)lastBaselineAnchor;
-(double)titleLabelLeadingAnchorLayoutConstraintConstant;
-(double)layerCornerRadius;
-(void)setTitleLabelLeadingAnchorLayoutConstraintConstant:(double)arg1 ;
-(BOOL)_hasBaseline;
-(unsigned long long)sizeCategory;
-(void)setLayerCornerRadius:(double)arg1 ;
-(double)heightAnchorLayoutConstraintConstantFontMultiplier;
-(void)updateTheme;
-(NSString *)title;
-(void)setWidthAnchorLayoutConstraint:(NSLayoutConstraint *)arg1 ;
-(double)scaledLayoutValueForBaseValue:(double)arg1 ;
-(void)setHeightAnchorLayoutConstraint:(NSLayoutConstraint *)arg1 ;
-(void)unloadConstraints;
@end


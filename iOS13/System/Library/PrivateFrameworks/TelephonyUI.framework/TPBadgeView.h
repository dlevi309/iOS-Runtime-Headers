/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)commonInit;
-(UILabel *)titleLabel;
-(id)initWithTitle:(id)arg1 ;
-(void)setSizeCategory:(unsigned long long)arg1 ;
-(unsigned long long)sizeCategory;
-(void)updateFonts;
-(unsigned long long)theme;
-(void)setTheme:(unsigned long long)arg1 ;
-(void)updateConstraintsConstants;
-(id)initWithTitle:(id)arg1 theme:(unsigned long long)arg2 ;
-(void)updateTheme;
-(void)updateSizeCategory;
-(double)layerCornerRadius;
-(double)scaledLayoutValueForBaseValue:(double)arg1 ;
-(void)loadConstraints;
-(NSLayoutConstraint *)widthAnchorLayoutConstraint;
-(void)setWidthAnchorLayoutConstraint:(NSLayoutConstraint *)arg1 ;
-(double)titleLabelLeadingAnchorLayoutConstraintConstant;
-(double)scaledLayoutValueForBaseValue:(double)arg1 shouldLowerBound:(BOOL)arg2 ;
-(NSLayoutConstraint *)titleLabelLeadingAnchorLayoutConstraint;
-(void)setTitleLabelLeadingAnchorLayoutConstraint:(NSLayoutConstraint *)arg1 ;
-(double)titleLabelTrailingAnchorLayoutConstraintConstant;
-(NSLayoutConstraint *)titleLabelTrailingAnchorLayoutConstraint;
-(void)setTitleLabelTrailingAnchorLayoutConstraint:(NSLayoutConstraint *)arg1 ;
-(void)updateActiveHorizontalConstraints;
-(double)heightAnchorLayoutConstraintConstantFontMultiplier;
-(NSLayoutConstraint *)heightAnchorLayoutConstraint;
-(void)setHeightAnchorLayoutConstraint:(NSLayoutConstraint *)arg1 ;
-(void)unloadConstraints;
-(double)titleLabelFontSize;
-(void)setLayerCornerRadius:(double)arg1 ;
-(void)setTitleLabelFontSize:(double)arg1 ;
-(void)setHeightAnchorLayoutConstraintConstantFontMultiplier:(double)arg1 ;
-(void)setTitleLabelLeadingAnchorLayoutConstraintConstant:(double)arg1 ;
-(void)setTitleLabelTrailingAnchorLayoutConstraintConstant:(double)arg1 ;
@end


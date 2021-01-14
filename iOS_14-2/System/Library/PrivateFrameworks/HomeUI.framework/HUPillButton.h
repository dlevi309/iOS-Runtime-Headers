/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class NAUILayoutConstraintSet, UIView, UILabel, NSString, UIColor, UIFont;

@interface HUPillButton : UIButton {

	unsigned long long _style;
	unsigned long long _cornerRadiusStyle;
	NAUILayoutConstraintSet* _constraintSet;
	UIView* _backgroundView;
	UILabel* _buttonLabel;
	SCD_Struct_HU17 _metrics;

}

@property (nonatomic,readonly) unsigned long long style;                             //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) unsigned long long cornerRadiusStyle;                 //@synthesize cornerRadiusStyle=_cornerRadiusStyle - In the implementation block
@property (nonatomic,readonly) NAUILayoutConstraintSet * constraintSet;              //@synthesize constraintSet=_constraintSet - In the implementation block
@property (nonatomic,readonly) UIView * backgroundView;                              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,readonly) UILabel * buttonLabel;                                //@synthesize buttonLabel=_buttonLabel - In the implementation block
@property (nonatomic,copy) NSString * buttonText; 
@property (nonatomic,retain) UIColor * buttonTextColor; 
@property (nonatomic,retain) UIFont * buttonFont; 
@property (assign,nonatomic) BOOL adjustsFontSizeToFitWidth; 
@property (assign,nonatomic) SCD_Struct_HU17 metrics;                                //@synthesize metrics=_metrics - In the implementation block
+(SCD_Struct_HU17)defaultMetrics;
+(BOOL)requiresConstraintBasedLayout;
-(void)setMetrics:(SCD_Struct_HU17)arg1 ;
-(SCD_Struct_HU17)metrics;
-(id)viewForLastBaselineLayout;
-(void)tintColorDidChange;
-(UIFont *)buttonFont;
-(id)viewForFirstBaselineLayout;
-(void)_didTap:(id)arg1 ;
-(NSString *)buttonText;
-(UIView *)backgroundView;
-(BOOL)adjustsFontSizeToFitWidth;
-(void)didMoveToSuperview;
-(UIColor *)buttonTextColor;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setButtonFont:(UIFont *)arg1 ;
-(void)setButtonText:(NSString *)arg1 ;
-(UILabel *)buttonLabel;
-(id)description;
-(void)layoutSubviews;
-(void)updateConstraints;
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(id)initWithBackgroundStyle:(unsigned long long)arg1 ;
-(void)setButtonTextColor:(UIColor *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(unsigned long long)style;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_setupConstraintSet;
-(NAUILayoutConstraintSet *)constraintSet;
-(id)initWithBackgroundStyle:(unsigned long long)arg1 cornerRadiusStyle:(unsigned long long)arg2 ;
-(unsigned long long)cornerRadiusStyle;
@end


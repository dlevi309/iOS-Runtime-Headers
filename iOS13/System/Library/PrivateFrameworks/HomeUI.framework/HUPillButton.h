/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class NAUILayoutConstraintSet, UIView, UILabel, NSString, UIFont;

@interface HUPillButton : UIButton {

	unsigned long long _style;
	NAUILayoutConstraintSet* _constraintSet;
	UIView* _backgroundView;
	UILabel* _buttonLabel;
	UIEdgeInsets _metrics;

}

@property (nonatomic,readonly) unsigned long long style;                             //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) NAUILayoutConstraintSet * constraintSet;              //@synthesize constraintSet=_constraintSet - In the implementation block
@property (nonatomic,readonly) UIView * backgroundView;                              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,readonly) UILabel * buttonLabel;                                //@synthesize buttonLabel=_buttonLabel - In the implementation block
@property (nonatomic,copy) NSString * buttonText; 
@property (nonatomic,retain) UIFont * buttonFont; 
@property (assign,nonatomic) BOOL adjustsFontSizeToFitWidth; 
@property (assign,nonatomic) UIEdgeInsets metrics;                                   //@synthesize metrics=_metrics - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
+(UIEdgeInsets)defaultMetrics;
-(id)description;
-(unsigned long long)style;
-(UIEdgeInsets)metrics;
-(void)setMetrics:(UIEdgeInsets)arg1 ;
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIView *)backgroundView;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)updateConstraints;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)tintColorDidChange;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(void)didMoveToSuperview;
-(BOOL)adjustsFontSizeToFitWidth;
-(id)initWithBackgroundStyle:(unsigned long long)arg1 ;
-(NSString *)buttonText;
-(void)setButtonText:(NSString *)arg1 ;
-(UILabel *)buttonLabel;
-(UIFont *)buttonFont;
-(void)setButtonFont:(UIFont *)arg1 ;
-(void)_setupConstraintSet;
-(NAUILayoutConstraintSet *)constraintSet;
-(void)_didTap:(id)arg1 ;
@end


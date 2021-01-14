/*
* Generated on Thursday, January 14, 2021 at 2:27:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/

#import <DocumentCamera/DocumentCamera-Structs.h>
#import <UIKitCore/UIButton.h>

@class NSLayoutConstraint, UILabel, UIImageView, UIView, UIColor;

@interface ICDocCamFilterButton : UIButton {

	short _filterType;
	NSLayoutConstraint* _labelVerticalSpacingConstraint;
	UILabel* _filterNameLabel;
	UIImageView* _filterIconView;
	UIView* _backgroundView;
	NSLayoutConstraint* _iconSizeConstraint;

}

@property (assign,nonatomic,__weak) UIView * backgroundView;                                          //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * iconSizeConstraint;                          //@synthesize iconSizeConstraint=_iconSizeConstraint - In the implementation block
@property (nonatomic,readonly) UIColor * inactiveBackgroundViewColor; 
@property (nonatomic,readonly) UIColor * inactiveTextColor; 
@property (nonatomic,readonly) UIColor * activeBackgroundViewColor; 
@property (assign,nonatomic) short filterType;                                                        //@synthesize filterType=_filterType - In the implementation block
@property (assign,nonatomic) double iconSize; 
@property (assign,nonatomic,__weak) NSLayoutConstraint * labelVerticalSpacingConstraint;              //@synthesize labelVerticalSpacingConstraint=_labelVerticalSpacingConstraint - In the implementation block
@property (assign,nonatomic,__weak) UILabel * filterNameLabel;                                        //@synthesize filterNameLabel=_filterNameLabel - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * filterIconView;                                     //@synthesize filterIconView=_filterIconView - In the implementation block
+(id)filterButtonWithType:(short)arg1 ;
-(id)accessibilityLabel;
-(short)filterType;
-(void)setFilterType:(short)arg1 ;
-(BOOL)isAccessibilityElement;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 ;
-(UIColor *)inactiveTextColor;
-(unsigned long long)accessibilityTraits;
-(double)iconSize;
-(CGRect)accessibilityFrame;
-(void)awakeFromNib;
-(void)setIconSize:(double)arg1 ;
-(void)dealloc;
-(void)setHighlighted:(BOOL)arg1 ;
-(UILabel *)filterNameLabel;
-(NSLayoutConstraint *)labelVerticalSpacingConstraint;
-(UIImageView *)filterIconView;
-(UIColor *)inactiveBackgroundViewColor;
-(void)updateForAccessibilityDarkerSystemColors:(id)arg1 ;
-(id)imageForFilterType:(short)arg1 ;
-(NSLayoutConstraint *)iconSizeConstraint;
-(UIColor *)activeBackgroundViewColor;
-(void)setLabelVerticalSpacingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setFilterNameLabel:(UILabel *)arg1 ;
-(void)setFilterIconView:(UIImageView *)arg1 ;
-(void)setIconSizeConstraint:(NSLayoutConstraint *)arg1 ;
@end


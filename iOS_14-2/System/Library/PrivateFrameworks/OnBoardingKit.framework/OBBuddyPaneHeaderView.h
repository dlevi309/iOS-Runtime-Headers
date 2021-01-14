/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/

#import <OnBoardingKit/OnBoardingKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIButton, UIView, UIImageView, UIImage, UILabel, NSString, UIColor;

@interface OBBuddyPaneHeaderView : UIView {

	CGSize _iconSize;
	UIButton* _linkButton;
	/*^block*/id _linkHandler;
	UIView* _bottomLine;
	BOOL _iconInheritsTint;
	BOOL _useMinimumTopPadding;
	BOOL _textLabelAlignedByLastBaseline;
	UIImageView* _iconView;
	UIImage* _icon;
	UILabel* _textLabel;
	UILabel* _detailTextLabel;
	UILabel* _subLabel;
	double _flexibleHeight;
	double _customTopPadding;

}

@property (nonatomic,retain) UIImageView * iconView;                                                                   //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) UIImage * icon;                                                                           //@synthesize icon=_icon - In the implementation block
@property (assign,nonatomic) CGSize iconSize; 
@property (nonatomic,retain) NSString * iconAccessibilityLabel; 
@property (nonatomic,readonly) UILabel * textLabel;                                                                    //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,readonly) UILabel * detailTextLabel;                                                              //@synthesize detailTextLabel=_detailTextLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subLabel;                                                                     //@synthesize subLabel=_subLabel - In the implementation block
@property (assign,nonatomic) double flexibleHeight;                                                                    //@synthesize flexibleHeight=_flexibleHeight - In the implementation block
@property (nonatomic,retain) UIColor * bottomLineColor; 
@property (assign,nonatomic) BOOL iconInheritsTint;                                                                    //@synthesize iconInheritsTint=_iconInheritsTint - In the implementation block
@property (assign,nonatomic) BOOL useMinimumTopPadding;                                                                //@synthesize useMinimumTopPadding=_useMinimumTopPadding - In the implementation block
@property (assign,nonatomic) double customTopPadding;                                                                  //@synthesize customTopPadding=_customTopPadding - In the implementation block
@property (assign,getter=isTextLabelAlignedByLastBaseline,nonatomic) BOOL textLabelAlignedByLastBaseline;              //@synthesize textLabelAlignedByLastBaseline=_textLabelAlignedByLastBaseline - In the implementation block
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCustomTopPadding:(double)arg1 ;
-(BOOL)iconInheritsTint;
-(void)_linkButtonPressed;
-(double)_labelsAndLinksBaselineOffsetForView:(id)arg1 ;
-(BOOL)useMinimumTopPadding;
-(double)customTopPadding;
-(BOOL)isTextLabelAlignedByLastBaseline;
-(UIColor *)bottomLineColor;
-(double)heightForWidth:(double)arg1 inView:(id)arg2 ;
-(void)setIconAccessibilityLabel:(NSString *)arg1 ;
-(NSString *)iconAccessibilityLabel;
-(void)setIconInheritsTint:(BOOL)arg1 ;
-(void)setTextLabelAlignedByLastBaseline:(BOOL)arg1 ;
-(void)setLinkText:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setBottomLineColor:(UIColor *)arg1 ;
-(double)flexibleHeight;
-(void)setFlexibleHeight:(double)arg1 ;
-(void)setUseMinimumTopPadding:(BOOL)arg1 ;
-(UIImage *)icon;
-(void)setIcon:(UIImage *)arg1 ;
-(void)setTitleText:(id)arg1 ;
-(CGSize)iconSize;
-(void)layoutSubviews;
-(UIImageView *)iconView;
-(UILabel *)detailTextLabel;
-(void)setIconView:(UIImageView *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)subLabel;
-(void)setIconSize:(CGSize)arg1 ;
-(UILabel *)textLabel;
@end


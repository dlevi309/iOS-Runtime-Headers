/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
*/


#import <TestFlightCore/TestFlightCore-Structs.h>
@class UIFont, UIFontMetrics, UIColor;

@interface TFBetaAppLaunchScreenViewSpecification : NSObject {

	double _viewTopMarginAdditionalPaddingAsFractionOfTotalHeight;
	double _bottommostLabelLastBaselineToLockupTopEdge;
	double _bottommostLabelLastBaselineToImageTopEdge;
	double _buttonBackgroundTopEdgeToPrimaryButtonTopEdge;
	double _buttonHeight;
	double _interButtonPadding;
	double _viewTopMarginToTitleLabelFirstBaseline;
	double _titleLabelLastBaselineToSubtitleLabelFirstBaseline;
	double _lockupBottomEdgeToBodyTitleLabelFirstBaseline;
	double _bodyTitleLabelLastBaselineToBodyTextLabelFirstBaseline;
	UIFont* _titleFont;
	UIFont* _subtitleFont;
	UIFont* _bodyTitleFont;
	UIFont* _bodyTextFont;
	UIFontMetrics* _titleFontMetrics;
	UIFontMetrics* _subtitleFontMetrics;
	UIFontMetrics* _bodyTitleFontMetrics;
	UIFontMetrics* _bodyTextFontMetrics;
	UIEdgeInsets _scrollViewContentLayoutInsets;
	UIEdgeInsets _buttonModuleContentLayoutInsets;

}

@property (nonatomic,readonly) UIFontMetrics * titleFontMetrics;                                           //@synthesize titleFontMetrics=_titleFontMetrics - In the implementation block
@property (nonatomic,readonly) UIFontMetrics * subtitleFontMetrics;                                        //@synthesize subtitleFontMetrics=_subtitleFontMetrics - In the implementation block
@property (nonatomic,readonly) UIFontMetrics * bodyTitleFontMetrics;                                       //@synthesize bodyTitleFontMetrics=_bodyTitleFontMetrics - In the implementation block
@property (nonatomic,readonly) UIFontMetrics * bodyTextFontMetrics;                                        //@synthesize bodyTextFontMetrics=_bodyTextFontMetrics - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets scrollViewContentLayoutInsets;                                 //@synthesize scrollViewContentLayoutInsets=_scrollViewContentLayoutInsets - In the implementation block
@property (nonatomic,readonly) double viewTopMarginAdditionalPaddingAsFractionOfTotalHeight;               //@synthesize viewTopMarginAdditionalPaddingAsFractionOfTotalHeight=_viewTopMarginAdditionalPaddingAsFractionOfTotalHeight - In the implementation block
@property (nonatomic,readonly) double bottommostLabelLastBaselineToLockupTopEdge;                          //@synthesize bottommostLabelLastBaselineToLockupTopEdge=_bottommostLabelLastBaselineToLockupTopEdge - In the implementation block
@property (nonatomic,readonly) double bottommostLabelLastBaselineToImageTopEdge;                           //@synthesize bottommostLabelLastBaselineToImageTopEdge=_bottommostLabelLastBaselineToImageTopEdge - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets buttonModuleContentLayoutInsets;                               //@synthesize buttonModuleContentLayoutInsets=_buttonModuleContentLayoutInsets - In the implementation block
@property (nonatomic,readonly) double buttonBackgroundTopEdgeToPrimaryButtonTopEdge;                       //@synthesize buttonBackgroundTopEdgeToPrimaryButtonTopEdge=_buttonBackgroundTopEdgeToPrimaryButtonTopEdge - In the implementation block
@property (nonatomic,readonly) double buttonHeight;                                                        //@synthesize buttonHeight=_buttonHeight - In the implementation block
@property (nonatomic,readonly) double interButtonPadding;                                                  //@synthesize interButtonPadding=_interButtonPadding - In the implementation block
@property (nonatomic,readonly) double viewTopMarginToTitleLabelFirstBaseline;                              //@synthesize viewTopMarginToTitleLabelFirstBaseline=_viewTopMarginToTitleLabelFirstBaseline - In the implementation block
@property (nonatomic,readonly) double titleLabelLastBaselineToSubtitleLabelFirstBaseline;                  //@synthesize titleLabelLastBaselineToSubtitleLabelFirstBaseline=_titleLabelLastBaselineToSubtitleLabelFirstBaseline - In the implementation block
@property (nonatomic,readonly) double lockupBottomEdgeToBodyTitleLabelFirstBaseline;                       //@synthesize lockupBottomEdgeToBodyTitleLabelFirstBaseline=_lockupBottomEdgeToBodyTitleLabelFirstBaseline - In the implementation block
@property (nonatomic,readonly) double bodyTitleLabelLastBaselineToBodyTextLabelFirstBaseline;              //@synthesize bodyTitleLabelLastBaselineToBodyTextLabelFirstBaseline=_bodyTitleLabelLastBaselineToBodyTextLabelFirstBaseline - In the implementation block
@property (nonatomic,readonly) double primaryButtonCornerRadius; 
@property (nonatomic,readonly) UIFont * titleFont;                                                         //@synthesize titleFont=_titleFont - In the implementation block
@property (nonatomic,readonly) UIFont * subtitleFont;                                                      //@synthesize subtitleFont=_subtitleFont - In the implementation block
@property (nonatomic,readonly) UIFont * bodyTitleFont;                                                     //@synthesize bodyTitleFont=_bodyTitleFont - In the implementation block
@property (nonatomic,readonly) UIFont * bodyTextFont;                                                      //@synthesize bodyTextFont=_bodyTextFont - In the implementation block
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) UIColor * buttonTintColor; 
@property (nonatomic,readonly) UIColor * overButtonTintTextColor; 
@property (nonatomic,readonly) UIColor * textColor; 
-(UIColor *)backgroundColor;
-(double)buttonHeight;
-(UIColor *)textColor;
-(UIFont *)titleFont;
-(UIFont *)subtitleFont;
-(UIFont *)bodyTextFont;
-(UIColor *)buttonTintColor;
-(id)initWithTraitCollection:(id)arg1 ;
-(UIFont *)bodyTitleFont;
-(double)primaryButtonCornerRadius;
-(UIColor *)overButtonTintTextColor;
-(UIEdgeInsets)buttonModuleContentLayoutInsets;
-(double)interButtonPadding;
-(double)buttonBackgroundTopEdgeToPrimaryButtonTopEdge;
-(UIEdgeInsets)scrollViewContentLayoutInsets;
-(double)viewTopMarginAdditionalPaddingAsFractionOfTotalHeight;
-(double)viewTopMarginToTitleLabelFirstBaseline;
-(double)titleLabelLastBaselineToSubtitleLabelFirstBaseline;
-(double)bottommostLabelLastBaselineToLockupTopEdge;
-(double)lockupBottomEdgeToBodyTitleLabelFirstBaseline;
-(double)bodyTitleLabelLastBaselineToBodyTextLabelFirstBaseline;
-(double)bottommostLabelLastBaselineToImageTopEdge;
-(id)_titleFontStyle;
-(id)_subtitleFontStyle;
-(id)_bodyTitleFontStyle;
-(id)_bodyTextFontStyle;
-(id)_createTitleFontForTraitCollection:(id)arg1 ;
-(id)_createSubtitleFontForTraitCollection:(id)arg1 ;
-(id)_createBodyTitleFontForTraitCollection:(id)arg1 ;
-(id)_createBodyTextFontForTraitCollection:(id)arg1 ;
-(UIFontMetrics *)titleFontMetrics;
-(UIFontMetrics *)subtitleFontMetrics;
-(UIFontMetrics *)bodyTitleFontMetrics;
-(UIFontMetrics *)bodyTextFontMetrics;
@end


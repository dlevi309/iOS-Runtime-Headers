/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIFont;

@interface _UINavigationBarVisualStyle : NSObject {

	long long _idiom;
	long long _metrics;
	BOOL _wantsLetterPress;
	BOOL _inPopover;

}

@property (assign,nonatomic) long long metrics;                                   //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,readonly) BOOL metricsIsMini; 
@property (nonatomic,readonly) BOOL metricsHasPrompt; 
@property (assign,nonatomic) BOOL wantsLetterPress;                               //@synthesize wantsLetterPress=_wantsLetterPress - In the implementation block
@property (assign,nonatomic) BOOL inPopover;                                      //@synthesize inPopover=_inPopover - In the implementation block
@property (nonatomic,readonly) long long idiom;                                   //@synthesize idiom=_idiom - In the implementation block
@property (nonatomic,readonly) double backButtonIndicatorSpacing; 
@property (nonatomic,readonly) double buttonHeight; 
@property (nonatomic,readonly) double barHeight; 
@property (nonatomic,readonly) double barPromptHeight; 
@property (nonatomic,readonly) double topMargin; 
@property (nonatomic,readonly) double horizontalMarginAdjustment; 
@property (nonatomic,readonly) double topTitleMargin; 
@property (nonatomic,readonly) double topBackMargin; 
@property (nonatomic,readonly) double headingFontSize; 
@property (nonatomic,readonly) double buttonFontSize; 
@property (nonatomic,readonly) double leftTitleMargin; 
@property (nonatomic,readonly) double leftBackTitleMargin; 
@property (nonatomic,readonly) double leftBackImageMargin; 
@property (nonatomic,readonly) double rightTitleMargin; 
@property (nonatomic,readonly) double rightImageMargin; 
@property (nonatomic,readonly) double leftTextMargin; 
@property (nonatomic,readonly) double topImageMargin; 
@property (nonatomic,readonly) double bottomImageMargin; 
@property (nonatomic,readonly) double bottomButtonMargin; 
@property (nonatomic,readonly) double promptInset; 
@property (nonatomic,readonly) double interItemSpace; 
@property (nonatomic,readonly) double interBlockSpace; 
@property (nonatomic,readonly) double maxBackButtonProportion; 
@property (nonatomic,readonly) double minBackTextWidth; 
@property (nonatomic,readonly) double minBackImageWidth; 
@property (nonatomic,readonly) double minButtonWidth; 
@property (nonatomic,readonly) double minTitleWidth; 
@property (nonatomic,readonly) double buttonImagePadding; 
@property (nonatomic,readonly) double promptFontSize; 
@property (nonatomic,copy,readonly) UIFont * promptFont; 
@property (nonatomic,readonly) double promptTextOffset; 
@property (nonatomic,readonly) double navigationItemBaselineOffset; 
@property (nonatomic,readonly) double backIndicatorBottomMargin; 
@property (nonatomic,copy,readonly) UIFont * defaultTitleFont; 
@property (nonatomic,readonly) UIEdgeInsets buttonContentEdgeInsets; 
@property (nonatomic,readonly) double _legacyLeftTitleMargin; 
@property (nonatomic,readonly) double _legacyRightTitleMargin; 
@property (nonatomic,readonly) double _legacyButtonFontSize; 
@property (nonatomic,readonly) double _legacyButtonImagePadding; 
+(id)visualStyleForIdiom:(long long)arg1 ;
-(long long)metrics;
-(void)setMetrics:(long long)arg1 ;
-(double)buttonFontSize;
-(id)initWithIdiom:(long long)arg1 ;
-(long long)idiom;
-(id)buttonFontForStyle:(long long)arg1 ;
-(double)_legacyButtonFontSize;
-(id)_legacyButtonFontForStyle:(long long)arg1 ;
-(UIEdgeInsets)buttonContentEdgeInsets;
-(double)leftBackTitleMargin;
-(double)rightTitleMargin;
-(double)buttonImagePadding;
-(double)navigationItemBaselineOffset;
-(void)setWantsLetterPress:(BOOL)arg1 ;
-(double)_legacyLeftTitleMargin;
-(double)_legacyRightTitleMargin;
-(double)leftTitleMargin;
-(double)minBackTextWidth;
-(double)_legacyButtonImagePadding;
-(double)buttonHeight;
-(double)horizontalMarginAdjustment;
-(void)setInPopover:(BOOL)arg1 ;
-(double)barHeightForMetrics:(long long)arg1 ;
-(long long)navigationBar:(id)arg1 metricsForOrientation:(long long)arg2 hasPrompt:(BOOL)arg3 ;
-(double)barHeight;
-(double)barPromptHeight;
-(UIFont *)promptFont;
-(UIFont *)defaultTitleFont;
-(id)defaultTitleColorForUserInterfaceStyle:(long long)arg1 barStyle:(long long)arg2 ;
-(double)headingFontSize;
-(double)promptTextOffset;
-(double)promptFontSize;
-(id)timingFunctionForAnimationInView:(id)arg1 withKeyPath:(id)arg2 isInteractive:(BOOL)arg3 ;
-(double)promptInset;
-(BOOL)metricsIsMini;
-(BOOL)metricsHasPrompt;
-(double)backIndicatorBottomMargin;
-(double)textButtonMarginInNavigationBar:(id)arg1 ;
-(double)imageButtonMarginInNavigationBar:(id)arg1 ;
-(double)topMargin;
-(double)topTitleMargin;
-(double)minTitleWidth;
-(double)leftBackImageMargin;
-(double)rightImageMargin;
-(double)minBackImageWidth;
-(double)leftBackTitleMarginForCustomBackButtonBackground:(id)arg1 ;
-(double)backButtonIndicatorSpacing;
-(double)maxBackButtonProportion;
-(double)interItemSpace;
-(double)interBlockSpace;
-(double)topImageMargin;
-(BOOL)shouldForceLegacyLeftBackTitleMarginForCustomBackButtonBackground:(id)arg1 ;
-(double)leftBackTitleMarginLetterpressPadding;
-(double)backButtonAnimationClippingPadding;
-(double)topBackMargin;
-(double)leftTextMargin;
-(double)bottomImageMargin;
-(double)bottomButtonMargin;
-(double)minButtonWidth;
-(BOOL)wantsLetterPress;
-(BOOL)inPopover;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:20:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setMetrics:(long long)arg1 ;
-(long long)metrics;
-(double)_legacyButtonFontSize;
-(double)navigationItemBaselineOffset;
-(BOOL)wantsLetterPress;
-(id)buttonFontForStyle:(long long)arg1 ;
-(double)headingFontSize;
-(double)minBackImageWidth;
-(double)interBlockSpace;
-(double)_legacyLeftTitleMargin;
-(BOOL)shouldForceLegacyLeftBackTitleMarginForCustomBackButtonBackground:(id)arg1 ;
-(id)_legacyButtonFontForStyle:(long long)arg1 ;
-(double)buttonFontSize;
-(double)backIndicatorBottomMargin;
-(double)barHeightForMetrics:(long long)arg1 ;
-(double)promptInset;
-(double)leftBackImageMargin;
-(double)minButtonWidth;
-(UIFont *)promptFont;
-(double)imageButtonMarginInNavigationBar:(id)arg1 ;
-(double)promptTextOffset;
-(double)_legacyButtonImagePadding;
-(long long)idiom;
-(double)leftTitleMargin;
-(double)minTitleWidth;
-(double)backButtonIndicatorSpacing;
-(double)topMargin;
-(BOOL)metricsIsMini;
-(double)bottomButtonMargin;
-(long long)navigationBar:(id)arg1 metricsForOrientation:(long long)arg2 hasPrompt:(BOOL)arg3 ;
-(id)defaultTitleColorForUserInterfaceStyle:(long long)arg1 barStyle:(long long)arg2 ;
-(double)leftTextMargin;
-(double)leftBackTitleMarginLetterpressPadding;
-(double)bottomImageMargin;
-(double)barHeight;
-(double)_legacyRightTitleMargin;
-(double)buttonHeight;
-(double)interItemSpace;
-(void)setInPopover:(BOOL)arg1 ;
-(BOOL)metricsHasPrompt;
-(double)maxBackButtonProportion;
-(BOOL)inPopover;
-(double)promptFontSize;
-(double)textButtonMarginInNavigationBar:(id)arg1 ;
-(UIEdgeInsets)buttonContentEdgeInsets;
-(double)rightImageMargin;
-(double)buttonImagePadding;
-(id)initWithIdiom:(long long)arg1 ;
-(double)minBackTextWidth;
-(double)topTitleMargin;
-(double)barPromptHeight;
-(double)topImageMargin;
-(UIFont *)defaultTitleFont;
-(void)setWantsLetterPress:(BOOL)arg1 ;
-(double)backButtonAnimationClippingPadding;
-(id)timingFunctionForAnimationInView:(id)arg1 withKeyPath:(id)arg2 isInteractive:(BOOL)arg3 ;
-(double)horizontalMarginAdjustment;
-(double)leftBackTitleMarginForCustomBackButtonBackground:(id)arg1 ;
-(double)leftBackTitleMargin;
-(double)topBackMargin;
-(double)rightTitleMargin;
@end


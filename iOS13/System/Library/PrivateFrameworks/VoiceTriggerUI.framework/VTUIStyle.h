/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
*/


@class NSArray, NSString, UIFontMetrics, MGWrapper;

@interface VTUIStyle : NSObject {

	NSArray* _deviceStringSuffixes;
	NSArray* _deviceImageIntroSuffixes;
	NSArray* _deviceImageDoneSuffixes;
	NSString* _deviceClass;
	BOOL _isIpad;
	BOOL _isLargeIpad;
	BOOL _needMoreLineSpacing;
	BOOL _supportsSideButtonActivation;
	UIFontMetrics* _bodyMetricsForScaling;
	MGWrapper* _mgWrapper;
	BOOL _isBuddyOrFollowUp;
	BOOL _isHeySiriAlwaysOn;
	BOOL _bluetoothDeviceSupportsHeySiri;
	BOOL _supportSideButtonActivation;
	BOOL _isFloatingWithReducedWidth;
	long long _enrollmentMode;
	long long _audioProductID;

}

@property (assign,nonatomic) long long audioProductID;                         //@synthesize audioProductID=_audioProductID - In the implementation block
@property (assign,nonatomic) long long enrollmentMode;                         //@synthesize enrollmentMode=_enrollmentMode - In the implementation block
@property (assign,nonatomic) BOOL isBuddyOrFollowUp;                           //@synthesize isBuddyOrFollowUp=_isBuddyOrFollowUp - In the implementation block
@property (assign,nonatomic) BOOL isHeySiriAlwaysOn;                           //@synthesize isHeySiriAlwaysOn=_isHeySiriAlwaysOn - In the implementation block
@property (assign,nonatomic) BOOL bluetoothDeviceSupportsHeySiri;              //@synthesize bluetoothDeviceSupportsHeySiri=_bluetoothDeviceSupportsHeySiri - In the implementation block
@property (assign,nonatomic) BOOL supportSideButtonActivation;                 //@synthesize supportSideButtonActivation=_supportSideButtonActivation - In the implementation block
@property (assign,nonatomic) BOOL isFloatingWithReducedWidth;                  //@synthesize isFloatingWithReducedWidth=_isFloatingWithReducedWidth - In the implementation block
+(id)sharedStyle;
-(id)init;
-(void)dealloc;
-(id)buttonTextColor;
-(id)subtitleFont;
-(double)horizontalPadding;
-(BOOL)isHeySiriAlwaysOn;
-(id)dynamicColorWithLightColor:(id)arg1 darkColor:(id)arg2 ;
-(void)orientationChanged:(id)arg1 ;
-(id)footerFont;
-(double)primaryButtonHeight;
-(void)setIsBuddyOrFollowUp:(BOOL)arg1 ;
-(void)setEnrollmentMode:(long long)arg1 ;
-(BOOL)isBuddyOrFollowUp;
-(long long)enrollmentMode;
-(void)setIsFloatingWithReducedWidth:(BOOL)arg1 ;
-(id)VTUIDeviceSpecificString:(id)arg1 ;
-(double)finishEnrollmentFromBottom;
-(double)footerButtonMaximumWidth;
-(id)videoPlaceholderImage;
-(id)paneBackgroundColor;
-(id)proxHeaderFont;
-(id)proxHeaderColor;
-(id)proxSubtitleFont;
-(id)proxSubtitleColor;
-(id)proxHSDescription:(id)arg1 ;
-(id)proxCancelFont;
-(BOOL)isGreenTeaCapableDevice;
-(id)footerTextColor;
-(double)proxViewMaxWidthPhoneLandscape;
-(double)proxViewHeightPhoneLandscape;
-(double)proxContainerHorizontalVerticalPadding;
-(double)proxTitleFirstBaselineFromTop;
-(double)proxLeadingLandscape;
-(double)proxTrailingLandscape;
-(double)proxTrainingDismissButtonVerticalPaddingTop;
-(double)proxTrainingDismissButtonHorizontalPadding;
-(double)proxTrainingDismissButtonWidthOrHeight;
-(double)proxPaddingIntroSubtitleLandscape;
-(double)proxPaddingFootnoteButton;
-(double)proxPrimaryButtonHeight;
-(double)proxTrainingDismissButtonVerticalPaddingBottom;
-(double)proxViewMaxWidth;
-(double)proxViewHeight;
-(double)proxLeading;
-(double)proxTrailing;
-(double)proxPaddingIntroTitleImage;
-(double)proxSiriLogoHeightWidthSmall;
-(double)proxSiriLogoHeightWidth;
-(double)proxPaddingImageSubtitle;
-(double)horizontalPaddingLandscape;
-(double)horizontalPaddingPortrait;
-(BOOL)isSmallestOnboardingDeviceInBuddy;
-(id)instructionLabelFont;
-(id)smallestDeviceOnboardingAsset;
-(double)smallestDeviceFrameHeight;
-(double)paneVideoFrameHeight;
-(double)titleBaselineOffsetFromTop;
-(double)subtitle1BaselineOffset;
-(double)subtitle2BaselineOffset;
-(double)primaryButtonHorizontalInset;
-(double)proxContainerCornerRadius;
-(BOOL)supportsSideButtonActivation;
-(id)proxTryAgainTitleColor;
-(id)proxPageLabelColor;
-(double)proxTitleTrailingLandscape;
-(double)proxPaddingTryAgainSubtitle;
-(double)proxPaddingFromBottom;
-(BOOL)bluetoothDeviceSupportsHeySiri;
-(double)footerTextBaselineFromTop;
-(double)footerTextBottomPadding;
-(double)continueButtonFromBottom;
-(double)laterButtonBaselinePadding;
-(double)footerSkipButtonBaselineFromBottom;
-(id)footerLabelFont;
-(id)turnOnSiriContinueButtonFont;
-(id)footerButtonFont;
-(double)turnOnSiriImageViewTopOffset;
-(double)turnOnSiriSubtitle1BaselineOffset;
-(double)turnOnSiriSubtitle2BaselineOffset;
-(double)turnOnSiriFooterOffset;
-(double)bottomOfContinueToNotNowFirstBaseline;
-(double)continueButtonPaddingTop;
-(double)turnOnSiriHorizontalPaddingPortrait;
-(double)skipButtonBaselineBottomMarginPortrait;
-(double)turnOnSiriContinueButtonWidth;
-(double)turnOnSiriContinueButtonHeight;
-(id)deviceSetupImage;
-(double)turnOnSiriImageOffsetFromTopLandscape;
-(double)turnOnSiriHorizontalPaddingLandscape;
-(double)turnOnSiriImageOffsetFromTopPortrait;
-(id)proxFooterFont;
-(double)proxViewLanguageOptionsHeightPhoneLandscape;
-(double)proxViewLanguageOptionsHeight;
-(double)proxSettingsLabelBottomMargin;
-(double)proxPaddingFromTop;
-(double)headerTitleLinespacing;
-(double)continueButtonTopOffset;
-(id)primaryButtonFont;
-(id)proxPrimaryButtonFont;
-(id)secondaryButtonFont;
-(id)VTUIDeviceSpecificAudioHintFileName:(id)arg1 ;
-(double)flamesHeight;
-(double)imageViewTopOffsetPortrait;
-(double)flamesViewHeightPortrait;
-(double)statusLabelVerticalOffsetFromCenter;
-(double)statusLabelMinHeight;
-(double)tickMarkHorizontalSizeRatio;
-(double)imageViewTopOffsetLandscape;
-(double)flamesViewHeightLandscape;
-(double)skipButtonBaselineBottomMarginLandscape;
-(double)proxAboutLinkFirstBaselineFromTop;
-(void)_createStringSuffixesForDevice;
-(id)_headerTitleFont;
-(long long)audioProductID;
-(void)_createImageSuffixesForDevice;
-(id)_deviceImageForBaseImageName:(id)arg1 ;
-(double)textOverlayOffsetFromTop;
-(double)horizontalTextPadding;
-(double)textOverlayLabelWidth;
-(double)minimumImageViewHeight;
-(double)proxSkipButtonBaselineBottomMargin;
-(double)paddingFromTop;
-(double)footerHorizontalPadding;
-(id)proxPrimaryButtonColor;
-(double)proxPaddingTitleImage;
-(double)proxPaddingImageSubtitleFromTop;
-(double)proxPaddingIntroSubtitleButton;
-(double)proxFlamesViewCenterYOffset;
-(double)proxPaddingSkipButtonPageLabel;
-(id)proxPageFont;
-(double)proxStatusLabelMaxHeight;
-(double)proxFlamesViewHeight;
-(double)proxPageFirstBaselineBottom;
-(double)proxTrainingInstructionLabelHoriztonalOffset;
-(double)proxTrainingDismissButtonPhoneLandscapeHorizontalPadding;
-(double)radarBtnVerticalPadding;
-(double)radarBtnHorizontalPadding;
-(void)setIsHeySiriAlwaysOn:(BOOL)arg1 ;
-(void)setBluetoothDeviceSupportsHeySiri:(BOOL)arg1 ;
-(BOOL)supportSideButtonActivation;
-(void)setSupportSideButtonActivation:(BOOL)arg1 ;
-(BOOL)isFloatingWithReducedWidth;
-(void)setAudioProductID:(long long)arg1 ;
@end


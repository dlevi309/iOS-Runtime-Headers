/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/_SFBarTheme.h>

@class UIColor;

@interface _SFNavigationBarTheme : _SFBarTheme {

	BOOL _backdropIsExtreme;
	BOOL _backdropIsRed;
	BOOL _backdropIsGreen;
	BOOL _platterBackdropIsDark;
	long long _platterOverrideUserInterfaceStyle;
	long long _platterTextFieldOverrideUserInterfaceStyle;
	long long _platterKeyboardOverrideAppearance;
	UIColor* _textColor;
	UIColor* _secureTextColor;
	UIColor* _warningTextColor;
	UIColor* _annotationTextColor;
	UIColor* _progressBarTintColor;
	UIColor* _platterTextColor;
	UIColor* _platterSecureTextColor;
	UIColor* _platterWarningTextColor;
	UIColor* _platterAnnotationTextColor;
	UIColor* _platterPlaceholderTextColor;
	UIColor* _platterSelectionColor;
	UIColor* _platterProgressBarTintColor;

}

@property (nonatomic,readonly) long long platterOverrideUserInterfaceStyle;                       //@synthesize platterOverrideUserInterfaceStyle=_platterOverrideUserInterfaceStyle - In the implementation block
@property (nonatomic,readonly) long long platterTextFieldOverrideUserInterfaceStyle;              //@synthesize platterTextFieldOverrideUserInterfaceStyle=_platterTextFieldOverrideUserInterfaceStyle - In the implementation block
@property (nonatomic,readonly) long long platterKeyboardOverrideAppearance;                       //@synthesize platterKeyboardOverrideAppearance=_platterKeyboardOverrideAppearance - In the implementation block
@property (nonatomic,readonly) BOOL backdropIsExtreme;                                            //@synthesize backdropIsExtreme=_backdropIsExtreme - In the implementation block
@property (nonatomic,readonly) BOOL backdropIsRed;                                                //@synthesize backdropIsRed=_backdropIsRed - In the implementation block
@property (nonatomic,readonly) BOOL backdropIsGreen;                                              //@synthesize backdropIsGreen=_backdropIsGreen - In the implementation block
@property (nonatomic,readonly) UIColor * textColor;                                               //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,readonly) UIColor * secureTextColor;                                         //@synthesize secureTextColor=_secureTextColor - In the implementation block
@property (nonatomic,readonly) UIColor * warningTextColor;                                        //@synthesize warningTextColor=_warningTextColor - In the implementation block
@property (nonatomic,readonly) UIColor * annotationTextColor;                                     //@synthesize annotationTextColor=_annotationTextColor - In the implementation block
@property (nonatomic,readonly) UIColor * progressBarTintColor;                                    //@synthesize progressBarTintColor=_progressBarTintColor - In the implementation block
@property (nonatomic,readonly) BOOL platterBackdropIsDark;                                        //@synthesize platterBackdropIsDark=_platterBackdropIsDark - In the implementation block
@property (nonatomic,readonly) UIColor * platterTextColor;                                        //@synthesize platterTextColor=_platterTextColor - In the implementation block
@property (nonatomic,readonly) UIColor * platterSecureTextColor;                                  //@synthesize platterSecureTextColor=_platterSecureTextColor - In the implementation block
@property (nonatomic,readonly) UIColor * platterWarningTextColor;                                 //@synthesize platterWarningTextColor=_platterWarningTextColor - In the implementation block
@property (nonatomic,readonly) UIColor * platterAnnotationTextColor;                              //@synthesize platterAnnotationTextColor=_platterAnnotationTextColor - In the implementation block
@property (nonatomic,readonly) UIColor * platterPlaceholderTextColor;                             //@synthesize platterPlaceholderTextColor=_platterPlaceholderTextColor - In the implementation block
@property (nonatomic,readonly) UIColor * platterSelectionColor;                                   //@synthesize platterSelectionColor=_platterSelectionColor - In the implementation block
@property (nonatomic,readonly) UIColor * platterProgressBarTintColor;                             //@synthesize platterProgressBarTintColor=_platterProgressBarTintColor - In the implementation block
+(id)textColorForBackgroundColor:(id)arg1 ;
-(UIColor *)textColor;
-(long long)platterOverrideUserInterfaceStyle;
-(id)URLAccessoryButtonTintColorForInputMode:(unsigned long long)arg1 ;
-(BOOL)platterBackdropIsDark;
-(UIColor *)platterProgressBarTintColor;
-(UIColor *)progressBarTintColor;
-(BOOL)backdropIsRed;
-(UIColor *)platterPlaceholderTextColor;
-(id)platterTextColorForPlatterAlpha:(double)arg1 ;
-(long long)platterTextFieldOverrideUserInterfaceStyle;
-(long long)platterKeyboardOverrideAppearance;
-(UIColor *)annotationTextColor;
-(id)annotationTextColorForPlatterAlpha:(double)arg1 ;
-(id)platterWarningTextColorForPlatterAlpha:(double)arg1 ;
-(id)platterSecureTextColorForPlatterAlpha:(double)arg1 ;
-(id)initWithBarTintStyle:(unsigned long long)arg1 preferredBarTintColor:(id)arg2 controlsTintColor:(id)arg3 ;
-(id)_colorForPlatterTextColor:(id)arg1 regularColor:(id)arg2 withPlatterAlpha:(double)arg3 ;
-(BOOL)backdropIsExtreme;
-(BOOL)backdropIsGreen;
-(UIColor *)secureTextColor;
-(UIColor *)warningTextColor;
-(UIColor *)platterTextColor;
-(UIColor *)platterSecureTextColor;
-(UIColor *)platterWarningTextColor;
-(UIColor *)platterAnnotationTextColor;
-(UIColor *)platterSelectionColor;
@end


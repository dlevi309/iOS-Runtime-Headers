/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
*/

#import <UIKitCore/_UILegibilitySettings.h>

@class UIColor;

@interface SBLockScreenLegibilitySettings : _UILegibilitySettings {

	BOOL _vibrancyDisabled;
	UIColor* _backgroundColorHint;

}

@property (nonatomic,retain) UIColor * backgroundColorHint;              //@synthesize backgroundColorHint=_backgroundColorHint - In the implementation block
@property (assign,nonatomic) BOOL vibrancyDisabled;                      //@synthesize vibrancyDisabled=_vibrancyDisabled - In the implementation block
+(id)defaultSettings;
-(UIColor *)backgroundColorHint;
-(void)setBackgroundColorHint:(UIColor *)arg1 ;
-(BOOL)vibrancyDisabled;
-(void)setVibrancyDisabled:(BOOL)arg1 ;
@end


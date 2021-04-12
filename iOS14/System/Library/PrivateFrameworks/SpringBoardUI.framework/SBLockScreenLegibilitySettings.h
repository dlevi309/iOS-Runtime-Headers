/*
* Generated on Thursday, January 14, 2021 at 2:25:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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


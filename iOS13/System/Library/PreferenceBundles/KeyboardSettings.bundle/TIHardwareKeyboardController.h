/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/KeyboardSettings.bundle/KeyboardSettings
*/

#import <Preferences/PSListController.h>

@class KeyboardBrightnessClient;

@interface TIHardwareKeyboardController : PSListController {

	KeyboardBrightnessClient* _keyboardBrightnessClient;

}
+(id)IOHIDKeyboardLanguageToCapsLockKeyLabel;
-(id)init;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)hardwareKeyboardAvailabilityChanged;
-(id)specifiers;
-(void)appWillEnterForeground:(id)arg1 ;
-(void)appWillResignActive:(id)arg1 ;
-(id)newSpecifiers;
-(BOOL)isTrackingBrightnessSlider;
-(id)separateHWKeyboardSpecifiers;
-(id)keyboardBrightnessSpecifiers;
-(id)modifierRemapSpecifiers;
-(void)suspendIdleDimming:(BOOL)arg1 ;
-(void)setBrightness:(id)arg1 specifier:(id)arg2 ;
-(id)getBrightness:(id)arg1 ;
-(id)readPreferenceControllerValue:(id)arg1 ;
-(id)readRomanCapsLockPreferenceValue:(id)arg1 ;
-(void)setRomanCapsLockPreferenceValue:(id)arg1 forSpecifier:(id)arg2 ;
@end


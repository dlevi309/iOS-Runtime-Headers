/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/KeyboardSettings.bundle/KeyboardSettings
*/

#import <Preferences/PSListController.h>

@class KeyboardBrightnessClient;

@interface TIHardwareKeyboardController : PSListController {

	KeyboardBrightnessClient* _keyboardBrightnessClient;

}
+(id)IOHIDKeyboardLanguageToCapsLockKeyLabel;
-(id)specifiers;
-(id)init;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)appWillResignActive:(id)arg1 ;
-(void)appWillEnterForeground:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)hardwareKeyboardAvailabilityChanged;
-(void)dealloc;
-(id)newSpecifiers;
-(BOOL)isTrackingBrightnessSlider;
-(id)separateHWKeyboardSpecifiers;
-(BOOL)shouldShowGlobeKeyPreference;
-(id)globeAsEmojiSpecifiers;
-(id)capsLockSwitchSpecifiersFromModes:(id)arg1 ;
-(id)keyboardBrightnessSpecifiers;
-(id)modifierRemapSpecifiers;
-(void)suspendIdleDimming:(BOOL)arg1 ;
-(void)setBrightness:(id)arg1 specifier:(id)arg2 ;
-(id)getBrightness:(id)arg1 ;
-(void)toggledGlobeKey:(id)arg1 specifier:(id)arg2 ;
-(id)globeKeyPreference:(id)arg1 ;
-(BOOL)defaultValueForGlobeAsEmojiKey;
-(id)readPreferenceControllerValue:(id)arg1 ;
-(id)readRomanCapsLockPreferenceValue:(id)arg1 ;
-(void)setRomanCapsLockPreferenceValue:(id)arg1 forSpecifier:(id)arg2 ;
@end


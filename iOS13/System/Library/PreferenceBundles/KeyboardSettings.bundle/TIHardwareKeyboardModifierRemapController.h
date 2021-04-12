/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/KeyboardSettings.bundle/KeyboardSettings
*/

#import <KeyboardSettings/KeyboardSettings-Structs.h>
#import <Preferences/PSListController.h>

@class NSMutableArray, NSMutableDictionary;

@interface TIHardwareKeyboardModifierRemapController : PSListController {

	IOHIDEventSystemClientRef _eventSystemClient;
	NSMutableArray* _keyboards;
	unsigned long long _keysSectionStart;
	IOHIDServiceClientRef _currentKeyboard;
	NSMutableDictionary* _remapping;

}

@property (nonatomic,readonly) IOHIDServiceClientRef currentKeyboard; 
-(void)dealloc;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(IOHIDServiceClientRef)currentKeyboard;
-(id)specifiers;
-(id)newSpecifiers;
-(id)valueForRemappingKey:(id)arg1 ;
-(void)reloadSpecifiersWithAnimation;
-(void)saveRemapping;
-(void)loadKeyboards;
-(void)loadRemapping;
-(id)keyboardsSectionSpecifiers;
-(id)keysSectionSpecifiers;
-(void)resetRemapping;
-(id)subtitleForSpecifier:(id)arg1 ;
-(void)setRemappingFromKey:(id)arg1 toValue:(id)arg2 ;
@end


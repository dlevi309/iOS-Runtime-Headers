/*
* Generated on Thursday, January 14, 2021 at 2:20:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UITextFieldVisualStyle.h>
#import <UIKitCore/_UITextFieldEditingProcessorDelegate.h>

@class NSString;

@interface _UITextFieldVisualStyle_tvOS : _UITextFieldVisualStyle <_UITextFieldEditingProcessorDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)placeholderColor;
-(id)defaultTextColorForKeyboardAppearance;
-(id)editingProcessorOverridingEditingAttributes:(id)arg1 ;
-(id)_defaultTextColorDarkKeyboard;
-(id)_defaultTextColorForUserInterfaceStyle;
-(id)_defaultTextColorBlackKeyboard;
-(id)_defaultTextColorLightKeyboard;
-(id)_placeholderTextColorBlackKeyboard;
-(id)defaultTextColor;
-(id)_placeholderTextColorDarkKeyboard;
-(id)_placeholderTextColorLightKeyboard;
-(id)_placeholderTextColorFocused;
-(id)_defaultEditingFont;
-(BOOL)textShouldUseVibrancy;
-(id)defaultFocusedTextColor;
-(void)handleTextVibrancy;
-(id)parentViewForTextContentView;
@end


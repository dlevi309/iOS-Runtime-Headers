/*
* Generated on Monday, March 1, 2021 at 2:35:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UIKeyboardImplAccessibility_super.h>

@interface UIKeyboardImplAccessibility : __UIKeyboardImplAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)insertText:(id)arg1 ;
-(void)textDidChange:(id)arg1 ;
-(void)setInputMode:(id)arg1 userInitiated:(BOOL)arg2 ;
-(void)dismissKeyboard;
-(void)setInputModeToNextInPreferredListWithExecutionContext:(id)arg1 ;
-(BOOL)_shouldMinimizeForHardwareKeyboard;
-(void)toggleSoftwareKeyboard;
-(BOOL)autocorrectionPreference;
-(void)showKeyboard;
-(void)hideKeyboard;
-(void)updateTextCandidateView;
-(BOOL)callShouldReplaceExtendedRange:(long long)arg1 withText:(id)arg2 includeMarkedText:(BOOL)arg3 ;
-(BOOL)callShouldInsertText:(id)arg1 ;
-(BOOL)callShouldDeleteWithWordCountForRapidDelete:(int)arg1 characterCountForRapidDelete:(int)arg2 ;
-(void)updateAutocorrectPrompt:(id)arg1 ;
-(void)handleKeyboardInput:(id)arg1 executionContext:(id)arg2 ;
-(void)unmarkText:(id)arg1 ;
-(void)_setAttributedMarkedText:(id)arg1 selectedRange:(NSRange)arg2 inputString:(id)arg3 searchString:(id)arg4 compareAttributes:(BOOL)arg5 ;
-(void)acceptCandidate:(id)arg1 ;
-(void)setShift:(BOOL)arg1 autoshift:(BOOL)arg2 ;
-(void)completeDeleteFromInput;
-(BOOL)acceptWord:(id)arg1 firstDelete:(unsigned long long)arg2 forInput:(id)arg3 ;
-(void)setInHardwareKeyboardMode:(BOOL)arg1 ;
-(void)completeHandleKeyEvent:(id)arg1 ;
-(BOOL)autocorrectSpellingEnabled;
-(void)showKeyboardIfNeeded;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_accessibilityLoadAccessibilityInformation;
-(BOOL)_axIsObservingAppLifecycleNotifications;
-(void)_axUnregisterForVoiceOverNotifications:(id)arg1 ;
-(void)_axRegisterForVoiceOverNotifications:(id)arg1 ;
-(void)_axHandleVoiceOverStatusChanged:(id)arg1 ;
-(void)_axSetIsObservingAppLifecycleNotifications:(BOOL)arg1 ;
-(BOOL)_axIsObservingVoiceOverNotifications;
-(void)_axSetIsObservingVoiceOverNotifications:(BOOL)arg1 ;
-(void)_axUpdateAutocorrectionSettings;
-(BOOL)_axIsHandwritingEnabled;
-(void)setInputModeToNextInPreferredList;
-(void)updateLayoutForInterfaceOrientation:(long long)arg1 ;
-(void)_axResetFKAFocusToFirstResponder;
-(id)_accessibilityKeyboardInputDelegate;
-(BOOL)_axShouldShowKeyboard;
-(void)_axShowKeyboardIfHidden;
-(void)_axSetIsHandwritingEnabled:(BOOL)arg1 ;
-(BOOL)_accessibilityInputObjectUsesSecureText:(id)arg1 ;
@end


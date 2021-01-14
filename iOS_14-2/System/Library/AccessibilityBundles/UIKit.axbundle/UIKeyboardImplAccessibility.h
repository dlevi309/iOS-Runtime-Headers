/*
* Generated on Thursday, January 14, 2021 at 2:29:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UIKeyboardImplAccessibility_super.h>

@interface UIKeyboardImplAccessibility : __UIKeyboardImplAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(void)setShift:(BOOL)arg1 autoshift:(BOOL)arg2 ;
-(BOOL)autocorrectSpellingEnabled;
-(void)deleteBackwardAndNotify:(BOOL)arg1 ;
-(void)showKeyboardIfNeeded;
-(BOOL)autocorrectionPreference;
-(BOOL)callShouldInsertText:(id)arg1 ;
-(void)insertText:(id)arg1 ;
-(void)dismissKeyboard;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)acceptCandidate:(id)arg1 ;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)hideKeyboard;
-(void)_performKeyboardOutput:(id)arg1 shouldCheckDelegate:(BOOL)arg2 ;
-(void)setInHardwareKeyboardMode:(BOOL)arg1 ;
-(BOOL)callShouldDeleteWithWordCountForRapidDelete:(int)arg1 characterCountForRapidDelete:(int)arg2 ;
-(void)toggleSoftwareKeyboard;
-(void)setInputMode:(id)arg1 userInitiated:(BOOL)arg2 ;
-(void)textDidChange:(id)arg1 ;
-(void)setInputModeToNextInPreferredListWithExecutionContext:(id)arg1 ;
-(BOOL)callShouldReplaceExtendedRange:(long long)arg1 withText:(id)arg2 includeMarkedText:(BOOL)arg3 ;
-(void)unmarkText:(id)arg1 ;
-(void)completeDeleteFromInput;
-(void)_setAttributedMarkedText:(id)arg1 selectedRange:(NSRange)arg2 inputString:(id)arg3 searchString:(id)arg4 compareAttributes:(BOOL)arg5 ;
-(void)handleKeyboardInput:(id)arg1 executionContext:(id)arg2 ;
-(BOOL)_shouldMinimizeForHardwareKeyboard;
-(void)updateTextCandidateView;
-(void)updateAutocorrectPrompt:(id)arg1 ;
-(BOOL)acceptWord:(id)arg1 firstDelete:(unsigned long long)arg2 forInput:(id)arg3 ;
-(void)_accessibilityLoadAccessibilityInformation;
-(void)showKeyboard;
-(void)completeHandleKeyEvent:(id)arg1 ;
-(void)dealloc;
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


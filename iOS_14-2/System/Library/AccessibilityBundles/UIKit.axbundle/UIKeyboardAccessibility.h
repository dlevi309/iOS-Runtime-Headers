/*
* Generated on Thursday, January 14, 2021 at 2:29:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UIKeyboardAccessibility_super.h>

@interface UIKeyboardAccessibility : __UIKeyboardAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(id)_accessibilityNativeFocusPreferredElement;
-(BOOL)_iosAccessibilityPerformAction:(int)arg1 withValue:(id)arg2 fencePort:(unsigned)arg3 ;
-(void)deactivate;
-(void)activate;
-(BOOL)_accessibilityKeyboardSupportsGestureMode;
-(BOOL)_accessibilityKeyboardIsContinuousPathTracking;
-(BOOL)_accessibilityKeyboardIsContinuousPathAvailable;
-(CGRect)accessibilityFrame;
-(void)insertDictationResult:(id)arg1 ;
-(void)dictationRecognitionFailed;
-(CGRect)_accessibilityDirectInteractionFrame;
-(BOOL)_accessibilityTriggerDictationFromPath:(id)arg1 ;
-(unsigned long long)_accessibilityAutomationType;
-(void)dealloc;
-(BOOL)_axDeleteByCharacter;
-(BOOL)_axDeleteByWord;
-(BOOL)_axAdvanceKeyboardPlane:(BOOL)arg1 ;
-(BOOL)_axCommitWord;
-(BOOL)_axEnterTextValue:(id)arg1 ;
-(BOOL)_axAdvanceKeyboardSuggestion:(BOOL)arg1 ;
-(BOOL)_axAdvanceInternationalKeyboard:(BOOL)arg1 ;
-(BOOL)_axShift;
-(BOOL)_axShiftLock;
-(BOOL)_accessibilitySwitchToGestureMode:(BOOL)arg1 ;
-(void)_voiceOverStatus:(id)arg1 ;
@end


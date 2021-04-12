/*
* Generated on Monday, March 1, 2021 at 2:35:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UIKeyboardAccessibility_super.h>

@interface UIKeyboardAccessibility : __UIKeyboardAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(void)dealloc;
-(CGRect)accessibilityFrame;
-(void)activate;
-(void)deactivate;
-(void)insertDictationResult:(id)arg1 ;
-(void)dictationRecognitionFailed;
-(unsigned long long)_accessibilityAutomationType;
-(BOOL)_iosAccessibilityPerformAction:(int)arg1 withValue:(id)arg2 fencePort:(unsigned)arg3 ;
-(BOOL)_accessibilityKeyboardSupportsGestureMode;
-(BOOL)_accessibilityKeyboardIsContinuousPathTracking;
-(BOOL)_accessibilityKeyboardIsContinuousPathAvailable;
-(CGRect)_accessibilityDirectInteractionFrame;
-(BOOL)_accessibilityTriggerDictationFromPath:(id)arg1 ;
-(id)_accessibilityNativeFocusPreferredElement;
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


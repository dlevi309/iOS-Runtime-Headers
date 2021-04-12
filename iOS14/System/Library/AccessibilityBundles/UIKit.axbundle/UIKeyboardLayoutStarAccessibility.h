/*
* Generated on Thursday, January 14, 2021 at 2:29:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UIKeyboardLayoutStarAccessibility_super.h>

@interface UIKeyboardLayoutStarAccessibility : __UIKeyboardLayoutStarAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(void)setKeyplaneName:(id)arg1 ;
-(BOOL)isAccessibilityElement;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)_accessibilityScannerGroupElements;
-(id)_accessibilitySupplementaryHeaderViews;
-(BOOL)accessibilityElementsHidden;
-(void)setState:(int)arg1 forKey:(id)arg2 ;
-(BOOL)canProduceString:(id)arg1 ;
-(id)_accessibilityUserTestingChildren;
-(unsigned long long)accessibilityTraits;
-(void)continueFromInternationalActionForTouchUp:(id)arg1 withActions:(unsigned long long)arg2 timestamp:(double)arg3 interval:(double)arg4 didLongPress:(BOOL)arg5 prevActions:(unsigned long long)arg6 executionContext:(id)arg7 ;
-(void)showPopupVariantsForKey:(id)arg1 ;
-(void)touchUp:(id)arg1 executionContext:(id)arg2 ;
-(void)addContinuousPathPoint:(CGPoint)arg1 withTimestamp:(double)arg2 ;
-(void)didMoveToWindow;
-(void)setReturnKeyEnabled:(BOOL)arg1 withDisplayName:(id)arg2 withType:(int)arg3 ;
-(id)_accessibilityKeyboardKeyForString:(id)arg1 ;
-(long long)accessibilityNavigationStyle;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(BOOL)_accessibilityKeyboardSupportsGestureMode;
-(long long)accessibilityElementCount;
-(id)_accessibiltyAvailableKeyplanes;
-(BOOL)accessibilityPerformEscape;
-(void)touchDragged:(id)arg1 executionContext:(id)arg2 ;
-(long long)accessibilityContainerType;
-(void)touchDown:(id)arg1 executionContext:(id)arg2 ;
-(void)_accessibilityChangeToKeyplane:(id)arg1 ;
-(void)didBeginContinuousPath;
-(void)showPopupView:(long long)arg1 withKey:(id)arg2 popupInfo:(id)arg3 force:(BOOL)arg4 ;
-(void)setActiveKey:(id)arg1 ;
-(void)_accessibilityLoadAccessibilityInformation;
-(void)dealloc;
-(void)setLabel:(id)arg1 forKey:(id)arg2 ;
-(id)_accessibilityInternalData;
-(id)_accessibilityKeyElementForKey:(id)arg1 ;
-(id)_accessibilityVisibleKeysByRow;
-(id)_accessibilityBiasEscapeButton;
-(id)_accessibilityCreateElementForKey:(id)arg1 ;
-(BOOL)_axIsWaitingForEmojiPopupAnnouncement;
-(id)_accessibilityStickyPopupKeys;
-(void)_axSetIsWaitingForEmojiPopupAnnouncement:(BOOL)arg1 ;
-(void)_accessibilitySetStickyPopupKeys:(id)arg1 ;
-(void)_axHandleEmojiPopupLayoutChangeAfterAnnouncement;
-(void)_accessibilityResetInternalData;
-(id)_accessibilitySortedUnstoredKeys;
-(id)_accessibilityKeys;
-(void)_axClearReturnKeyLabel;
-(BOOL)_isCapitalLetterKeyplane:(id)arg1 ;
-(BOOL)_isSmallLetterKeyplane:(id)arg1 ;
-(id)_axKBModalView;
-(BOOL)_accessibilityHasBiasEscapeButton;
-(BOOL)_accessibilityBiasEscapeButtonIsFirst;
-(id)iOSGetKeyboardRowsByNumber;
-(id)_rowNumberOverrideForSplitEmojiKey:(id)arg1 ;
-(double)_axGetSortingNumberForEmojiCell:(id)arg1 ;
-(id)_accessibilityGetKeyboardRowsByRowNumber;
-(id)iOSGetOrderedRowsForRows:(id)arg1 sortedRows:(id)arg2 numRows:(long long)arg3 ;
-(BOOL)_accessibilityFingerIsDown;
-(id)atvGetKeyboardRowsByNumber;
-(id)atvGetOrderedRowsForRows:(id)arg1 sortedRows:(id)arg2 numRows:(long long)arg3 ;
@end


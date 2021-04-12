/*
* Generated on Monday, March 1, 2021 at 2:35:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UIKeyboardLayoutStarAccessibility_super.h>

@interface UIKeyboardLayoutStarAccessibility : __UIKeyboardLayoutStarAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(void)dealloc;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(BOOL)accessibilityElementsHidden;
-(long long)accessibilityNavigationStyle;
-(BOOL)accessibilityPerformEscape;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(long long)accessibilityContainerType;
-(void)didMoveToWindow;
-(void)setState:(int)arg1 forKey:(id)arg2 ;
-(void)setKeyplaneName:(id)arg1 ;
-(void)setActiveKey:(id)arg1 ;
-(BOOL)canProduceString:(id)arg1 ;
-(void)setLabel:(id)arg1 forKey:(id)arg2 ;
-(void)showPopupVariantsForKey:(id)arg1 ;
-(void)addContinuousPathPoint:(CGPoint)arg1 withTimestamp:(double)arg2 ;
-(void)continueFromInternationalActionForTouchUp:(id)arg1 withActions:(unsigned long long)arg2 timestamp:(double)arg3 interval:(double)arg4 didLongPress:(BOOL)arg5 prevActions:(unsigned long long)arg6 executionContext:(id)arg7 ;
-(void)setReturnKeyEnabled:(BOOL)arg1 withDisplayName:(id)arg2 withType:(int)arg3 ;
-(void)touchDown:(id)arg1 executionContext:(id)arg2 ;
-(void)touchDragged:(id)arg1 executionContext:(id)arg2 ;
-(void)touchUp:(id)arg1 executionContext:(id)arg2 ;
-(void)showPopupView:(long long)arg1 withKey:(id)arg2 popupInfo:(id)arg3 force:(BOOL)arg4 ;
-(void)didBeginContinuousPath;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)_accessibilityScannerGroupElements;
-(id)_accessibilitySupplementaryHeaderViews;
-(id)_accessibilityUserTestingChildren;
-(id)_accessibilityKeyboardKeyForString:(id)arg1 ;
-(BOOL)_accessibilityKeyboardSupportsGestureMode;
-(id)_accessibiltyAvailableKeyplanes;
-(void)_accessibilityChangeToKeyplane:(id)arg1 ;
-(void)_accessibilityLoadAccessibilityInformation;
-(id)_accessibilityInternalData;
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
-(id)_accessibilityKeyElementForKey:(id)arg1 ;
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


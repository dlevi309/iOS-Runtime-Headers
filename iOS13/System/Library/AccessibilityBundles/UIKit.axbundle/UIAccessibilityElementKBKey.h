/*
* Generated on Monday, March 1, 2021 at 2:35:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>

@class UIKBTree, NSArray;

@interface UIAccessibilityElementKBKey : UIAccessibilityElement {

	UIKBTree* _key;
	BOOL _changesOnShiftDown;
	NSArray* _cachedVariantKeys;

}

@property (nonatomic,retain) NSArray * cachedVariantKeys;              //@synthesize cachedVariantKeys=_cachedVariantKeys - In the implementation block
@property (nonatomic,retain) UIKBTree * key;                           //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL changesOnShiftDown;                  //@synthesize changesOnShiftDown=_changesOnShiftDown - In the implementation block
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(id)variantKeysForKey:(id)arg1 ;
-(id)description;
-(UIKBTree *)key;
-(void)setKey:(UIKBTree *)arg1 ;
-(CGRect)accessibilityFrame;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(BOOL)accessibilityActivate;
-(id)accessibilityCustomActions;
-(id)accessibilityIdentifier;
-(id)_accessibilityLabel;
-(unsigned long long)_accessibilityAutomationType;
-(BOOL)_accessibilitySupportsActivateAction;
-(BOOL)_accessibilitySupportsSecondaryActivateAction;
-(id)_accessibilitySupportGesturesAttributes;
-(BOOL)_accessibilityIsInternationalKeyboardKey;
-(BOOL)_accessibilityKeyboardSupportsGestureMode;
-(id)_accessibilityKeyboardKeyEnteredString;
-(BOOL)_accessibilityKeyboardKeyAllowsTouchTyping;
-(BOOL)_accessibilityAllowsAlternativeCharacterActivation;
-(id)_accessibilityVariantKeys;
-(BOOL)_accessibilityHasVariantKeys;
-(BOOL)_accessibilityKeyboardKeyHasSignificantAlternateActions;
-(BOOL)_accessibilitySecondaryActivate;
-(BOOL)_accessibilityDismissAlternativeKeyPicker;
-(id)initWithAccessibilityContainer:(id)arg1 key:(id)arg2 ;
-(BOOL)_accessibilityWasForcedToUseForeignKB;
-(BOOL)isButtonType;
-(id)_axLayoutStar;
-(BOOL)_accessibilityActivateForPanAlternate:(BOOL)arg1 isSecondAlternate:(BOOL)arg2 isSecondaryActivate:(BOOL)arg3 ;
-(BOOL)_accessibilityActivateForPanAlternate:(BOOL)arg1 isSecondAlternate:(BOOL)arg2 ;
-(BOOL)_axDisplaysGlobeKeyAsEmojiKey;
-(BOOL)_axIsDictationKey;
-(id)_accessibilityLocalizedStringForKeyboardLocale:(id)arg1 ;
-(BOOL)_axIsShifted;
-(void)setChangesOnShiftDown:(BOOL)arg1 ;
-(id)_axDualStringLabel;
-(BOOL)allowsCaseChangeOnShift;
-(BOOL)isUnaffectedByShiftLock;
-(BOOL)changesOnShiftDown;
-(void)_applyCapitalLetterTransform;
-(BOOL)_allowCachingAccessibilityLabel;
-(BOOL)_accessibilityIsDeleteKey;
-(BOOL)_accessibilityIsKeySelected;
-(NSArray *)cachedVariantKeys;
-(void)setCachedVariantKeys:(NSArray *)arg1 ;
-(BOOL)_performCapsLockDoubleTap;
-(BOOL)_accessibilityActivatePanAlternate:(id)arg1 ;
-(id)_accessibilityKeyComponentName;
-(id)_accessibilityLayoutCursorKeyplaneComponentName;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:29:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(unsigned long long)accessibilityTraits;
-(BOOL)_accessibilitySupportsActivateAction;
-(BOOL)_accessibilitySupportsSecondaryActivateAction;
-(id)description;
-(id)accessibilityValue;
-(id)_accessibilitySupportGesturesAttributes;
-(BOOL)_accessibilityIsInternationalKeyboardKey;
-(BOOL)_accessibilityKeyboardSupportsGestureMode;
-(UIKBTree *)key;
-(CGRect)accessibilityFrame;
-(id)_accessibilityKeyboardKeyEnteredString;
-(id)accessibilityCustomActions;
-(BOOL)_accessibilityKeyboardKeyAllowsTouchTyping;
-(BOOL)_accessibilityAllowsAlternativeCharacterActivation;
-(id)accessibilityHint;
-(BOOL)accessibilityActivate;
-(id)_accessibilityVariantKeys;
-(BOOL)_accessibilityHasVariantKeys;
-(BOOL)_accessibilityKeyboardKeyHasSignificantAlternateActions;
-(CGPoint)accessibilityActivationPoint;
-(id)_accessibilityLabel;
-(BOOL)_accessibilitySecondaryActivate;
-(id)accessibilityIdentifier;
-(unsigned long long)_accessibilityAutomationType;
-(void)setKey:(UIKBTree *)arg1 ;
-(BOOL)_accessibilityDismissAlternativeKeyPicker;
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
-(id)initWithAccessibilityContainer:(id)arg1 key:(id)arg2 ;
-(BOOL)_performCapsLockDoubleTap;
-(BOOL)_accessibilityActivatePanAlternate:(id)arg1 ;
-(id)_accessibilityKeyComponentName;
-(id)_accessibilityLayoutCursorKeyplaneComponentName;
@end


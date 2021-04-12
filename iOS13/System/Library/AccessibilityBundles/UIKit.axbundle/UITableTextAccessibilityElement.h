/*
* Generated on Monday, March 1, 2021 at 2:35:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>

@interface UITableTextAccessibilityElement : UIAccessibilityElement {

	SEL _selector;
	id textDelegate;
	id attributeDelegate;

}

@property (assign,nonatomic,__weak) id textDelegate; 
@property (assign,nonatomic,__weak) id attributeDelegate; 
-(id)description;
-(CGRect)accessibilityFrame;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(id)accessibilityLanguage;
-(BOOL)accessibilityRespondsToUserInteraction;
-(id)accessibilityUserInputLabels;
-(void)accessibilityElementDidBecomeFocused;
-(void)accessibilityElementDidLoseFocus;
-(BOOL)accessibilityActivate;
-(id)accessibilityIdentifier;
-(id)accessibilityLocalizedStringKey;
-(BOOL)canBecomeFocused;
-(BOOL)_accessibilityIsInTableCell;
-(NSRange)accessibilityRowRange;
-(NSRange)_accessibilitySelectedTextRange;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
-(id)_accessibilityTextViewTextOperationResponder;
-(id)accessibilityLocalizationBundleID;
-(id)accessibilityLocalizationBundlePath;
-(id)accessibilityLocalizedStringTableName;
-(BOOL)_accessibilityIsSpeakThisElement;
-(unsigned long long)_accessibilityScanningBehaviorTraits;
-(id)_accessibilityScrollStatus;
-(BOOL)_accessibilitySupportsActivateAction;
-(BOOL)_accessibilityRetainsCustomRotorActionSetting;
-(NSRange)_accessibilityIndexPathAsRange;
-(id)_accessibilityCapturedImages;
-(BOOL)_accessibilityIsAwayAlertElement;
-(long long)_accessibilityScannerActivateBehavior;
-(double)_accessibilityDelayBeforeUpdatingOnActivation;
-(BOOL)_accessibilityUseElementAtPositionAfterActivation;
-(id)_accessibilityEquivalenceTag;
-(id)_accessibilitySpeakThisString;
-(id)_accessibilityCustomActionGroupIdentifier;
-(id)_accessibilityAllDragSourceDescriptors;
-(id)_accessibilityAllDropPointDescriptors;
-(void)setTextDelegate:(id)arg1 ;
-(void)setAttributeDelegate:(id)arg1 ;
-(id)textDelegate;
-(id)_tableViewCellTextDelegate;
-(id)attributeDelegate;
-(id)_tableViewCellAttributeDelegate;
@end


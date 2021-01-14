/*
* Generated on Thursday, January 14, 2021 at 2:29:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)canBecomeFocused;
-(id)accessibilityLabel;
-(id)accessibilityUserInputLabels;
-(BOOL)_accessibilityIsSpeakThisElement;
-(void)accessibilityElementDidBecomeFocused;
-(unsigned long long)_accessibilityScanningBehaviorTraits;
-(BOOL)accessibilityRespondsToUserInteraction;
-(void)accessibilityElementDidLoseFocus;
-(id)_accessibilityScrollStatus;
-(unsigned long long)accessibilityTraits;
-(BOOL)_accessibilitySupportsActivateAction;
-(id)description;
-(id)accessibilityValue;
-(id)accessibilityLocalizedStringKey;
-(id)accessibilityLocalizationBundleID;
-(id)accessibilityLocalizationBundlePath;
-(id)accessibilityLocalizedStringTableName;
-(BOOL)_accessibilityRetainsCustomRotorActionSetting;
-(NSRange)_accessibilityIndexPathAsRange;
-(id)_accessibilityTextViewTextOperationResponder;
-(CGRect)accessibilityFrame;
-(id)_accessibilityCapturedImages;
-(BOOL)_accessibilityIsAwayAlertElement;
-(id)accessibilityHint;
-(id)accessibilityLanguage;
-(BOOL)accessibilityActivate;
-(long long)_accessibilityScannerActivateBehavior;
-(id)_accessibilityEquivalenceTag;
-(double)_accessibilityDelayBeforeUpdatingOnActivation;
-(BOOL)_accessibilityUseElementAtPositionAfterActivation;
-(id)_accessibilitySpeakThisString;
-(id)_accessibilityCustomActionGroupIdentifier;
-(BOOL)_accessibilityImplementsDefaultRowRange;
-(CGPoint)accessibilityActivationPoint;
-(id)_accessibilityAllDragSourceDescriptors;
-(id)_accessibilityAllDropPointDescriptors;
-(id)accessibilityIdentifier;
-(BOOL)_accessibilityIsInTableCell;
-(NSRange)accessibilityRowRange;
-(NSRange)_accessibilitySelectedTextRange;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
-(void)setTextDelegate:(id)arg1 ;
-(id)textDelegate;
-(id)_tableViewCellTextDelegate;
-(id)attributeDelegate;
-(id)_tableViewCellAttributeDelegate;
-(void)setAttributeDelegate:(id)arg1 ;
@end


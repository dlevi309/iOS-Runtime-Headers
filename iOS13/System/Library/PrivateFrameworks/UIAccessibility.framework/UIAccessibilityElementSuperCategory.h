/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
*/

#import <UIAccessibility/UIAccessibility-Structs.h>
#import <UIAccessibility/__UIAccessibilityElementSuperCategory_super.h>

@interface UIAccessibilityElementSuperCategory : __UIAccessibilityElementSuperCategory_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(BOOL)_isSerializableAccessibilityElement;
+(Class)safeCategoryBaseClass;
-(id)init;
-(void)dealloc;
-(id)description;
-(CGRect)accessibilityFrame;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(id)accessibilityLanguage;
-(id)accessibilityPath;
-(void)accessibilityElementDidBecomeFocused;
-(void)accessibilityElementDidLoseFocus;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(BOOL)accessibilityActivate;
-(id)_focusGroupDescriptor;
-(id)initWithAccessibilityContainer:(id)arg1 ;
-(void)_accessibilitySetValue:(id)arg1 ;
-(BOOL)_accessibilitySupportsHandwriting;
-(BOOL)_accessibilitySetNativeFocus;
-(BOOL)_accessibilitySupportsActivateAction;
-(id)_accessibilityUserTestingVisibleAncestor;
-(BOOL)_accessibilityViewHierarchyHasNativeFocus;
-(float)_accessibilityActivationDelay;
-(id)_accessibilityAutomaticIdentifier;
-(id)_axGetStoredDefaultFocusGroupDescriptor;
-(void)_axSetStoredDefaultFocusGroupDescriptor:(id)arg1 ;
-(void)accessibilityZoomInAtPoint:(CGPoint)arg1 ;
-(void)accessibilityZoomOutAtPoint:(CGPoint)arg1 ;
-(BOOL)_accessibilityIsFKARunningForFocusItem;
-(BOOL)_accessibilityUsesFrameInContainerSpace;
-(BOOL)_accessibilityProvidesOwnFrame;
@end


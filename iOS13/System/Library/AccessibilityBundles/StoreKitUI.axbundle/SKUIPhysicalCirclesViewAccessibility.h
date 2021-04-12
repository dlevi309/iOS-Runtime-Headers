/*
* Generated on Monday, March 1, 2021 at 2:35:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/AccessibilityBundles/StoreKitUI.axbundle/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/__SKUIPhysicalCirclesViewAccessibility_super.h>

@interface SKUIPhysicalCirclesViewAccessibility : __SKUIPhysicalCirclesViewAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(BOOL)accessibilityScroll:(long long)arg1 ;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(BOOL)_accessibilityUsesChildrenFramesForSorting;
-(void)removeCircleAtIndex:(long long)arg1 animated:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_reloadDidFinish;
-(id)_accessibilityValueForCircle:(id)arg1 ;
-(void)_accessibilityDeleteCircle:(id)arg1 ;
-(void)_accessibilityActivateCircle:(id)arg1 ;
-(long long)_accessibilityIndexOfCircle:(id)arg1 ;
-(id)_accessibilityValueForAffinityCount:(long long)arg1 ;
-(id)_accessibilityCircleBodies;
-(CGPoint)_accessibilityForceTranslationForScrollDirection:(long long)arg1 ;
-(id)_accessibilityPushingScrollStatusInDirection:(long long)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:35:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UICollectionViewCellAccessibility_super.h>

@interface UICollectionViewCellAccessibility : __UICollectionViewCellAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(void)prepareForReuse;
-(void)addSubview:(id)arg1 ;
-(unsigned long long)accessibilityTraits;
-(BOOL)shouldGroupAccessibilityChildren;
-(id)accessibilityDragSourceDescriptors;
-(id)accessibilityDropPointDescriptors;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(BOOL)canBecomeFocused;
-(BOOL)_isEligibleForFocusInteraction;
-(void)insertSubview:(id)arg1 atIndex:(long long)arg2 ;
-(void)insertSubview:(id)arg1 belowSubview:(id)arg2 ;
-(void)willRemoveSubview:(id)arg1 ;
-(void)insertSubview:(id)arg1 aboveSubview:(id)arg2 ;
-(unsigned long long)_accessibilityAutomationType;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)_accessibilityUserTestingChildren;
-(BOOL)accessibilityScrollToVisible;
-(BOOL)_accessibilityIsInCollectionCell;
-(NSRange)_accessibilityIndexPathAsRange;
-(id)_accessibilityParentCollectionView;
-(id)_accessibilityIndexPath;
-(id)_accessibilityChildren;
-(BOOL)_accessibilityIsOutsideParentBounds;
-(id)axData;
-(void)accessibilityClearInternalData;
-(void)_accessibilityClearInternalCaches;
-(id)_accessibilityCachedChildren;
-(id)_accessibilityParentScrollView;
-(BOOL)_axContentViewHasSingleFocusableSubview;
-(void)accessibilityReuseChildren:(id)arg1 forMockParent:(id)arg2 ;
@end


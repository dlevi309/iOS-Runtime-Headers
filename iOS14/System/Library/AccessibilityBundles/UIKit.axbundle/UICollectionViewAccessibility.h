/*
* Generated on Thursday, January 14, 2021 at 2:29:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UICollectionViewAccessibility_super.h>

@interface UICollectionViewAccessibility : __UICollectionViewAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(BOOL)canBecomeFocused;
-(id)preferredFocusedView;
-(id)_dequeueReusableViewOfKind:(id)arg1 withIdentifier:(id)arg2 forIndexPath:(id)arg3 viewCategory:(unsigned long long)arg4 ;
-(id)_accessibilitySupplementaryHeaderViewAtIndexPath:(id)arg1 ;
-(id)_accessibilityReusableViewForOpaqueElement:(id)arg1 ;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)isAccessibilityOpaqueElementProvider;
-(BOOL)_accessibilitySpeakThisShouldOnlyIncludeVisibleElements;
-(id)_accessibilityScannerGroupElements;
-(BOOL)_accessibilityHasOrderedChildren;
-(unsigned long long)_accessibilityScanningBehaviorTraits;
-(id)_accessibilityGroupIdentifier;
-(id)_accessibilitySupplementaryHeaderViews;
-(id)_accessibilitySupplementaryFooterViews;
-(BOOL)beginInteractiveMovementForItemAtIndexPath:(id)arg1 ;
-(CGRect)_visibleBounds;
-(BOOL)_reuseCell:(id)arg1 notifyDidEndDisplaying:(BOOL)arg2 ;
-(id)_fulfillPromisedFocusRegionForCell:(id)arg1 ;
-(void)reloadData;
-(void)insertSections:(id)arg1 ;
-(void)reloadSections:(id)arg1 ;
-(void)deleteSections:(id)arg1 ;
-(id)axData;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(id)_accessibilityUserTestingVisibleCells;
-(long long)accessibilityElementCount;
-(void)insertItemsAtIndexPaths:(id)arg1 ;
-(void)reloadItemsAtIndexPaths:(id)arg1 ;
-(void)deleteItemsAtIndexPaths:(id)arg1 ;
-(void)moveSection:(long long)arg1 toSection:(long long)arg2 ;
-(id)_accessibilitySortedElementsWithin;
-(BOOL)_accessibilityShouldIncludeArrowKeyCommandsForDirectionalFocusMovement;
-(BOOL)_accessibilityDrawsFocusRingWhenChildrenFocused;
-(id)_accessibilitySortedElementsWithinWithOptions:(id)arg1 ;
-(long long)accessibilityContainerType;
-(void)_moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(BOOL)_accessibilityOpaqueElementScrollsContentIntoView;
-(void)_reuseSupplementaryView:(id)arg1 ;
-(void)cancelInteractiveMovement;
-(void)endInteractiveMovement;
-(id)accessibilityElementForRow:(unsigned long long)arg1 andColumn:(unsigned long long)arg2 ;
-(BOOL)_accessibilityKeyCommandsShouldOverrideKeyCommands;
-(BOOL)_accessibilityShouldAvoidScrollingCollectionViewCells;
-(BOOL)_accessibilityDescendantElementAtIndexPathIsValid:(id)arg1 ;
-(unsigned long long)_accessibilityAutomationType;
-(void)dealloc;
-(BOOL)accessibilityCollectionViewBehavesLikeUIViewAccessibility;
-(id)_accessibilityIndexPathOfDirectSubviewForDescendantElement:(id)arg1 withElementKind:(id*)arg2 ;
-(void)_axSetShouldIgnorePromiseRegions:(BOOL)arg1 ;
-(void)setAccessibilityShouldBypassCollectionViewAccessibility:(BOOL)arg1 ;
-(id)accessibilityCellForRowAtIndexPath:(id)arg1 ;
-(void)setAccessibilityShouldSpeakItemReorderEvents:(BOOL)arg1 ;
-(id)_axSpeakItemReorderEvents;
-(BOOL)_axIsReorderingItems;
-(void)_axSetSpeakItemReorderEvents:(id)arg1 ;
-(void)_accessibilityInitializeInternalData:(id)arg1 ;
-(void)_resetAXData;
-(void)_axSetIsReorderingItems:(BOOL)arg1 ;
-(BOOL)accessibilityShouldSpeakItemReorderEvents;
-(void)_axHandleReusedView:(id)arg1 ;
-(id)accessibilityCollectionCellElementForIndexPath:(id)arg1 ;
-(BOOL)_accessibilityShouldUseCollectionViewCellAccessibilityElements;
-(BOOL)_accessibilityShouldDisableCellReuse;
-(id)accessibilityCreatePrepareCellForIndexPath:(id)arg1 ;
-(id)_accessibilityFuzzyHitTest:(CGPoint*)arg1 withEvent:(id)arg2 ;
-(long long)_axGlobalRowForIndexPath:(id)arg1 ;
-(BOOL)_accessibilityOverridesContainerProtocol;
-(id)_accessibilityOtherCollectionViewItems;
-(id)_axIndexPathForGlobalRow:(long long)arg1 ;
-(id)_accessibilityScannerGroupElementsGroupedByRow;
-(id)_accessibilitySortedViewChildrenWithOptions:(id)arg1 ;
-(void)_accessibilityEnsureViewsAroundAreLoaded;
-(id)_axIndexBar;
-(CGRect)_accessibilityBoundsOfCellsToLoad;
-(id)_accessibilityCollectionViewSupplementaryViews;
-(BOOL)_axGetShouldIgnorePromiseRegions;
@end


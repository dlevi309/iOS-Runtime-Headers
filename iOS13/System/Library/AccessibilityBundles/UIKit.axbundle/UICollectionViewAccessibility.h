/*
* Generated on Monday, March 1, 2021 at 2:35:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UICollectionViewAccessibility_super.h>

@interface UICollectionViewAccessibility : __UICollectionViewAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(void)dealloc;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(long long)accessibilityContainerType;
-(id)preferredFocusedView;
-(BOOL)canBecomeFocused;
-(void)reloadData;
-(CGRect)_visibleBounds;
-(void)insertSections:(id)arg1 ;
-(void)insertItemsAtIndexPaths:(id)arg1 ;
-(void)reloadSections:(id)arg1 ;
-(void)reloadItemsAtIndexPaths:(id)arg1 ;
-(void)deleteSections:(id)arg1 ;
-(void)deleteItemsAtIndexPaths:(id)arg1 ;
-(void)moveSection:(long long)arg1 toSection:(long long)arg2 ;
-(BOOL)beginInteractiveMovementForItemAtIndexPath:(id)arg1 ;
-(void)cancelInteractiveMovement;
-(void)endInteractiveMovement;
-(void)_reuseSupplementaryView:(id)arg1 ;
-(BOOL)_reuseCell:(id)arg1 notifyDidEndDisplaying:(BOOL)arg2 ;
-(id)_dequeueReusableViewOfKind:(id)arg1 withIdentifier:(id)arg2 forIndexPath:(id)arg3 viewCategory:(unsigned long long)arg4 ;
-(void)_moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(id)accessibilityElementForRow:(unsigned long long)arg1 andColumn:(unsigned long long)arg2 ;
-(id)_accessibilitySortedElementsWithin;
-(unsigned long long)_accessibilityAutomationType;
-(BOOL)isAccessibilityOpaqueElementProvider;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_accessibilitySpeakThisShouldOnlyIncludeVisibleElements;
-(id)_accessibilityScannerGroupElements;
-(BOOL)_accessibilityHasOrderedChildren;
-(unsigned long long)_accessibilityScanningBehaviorTraits;
-(id)_accessibilityGroupIdentifier;
-(id)_accessibilitySupplementaryHeaderViews;
-(id)_accessibilitySupplementaryFooterViews;
-(id)_accessibilityUserTestingVisibleCells;
-(BOOL)_accessibilityShouldIncludeArrowKeyCommandsForDirectionalFocusMovement;
-(BOOL)_accessibilityDrawsFocusRingWhenChildrenFocused;
-(BOOL)_accessibilityOpaqueElementScrollsContentIntoView;
-(BOOL)_accessibilityKeyCommandsShouldOverrideKeyCommands;
-(BOOL)_accessibilityShouldAvoidScrollingCollectionViewCells;
-(BOOL)_accessibilityDescendantElementAtIndexPathIsValid:(id)arg1 ;
-(id)_accessibilitySupplementaryHeaderViewAtIndexPath:(id)arg1 ;
-(id)_accessibilityReusableViewForOpaqueElement:(id)arg1 ;
-(BOOL)_accessibilityShouldDisableCellReuse;
-(id)_accessibilityFuzzyHitTest:(CGPoint*)arg1 withEvent:(id)arg2 ;
-(id)accessibilityCellForRowAtIndexPath:(id)arg1 ;
-(void)setAccessibilityShouldSpeakItemReorderEvents:(BOOL)arg1 ;
-(BOOL)accessibilityCollectionViewBehavesLikeUIViewAccessibility;
-(void)_accessibilityInitializeInternalData:(id)arg1 ;
-(void)_resetAXData;
-(BOOL)accessibilityShouldSpeakItemReorderEvents;
-(void)_axHandleReusedView:(id)arg1 ;
-(id)accessibilityCollectionCellElementForIndexPath:(id)arg1 ;
-(BOOL)_accessibilityShouldUseCollectionViewCellAccessibilityElements;
-(id)accessibilityCreatePrepareCellForIndexPath:(id)arg1 ;
-(id)axData;
-(long long)_axGlobalRowForIndexPath:(id)arg1 ;
-(BOOL)_accessibilityOverridesContainerProtocol;
-(id)_accessibilityOtherCollectionViewItems;
-(id)_axIndexPathForGlobalRow:(long long)arg1 ;
-(id)_accessibilityScannerGroupElementsGroupedByRow;
-(id)_accessibilityIndexPathOfDirectSubviewForDescendantElement:(id)arg1 withElementKind:(id*)arg2 ;
-(void)_accessibilityEnsureViewsAroundAreLoaded;
-(id)_axIndexBar;
-(CGRect)_accessibilityBoundsOfCellsToLoad;
-(id)_accessibilityCollectionViewSupplementaryViews;
-(void)setAccessibilityShouldBypassColletionViewAccessibility:(BOOL)arg1 ;
@end


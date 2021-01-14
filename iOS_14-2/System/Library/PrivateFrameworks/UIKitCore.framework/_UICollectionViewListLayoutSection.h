/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/NSCollectionLayoutSection.h>
#import <UIKitCore/_UICollectionLayoutSectionCallback.h>

@protocol NSCollectionLayoutEnvironment_Private;
@class _UICollectionViewListLayoutSectionConfiguration, NSString;

@interface _UICollectionViewListLayoutSection : NSCollectionLayoutSection <_UICollectionLayoutSectionCallback> {

	_UICollectionViewListLayoutSectionConfiguration* _configuration;
	id<NSCollectionLayoutEnvironment_Private> _layoutEnvironment;

}

@property (getter=_layoutEnvironment,nonatomic,readonly) id<NSCollectionLayoutEnvironment_Private> layoutEnvironment;              //@synthesize layoutEnvironment=_layoutEnvironment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_effectiveBackgroundColor;
-(id)_trailingSwipeActionsConfigurationForIndexPath:(id)arg1 ;
-(id)_leadingSwipeActionsConfigurationForIndexPath:(id)arg1 ;
-(void)_didEndSwiping;
-(void)_willBeginSwiping;
-(BOOL)_wantsSwipeActions;
-(id)_constants;
-(double)_alignedContentMarginGivenMargin:(double)arg1 ;
-(BOOL)_isRTL;
-(void)_configureLayoutAttributesWithDefaultMasking:(id)arg1 ;
-(void)_enrichPreferredLayoutAttributes:(id)arg1 interactionState:(id)arg2 ;
-(BOOL)_shouldHideTopSeparatorAtIndexPath:(id)arg1 interactionState:(id)arg2 ;
-(void)_configureLayoutAttributesForSwipeActionMasking:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 layoutEnvironment:(id)arg2 ;
-(void)_enrichLayoutAttributes:(id)arg1 interactionState:(id)arg2 ;
-(BOOL)_adjustsLayoutToMergeWithBarInSection:(long long)arg1 interactionState:(id)arg2 ;
-(void)_updateStyleForSwipeActionsConfiguration:(id)arg1 ;
-(void)_configureLayoutAttributesForPlainCell:(id)arg1 ;
-(void)_configureLayoutAttributesForSidebarPlainCell:(id)arg1 ;
-(id)_invalidationContextForBackgroundChangeAtIndexPath:(id)arg1 interactionState:(id)arg2 ;
-(id)_preferredSizingCustomizationsForItemWithLayoutAttributes:(id)arg1 interactionState:(id)arg2 ;
-(unsigned long long)_maskedCornersForBackgroundOfItemWithSelectionGrouping:(unsigned long long)arg1 ;
-(BOOL)_hasHeaderFooterBelowLastItemInSection:(long long)arg1 interactionState:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 ;
-(BOOL)_shouldHideBottomSeparatorAtIndexPath:(id)arg1 forGrouping:(unsigned long long)arg2 interactionState:(id)arg3 ;
-(BOOL)__isLastSection:(long long)arg1 ;
-(id)_layoutEnvironment;
-(BOOL)__shouldDrawSeparatorAtBottom:(BOOL)arg1 ofSection:(long long)arg2 interactionState:(id)arg3 ;
-(NSDirectionalEdgeInsets)_effectiveSectionHorizontalInsets;
-(void)_configureLayoutAttributesForBackgroundDecoration:(id)arg1 ;
-(BOOL)_hasHorizontalInsets;
-(NSDirectionalEdgeInsets)_sectionPreferredDirectionalSeparatorInsetsForIndexPath:(id)arg1 ;
-(void)_configureLayoutAttributesWithInsetGroupedMasking:(id)arg1 stylesFirstItemAsHeader:(BOOL)arg2 ;
-(BOOL)shouldRestrictOrthogonalAxisDuringInteractiveMovement;
-(id)_callback;
-(NSDirectionalEdgeInsets)_effectiveBoundarySeparatorInsetsFromConfiguration:(id)arg1 ;
-(UIEdgeInsets)_defaultLayoutMarginsInsideSection;
-(NSDirectionalEdgeInsets)_defaultDirectionalLayoutMarginsInsideSection;
-(NSDirectionalEdgeInsets)_preferredSeparatorInsetsFromCellLayoutAttributes:(id)arg1 ;
-(UIEdgeInsets)_effectiveCollectionViewLayoutMarginsForAppearanceStyle:(long long)arg1 forUseAsContentInsets:(BOOL)arg2 ;
-(NSDirectionalEdgeInsets)_defaultSectionContentInsetsForAppearanceStyle:(long long)arg1 ;
-(BOOL)_useRoundedSwipeActions;
-(BOOL)prefersListSolver;
-(BOOL)__isLastItemInSection:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_configureLayoutAttributes:(id)arg1 forSeparatorAtBottom:(BOOL)arg2 interactionState:(id)arg3 ;
@end


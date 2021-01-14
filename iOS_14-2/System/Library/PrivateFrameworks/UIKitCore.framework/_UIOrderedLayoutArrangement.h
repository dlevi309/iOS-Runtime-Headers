/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UILayoutArrangement.h>
#import <UIKitCore/_UIOLAPropertySource.h>

@class NSMapTable, NSSet, NSString;

@interface _UIOrderedLayoutArrangement : _UILayoutArrangement <_UIOLAPropertySource> {

	NSMapTable* _spacingOrCenteringGuides;
	NSMapTable* _edgeToEdgeConstraintsForVisibleItems;
	NSMapTable* _edgeToEdgeConstraintsForHiddenItems;
	NSMapTable* _relatedDimensionConstraints;
	NSMapTable* _hidingDimensionConstraints;
	NSMapTable* _multilineTextWidthDisambiguationConstraints;
	NSMapTable* _customSpacings;
	double _proportionalFillDenominator;
	BOOL _itemOrderingChanged;
	BOOL _itemFittingSizeChanged;
	BOOL _baselineRelativeArrangement;
	double _spacing;
	long long _distribution;

}

@property (assign,nonatomic) double spacing;                                                                     //@synthesize spacing=_spacing - In the implementation block
@property (assign,getter=isBaselineRelativeArrangement,nonatomic) BOOL baselineRelativeArrangement;              //@synthesize baselineRelativeArrangement=_baselineRelativeArrangement - In the implementation block
@property (assign,nonatomic) long long distribution;                                                             //@synthesize distribution=_distribution - In the implementation block
@property (assign,setter=_setItemOrderingChanged:,nonatomic) BOOL _itemOrderingChanged;                          //@synthesize itemOrderingChanged=_itemOrderingChanged - In the implementation block
@property (assign,setter=_setItemFittingSizeChanged:,nonatomic) BOOL _itemFittingSizeChanged;                    //@synthesize itemFittingSizeChanged=_itemFittingSizeChanged - In the implementation block
@property (nonatomic,readonly) NSMapTable * customSpacings;                                                      //@synthesize customSpacings=_customSpacings - In the implementation block
@property (assign,nonatomic) long long axis; 
@property (assign,nonatomic) BOOL layoutFillsCanvas; 
@property (assign,nonatomic) BOOL layoutUsesCanvasMarginsWhenFilling; 
@property (nonatomic,readonly) NSSet * _newlyHiddenItems; 
@property (nonatomic,readonly) NSSet * _newlyUnhiddenItems; 
@property (nonatomic,readonly) NSSet * invalidBaselineConstraints; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)_configurationHistoryClass;
-(void)setDistribution:(long long)arg1 ;
-(long long)distribution;
-(void)removeItem:(id)arg1 ;
-(double)spacing;
-(void)setSpacing:(double)arg1 ;
-(void)setLayoutFillsCanvas:(BOOL)arg1 ;
-(BOOL)isBaselineRelativeArrangement;
-(void)setAxis:(long long)arg1 ;
-(void)setLayoutUsesCanvasMarginsWhenFilling:(BOOL)arg1 ;
-(void)_updateArrangementConstraints;
-(void)_notifyCanvasesBaselineParametersDidChange;
-(void)_intrinsicContentSizeInvalidatedForItem:(id)arg1 ;
-(id)_baselineViewVendTallest:(BOOL)arg1 forFirstBaseline:(BOOL)arg2 ;
-(void)_insertIndividualGuidesAndConstraintsAsNecessary;
-(BOOL)_hasStaleConfiguration;
-(id)_orderedConfigurationHistory;
-(double)_calculatedIntrinsicHeight;
-(void)_adjustConstraintConstantsIfPossible;
-(void)insertItem:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_setUpMultilineTextWidthDisambiguationConstraintForItem:(id)arg1 ;
-(void)_cleanUpGuideAtGapFollowingItem:(id)arg1 ;
-(long long)_precedingLocationAttributeForGuideConstraint;
-(id)_lastVisibleItem;
-(NSMapTable *)customSpacings;
-(void)_clearAllConstraintsArrays;
-(void)_cleanUpGuides;
-(BOOL)_hasStaleSpacing;
-(id)_dimensionRefItemFromConstraint:(id)arg1 ;
-(void)_setUpDimensionConstraintForItem:(id)arg1 referenceItem:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(id)_identifierForSpanningLayoutGuide;
-(BOOL)_configurationRequiresCanvasConnectionFittingConstraint;
-(void)_didEvaluateMultilineHeightForView:(id)arg1 ;
-(id)_setUpSpacingOrCenteringGuideForGapIndex:(unsigned long long)arg1 ;
-(void)setBaselineRelativeArrangement:(BOOL)arg1 ;
-(unsigned long long)_indexOfItemForLocationAttribute:(long long)arg1 ;
-(double)_constantForMultilineTextWidthDisambiguationConstraintWithNumberOfVisibleItems:(unsigned long long)arg1 ;
-(void)_setItemFittingSizeChanged:(BOOL)arg1 ;
-(id)_edgeToEdgeConstraintForGapBetweenPrecedingItem:(id)arg1 followingItem:(id)arg2 isPrecededByVisibleItem:(BOOL)arg3 isFollowedByVisibleItem:(BOOL)arg4 ;
-(void)_cleanUpWithoutResettingKeepAliveWorkaround;
-(void)_activateAndInsertEdgeToEdgeConstraintForGapBetweenSpanningLayoutGuide:(id)arg1 hiddenItem:(id)arg2 ;
-(id)_firstVisibleItem;
-(BOOL)_customSpacingChanged;
-(double)customSpacingAfterItem:(id)arg1 ;
-(void)_setUpHidingDimensionConstraintForItem:(id)arg1 ;
-(long long)_maxAttributeForGapConstraintRespectingBaselineRelative:(BOOL)arg1 ;
-(BOOL)_itemOrderingChanged;
-(double)_expectedEdgeToEdgeSpacingForPrecedingItem:(id)arg1 followingItem:(id)arg2 isPrecededByVisibleItem:(BOOL)arg3 isFollowedByVisibleItem:(BOOL)arg4 ;
-(void)_systemLayoutFittingSizeDidChangeForItem:(id)arg1 ;
-(BOOL)_itemCountChanged;
-(long long)_minAttributeForGapConstraintRespectingBaselineRelative:(BOOL)arg1 ;
-(void)_visibilityParameterChangedForItem:(id)arg1 ;
-(id)_visibleItemAtEndWithEnumerationOptions:(unsigned long long)arg1 ;
-(void)_removeIndividualGuidesAndConstraintsAsNecessary;
-(void)_cleanUpEdgeToEdgeConstraintsForVisibleItemsForItem:(id)arg1 atIndex:(unsigned long long)arg2 processPrecedingVisisbleItem:(BOOL)arg3 ;
-(BOOL)_itemFittingSizeChanged;
-(BOOL)_canvasConnectionConstraintsNeedUpdatePass;
-(void)setCustomSpacing:(double)arg1 afterItem:(id)arg2 ;
-(void)_activateAndInsertEdgeToEdgeConstraintForGapBetweenPrecedingItem:(id)arg1 followingItem:(id)arg2 isPrecededByVisibleItem:(BOOL)arg3 isFollowedByVisibleItem:(BOOL)arg4 isHidden:(BOOL)arg5 ;
-(id)_tallestItem;
-(long long)_minAttributeForGapConstraint;
-(BOOL)_monitorsSystemLayoutFittingSizeForItem:(id)arg1 ;
-(void)_updateConfigurationHistory;
-(void)_setItemOrderingChanged:(BOOL)arg1 ;
-(BOOL)_wantsProportionalDistribution;
-(void)_cleanUpEdgeToEdgeConstraintsForHiddenItemsForItem:(id)arg1 atIndex:(unsigned long long)arg2 processAdjacentHiddenItems:(BOOL)arg3 ;
-(void)_removeGuideAndConstraintGroupsAsNecessary;
-(id)_orderedPropertySource;
-(void)_trackChangesAffectingExternalBaselineConstraints:(/*^block*/id)arg1 ;
@end


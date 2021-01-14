/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>

@class NSPointerArray, NSMutableArray, NSMutableOrderedSet, NSMutableDictionary, NSMutableIndexSet, NSMutableSet, NSIndexPath, NSArray, GKCollectionViewDataSource, GKCollectionViewLayoutAttributes, NSSet, GKSectionMetrics, GKDataSourceMetrics;

@interface GKGridLayout : UICollectionViewLayout {

	BOOL _showPlaceholder;
	BOOL _hideSearchBarOnAppear;
	BOOL _hideAboveSegmentOnAppear;
	BOOL _ignoreBoundsForSizeCalculation;
	BOOL _noMoreShowMore;
	BOOL _movedItemsInUpdateCarrySections;
	BOOL _displayClipView;
	BOOL _displayingOverlay;
	BOOL _shouldLayoutRTL;
	unsigned long long _portraitInterleavedSectionsCount;
	unsigned long long _landscapeInterleavedSectionsCount;
	double _leftLayoutGuideOffset;
	double _rightLayoutGuideOffset;
	double _bottomContentPadding;
	NSPointerArray* _sectionToPresentationData;
	NSPointerArray* _sectionToMetricData;
	NSMutableArray* _laidOutAttributes;
	NSMutableOrderedSet* _laidOutPinnableAttributes;
	NSMutableDictionary* _indexPathToSupplementary;
	NSMutableDictionary* _indexPathToDecoration;
	NSMutableDictionary* _indexPathToItem;
	NSMutableDictionary* _oldIndexPathToSupplementary;
	NSMutableDictionary* _oldIndexPathToDecoration;
	NSMutableDictionary* _oldIndexPathToItem;
	NSMutableDictionary* _indexPathToMetrics;
	NSMutableIndexSet* _sectionsWithPinnedHeaders;
	NSMutableSet* _revealedIndexPaths;
	NSIndexPath* _indexPathOfTouchedShowMore;
	NSMutableDictionary* _keyToMetricData;
	NSMutableDictionary* _oldSectionToMetricKeys;
	long long _metricsInvalidationCount;
	NSArray* _currentUpdateItems;
	NSMutableSet* _knownSupplementaryKinds;
	GKCollectionViewDataSource* _dataSourceForUpdate;
	unsigned long long _updateType;
	GKCollectionViewLayoutAttributes* _clipViewAttributes;
	unsigned long long _invalidationFlags;
	double _segmentedBoxY;
	NSSet* _visibleIndexPathsFilter;
	GKSectionMetrics* _defaultSectionMetricsInternal;
	GKDataSourceMetrics* _dataSourceMetrics;
	double _hiddenSearchBarOffset;
	double _segmentedHeaderPinningOffset;
	CGSize _laidOutContentSize;
	CGSize _minimumLaidOutContentSize;
	CGSize _oldLaidOutContentSize;

}

@property (nonatomic,retain) NSPointerArray * sectionToPresentationData;                         //@synthesize sectionToPresentationData=_sectionToPresentationData - In the implementation block
@property (nonatomic,retain) NSPointerArray * sectionToMetricData;                               //@synthesize sectionToMetricData=_sectionToMetricData - In the implementation block
@property (nonatomic,retain) NSMutableArray * laidOutAttributes;                                 //@synthesize laidOutAttributes=_laidOutAttributes - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * laidOutPinnableAttributes;                    //@synthesize laidOutPinnableAttributes=_laidOutPinnableAttributes - In the implementation block
@property (assign,nonatomic) CGSize laidOutContentSize;                                          //@synthesize laidOutContentSize=_laidOutContentSize - In the implementation block
@property (assign,nonatomic) CGSize oldLaidOutContentSize;                                       //@synthesize oldLaidOutContentSize=_oldLaidOutContentSize - In the implementation block
@property (assign,nonatomic) CGSize minimumLaidOutContentSize;                                   //@synthesize minimumLaidOutContentSize=_minimumLaidOutContentSize - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * indexPathToSupplementary;                     //@synthesize indexPathToSupplementary=_indexPathToSupplementary - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * indexPathToDecoration;                        //@synthesize indexPathToDecoration=_indexPathToDecoration - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * indexPathToItem;                              //@synthesize indexPathToItem=_indexPathToItem - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * oldIndexPathToSupplementary;                  //@synthesize oldIndexPathToSupplementary=_oldIndexPathToSupplementary - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * oldIndexPathToDecoration;                     //@synthesize oldIndexPathToDecoration=_oldIndexPathToDecoration - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * oldIndexPathToItem;                           //@synthesize oldIndexPathToItem=_oldIndexPathToItem - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * indexPathToMetrics;                           //@synthesize indexPathToMetrics=_indexPathToMetrics - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * sectionsWithPinnedHeaders;                      //@synthesize sectionsWithPinnedHeaders=_sectionsWithPinnedHeaders - In the implementation block
@property (nonatomic,retain) NSMutableSet * revealedIndexPaths;                                  //@synthesize revealedIndexPaths=_revealedIndexPaths - In the implementation block
@property (nonatomic,retain) NSIndexPath * indexPathOfTouchedShowMore;                           //@synthesize indexPathOfTouchedShowMore=_indexPathOfTouchedShowMore - In the implementation block
@property (assign,nonatomic) BOOL noMoreShowMore;                                                //@synthesize noMoreShowMore=_noMoreShowMore - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * keyToMetricData;                              //@synthesize keyToMetricData=_keyToMetricData - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * oldSectionToMetricKeys;                       //@synthesize oldSectionToMetricKeys=_oldSectionToMetricKeys - In the implementation block
@property (assign,nonatomic) long long metricsInvalidationCount;                                 //@synthesize metricsInvalidationCount=_metricsInvalidationCount - In the implementation block
@property (nonatomic,retain) NSArray * currentUpdateItems;                                       //@synthesize currentUpdateItems=_currentUpdateItems - In the implementation block
@property (nonatomic,retain) NSMutableSet * knownSupplementaryKinds;                             //@synthesize knownSupplementaryKinds=_knownSupplementaryKinds - In the implementation block
@property (nonatomic,retain) GKCollectionViewDataSource * dataSourceForUpdate;                   //@synthesize dataSourceForUpdate=_dataSourceForUpdate - In the implementation block
@property (assign,nonatomic) unsigned long long updateType;                                      //@synthesize updateType=_updateType - In the implementation block
@property (assign,nonatomic) BOOL movedItemsInUpdateCarrySections;                               //@synthesize movedItemsInUpdateCarrySections=_movedItemsInUpdateCarrySections - In the implementation block
@property (assign,nonatomic) BOOL displayClipView;                                               //@synthesize displayClipView=_displayClipView - In the implementation block
@property (nonatomic,retain) GKCollectionViewLayoutAttributes * clipViewAttributes;              //@synthesize clipViewAttributes=_clipViewAttributes - In the implementation block
@property (assign,nonatomic) unsigned long long invalidationFlags;                               //@synthesize invalidationFlags=_invalidationFlags - In the implementation block
@property (assign,nonatomic) BOOL displayingOverlay;                                             //@synthesize displayingOverlay=_displayingOverlay - In the implementation block
@property (assign,nonatomic) double segmentedBoxY;                                               //@synthesize segmentedBoxY=_segmentedBoxY - In the implementation block
@property (assign,nonatomic) BOOL shouldLayoutRTL;                                               //@synthesize shouldLayoutRTL=_shouldLayoutRTL - In the implementation block
@property (nonatomic,retain) NSSet * visibleIndexPathsFilter;                                    //@synthesize visibleIndexPathsFilter=_visibleIndexPathsFilter - In the implementation block
@property (nonatomic,retain) GKSectionMetrics * defaultSectionMetricsInternal;                   //@synthesize defaultSectionMetricsInternal=_defaultSectionMetricsInternal - In the implementation block
@property (nonatomic,retain) GKDataSourceMetrics * dataSourceMetrics;                            //@synthesize dataSourceMetrics=_dataSourceMetrics - In the implementation block
@property (assign,nonatomic) double hiddenSearchBarOffset;                                       //@synthesize hiddenSearchBarOffset=_hiddenSearchBarOffset - In the implementation block
@property (assign,nonatomic) double segmentedHeaderPinningOffset;                                //@synthesize segmentedHeaderPinningOffset=_segmentedHeaderPinningOffset - In the implementation block
@property (assign,nonatomic) BOOL showPlaceholder;                                               //@synthesize showPlaceholder=_showPlaceholder - In the implementation block
@property (assign,nonatomic) unsigned long long portraitInterleavedSectionsCount;                //@synthesize portraitInterleavedSectionsCount=_portraitInterleavedSectionsCount - In the implementation block
@property (assign,nonatomic) unsigned long long landscapeInterleavedSectionsCount;               //@synthesize landscapeInterleavedSectionsCount=_landscapeInterleavedSectionsCount - In the implementation block
@property (assign,nonatomic) double leftLayoutGuideOffset;                                       //@synthesize leftLayoutGuideOffset=_leftLayoutGuideOffset - In the implementation block
@property (assign,nonatomic) double rightLayoutGuideOffset;                                      //@synthesize rightLayoutGuideOffset=_rightLayoutGuideOffset - In the implementation block
@property (assign,nonatomic) BOOL hideSearchBarOnAppear;                                         //@synthesize hideSearchBarOnAppear=_hideSearchBarOnAppear - In the implementation block
@property (assign,nonatomic) BOOL hideAboveSegmentOnAppear;                                      //@synthesize hideAboveSegmentOnAppear=_hideAboveSegmentOnAppear - In the implementation block
@property (assign,nonatomic) double bottomContentPadding;                                        //@synthesize bottomContentPadding=_bottomContentPadding - In the implementation block
@property (assign,nonatomic) BOOL ignoreBoundsForSizeCalculation;                                //@synthesize ignoreBoundsForSizeCalculation=_ignoreBoundsForSizeCalculation - In the implementation block
+(Class)layoutAttributesClass;
+(Class)invalidationContextClass;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(void)finalizeCollectionViewUpdates;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)prepareLayout;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)init;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(id)metricDataForSection:(long long)arg1 ;
-(unsigned long long)filteredTotalItemCountForSection:(long long)arg1 ;
-(void)refreshMetrics;
-(double)scale;
-(/*^block*/id)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned long long)arg3 ;
-(BOOL)showPlaceholder;
-(void)setDefaultSectionMetricsInternal:(GKSectionMetrics *)arg1 ;
-(CGSize)_sizeAdjustedForTabBarSettingsBasedOnSize:(CGSize)arg1 ;
-(void)_filterPinnedAttributes;
-(id)metricsForSection:(long long)arg1 ;
-(long long)indexOfSupplementaryMetricsOfKind:(id)arg1 inList:(id)arg2 ;
-(unsigned long long)sectionsPerRow;
-(id)presentationDataForSection:(long long)arg1 ;
-(double)segmentedBoxY;
-(double)calculatedBottomPaddingForSection:(long long)arg1 ;
-(id)_existingPresentationDataForSection:(long long)arg1 ;
-(BOOL)_areWePortrait;
-(NSMutableIndexSet *)sectionsWithPinnedHeaders;
-(double)yOffsetForSection:(long long)arg1 ;
-(double)leftLayoutGuideOffset;
-(double)rightLayoutGuideOffset;
-(void)setClipViewAttributes:(GKCollectionViewLayoutAttributes *)arg1 ;
-(void)fullyRebuildLayout;
-(void)updatePresentationDataInSection:(long long)arg1 withAttributes:(id)arg2 supplementaryLocation:(unsigned long long)arg3 ;
-(id)firstVisibleIndexAtOrAfterItem:(long long)arg1 itemCount:(long long)arg2 inSection:(long long)arg3 ;
-(long long)_prepareSupplementaryLayoutForSection:(long long)arg1 atLocation:(unsigned long long)arg2 offset:(long long)arg3 globalOffset:(long long*)arg4 ;
-(long long)_prepareOverlayLayoutForSection:(long long)arg1 offset:(long long)arg2 ;
-(unsigned long long)_prepareItemLayoutForSection:(long long)arg1 ;
-(void)enableClipView;
-(void)updatePresentationDataForLastInterleavedSections;
-(void)finalizeGlobalPresentationDataWithSectionRange:(NSRange)arg1 ;
-(void)calculateCollectionViewContentSize;
-(void)_prepareSegmentedBoxLayoutWithOffset:(long long)arg1 ;
-(double)applyBottomPinningToAttributes:(id)arg1 minY:(double)arg2 maxY:(double)arg3 ;
-(double)applyTopPinningToAttributes:(id)arg1 minY:(double)arg2 maxY:(double)arg3 ;
-(double)layoutTopPinningAttributes:(id)arg1 minY:(double)arg2 maxY:(double)arg3 ;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(void)updatePlaceholderVisibility;
-(void)finalizePinnedAttributes:(id)arg1 forSection:(long long)arg2 footer:(BOOL)arg3 ;
-(double)layoutBottomPinningAttributes:(id)arg1 minY:(double)arg2 maxY:(double)arg3 ;
-(void)enumerateSectionsIndexesOverlappingYOffset:(double)arg1 block:(/*^block*/id)arg2 ;
-(id)revealMoreForSectionIndex:(long long)arg1 revealCount:(unsigned long long)arg2 andDeleteItemCount:(unsigned long long)arg3 ;
-(void)setIndexPathOfTouchedShowMore:(NSIndexPath *)arg1 ;
-(void)setRevealedIndexPaths:(NSMutableSet *)arg1 ;
-(id)metricDataForKey:(id)arg1 ;
-(unsigned long long)updateType;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 ;
-(double)yOffsetForSlidingUpdate;
-(id)initialLayoutAttributesForSlidingInItemAtIndexPath:(id)arg1 ;
-(id)finalLayoutAttributesForSlidingAwayItemAtIndexPath:(id)arg1 ;
-(BOOL)shouldSlideInSupplementaryElementOfKind:(id)arg1 forUpdateItem:(id)arg2 atIndexPath:(id)arg3 ;
-(BOOL)shouldSlideOutSupplementaryElementOfKind:(id)arg1 forUpdateItem:(id)arg2 atIndexPath:(id)arg3 ;
-(void)setCurrentUpdateItems:(NSArray *)arg1 ;
-(void)prepareForAnimatedBoundsChange:(CGRect)arg1 ;
-(void)finalizeAnimatedBoundsChange;
-(void)setDataSourceForUpdate:(GKCollectionViewDataSource *)arg1 ;
-(void)setMovedItemsInUpdateCarrySections:(BOOL)arg1 ;
-(void)prepareForUpdate:(unsigned long long)arg1 inDataSource:(id)arg2 ;
-(void)setMetricData:(id)arg1 forSection:(long long)arg2 ;
-(id)attributesForSupplementaryIndexPath:(id)arg1 ;
-(void)setPortraitInterleavedSectionsCount:(unsigned long long)arg1 ;
-(void)setLandscapeInterleavedSectionsCount:(unsigned long long)arg1 ;
-(GKSectionMetrics *)defaultSectionMetricsInternal;
-(void)setVisibleIndexPathsFilter:(NSSet *)arg1 ;
-(void)setLeftLayoutGuideOffset:(double)arg1 ;
-(void)setRightLayoutGuideOffset:(double)arg1 ;
-(void)updatePinnableAreas;
-(void)disableClipView;
-(BOOL)shouldUpdateVisibleCellLayoutAttributes;
-(void)forceFullInvalidate;
-(unsigned long long)currentMaxVisibleItemCountForSection:(long long)arg1 ;
-(id)revealMoreForSectionIndex:(long long)arg1 ;
-(void)prepareForMovingItemsCarryingSections;
-(unsigned long long)portraitInterleavedSectionsCount;
-(unsigned long long)landscapeInterleavedSectionsCount;
-(BOOL)hideSearchBarOnAppear;
-(void)setHideSearchBarOnAppear:(BOOL)arg1 ;
-(BOOL)hideAboveSegmentOnAppear;
-(void)setHideAboveSegmentOnAppear:(BOOL)arg1 ;
-(CGSize)laidOutContentSize;
-(void)setLaidOutContentSize:(CGSize)arg1 ;
-(CGSize)minimumLaidOutContentSize;
-(void)setMinimumLaidOutContentSize:(CGSize)arg1 ;
-(void)setBottomContentPadding:(double)arg1 ;
-(BOOL)ignoreBoundsForSizeCalculation;
-(void)_resetState;
-(long long)searchResultsCount;
-(void)setIgnoreBoundsForSizeCalculation:(BOOL)arg1 ;
-(NSPointerArray *)sectionToPresentationData;
-(void)setSectionToPresentationData:(NSPointerArray *)arg1 ;
-(NSPointerArray *)sectionToMetricData;
-(void)setSectionToMetricData:(NSPointerArray *)arg1 ;
-(NSMutableArray *)laidOutAttributes;
-(void)setLaidOutAttributes:(NSMutableArray *)arg1 ;
-(NSMutableOrderedSet *)laidOutPinnableAttributes;
-(void)setLaidOutPinnableAttributes:(NSMutableOrderedSet *)arg1 ;
-(CGSize)oldLaidOutContentSize;
-(void)setOldLaidOutContentSize:(CGSize)arg1 ;
-(NSMutableDictionary *)indexPathToItem;
-(NSMutableDictionary *)indexPathToSupplementary;
-(void)setIndexPathToSupplementary:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)indexPathToDecoration;
-(void)setIndexPathToDecoration:(NSMutableDictionary *)arg1 ;
-(void)setIndexPathToItem:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)oldIndexPathToSupplementary;
-(void)setOldIndexPathToSupplementary:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)oldIndexPathToDecoration;
-(void)setOldIndexPathToDecoration:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)oldIndexPathToItem;
-(void)setOldIndexPathToItem:(NSMutableDictionary *)arg1 ;
-(BOOL)noMoreShowMore;
-(NSMutableDictionary *)indexPathToMetrics;
-(void)setIndexPathToMetrics:(NSMutableDictionary *)arg1 ;
-(void)setSectionsWithPinnedHeaders:(NSMutableIndexSet *)arg1 ;
-(NSMutableSet *)revealedIndexPaths;
-(NSIndexPath *)indexPathOfTouchedShowMore;
-(void)setNoMoreShowMore:(BOOL)arg1 ;
-(NSMutableDictionary *)keyToMetricData;
-(void)setKeyToMetricData:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)oldSectionToMetricKeys;
-(void)setOldSectionToMetricKeys:(NSMutableDictionary *)arg1 ;
-(long long)metricsInvalidationCount;
-(void)setMetricsInvalidationCount:(long long)arg1 ;
-(NSArray *)currentUpdateItems;
-(void)setUpdateType:(unsigned long long)arg1 ;
-(double)bottomContentPadding;
-(NSMutableSet *)knownSupplementaryKinds;
-(void)setKnownSupplementaryKinds:(NSMutableSet *)arg1 ;
-(GKCollectionViewDataSource *)dataSourceForUpdate;
-(BOOL)movedItemsInUpdateCarrySections;
-(BOOL)displayClipView;
-(void)setDisplayClipView:(BOOL)arg1 ;
-(GKCollectionViewLayoutAttributes *)clipViewAttributes;
-(unsigned long long)invalidationFlags;
-(void)setInvalidationFlags:(unsigned long long)arg1 ;
-(BOOL)displayingOverlay;
-(void)setDisplayingOverlay:(BOOL)arg1 ;
-(void)setSegmentedBoxY:(double)arg1 ;
-(BOOL)shouldLayoutRTL;
-(void)setShouldLayoutRTL:(BOOL)arg1 ;
-(void)setDataSourceMetrics:(GKDataSourceMetrics *)arg1 ;
-(id)_gkDescriptionWithChildren:(long long)arg1 ;
-(GKDataSourceMetrics *)dataSourceMetrics;
-(NSSet *)visibleIndexPathsFilter;
-(double)hiddenSearchBarOffset;
-(void)setHiddenSearchBarOffset:(double)arg1 ;
-(double)segmentedHeaderPinningOffset;
-(void)setSegmentedHeaderPinningOffset:(double)arg1 ;
-(void)setShowPlaceholder:(BOOL)arg1 ;
-(CGRect)layoutBounds;
-(void)prepareForCollectionViewUpdates:(id)arg1 ;
-(void)dealloc;
@end


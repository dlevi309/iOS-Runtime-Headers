/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGCompositeLayout.h>
#import <libobjc.A.dylib/PXAssetsDataSourceManagerObserver.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXGSublayoutProvider.h>
#import <libobjc.A.dylib/PXGSublayoutFaultingDelegate.h>
#import <libobjc.A.dylib/PXMonthsSublayoutProvider.h>
#import <libobjc.A.dylib/PXCuratedLibraryViewModelPresenter.h>
#import <libobjc.A.dylib/PXCuratedLibraryBodyLayout.h>

@class PXAssetsDataSource, NSMutableIndexSet, NSIndexSet, PXCuratedLibraryLayoutSpec, PXCuratedLibraryViewModel, PXGSpriteReference, PXAssetsSectionLayout, NSString;

@interface PXCuratedLibrarySectionedLayout : PXGCompositeLayout <PXAssetsDataSourceManagerObserver, PXChangeObserver, PXGSublayoutProvider, PXGSublayoutFaultingDelegate, PXMonthsSublayoutProvider, PXCuratedLibraryViewModelPresenter, PXCuratedLibraryBodyLayout> {

	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	PXAssetsDataSource* _currentDataSource;
	long long _currentZoomLevel;
	NSMutableIndexSet* _zoomLevelsPreferringDominantHeros;
	long long* _accumulatedSectionItems;
	long long _accumulatedSectionItemsCount;
	BOOL _isUpdatingSublayouts;
	unsigned long long _dataSourceIdentifierOfCachedSectionsWithSelectedItems;
	NSIndexSet* _cachedSectionsWithSelectedItems;
	BOOL _isInitialLoad;
	BOOL _performedInitialLoad;
	PXCuratedLibraryLayoutSpec* _spec;
	PXCuratedLibraryViewModel* _viewModel;
	double _lateralMargin;
	id _lastVisibleDominantObjectReference;
	PXGSpriteReference* _lastHitSpriteReference;
	double _defaultInterlayoutSpacing;
	long long _presentedZoomLevel;
	PXAssetsDataSource* _presentedDataSource;
	UIEdgeInsets _padding;

}

@property (assign,nonatomic) BOOL isInitialLoad;                                           //@synthesize isInitialLoad=_isInitialLoad - In the implementation block
@property (assign,nonatomic) BOOL performedInitialLoad;                                    //@synthesize performedInitialLoad=_performedInitialLoad - In the implementation block
@property (nonatomic,readonly) double defaultInterlayoutSpacing;                           //@synthesize defaultInterlayoutSpacing=_defaultInterlayoutSpacing - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets padding;                                       //@synthesize padding=_padding - In the implementation block
@property (nonatomic,readonly) long long presentedZoomLevel;                               //@synthesize presentedZoomLevel=_presentedZoomLevel - In the implementation block
@property (nonatomic,readonly) PXAssetsDataSource * presentedDataSource;                   //@synthesize presentedDataSource=_presentedDataSource - In the implementation block
@property (nonatomic,readonly) PXCuratedLibraryViewModel * viewModel;                      //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,retain) PXCuratedLibraryLayoutSpec * spec;                            //@synthesize spec=_spec - In the implementation block
@property (assign,nonatomic) double lateralMargin;                                         //@synthesize lateralMargin=_lateralMargin - In the implementation block
@property (nonatomic,readonly) PXAssetsSectionLayout * dominantSectionLayout; 
@property (nonatomic,retain) id dominantHeroPreferences; 
@property (nonatomic,retain) id lastVisibleDominantObjectReference;                        //@synthesize lastVisibleDominantObjectReference=_lastVisibleDominantObjectReference - In the implementation block
@property (nonatomic,retain) PXGSpriteReference * lastHitSpriteReference;                  //@synthesize lastHitSpriteReference=_lastHitSpriteReference - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setShouldDisableLaunchOptimizations:(BOOL)arg1 ;
+(BOOL)shouldDisableLaunchOptimizations;
-(BOOL)isInitialLoad;
-(void)setSafeAreaInsets:(UIEdgeInsets)arg1 ;
-(/*^block*/id)dateIntervalFutureForContentInRect:(CGRect)arg1 type:(unsigned long long)arg2 ;
-(double)lateralMargin;
-(void)setIsInitialLoad:(BOOL)arg1 ;
-(CGRect)sectionBoundariesForAssetCollectionReference:(id)arg1 ;
-(void)setLateralMargin:(double)arg1 ;
-(void)clearLastVisibleAreaAnchoringInformation;
-(void)setSpec:(PXCuratedLibraryLayoutSpec *)arg1 ;
-(id)layout:(id)arg1 createSublayoutAtIndex:(long long)arg2 ;
-(/*^block*/id)locationNamesFutureForContentInRect:(CGRect)arg1 ;
-(PXAssetsDataSource *)presentedDataSource;
-(id)init;
-(void)_updatePreheating;
-(id)_targetAssetCollectionReferenceInZoomLevel:(long long)arg1 forTransitionFromAssetCollectionReference:(id)arg2 ;
-(id)dominantHeroPreferences;
-(long long)sublayoutIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id*)arg3 ;
-(CGSize)layout:(id)arg1 estimatedContentSizeForSublayoutAtIndex:(long long)arg2 referenceSize:(CGSize)arg3 ;
-(void)_anchorVisibleArea;
-(void)setLastVisibleDominantObjectReference:(id)arg1 ;
-(PXCuratedLibraryViewModel *)viewModel;
-(void)setLastHitSpriteReference:(PXGSpriteReference *)arg1 ;
-(void)enumerateVisibleAnchoringLayoutsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateHeroSpritesInRect:(CGRect)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)performedInitialLoad;
-(PXCuratedLibraryLayoutSpec *)spec;
-(void)enumerateAssetsSectionSublayoutsInRect:(CGRect)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateAssetsSectionSublayoutsUsingBlock:(/*^block*/id)arg1 ;
-(PXAssetsSectionLayout *)dominantSectionLayout;
-(void)update;
-(BOOL)prefersDominantHeroForZoomLevel:(long long)arg1 ;
-(void)didFaultInSublayout:(id)arg1 atIndex:(long long)arg2 fromEstimatedContentSize:(CGSize)arg3 ;
-(long long)presentedZoomLevel;
-(BOOL)layout:(id)arg1 shouldPreventFaultOutOfSublayout:(id)arg2 ;
-(PXGSpriteReference *)lastHitSpriteReference;
-(void)_updatePrefetchedSectionsForFaultedInSublayout:(id)arg1 ;
-(void)_updateSublayoutsForSkimming;
-(void)setDominantHeroPreferences:(id)arg1 ;
-(id)initWithViewModel:(id)arg1 spec:(id)arg2 ;
-(void)enumerateScrollablePagesWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)willFaultOutSublayout:(id)arg1 atIndex:(long long)arg2 ;
-(void)setPrefersDominantHero:(BOOL)arg1 forZoomLevel:(long long)arg2 ;
-(void)_configureSectionLayout:(id)arg1 atIndex:(long long)arg2 ;
-(id)viewModel:(id)arg1 dominantAssetCollectionReferenceForZoomLevel:(long long)arg2 ;
-(UIEdgeInsets)padding;
-(id)_heroSectionLayoutClosestToSectionLayout:(id)arg1 zoomLevel:(long long)arg2 ;
-(id)_heroAssetCollectionReferenceClosestToAssetCollectionReference:(id)arg1 zoomLevel:(long long)arg2 ;
-(void)_prepareAccumulatedSectionItemsBufferForSections:(long long)arg1 ;
-(void)_updateFaultOutsets;
-(void)enumerateSectionBoundariesWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)layout:(id)arg1 collectIndexesOfChapterHeaderSublayouts:(id)arg2 heroSublayouts:(id)arg3 inRange:(NSRange)arg4 ;
-(void)setPerformedInitialLoad:(BOOL)arg1 ;
-(id)lastVisibleDominantObjectReference;
-(double)defaultInterlayoutSpacing;
-(void)_updateSublayoutsDataSource;
-(void)dealloc;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end


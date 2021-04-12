/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGSplitLayout.h>
#import <libobjc.A.dylib/PXLibrarySummaryDataSource.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXAssetsDataSourceManagerObserver.h>
#import <libobjc.A.dylib/PXCuratedLibraryViewModelPresenter.h>
#import <libobjc.A.dylib/PXGNamedImageSource.h>
#import <libobjc.A.dylib/PXGAnchorDelegate.h>
#import <libobjc.A.dylib/PXSettingsKeyObserver.h>

@class PXCuratedLibrarySummaryHelper, NSMutableDictionary, PXGDiagnosticsSpriteProbe, PXNumberAnimator, PXCuratedLibrarySectionedLayout, PXZoomablePhotosLayout, PXCuratedLibrarySectionHeaderLayout, PXCuratedLibraryViewModel, PXGSpriteReference, PXAssetCollectionReference, PXCuratedLibraryLayoutSpec, PXSectionedObjectReference, NSString;

@interface PXCuratedLibraryLayout : PXGSplitLayout <PXLibrarySummaryDataSource, PXChangeObserver, PXAssetsDataSourceManagerObserver, PXCuratedLibraryViewModelPresenter, PXGNamedImageSource, PXGAnchorDelegate, PXSettingsKeyObserver> {

	PXCuratedLibrarySummaryHelper* _summaryHelper;
	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _postUpdateFlags;
	NSMutableDictionary* _lastVisibleAreaAnchorsByZoomLevels;
	NSMutableDictionary* _preferredVisibleAreaAnchorsByZoomLevels;
	PXGDiagnosticsSpriteProbe* _spriteProbe;
	BOOL _wantsStatusBarGradient;
	PXNumberAnimator* _statusBarGradientAnimator;
	unsigned short _statusBarGradientResizableCapInsetsIndex;
	unsigned _statusBarGradientSpriteIndex;
	double _statusBarGradientAlpha;
	double _statusBarGradientHeight;
	double _statusBarGradientAndStyleFadeDuration;
	BOOL _isPerformingUpdate;
	BOOL _isPerformingInitialUpdate;
	PXCuratedLibrarySectionedLayout* _libraryBodyLayout;
	PXZoomablePhotosLayout* _allPhotosBodyLayout;
	PXCuratedLibrarySectionHeaderLayout* _floatingHeaderLayout;
	long long _presentedZoomLevel;
	PXCuratedLibraryViewModel* _viewModel;
	PXGSpriteReference* _lastHitSpriteReference;
	double _lateralMargin;
	id _lastVisibleDominantObjectReference;
	PXAssetCollectionReference* _lastPresentedDayAssetCollectionReference;
	id _dominantHeroPreferencesBeforeTransition;
	PXCuratedLibraryLayoutSpec* _spec;
	CGRect _presentedVisibleRect;

}

@property (nonatomic,readonly) PXSectionedObjectReference * dominantObjectReference; 
@property (assign,nonatomic) double lateralMargin;                                                               //@synthesize lateralMargin=_lateralMargin - In the implementation block
@property (nonatomic,retain) id lastVisibleDominantObjectReference;                                              //@synthesize lastVisibleDominantObjectReference=_lastVisibleDominantObjectReference - In the implementation block
@property (nonatomic,retain) PXAssetCollectionReference * lastPresentedDayAssetCollectionReference;              //@synthesize lastPresentedDayAssetCollectionReference=_lastPresentedDayAssetCollectionReference - In the implementation block
@property (nonatomic,retain) id dominantHeroPreferencesBeforeTransition;                                         //@synthesize dominantHeroPreferencesBeforeTransition=_dominantHeroPreferencesBeforeTransition - In the implementation block
@property (nonatomic,readonly) PXCuratedLibraryLayoutSpec * spec;                                                //@synthesize spec=_spec - In the implementation block
@property (nonatomic,readonly) PXCuratedLibrarySectionedLayout * libraryBodyLayout;                              //@synthesize libraryBodyLayout=_libraryBodyLayout - In the implementation block
@property (nonatomic,readonly) PXZoomablePhotosLayout * allPhotosLayout;                                         //@synthesize allPhotosBodyLayout=_allPhotosBodyLayout - In the implementation block
@property (nonatomic,readonly) PXCuratedLibrarySectionHeaderLayout * floatingHeaderLayout;                       //@synthesize floatingHeaderLayout=_floatingHeaderLayout - In the implementation block
@property (nonatomic,readonly) long long presentedZoomLevel;                                                     //@synthesize presentedZoomLevel=_presentedZoomLevel - In the implementation block
@property (nonatomic,readonly) CGRect presentedVisibleRect;                                                      //@synthesize presentedVisibleRect=_presentedVisibleRect - In the implementation block
@property (nonatomic,readonly) CGRect fullyVisibleRect; 
@property (nonatomic,readonly) PXCuratedLibraryViewModel * viewModel;                                            //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,retain) PXGSpriteReference * lastHitSpriteReference;                                        //@synthesize lastHitSpriteReference=_lastHitSpriteReference - In the implementation block
@property (nonatomic,readonly) double estimatedHeaderHeight; 
@property (nonatomic,readonly) double bottomMargin; 
@property (nonatomic,readonly) id<PXBrowserVisibleContentSnapshot> visibleContentSnapshot; 
@property (nonatomic,readonly) id<PXDisplayAssetCollection> topmostAssetCollection; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithViewModel:(id)arg1 ;
-(id)imageConfigurationAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(id)axLocalizedLabel;
-(/*^block*/id)dateIntervalFutureForContentInRect:(CGRect)arg1 type:(unsigned long long)arg2 ;
-(double)lateralMargin;
-(CGRect)sectionBoundariesForAssetCollectionReference:(id)arg1 ;
-(void)setLateralMargin:(double)arg1 ;
-(id)createDefaultAnimationForCurrentContext;
-(void)clearLastVisibleAreaAnchoringInformation;
-(void)_updateLocalSprites;
-(void)setSpec:(PXCuratedLibraryLayoutSpec *)arg1 ;
-(/*^block*/id)locationNamesFutureForContentInRect:(CGRect)arg1 ;
-(PXCuratedLibrarySectionHeaderLayout *)floatingHeaderLayout;
-(CGPoint)anchor:(id)arg1 visibleRectOriginForProposedVisibleRect:(CGRect)arg2 forLayout:(id)arg3 ;
-(void)screenScaleDidChange;
-(CGRect)fullyVisibleRect;
-(void)sublayoutDidChangeLastBaseline:(id)arg1 ;
-(long long)curatedLibraryLayoutAnimationContextForTransitionToZoomLevel:(long long)arg1 ;
-(void)visibleRectDidChange;
-(long long)sublayoutIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id*)arg3 ;
-(void)setLastPresentedDayAssetCollectionReference:(PXAssetCollectionReference *)arg1 ;
-(void)_updateFloatingHeaderVisibility;
-(id)createCuratedLibraryLayoutTransitionIfNeededWithContext:(long long)arg1 ;
-(PXSectionedObjectReference *)dominantObjectReference;
-(void)_enumerateHeroSpritesInRect:(CGRect)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)setLastVisibleDominantObjectReference:(id)arg1 ;
-(PXCuratedLibraryViewModel *)viewModel;
-(void)viewModel:(id)arg1 didTransitionFromZoomLevel:(long long)arg2 toZoomLevel:(long long)arg3 ;
-(void)setLastHitSpriteReference:(PXGSpriteReference *)arg1 ;
-(double)adjustedTargetVisibleTopForProposedTargetVisibleTop:(double)arg1 scrollingVelocity:(double)arg2 ;
-(id)lastVisibleAreaAnchor;
-(void)_enumerateScrollablePagesWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_updateStatusBarGradientAlphaValue;
-(id)dominantHeroPreferencesBeforeTransition;
-(void)enumerateVisibleAssetReferencesUsingBlock:(/*^block*/id)arg1 ;
-(id)createCuratedLibraryLayoutAnimationIfNeededWithContext:(long long)arg1 userData:(id)arg2 ;
-(void)_updateLibraryBodyLayoutLateralMargin;
-(id)topMostAssetCollectionInRect:(CGRect)arg1 ;
-(PXCuratedLibraryLayoutSpec *)spec;
-(double)_adjustedTargetVisibleTopToAccomodateFromBottomPaddedAreaVisibility:(BOOL)arg1 proposedVisibleRect:(CGRect)arg2 ;
-(void)_invalidateSummaryHelper;
-(CGRect)presentedVisibleRect;
-(void)update;
-(void)_updateZoomLevel;
-(long long)viewModel:(id)arg1 transitionTypeFromZoomLevel:(long long)arg2 toZoomLevel:(long long)arg3 ;
-(long long)presentedZoomLevel;
-(double)_adjustedTargetVisibleTopByAligningNearestHeroForProposedTargetVisibleTop:(double)arg1 ;
-(id)hitTestResultForSpriteIndex:(unsigned)arg1 ;
-(void)_updateFloatingHeaderLayoutSpec;
-(void)_updateFloatingHeaderButtons;
-(void)_updateStatusBarStyle;
-(void)_noteAnimation:(id)arg1 isRunning:(BOOL)arg2 ;
-(void)_updateFloatingHeaderSelectionTitle;
-(id)_currentFloatingHeaderSpec;
-(PXGSpriteReference *)lastHitSpriteReference;
-(void)_updateLateralMargin;
-(void)enumerateVisibleAssetsSectionSublayoutsUsingBlock:(/*^block*/id)arg1 ;
-(double)estimatedHeaderHeight;
-(void)_updateStatusBarGradientVisibility;
-(double)bottomMargin;
-(PXZoomablePhotosLayout *)allPhotosLayout;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(id)viewModel:(id)arg1 dominantAssetCollectionReferenceForZoomLevel:(long long)arg2 ;
-(void)safeAreaInsetsDidChange;
-(long long)_statusBarVisibility;
-(PXAssetCollectionReference *)lastPresentedDayAssetCollectionReference;
-(id<PXBrowserVisibleContentSnapshot>)visibleContentSnapshot;
-(void)_updateLibraryBodyLayoutLastVisibleDominantObjectReference;
-(void)viewModel:(id)arg1 willTransitionFromZoomLevel:(long long)arg2 toZoomLevel:(long long)arg3 ;
-(void)setDominantHeroPreferencesBeforeTransition:(id)arg1 ;
-(id)axSpriteIndexes;
-(PXCuratedLibrarySectionedLayout *)libraryBodyLayout;
-(id)_currentBodyLayout;
-(id)createAnchorForScrollingToInitialPosition;
-(void)enumerateSectionBoundariesWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_updateAllPhotosOverlayInsets;
-(void)animationDidComplete:(id)arg1 ;
-(id)lastVisibleDominantObjectReference;
-(id)presentedItemsGeometryForDataSource:(id)arg1 ;
-(BOOL)curatedLibrarySummaryHelperShouldUpdateImmediately:(id)arg1 ;
-(CGPoint)_adjustInitialVisibleRect:(CGRect)arg1 inLayout:(id)arg2 forRecentSection:(long long)arg3 ;
-(void)dealloc;
-(id)_createAnchorForTransitionToZoomLevel:(long long)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)_updateFloatingHeaderAppearance;
@end


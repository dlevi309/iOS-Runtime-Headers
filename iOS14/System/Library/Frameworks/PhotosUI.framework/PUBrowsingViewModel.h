/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUViewModel.h>
#import <libobjc.A.dylib/PUAssetViewModelChangeObserver.h>
#import <libobjc.A.dylib/PUAssetSharedViewModelChangeObserver.h>
#import <libobjc.A.dylib/PXAssetImportStatusObserver.h>

@protocol PXAssetImportStatusManager;
@class PUAssetReference, NSDate, PUCachedMapTable, NSMutableSet, PUAssetsDataSource, NSString, PUReviewScreenBarsModel, PUPhotoPickerResizeTaskDescriptorViewModel, PUMediaProvider, PUAssetActionManager, PUAssetViewModel;

@interface PUBrowsingViewModel : PUViewModel <PUAssetViewModelChangeObserver, PUAssetSharedViewModelChangeObserver, PXAssetImportStatusObserver> {

	PUAssetReference* _currentAssetReference;
	NSDate* _currentAssetReferenceChangedDate;
	double _lastAssetWasCurrentForDuration;
	BOOL _browsingSpeedRegimeIsValid;
	BOOL _isBrowsingSpeedRegimeInvalidationScheduled;
	PUCachedMapTable* _viewModelByAssetReference;
	NSMutableSet* _invalidAssetViewModels;
	BOOL _allAssetViewModelsAreInvalid;
	PUCachedMapTable* _assetSharedViewModelByAsset;
	Ai _ongoingEnumerations;
	BOOL _videoContentAllowed;
	BOOL _isScrubbing;
	BOOL _isScrolling;
	BOOL _isAnimatingAnyTransition;
	BOOL _isAttemptingToPlayVideoOverlay;
	BOOL _accessoryViewsDefaultVisibility;
	BOOL _isChromeVisible;
	BOOL _presentingOverOneUp;
	BOOL _lowMemoryMode;
	PUAssetsDataSource* _assetsDataSource;
	double _currentAssetTransitionProgress;
	NSString* _transitionDriverIdentifier;
	long long _browsingSpeedRegime;
	long long _videoOverlayPlayState;
	long long _lastChromeVisibilityChangeReason;
	id _lastChromeVisibilityChangeContext;
	NSDate* _lastChromeVisibilityChangeDate;
	PUAssetReference* _trailingAssetReference;
	PUAssetReference* _leadingAssetReference;
	NSString* _navigationBarTitle;
	PUReviewScreenBarsModel* _reviewScreenBarsModel;
	PUPhotoPickerResizeTaskDescriptorViewModel* _resizeTaskDescriptorViewModel;
	long long __userNavigationDistance;
	long long __scrubbingSessionDistance;
	NSMutableSet* __animatingTransitionIdentifiers;
	NSMutableSet* __videoDisallowedReasons;
	PUMediaProvider* _mediaProvider;
	PUAssetActionManager* _actionManager;
	id<PXAssetImportStatusManager> _importStatusManager;
	CGSize _secondScreenSize;

}

@property (assign,setter=_setUserNavigationDistance:,nonatomic) long long _userNavigationDistance;                                   //@synthesize _userNavigationDistance=__userNavigationDistance - In the implementation block
@property (assign,setter=_setScrubbingSessionDistance:,nonatomic) long long _scrubbingSessionDistance;                               //@synthesize _scrubbingSessionDistance=__scrubbingSessionDistance - In the implementation block
@property (assign,setter=_setLastChromeVisibilityChangeReason:,nonatomic) long long lastChromeVisibilityChangeReason;                //@synthesize lastChromeVisibilityChangeReason=_lastChromeVisibilityChangeReason - In the implementation block
@property (setter=_setLastChromeVisibilityChangeContext:,nonatomic,retain) id lastChromeVisibilityChangeContext;                     //@synthesize lastChromeVisibilityChangeContext=_lastChromeVisibilityChangeContext - In the implementation block
@property (assign,setter=_setAnimatingAnyTransition:,nonatomic) BOOL isAnimatingAnyTransition;                                       //@synthesize isAnimatingAnyTransition=_isAnimatingAnyTransition - In the implementation block
@property (setter=_setAnimatingTransitionIdentifiers:,nonatomic,retain) NSMutableSet * _animatingTransitionIdentifiers;              //@synthesize _animatingTransitionIdentifiers=__animatingTransitionIdentifiers - In the implementation block
@property (setter=_setVideoDisallowedReasons:,nonatomic,retain) NSMutableSet * _videoDisallowedReasons;                              //@synthesize _videoDisallowedReasons=__videoDisallowedReasons - In the implementation block
@property (assign,setter=_setBrowsingSpeedRegime:,nonatomic) long long browsingSpeedRegime;                                          //@synthesize browsingSpeedRegime=_browsingSpeedRegime - In the implementation block
@property (setter=_setTrailingAssetReference:,nonatomic,retain) PUAssetReference * trailingAssetReference;                           //@synthesize trailingAssetReference=_trailingAssetReference - In the implementation block
@property (setter=_setLeadingAssetReference:,nonatomic,retain) PUAssetReference * leadingAssetReference;                             //@synthesize leadingAssetReference=_leadingAssetReference - In the implementation block
@property (nonatomic,retain) PUAssetsDataSource * assetsDataSource;                                                                  //@synthesize assetsDataSource=_assetsDataSource - In the implementation block
@property (nonatomic,retain) PUMediaProvider * mediaProvider;                                                                        //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (nonatomic,retain) PUAssetActionManager * actionManager;                                                                   //@synthesize actionManager=_actionManager - In the implementation block
@property (nonatomic,retain) id<PXAssetImportStatusManager> importStatusManager;                                                     //@synthesize importStatusManager=_importStatusManager - In the implementation block
@property (nonatomic,retain) PUAssetReference * currentAssetReference; 
@property (nonatomic,readonly) double currentAssetTransitionProgress;                                                                //@synthesize currentAssetTransitionProgress=_currentAssetTransitionProgress - In the implementation block
@property (nonatomic,copy,readonly) NSString * transitionDriverIdentifier;                                                           //@synthesize transitionDriverIdentifier=_transitionDriverIdentifier - In the implementation block
@property (assign,nonatomic) BOOL isScrubbing;                                                                                       //@synthesize isScrubbing=_isScrubbing - In the implementation block
@property (assign,nonatomic) BOOL isScrolling;                                                                                       //@synthesize isScrolling=_isScrolling - In the implementation block
@property (assign,nonatomic) long long videoOverlayPlayState;                                                                        //@synthesize videoOverlayPlayState=_videoOverlayPlayState - In the implementation block
@property (assign,nonatomic) BOOL isAttemptingToPlayVideoOverlay;                                                                    //@synthesize isAttemptingToPlayVideoOverlay=_isAttemptingToPlayVideoOverlay - In the implementation block
@property (assign,nonatomic) BOOL accessoryViewsDefaultVisibility;                                                                   //@synthesize accessoryViewsDefaultVisibility=_accessoryViewsDefaultVisibility - In the implementation block
@property (assign,setter=setChromeVisible:,nonatomic) BOOL isChromeVisible;                                                          //@synthesize isChromeVisible=_isChromeVisible - In the implementation block
@property (nonatomic,readonly) NSDate * lastChromeVisibilityChangeDate;                                                              //@synthesize lastChromeVisibilityChangeDate=_lastChromeVisibilityChangeDate - In the implementation block
@property (assign,getter=isPresentingOverOneUp,nonatomic) BOOL presentingOverOneUp;                                                  //@synthesize presentingOverOneUp=_presentingOverOneUp - In the implementation block
@property (assign,nonatomic) CGSize secondScreenSize;                                                                                //@synthesize secondScreenSize=_secondScreenSize - In the implementation block
@property (assign,getter=isAutoplayVideoMuted,nonatomic) BOOL autoplayVideoMuted; 
@property (nonatomic,readonly) PUAssetViewModel * assetViewModelForCurrentAssetReference; 
@property (nonatomic,copy) NSString * navigationBarTitle;                                                                            //@synthesize navigationBarTitle=_navigationBarTitle - In the implementation block
@property (nonatomic,retain) PUReviewScreenBarsModel * reviewScreenBarsModel;                                                        //@synthesize reviewScreenBarsModel=_reviewScreenBarsModel - In the implementation block
@property (nonatomic,retain) PUPhotoPickerResizeTaskDescriptorViewModel * resizeTaskDescriptorViewModel;                             //@synthesize resizeTaskDescriptorViewModel=_resizeTaskDescriptorViewModel - In the implementation block
@property (nonatomic,readonly) BOOL isVideoContentAllowed; 
@property (nonatomic,readonly) BOOL lowMemoryMode;                                                                                   //@synthesize lowMemoryMode=_lowMemoryMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)_handleSceneWillDeactivateNotification:(id)arg1 ;
+(void)setAutoplayVideoMuted:(BOOL)arg1 ;
+(BOOL)autoplayVideoMuted;
-(void)setMediaProvider:(PUMediaProvider *)arg1 ;
-(void)registerChangeObserver:(id)arg1 ;
-(id)currentChange;
-(void)setAnimating:(BOOL)arg1 transitionWithIdentifier:(id)arg2 ;
-(PUMediaProvider *)mediaProvider;
-(void)viewModel:(id)arg1 didChange:(id)arg2 ;
-(void)setIsScrolling:(BOOL)arg1 ;
-(void)setCurrentAssetReference:(PUAssetReference *)arg1 ;
-(void)unregisterChangeObserver:(id)arg1 ;
-(void)setIsAttemptingToPlayVideoOverlay:(BOOL)arg1 ;
-(id)init;
-(BOOL)isChromeVisible;
-(void)_setAnimatingAnyTransition:(BOOL)arg1 ;
-(void)_updateNeighboringAssetReferences;
-(void)setNavigationBarTitle:(NSString *)arg1 ;
-(id)_badgeInfoPromiseForAssetReference:(id)arg1 ;
-(BOOL)isAutoplayVideoMuted;
-(void)setPresentingOverOneUp:(BOOL)arg1 ;
-(PUReviewScreenBarsModel *)reviewScreenBarsModel;
-(void)_setUserNavigationDistance:(long long)arg1 ;
-(id)_assetSharedViewModelForAsset:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(void)_setLeadingAssetReference:(id)arg1 ;
-(void)didPerformChanges;
-(long long)_scrubbingSessionDistance;
-(CGSize)secondScreenSize;
-(void)setChromeVisible:(BOOL)arg1 ;
-(void)_setLastChromeVisibilityChangeReason:(long long)arg1 ;
-(long long)browsingSpeedRegime;
-(PUAssetReference *)currentAssetReference;
-(void)_invalidateAllAssetViewModels;
-(void)_updateIfNeeded;
-(void)setImportStatusManager:(id<PXAssetImportStatusManager>)arg1 ;
-(void)setActionManager:(PUAssetActionManager *)arg1 ;
-(void)_updateAssetViewModel:(id)arg1 ;
-(id)lastChromeVisibilityChangeContext;
-(id)_filteredAllowedBadges:(id)arg1 forAssetReference:(id)arg2 ;
-(void)signalReviewScreenSelectionChanged;
-(void)setIsScrubbing:(BOOL)arg1 ;
-(void)_setLastChromeVisibilityChangeContext:(id)arg1 ;
-(void)_resetAccessoryViewsVisibilityToDefaultWithChangeReason:(long long)arg1 ;
-(void)_handleAssetViewModel:(id)arg1 didChange:(id)arg2 ;
-(PUAssetActionManager *)actionManager;
-(void)_setTrailingAssetReference:(id)arg1 ;
-(void)setCurrentAssetReference:(id)arg1 transitionProgress:(double)arg2 transitionDriverIdentifier:(id)arg3 ;
-(id)assetSharedViewModelForAsset:(id)arg1 ;
-(void)_setScrubbingSessionDistance:(long long)arg1 ;
-(PUAssetReference *)leadingAssetReference;
-(long long)lastChromeVisibilityChangeReason;
-(void)setChromeVisible:(BOOL)arg1 changeReason:(long long)arg2 ;
-(BOOL)accessoryViewsDefaultVisibility;
-(void)_setCurrentAssetTransitionProgress:(double)arg1 ;
-(long long)_userNavigationDistance;
-(double)currentAssetTransitionProgress;
-(BOOL)isTogglingCTMForAsset:(id)arg1 ;
-(void)setAccessoryViewsDefaultVisibility:(BOOL)arg1 changeReason:(long long)arg2 ;
-(void)assetImportStatusManager:(id)arg1 didChangeStatusForAssetReference:(id)arg2 ;
-(void)_setTransitionDriverIdentifier:(id)arg1 ;
-(id)assetViewModelForAssetReference:(id)arg1 ;
-(void)setAutoplayVideoMuted:(BOOL)arg1 ;
-(void)setVideoContentAllowedForAllReasons;
-(void)setVideoOverlayPlayState:(long long)arg1 ;
-(id)debugDetailedDescription;
-(NSDate *)lastChromeVisibilityChangeDate;
-(void)_invalidateCurrentAndNeighboringAssetViewModels;
-(PUAssetViewModel *)assetViewModelForCurrentAssetReference;
-(void)_setBrowsingSpeedRegime:(long long)arg1 ;
-(void)_handleAssetSharedViewModel:(id)arg1 didChange:(id)arg2 ;
-(NSMutableSet *)_videoDisallowedReasons;
-(BOOL)isPresentingOverOneUp;
-(void)_setAnimatingTransitionIdentifiers:(id)arg1 ;
-(void)_invalidateBrowsingSpeedRegime;
-(BOOL)_needsUpdate;
-(id)initWithLowMemoryMode:(BOOL)arg1 ;
-(BOOL)isAttemptingToPlayVideoOverlay;
-(BOOL)isScrolling;
-(NSString *)navigationBarTitle;
-(void)setSecondScreenSize:(CGSize)arg1 ;
-(long long)videoOverlayPlayState;
-(void)_updateScrubSpeedRegimeIfNeeded;
-(void)setAssetsDataSource:(PUAssetsDataSource *)arg1 ;
-(PUAssetReference *)trailingAssetReference;
-(PUAssetsDataSource *)assetsDataSource;
-(void)_handleAutoplayMutedDidChangeNotification:(id)arg1 ;
-(PUPhotoPickerResizeTaskDescriptorViewModel *)resizeTaskDescriptorViewModel;
-(BOOL)lowMemoryMode;
-(void)setReviewScreenBarsModel:(PUReviewScreenBarsModel *)arg1 ;
-(id<PXAssetImportStatusManager>)importStatusManager;
-(id)activeAssetReferences;
-(id)newViewModelChange;
-(void)_updateAssetViewModelsIfNeeded;
-(void)setAccessoryViewsDefaultVisibility:(BOOL)arg1 ;
-(void)_handleAsyncBrowsingSpeedRegimeInvalidation;
-(void)_setVideoDisallowedReasons:(id)arg1 ;
-(long long)_importStateForAssetReference:(id)arg1 ;
-(void)_invalidateBrowsingSpeedRegimeAfterMaximumDelay:(double)arg1 ;
-(void)_setVideoContentAllowed:(BOOL)arg1 ;
-(NSMutableSet *)_animatingTransitionIdentifiers;
-(BOOL)isVideoContentAllowed;
-(void)setVideoContentAllowed:(BOOL)arg1 forReason:(id)arg2 ;
-(double)_focusValueForAsset:(id)arg1 ;
-(void)setChromeVisible:(BOOL)arg1 changeReason:(long long)arg2 context:(id)arg3 ;
-(BOOL)isScrubbing;
-(NSString *)transitionDriverIdentifier;
-(void)_invalidateAssetViewModel:(id)arg1 ;
-(BOOL)isAnimatingAnyTransition;
-(void)setResizeTaskDescriptorViewModel:(PUPhotoPickerResizeTaskDescriptorViewModel *)arg1 ;
@end


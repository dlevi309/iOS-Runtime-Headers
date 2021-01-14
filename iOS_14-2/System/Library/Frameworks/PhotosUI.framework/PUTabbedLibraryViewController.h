/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UITabBarController.h>
#import <libobjc.A.dylib/PXSettingsKeyObserver.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXTabBarItemKeyCommandDelegate.h>
#import <libobjc.A.dylib/PXUIKeyCommandDelegate.h>
#import <libobjc.A.dylib/PLAssetContainerListChangeObserver.h>
#import <libobjc.A.dylib/PLAssetContainerObserver.h>
#import <libobjc.A.dylib/PLInvitationRecordsObserver.h>
#import <libobjc.A.dylib/PXForcedDismissableViewController.h>
#import <libobjc.A.dylib/PXRootLibraryNavigationController.h>
#import <UIKit/UINavigationControllerDelegate.h>

@protocol PXProgrammaticNavigationUpdateTarget;
@class PUTabbedLibraryViewControllerSpec, PUSessionInfo, NSString, NSMutableDictionary, PUMomentsZoomLevelManager, NSMutableIndexSet, PUTabbedLibraryViewModel, PUImportViewController, NSArray, PXForYouBadgeManager, PXProgrammaticNavigationRequest, UINavigationController;

@interface PUTabbedLibraryViewController : UITabBarController <PXSettingsKeyObserver, PXChangeObserver, PXTabBarItemKeyCommandDelegate, PXUIKeyCommandDelegate, PLAssetContainerListChangeObserver, PLAssetContainerObserver, PLInvitationRecordsObserver, PXForcedDismissableViewController, PXRootLibraryNavigationController, UINavigationControllerDelegate> {

	PUTabbedLibraryViewControllerSpec* _spec;
	PUSessionInfo* _sessionInfo;
	int _pendingSelectedContentMode;
	BOOL _sharedTabBadgeIsDirty;
	NSString* _lastSelectedTabDescription;
	NSMutableDictionary* _filteredAlbumListsByContentMode;
	PUMomentsZoomLevelManager* _zoomLevelManager;
	NSMutableIndexSet* _everDisplayedContentModes;
	PUTabbedLibraryViewModel* _viewModel;
	BOOL _px_hidesTabBarForRegularHorizontalSizeClass;
	BOOL _shouldNavigateToAllPhotosAlbum;
	BOOL _shouldSuppressAnimationsDuringProgrammaticNavigation;
	PUImportViewController* _importViewController;
	NSArray* _excludedContentModes;
	id<PXProgrammaticNavigationUpdateTarget> _navigationUpdateTarget;
	PXForYouBadgeManager* _badgeManager;
	PXProgrammaticNavigationRequest* _pendingNavigationRequest;

}

@property (assign,nonatomic) BOOL shouldNavigateToAllPhotosAlbum;                                                                                  //@synthesize shouldNavigateToAllPhotosAlbum=_shouldNavigateToAllPhotosAlbum - In the implementation block
@property (nonatomic,retain) PXForYouBadgeManager * badgeManager;                                                                                  //@synthesize badgeManager=_badgeManager - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> tabbedLibraryLog; 
@property (nonatomic,retain) PXProgrammaticNavigationRequest * pendingNavigationRequest;                                                           //@synthesize pendingNavigationRequest=_pendingNavigationRequest - In the implementation block
@property (assign,nonatomic) BOOL shouldSuppressAnimationsDuringProgrammaticNavigation;                                                            //@synthesize shouldSuppressAnimationsDuringProgrammaticNavigation=_shouldSuppressAnimationsDuringProgrammaticNavigation - In the implementation block
@property (nonatomic,retain) PUSessionInfo * sessionInfo;                                                                                          //@synthesize sessionInfo=_sessionInfo - In the implementation block
@property (nonatomic,retain) PUImportViewController * importViewController;                                                                        //@synthesize importViewController=_importViewController - In the implementation block
@property (assign,setter=px_setHidesTabBarForRegularHorizontalSizeClass:,nonatomic) BOOL px_hidesTabBarForRegularHorizontalSizeClass;              //@synthesize px_hidesTabBarForRegularHorizontalSizeClass=_px_hidesTabBarForRegularHorizontalSizeClass - In the implementation block
@property (assign,nonatomic) int selectedContentMode; 
@property (nonatomic,copy) NSArray * excludedContentModes;                                                                                         //@synthesize excludedContentModes=_excludedContentModes - In the implementation block
@property (nonatomic,readonly) UINavigationController * selectedNavigationController; 
@property (nonatomic,readonly) NSArray * rootViewControllers; 
@property (assign,nonatomic,__weak) id<PXProgrammaticNavigationUpdateTarget> navigationUpdateTarget;                                               //@synthesize navigationUpdateTarget=_navigationUpdateTarget - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithSpec:(id)arg1 ;
-(void)setBadgeManager:(PXForYouBadgeManager *)arg1 ;
-(void)setShouldNavigateToAllPhotosAlbum:(BOOL)arg1 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(BOOL)assetIsAvailableForNavigationInMoments:(id)arg1 refetchSectionsIfNeeded:(BOOL)arg2 ;
-(void)navigateToPeopleAlbumAnimated:(BOOL)arg1 revealPersonWithLocalIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)px_navigateToMemoryWithLocalIdentifier:(id)arg1 dismissAnyPresentedViewController:(BOOL)arg2 ;
-(Class)_navigationControllerLayoutTransitioningClass:(id)arg1 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(id)_tabRootViewControllerInNavigationController:(id)arg1 ;
-(BOOL)shouldExposeShortcutForTabBarItem:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)navigateToInitialLocationInNavigationController:(id)arg1 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setSelectedContentMode:(int)arg1 ;
-(id)keyCommands;
-(void)navigateToOneYearAgoSearch;
-(void)setPendingNavigationRequest:(PXProgrammaticNavigationRequest *)arg1 ;
-(BOOL)cloudFeedInvitationForAlbumIsAvailableForNavigation:(id)arg1 ;
-(void)navigateToInitialLocationInCurrentNavigationController;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)_newNavigationControllerWithRootController:(id)arg1 ;
-(BOOL)contentModeIsAvailableForNavigation:(int)arg1 ;
-(void)navigateToInvitationCMMWithIdentifier:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateTabBarVisibilityForHorizontalSizeClass:(long long)arg1 ;
-(BOOL)cloudFeedIsAvailableForNavigation;
-(id)_availableAlbumToNavigateToAsset:(id)arg1 preferredAlbum:(id)arg2 ;
-(id)nextExistingParticipantOnRouteToDestination:(id)arg1 ;
-(id<PXProgrammaticNavigationUpdateTarget>)navigationUpdateTarget;
-(PUImportViewController *)importViewController;
-(int)_contentModeForNavigationController:(id)arg1 ;
-(BOOL)albumIsAvailableForNavigation:(id)arg1 ;
-(BOOL)_navigationControllerShouldUseBuiltinInteractionController:(id)arg1 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(int)selectedContentMode;
-(id)newRootViewControllerForContentMode:(int)arg1 ;
-(void)navigateToContentMode:(int)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)navigateToSearchWithHashtag:(id)arg1 ;
-(void)_updateSharedAlbumBadges;
-(unsigned long long)supportedInterfaceOrientations;
-(void)navigateToAlbum:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(PXProgrammaticNavigationRequest *)pendingNavigationRequest;
-(CGRect)px_frameForTabItem:(unsigned long long)arg1 inCoordinateSpace:(id)arg2 ;
-(unsigned long long)tabIdentifierForContentMode:(int)arg1 ;
-(void)px_navigationDestinationWillChange:(id)arg1 ;
-(void)_handleFetchedMomentShare:(id)arg1 atURL:(id)arg2 error:(id)arg3 timedOut:(BOOL)arg4 ;
-(void)navigateToCloudFeedAsset:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_navigationControllerForContentMode:(int)arg1 ;
-(void)setShouldSuppressAnimationsDuringProgrammaticNavigation:(BOOL)arg1 ;
-(void)_navigateToContentMode:(int)arg1 animated:(BOOL)arg2 dismissAnyPresentedViewController:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)navigateToAsset:(id)arg1 inAlbum:(id)arg2 animated:(BOOL)arg3 ;
-(NSArray *)rootViewControllers;
-(void)_navigateToContentMode:(int)arg1 defaultLocationIfNeverDisplayed:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)navigateToRevealAlbum:(id)arg1 initiallyHidden:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)keyCommandDidRequestToBePerformed:(id)arg1 ;
-(void)setImportViewController:(PUImportViewController *)arg1 ;
-(void)navigateToMemoryWithLocalIdentifier:(id)arg1 animated:(BOOL)arg2 ;
-(PXForYouBadgeManager *)badgeManager;
-(BOOL)_navigationControllerShouldCrossFadeBottomBars:(id)arg1 ;
-(void)viewDidLoad;
-(void)navigateToRevealCloudFeedComment:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setImportViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)setNavigationUpdateTarget:(id<PXProgrammaticNavigationUpdateTarget>)arg1 ;
-(BOOL)cloudFeedAssetIsAvailableForNavigation:(id)arg1 ;
-(id)_existingNavigationControllerForContentMode:(int)arg1 ;
-(BOOL)_navigateToRootOfCurrentTabAnimated:(BOOL)arg1 dismissAnyPresentedViewController:(BOOL)arg2 ;
-(void)navigateToComment:(id)arg1 forAsset:(id)arg2 animated:(BOOL)arg3 ;
-(void)navigateToRevealAsset:(id)arg1 inAlbum:(id)arg2 animated:(BOOL)arg3 ;
-(void)navigateToCloudFeedWithCompletion:(/*^block*/id)arg1 ;
-(void)navigateToCloudFeedComment:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)navigateToRevealCloudFeedAsset:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)navigateToRevealCloudFeedInvitationForAlbum:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)routingOptionsForDestination:(id)arg1 ;
-(BOOL)_isNavigationControllerBadged:(id)arg1 ;
-(BOOL)prepareForDismissingForced:(BOOL)arg1 ;
-(void)_navigateToAlbum:(id)arg1 andPerformAction:(int)arg2 initiallyHidden:(BOOL)arg3 animated:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)cloudFeedCommentIsAvailableForNavigation:(id)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)invitationRecordsDidChange:(id)arg1 ;
-(id)_nextCloudFeedNavigatingObject;
-(int)_contentModeForAlbum:(id)arg1 ;
-(void)_sceneWillEnterForeground:(id)arg1 ;
-(void)ppt_runTabSwitchingTestWithName:(id)arg1 options:(id)arg2 delegate:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setSelectedViewController:(id)arg1 ;
-(void)setExcludedContentModes:(NSArray *)arg1 ;
-(void)navigateToRevealTheMostRecentMemoryAnimated:(BOOL)arg1 ;
-(BOOL)commentIsAvailableForNavigation:(id)arg1 inAsset:(id)arg2 ;
-(void)navigateToSuggestedCMMWithIdentifier:(id)arg1 animated:(BOOL)arg2 ;
-(void)_navigateToAsset:(id)arg1 andPerformAction:(int)arg2 inAlbum:(id)arg3 animated:(BOOL)arg4 ;
-(void)assetContainerListDidChange:(id)arg1 ;
-(UINavigationController *)selectedNavigationController;
-(PUSessionInfo *)sessionInfo;
-(void)setViewControllers:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)shouldNavigateToAllPhotosAlbum;
-(BOOL)shouldSuppressAnimationsDuringProgrammaticNavigation;
-(id)_navigateToMemoriesDismissingAnyPresentedViewController:(BOOL)arg1 ;
-(BOOL)pu_shouldSelectViewController:(id)arg1 ;
-(void)_didFinishPostingNotifications:(id)arg1 ;
-(void)setSessionInfo:(PUSessionInfo *)arg1 ;
-(void)assetContainerDidChange:(id)arg1 ;
-(id)_snapBackRootViewControllerInNavigationController:(id)arg1 ;
-(void)_enumerateViewControllersWithBlock:(/*^block*/id)arg1 ;
-(NSObject*<OS_os_log>)tabbedLibraryLog;
-(BOOL)assetIsAvailableForNavigationInMoments:(id)arg1 ;
-(BOOL)assetIsAvailableForNavigation:(id)arg1 inAlbum:(id)arg2 ;
-(NSArray *)excludedContentModes;
-(void)navigateToPhotosContentBottomAnimated:(BOOL)arg1 ;
-(id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(id)_albumListForContentMode:(int)arg1 library:(id)arg2 ;
-(void)navigateToFeaturedPhotoWithSuggestionIdentifier:(id)arg1 animated:(BOOL)arg2 ;
-(int)contentModeForTabIdentifier:(unsigned long long)arg1 ;
-(id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2 ;
-(BOOL)px_hidesTabBarForRegularHorizontalSizeClass;
-(void)updateDisplayedTabsAnimated:(BOOL)arg1 ;
-(id)ppt_navigationControllerForContentMode:(int)arg1 ;
-(void)navigateToMomentShareWithURL:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)_navigateToDefaultLocationInNavigationController:(id)arg1 animated:(BOOL)arg2 ;
-(id)px_gridPresentation;
-(void)px_setHidesTabBarForRegularHorizontalSizeClass:(BOOL)arg1 ;
-(void)navigateToAsset:(id)arg1 openOneUp:(BOOL)arg2 animated:(BOOL)arg3 ;
-(id)localizedDiscoverabilityTitleForTabBarItem:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)px_switchToTabForDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(id)_navigateToForYou;
-(void)_updateRootViewControllersInNavigationControllers:(id)arg1 tabBarHidden:(BOOL)arg2 ;
-(BOOL)_navigateToRootOfCurrentTabAnimated:(BOOL)arg1 ;
-(void)navigateToPlacesAlbumAnimated:(BOOL)arg1 ;
@end


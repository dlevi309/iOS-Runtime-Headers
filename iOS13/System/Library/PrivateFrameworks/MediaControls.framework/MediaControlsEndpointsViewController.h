/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControlsCollectionViewController.h>
#import <libobjc.A.dylib/MRPlatterViewControllerDelegate.h>
#import <MediaControls/MediaControlsCollectionViewDataSource.h>
#import <MediaControls/MediaControlsCollectionViewDelegate.h>
#import <MediaControls/MediaControlsEndpointsManagerDelegate.h>
#import <libobjc.A.dylib/CCUIContentModuleContentViewController.h>

@class MPAVOutputDeviceRoutingDataSource, MPMediaControlsConfiguration, MediaControlsEndpointsManager, MPAVRoutingViewController, MPAVEndpointRoute, NSString, AVExternalPlaybackMonitor, UIViewPropertyAnimator;

@interface MediaControlsEndpointsViewController : MediaControlsCollectionViewController <MRPlatterViewControllerDelegate, MediaControlsCollectionViewDataSource, MediaControlsCollectionViewDelegate, MediaControlsEndpointsManagerDelegate, CCUIContentModuleContentViewController> {

	MPAVOutputDeviceRoutingDataSource* _outputDeviceRoutingDataSource;
	long long _lastSelectedModeForActivePlatterViewController;
	BOOL _didRetrieveActiveSystemRouteOnce;
	BOOL _shouldReselectActiveSystemRoute;
	BOOL _prewarming;
	BOOL _shouldTransitionToVisibleWhenReady;
	BOOL _didTransitionToVisible;
	BOOL _shouldPresentUsingViewService;
	BOOL _dismissing;
	BOOL _onScreen;
	MPMediaControlsConfiguration* _configuration;
	/*^block*/id _routingCornerViewTappedBlock;
	/*^block*/id _homeGestureDismissalAllowedBlock;
	MediaControlsEndpointsManager* _endpointsManager;
	MPAVRoutingViewController* _routingViewController;
	MPAVEndpointRoute* _selectedRoute;
	NSString* _routingContextUID;
	AVExternalPlaybackMonitor* _externalPlaybackMonitor;

}

@property (assign,getter=isDismissing,nonatomic) BOOL dismissing;                              //@synthesize dismissing=_dismissing - In the implementation block
@property (assign,getter=isOnScreen,nonatomic) BOOL onScreen;                                  //@synthesize onScreen=_onScreen - In the implementation block
@property (nonatomic,retain) MediaControlsEndpointsManager * endpointsManager;                 //@synthesize endpointsManager=_endpointsManager - In the implementation block
@property (nonatomic,retain) MPAVRoutingViewController * routingViewController;                //@synthesize routingViewController=_routingViewController - In the implementation block
@property (nonatomic,retain) MPAVEndpointRoute * selectedRoute;                                //@synthesize selectedRoute=_selectedRoute - In the implementation block
@property (nonatomic,copy) NSString * routingContextUID;                                       //@synthesize routingContextUID=_routingContextUID - In the implementation block
@property (nonatomic,retain) AVExternalPlaybackMonitor * externalPlaybackMonitor;              //@synthesize externalPlaybackMonitor=_externalPlaybackMonitor - In the implementation block
@property (nonatomic,retain) MPMediaControlsConfiguration * configuration;                     //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy) id routingCornerViewTappedBlock;                                    //@synthesize routingCornerViewTappedBlock=_routingCornerViewTappedBlock - In the implementation block
@property (nonatomic,copy) id homeGestureDismissalAllowedBlock;                                //@synthesize homeGestureDismissalAllowedBlock=_homeGestureDismissalAllowedBlock - In the implementation block
@property (assign,nonatomic) BOOL shouldPresentUsingViewService;                               //@synthesize shouldPresentUsingViewService=_shouldPresentUsingViewService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double preferredExpandedContentHeight; 
@property (nonatomic,readonly) double preferredExpandedContentWidth; 
@property (nonatomic,readonly) double preferredExpandedContinuousCornerRadius; 
@property (nonatomic,readonly) BOOL providesOwnPlatter; 
@property (nonatomic,readonly) UIViewPropertyAnimator * customAnimator; 
@property (nonatomic,readonly) BOOL shouldPerformHoverInteraction; 
+(BOOL)_shouldTransitionEarlyOnSystemRoute;
-(id)init;
-(void)dealloc;
-(void)setConfiguration:(MPMediaControlsConfiguration *)arg1 ;
-(MPMediaControlsConfiguration *)configuration;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)reloadData;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLayoutSubviews;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)isOnScreen;
-(void)endUpdates;
-(void)updateContentInsets;
-(void)setDisplayMode:(long long)arg1 ;
-(NSString *)routingContextUID;
-(BOOL)isDismissing;
-(void)setRoutingContextUID:(NSString *)arg1 ;
-(void)startPrewarming;
-(void)stopPrewarming;
-(void)_routeDidChangeNotification:(id)arg1 ;
-(void)setDismissing:(BOOL)arg1 ;
-(void)setOnScreen:(BOOL)arg1 ;
-(double)preferredExpandedContentHeight;
-(BOOL)shouldExpandModuleOnTouch:(id)arg1 ;
-(BOOL)canDismissPresentedContent;
-(void)dismissPresentedContentAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(double)preferredExpandedContentWidth;
-(BOOL)providesOwnPlatter;
-(BOOL)shouldPerformHoverInteraction;
-(void)platterViewController:(id)arg1 didToggleRoutingPicker:(BOOL)arg2 ;
-(void)platterViewController:(id)arg1 willToggleRoutingPicker:(BOOL)arg2 ;
-(void)dismissPlatterViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)platterViewController:(id)arg1 presentingViewForPresentedViewController:(id)arg2 ;
-(void)platterViewController:(id)arg1 homeGestureDismisalAllowedDidChange:(BOOL)arg2 ;
-(BOOL)shouldPresentUsingViewServicePlatterViewController:(id)arg1 ;
-(void)platterViewController:(id)arg1 didPickRoute:(id)arg2 ;
-(MPAVRoutingViewController *)routingViewController;
-(void)setRoutingViewController:(MPAVRoutingViewController *)arg1 ;
-(void)setRoutingCornerViewTappedBlock:(id)arg1 ;
-(id)routingCornerViewTappedBlock;
-(void)setShouldPresentUsingViewService:(BOOL)arg1 ;
-(void)_setupEndpointsManager;
-(void)_setupRoutingViewController;
-(void)_setSelectedRoute:(id)arg1 isUserSelected:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)_updateDiscoveryMode;
-(void)_transitionToVisibleIfNeeded;
-(void)_transitionToVisible:(BOOL)arg1 ;
-(BOOL)_isReadyForAppearanceTransition;
-(double)preferredItemHeightGivenWidth:(double)arg1 ;
-(AVExternalPlaybackMonitor *)externalPlaybackMonitor;
-(void)_assignRouteViewControllerToSelectedPanelViewController;
-(void)_updateSupportedModesForSelectedPlatterViewController;
-(void)didSelectEndpoint:(id)arg1 ;
-(void)_selectActiveSystemRouteIfNeeded;
-(void)_updateEndpointRouteForOutputDeviceDataSource:(id)arg1 ;
-(void)_supportedModesForSelectedRoute:(unsigned long long*)arg1 selectedMode:(long long*)arg2 ;
-(void)_updateModesForSelectedPlatterViewController;
-(void)setSelectedRoute:(MPAVEndpointRoute *)arg1 ;
-(BOOL)_isSelectedRouteInRoutes;
-(long long)numberOfItemsInCollectionViewController:(id)arg1 ;
-(id)mediaControlsCollectionViewController:(id)arg1 viewControllerForItemAtIndex:(long long)arg2 ;
-(long long)defaultSelectedItemIndexForCollectionViewController:(id)arg1 ;
-(void)mediaControlsCollectionViewController:(id)arg1 willDisplayViewController:(id)arg2 forItemAtIndex:(long long)arg3 ;
-(void)mediaControlsCollectionViewController:(id)arg1 didDisplayViewController:(id)arg2 forItemAtIndex:(long long)arg3 ;
-(void)mediaControlsCollectionViewController:(id)arg1 didEndDisplayingViewController:(id)arg2 forItemAtIndex:(long long)arg3 ;
-(BOOL)mediaControlsCollectionViewController:(id)arg1 canSelectItemAtIndex:(long long)arg2 ;
-(void)mediaControlsCollectionViewController:(id)arg1 willSelectItemAtIndex:(long long)arg2 withReason:(long long)arg3 ;
-(void)mediaControlsCollectionViewController:(id)arg1 didSelectItemAtIndex:(long long)arg2 withReason:(long long)arg3 ;
-(void)endpointsManager:(id)arg1 activeSystemRouteDidChange:(id)arg2 ;
-(void)endpointsManager:(id)arg1 defersRoutesReplacement:(/*^block*/id)arg2 ;
-(double)preferredItemHeight;
-(void)homeObserverDidUpdateKnownUIDs:(id)arg1 ;
-(id)homeGestureDismissalAllowedBlock;
-(void)setHomeGestureDismissalAllowedBlock:(id)arg1 ;
-(BOOL)shouldPresentUsingViewService;
-(MediaControlsEndpointsManager *)endpointsManager;
-(void)setEndpointsManager:(MediaControlsEndpointsManager *)arg1 ;
-(MPAVEndpointRoute *)selectedRoute;
-(void)setExternalPlaybackMonitor:(AVExternalPlaybackMonitor *)arg1 ;
@end


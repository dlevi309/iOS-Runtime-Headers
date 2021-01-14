/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/MPAVRoutingControllerDelegate.h>
#import <libobjc.A.dylib/MRURoutingTableViewCellDelegate.h>
#import <libobjc.A.dylib/MRUEndpointMetadataControllerObserver.h>
#import <libobjc.A.dylib/CARSessionObserving.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/_MPStateDumpPropertyListTransformable.h>

@protocol MRURoutingViewControllerDelegate;
@class MRURoutingViewControllerUpdate, MPAVRoute, MPSectionedCollection, NSArray, NSDictionary, MPWeakTimer, MPAVRoutingController, MRUVisualStylingProvider, MPVolumeGroupSliderCoordinator, MPAVEndpointRoute, NSMapTable, CARSessionStatus, NSMutableSet, NSNumberFormatter, NSTimer, MRURoutingView, NSString;

@interface MRURoutingViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, MPAVRoutingControllerDelegate, MRURoutingTableViewCellDelegate, MRUEndpointMetadataControllerObserver, CARSessionObserving, UIGestureRecognizerDelegate, _MPStateDumpPropertyListTransformable> {

	MRURoutingViewControllerUpdate* _pendingUpdate;
	MRURoutingViewControllerUpdate* _optimisticUpdate;
	BOOL _isAnimatingUpdate;
	MPAVRoute* _displayedEndpointRoute;
	MPSectionedCollection* _routingViewItems;
	NSArray* _cachedPickedRoutes;
	NSArray* _cachedDisplayableAvailableRoutes;
	NSArray* _cachedPendingPickedRoutes;
	NSArray* _cachedDisplayAsPickedRoutes;
	NSArray* _cachedVolumeCapableRoutes;
	NSDictionary* _cachedRouteGrouping;
	MPWeakTimer* _updateTimer;
	int _airPlayPasswordAlertDidAppearToken;
	int _airPlayPasswordAlertDidCancelToken;
	BOOL _airPlayPasswordAlertDidAppearTokenIsValid;
	BOOL _hasUserSelections;
	unsigned long long _updatesSincePresentation;
	BOOL _sortByIsVideoRoute;
	BOOL _showMetadataForEndpointRoute;
	BOOL _onScreen;
	BOOL _needsDisplayedRoutesUpdate;
	MPAVRoutingController* _routingController;
	id<MRURoutingViewControllerDelegate> _delegate;
	MRUVisualStylingProvider* _stylingProvider;
	MPVolumeGroupSliderCoordinator* _groupSliderCoordinator;
	NSArray* _metadataControllers;
	MPAVEndpointRoute* _endpointRoute;
	long long _discoveryMode;
	NSMapTable* _outputDeviceVolumeSliders;
	CARSessionStatus* _carPlaySessionStatus;
	NSMutableSet* _expandedGroupUIDs;
	NSMutableSet* _expandedItemUIDs;
	NSDictionary* _indexedMetadataControllers;
	NSNumberFormatter* _percentageFormatter;
	MPWeakTimer* _subtitleUpdateTimer;
	NSTimer* _collapseTimer;
	UIEdgeInsets _contentEdgeInsets;
	UIEdgeInsets _scrollIndicatorInsets;

}

@property (nonatomic,retain) MRURoutingView * view; 
@property (nonatomic,retain) MRURoutingView * viewIfLoaded; 
@property (getter=isInCarPlay,nonatomic,readonly) BOOL inCarPlay; 
@property (assign,nonatomic) BOOL onScreen;                                                        //@synthesize onScreen=_onScreen - In the implementation block
@property (nonatomic,retain) NSMapTable * outputDeviceVolumeSliders;                               //@synthesize outputDeviceVolumeSliders=_outputDeviceVolumeSliders - In the implementation block
@property (nonatomic,retain) CARSessionStatus * carPlaySessionStatus;                              //@synthesize carPlaySessionStatus=_carPlaySessionStatus - In the implementation block
@property (nonatomic,retain) NSMutableSet * expandedGroupUIDs;                                     //@synthesize expandedGroupUIDs=_expandedGroupUIDs - In the implementation block
@property (nonatomic,retain) NSMutableSet * expandedItemUIDs;                                      //@synthesize expandedItemUIDs=_expandedItemUIDs - In the implementation block
@property (nonatomic,retain) NSDictionary * indexedMetadataControllers;                            //@synthesize indexedMetadataControllers=_indexedMetadataControllers - In the implementation block
@property (assign,nonatomic) BOOL needsDisplayedRoutesUpdate;                                      //@synthesize needsDisplayedRoutesUpdate=_needsDisplayedRoutesUpdate - In the implementation block
@property (nonatomic,retain) NSNumberFormatter * percentageFormatter;                              //@synthesize percentageFormatter=_percentageFormatter - In the implementation block
@property (nonatomic,retain) MPWeakTimer * subtitleUpdateTimer;                                    //@synthesize subtitleUpdateTimer=_subtitleUpdateTimer - In the implementation block
@property (nonatomic,retain) NSTimer * collapseTimer;                                              //@synthesize collapseTimer=_collapseTimer - In the implementation block
@property (nonatomic,readonly) MPAVRoutingController * routingController;                          //@synthesize routingController=_routingController - In the implementation block
@property (assign,nonatomic,__weak) id<MRURoutingViewControllerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MRUVisualStylingProvider * stylingProvider;                           //@synthesize stylingProvider=_stylingProvider - In the implementation block
@property (nonatomic,retain) MPVolumeGroupSliderCoordinator * groupSliderCoordinator;              //@synthesize groupSliderCoordinator=_groupSliderCoordinator - In the implementation block
@property (nonatomic,retain) NSArray * metadataControllers;                                        //@synthesize metadataControllers=_metadataControllers - In the implementation block
@property (nonatomic,retain) MPAVEndpointRoute * endpointRoute;                                    //@synthesize endpointRoute=_endpointRoute - In the implementation block
@property (assign,nonatomic) long long discoveryMode;                                              //@synthesize discoveryMode=_discoveryMode - In the implementation block
@property (assign,nonatomic) BOOL sortByIsVideoRoute;                                              //@synthesize sortByIsVideoRoute=_sortByIsVideoRoute - In the implementation block
@property (assign,nonatomic) BOOL showMetadataForEndpointRoute;                                    //@synthesize showMetadataForEndpointRoute=_showMetadataForEndpointRoute - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentEdgeInsets;                                       //@synthesize contentEdgeInsets=_contentEdgeInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets scrollIndicatorInsets;                                   //@synthesize scrollIndicatorInsets=_scrollIndicatorInsets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)sessionDidDisconnect:(id)arg1 ;
-(void)sessionDidConnect:(id)arg1 ;
-(MPAVRoutingController *)routingController;
-(long long)discoveryMode;
-(BOOL)onScreen;
-(BOOL)sortByIsVideoRoute;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(void)routingControllerAvailableRoutesDidChange:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)init;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(UIEdgeInsets)scrollIndicatorInsets;
-(MPAVEndpointRoute *)endpointRoute;
-(id<MRURoutingViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setGroupSliderCoordinator:(MPVolumeGroupSliderCoordinator *)arg1 ;
-(void)setOnScreen:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(CARSessionStatus *)carPlaySessionStatus;
-(void)setDelegate:(id<MRURoutingViewControllerDelegate>)arg1 ;
-(id)_crashLogDateFormatter;
-(id)_generatePropertyListFromUpdateDisplayedRoutesState:(id)arg1 exception:(id)arg2 ;
-(id)_writeToDiskWithUpdateDisplayedRoutesStatePropertyList:(id)arg1 error:(id*)arg2 ;
-(id)_alertControllerForUpdateDisplayedRoutesCrashWithLogFileURL:(id)arg1 exception:(id)arg2 ;
-(BOOL)isInCarPlay;
-(void)routingCellDidTapToExpand:(id)arg1 ;
-(void)_applyUpdate:(id)arg1 ;
-(BOOL)isInVehicle;
-(BOOL)hasCarKitRoute;
-(void)resetDisplayedRoutes;
-(void)_enqueueUpdate:(id)arg1 ;
-(void)enqueueRefreshUpdate;
-(BOOL)_wouldShareAudioForPickedRoute:(id)arg1 operation:(long long)arg2 pickedRoutes:(id)arg3 ;
-(void)_diplayShareAudioDisabledAlertForReason:(id)arg1 ;
-(BOOL)_operationRequiresOptimisticState:(long long)arg1 routes:(id)arg2 ;
-(void)_setupUpdateTimerIfNecessary;
-(void)_setNeedsRouteDiscoveryModeUpdate;
-(void)_setNeedsDisplayedRoutesUpdate;
-(id)_displayableRoutesInRoutes:(id)arg1 ;
-(id)_displayAsPickedRoutesInRoutes:(id)arg1 ;
-(void)_createUpdateWithCompletion:(/*^block*/id)arg1 ;
-(void)_updateDisplayedRoutes;
-(void)setOptimisticUpdate:(id)arg1 ;
-(id)_createRefreshUpdate;
-(id)_createReloadUpdate;
-(id)endpointGroupUID;
-(void)updateExpandedGroups;
-(id)groupUIDForRoute:(id)arg1 ;
-(id)_createRoutingViewItemsForRoutes:(id)arg1 ;
-(void)_collapseAllGroups;
-(id)_createSectionedCollection:(id)arg1 withPickedRoutes:(id)arg2 ;
-(NSMapTable *)outputDeviceVolumeSliders;
-(void)setOutputDeviceVolumeSliders:(NSMapTable *)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(id)_stateDumpObject;
-(id)initWithRoutingController:(id)arg1 ;
-(void)updateSubtitle;
-(void)routingController:(id)arg1 didFailToPickRouteWithError:(id)arg2 ;
-(void)routingController:(id)arg1 pickedRoutesDidChange:(id)arg2 ;
-(void)routingController:(id)arg1 shouldHijackRoute:(id)arg2 alertStyle:(long long)arg3 busyRouteName:(id)arg4 presentingAppName:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)setScrollIndicatorInsets:(UIEdgeInsets)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)updateMetadata;
-(MPVolumeGroupSliderCoordinator *)groupSliderCoordinator;
-(UIEdgeInsets)contentEdgeInsets;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(void)setCarPlaySessionStatus:(CARSessionStatus *)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setDiscoveryMode:(long long)arg1 ;
-(void)setSortByIsVideoRoute:(BOOL)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)setEndpointRoute:(MPAVEndpointRoute *)arg1 ;
-(void)dealloc;
-(void)setStylingProvider:(MRUVisualStylingProvider *)arg1 ;
-(NSNumberFormatter *)percentageFormatter;
-(MRUVisualStylingProvider *)stylingProvider;
-(void)setPercentageFormatter:(NSNumberFormatter *)arg1 ;
-(void)setMetadataControllers:(NSArray *)arg1 ;
-(BOOL)metadataControllerShouldAutomaticallyUpdateReponse:(id)arg1 ;
-(void)metadataController:(id)arg1 didLoadNewResponse:(id)arg2 ;
-(void)metadataControllerRouteDidUpdate:(id)arg1 ;
-(void)setShowMetadataForEndpointRoute:(BOOL)arg1 ;
-(void)didReceiveInteraction:(id)arg1 ;
-(void)volumeSliderVolumeControlAvailabilityDidChangeNotification:(id)arg1 ;
-(void)updateMetadataControllersForRoutes:(id)arg1 ;
-(void)updateCell:(id)arg1 forIndexPath:(id)arg2 ;
-(void)updateHeaderView:(id)arg1 forSection:(long long)arg2 ;
-(void)_collapseAllGroupsAfterDelay;
-(void)updateMetadataForController:(id)arg1 ;
-(BOOL)routesContainMultipleBuiltIn:(id)arg1 ;
-(long long)subtitleAccessoryForItem:(id)arg1 metadataController:(id)arg2 ;
-(BOOL)routesContainSplitterCapableRoute:(id)arg1 ;
-(BOOL)routesContainAirPlayGroupableRoute:(id)arg1 ;
-(BOOL)needsDisplayedRoutesUpdate;
-(NSArray *)metadataControllers;
-(BOOL)showMetadataForEndpointRoute;
-(NSMutableSet *)expandedGroupUIDs;
-(void)setExpandedGroupUIDs:(NSMutableSet *)arg1 ;
-(NSMutableSet *)expandedItemUIDs;
-(void)setExpandedItemUIDs:(NSMutableSet *)arg1 ;
-(NSDictionary *)indexedMetadataControllers;
-(void)setIndexedMetadataControllers:(NSDictionary *)arg1 ;
-(void)setNeedsDisplayedRoutesUpdate:(BOOL)arg1 ;
-(MPWeakTimer *)subtitleUpdateTimer;
-(void)setSubtitleUpdateTimer:(MPWeakTimer *)arg1 ;
-(NSTimer *)collapseTimer;
-(void)setCollapseTimer:(NSTimer *)arg1 ;
@end


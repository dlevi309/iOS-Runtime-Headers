/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CARSessionObserving.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/MPAVRoutingControllerDelegate.h>
#import <libobjc.A.dylib/MPAVRoutingTableViewCellDelegate.h>
#import <libobjc.A.dylib/_MPStateDumpPropertyListTransformable.h>

@protocol MPAVRoutingViewControllerDelegate, MPAVRoutingViewControllerThemeDelegate;
@class MPAVClippingTableView, MPAVRoutingViewControllerUpdate, MPAVRoute, MPSectionedCollection, NSArray, MPWeakTimer, MPAVRoutingController, UIColor, CARSessionStatus, NSNumber, MPAVEndpointRoute, NSMapTable, MPVolumeGroupSliderCoordinator, UITableView, NSString;

@interface MPAVRoutingViewController : UIViewController <CARSessionObserving, UITableViewDataSource, UITableViewDelegate, MPAVRoutingControllerDelegate, MPAVRoutingTableViewCellDelegate, _MPStateDumpPropertyListTransformable> {

	MPAVClippingTableView* _tableView;
	MPAVRoutingViewControllerUpdate* _pendingUpdate;
	BOOL _isAnimatingUpdate;
	MPAVRoute* _displayedEndpointRoute;
	MPSectionedCollection* _routingViewItems;
	NSArray* _cachedPickedRoutes;
	NSArray* _cachedDisplayableAvailableRoutes;
	NSArray* _cachedPendingPickedRoutes;
	NSArray* _cachedDisplayAsPickedRoutes;
	NSArray* _cachedVolumeCapableRoutes;
	MPWeakTimer* _updateTimer;
	MPAVRoutingController* _routingController;
	long long _routeDiscoveryMode;
	UIColor* _tableCellsBackgroundColor;
	UIColor* _tableCellsContentColor;
	int _airPlayPasswordAlertDidAppearToken;
	int _airPlayPasswordAlertDidCancelToken;
	BOOL _airPlayPasswordAlertDidAppearTokenIsValid;
	BOOL _needsDisplayedRoutesUpdate;
	BOOL _suspendedDiscoveryModeDueToApplicationState;
	BOOL _shouldAutomaticallyUpdateRoutesList;
	BOOL _shouldPickRouteOnSelection;
	BOOL _onScreen;
	BOOL _hasUserSelections;
	CARSessionStatus* _carPlayStatus;
	unsigned long long _updatesSincePresentation;
	long long _discoveryModeBeforeEnteringBackground;
	BOOL _sortByIsVideoRoute;
	unsigned long long _style;
	id<MPAVRoutingViewControllerDelegate> _delegate;
	long long _avItemType;
	unsigned long long _mirroringStyle;
	unsigned long long _iconStyle;
	NSNumber* _discoveryModeOverride;
	id<MPAVRoutingViewControllerThemeDelegate> _themeDelegate;
	MPAVEndpointRoute* _endpointRoute;
	NSMapTable* _outputDeviceVolumeSliders;
	MPVolumeGroupSliderCoordinator* _groupSliderCoordinator;

}

@property (getter=isInCarPlay,nonatomic,readonly) BOOL inCarPlay; 
@property (assign,nonatomic,__weak) id<MPAVRoutingViewControllerThemeDelegate> themeDelegate;                                        //@synthesize themeDelegate=_themeDelegate - In the implementation block
@property (nonatomic,readonly) MPAVRoutingController * _routingController; 
@property (nonatomic,retain) MPAVEndpointRoute * endpointRoute;                                                                      //@synthesize endpointRoute=_endpointRoute - In the implementation block
@property (nonatomic,readonly) UITableView * _tableView; 
@property (nonatomic,readonly) double _normalCellHeight; 
@property (nonatomic,readonly) double _expandedCellHeight; 
@property (setter=_setTableCellsBackgroundColor:,nonatomic,retain) UIColor * _tableCellsBackgroundColor; 
@property (setter=_setTableCellsContentColor:,nonatomic,retain) UIColor * _tableCellsContentColor; 
@property (assign,setter=_setShouldAutomaticallyUpdateRoutesList:,nonatomic) BOOL _shouldAutomaticallyUpdateRoutesList; 
@property (assign,setter=_setShouldPickRouteOnSelection:,nonatomic) BOOL _shouldPickRouteOnSelection; 
@property (nonatomic,retain) NSMapTable * outputDeviceVolumeSliders;                                                                 //@synthesize outputDeviceVolumeSliders=_outputDeviceVolumeSliders - In the implementation block
@property (nonatomic,retain) MPVolumeGroupSliderCoordinator * groupSliderCoordinator;                                                //@synthesize groupSliderCoordinator=_groupSliderCoordinator - In the implementation block
@property (assign,nonatomic) BOOL sortByIsVideoRoute;                                                                                //@synthesize sortByIsVideoRoute=_sortByIsVideoRoute - In the implementation block
@property (nonatomic,readonly) unsigned long long style;                                                                             //@synthesize style=_style - In the implementation block
@property (assign,nonatomic,__weak) id<MPAVRoutingViewControllerDelegate> delegate;                                                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,setter=setAVItemType:,nonatomic) long long avItemType;                                                             //@synthesize avItemType=_avItemType - In the implementation block
@property (assign,nonatomic) unsigned long long mirroringStyle;                                                                      //@synthesize mirroringStyle=_mirroringStyle - In the implementation block
@property (assign,nonatomic) unsigned long long iconStyle;                                                                           //@synthesize iconStyle=_iconStyle - In the implementation block
@property (assign,nonatomic) BOOL allowMirroring; 
@property (nonatomic,copy) NSNumber * discoveryModeOverride;                                                                         //@synthesize discoveryModeOverride=_discoveryModeOverride - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<MPAVRoutingViewControllerDelegate>)delegate;
-(void)setDelegate:(id<MPAVRoutingViewControllerDelegate>)arg1 ;
-(unsigned long long)style;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(CGSize)preferredContentSize;
-(id)initWithStyle:(unsigned long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_registerNotifications;
-(void)_unregisterNotifications;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(UITableView *)_tableView;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(MPAVRoutingController *)_routingController;
-(void)setSortByIsVideoRoute:(BOOL)arg1 ;
-(BOOL)sortByIsVideoRoute;
-(id)_stateDumpObject;
-(void)setMirroringStyle:(unsigned long long)arg1 ;
-(void)setIconStyle:(unsigned long long)arg1 ;
-(unsigned long long)mirroringStyle;
-(unsigned long long)iconStyle;
-(void)routingControllerAvailableRoutesDidChange:(id)arg1 ;
-(void)routingController:(id)arg1 didFailToPickRouteWithError:(id)arg2 ;
-(void)routingController:(id)arg1 pickedRoutesDidChange:(id)arg2 ;
-(void)routingController:(id)arg1 shouldHijackRoute:(id)arg2 alertStyle:(long long)arg3 busyRouteName:(id)arg4 presentingAppName:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(void)_volumeSliderVolumeControlAvailabilityDidChangeNotification:(id)arg1 ;
-(void)sessionDidConnect:(id)arg1 ;
-(void)sessionDidDisconnect:(id)arg1 ;
-(id)_generatePropertyListFromUpdateDisplayedRoutesState:(id)arg1 exception:(id)arg2 ;
-(id)_writeToDiskWithUpdateDisplayedRoutesStatePropertyList:(id)arg1 error:(id*)arg2 ;
-(id)_alertControllerForUpdateDisplayedRoutesCrashWithLogFileURL:(id)arg1 exception:(id)arg2 ;
-(id)_crashLogDateFormatter;
-(UIColor *)_tableCellsBackgroundColor;
-(UIColor *)_tableCellsContentColor;
-(BOOL)_shouldAutomaticallyUpdateRoutesList;
-(BOOL)_shouldPickRouteOnSelection;
-(void)routingCell:(id)arg1 mirroringSwitchValueDidChange:(BOOL)arg2 ;
-(void)_initWithStyle:(unsigned long long)arg1 routingController:(id)arg2 ;
-(id)initWithStyle:(unsigned long long)arg1 routingController:(id)arg2 ;
-(void)setAVItemType:(long long)arg1 ;
-(BOOL)allowMirroring;
-(void)setAllowMirroring:(BOOL)arg1 ;
-(void)setDiscoveryModeOverride:(NSNumber *)arg1 ;
-(void)setGroupSliderCoordinator:(MPVolumeGroupSliderCoordinator *)arg1 ;
-(BOOL)isInCarPlay;
-(BOOL)hasCarKitRoute;
-(BOOL)isInVehicle;
-(void)resetDisplayedRoutes;
-(void)resetScrollPosition;
-(BOOL)shouldOverrideContentSizeCategory:(id)arg1 ;
-(void)enqueueRefreshUpdate;
-(void)setEndpointRoute:(MPAVEndpointRoute *)arg1 ;
-(double)_expandedCellHeight;
-(double)_normalCellHeight;
-(void)_setShouldAutomaticallyUpdateRoutesList:(BOOL)arg1 ;
-(void)_setShouldPickRouteOnSelection:(BOOL)arg1 ;
-(void)_setTableCellsBackgroundColor:(id)arg1 ;
-(void)_setTableCellsContentColor:(id)arg1 ;
-(BOOL)_wouldShareAudioForPickedRoute:(id)arg1 operation:(long long)arg2 pickedRoutes:(id)arg3 ;
-(void)_diplayShareAudioDisabledAlertForReason:(id)arg1 ;
-(double)_tableViewHeightAccordingToDataSource;
-(void)_configureCell:(id)arg1 forIndexPath:(id)arg2 ;
-(void)_registerCarPlayObserver;
-(void)_beginRouteDiscovery;
-(void)_endRouteDiscovery;
-(void)_setupUpdateTimerIfNecessary;
-(void)_setRouteDiscoveryMode:(long long)arg1 ;
-(void)_setNeedsRouteDiscoveryModeUpdate;
-(void)_setNeedsDisplayedRoutesUpdate;
-(id)_displayableRoutesInRoutes:(id)arg1 ;
-(id)_displayAsPickedRoutesInRoutes:(id)arg1 ;
-(id)_volumeCapableRoutesInRoutes:(id)arg1 ;
-(void)_updateDisplayedRoutes;
-(void)_enqueueUpdate:(id)arg1 ;
-(id)_createReloadUpdate;
-(void)_applyUpdate:(id)arg1 ;
-(double)_tableViewHeaderViewHeight;
-(double)_tableViewFooterViewHeight;
-(BOOL)_shouldDisplayRouteAsPicked:(id)arg1 ;
-(id)_createVolumeSlider;
-(void)_endUpdates;
-(id)_createSectionedCollection:(id)arg1 withPickedRoutes:(id)arg2 ;
-(long long)avItemType;
-(NSNumber *)discoveryModeOverride;
-(id<MPAVRoutingViewControllerThemeDelegate>)themeDelegate;
-(void)setThemeDelegate:(id<MPAVRoutingViewControllerThemeDelegate>)arg1 ;
-(MPAVEndpointRoute *)endpointRoute;
-(NSMapTable *)outputDeviceVolumeSliders;
-(void)setOutputDeviceVolumeSliders:(NSMapTable *)arg1 ;
-(MPVolumeGroupSliderCoordinator *)groupSliderCoordinator;
@end


/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/

#import <libobjc.A.dylib/WFHotspotInterfaceDelegate.h>
#import <libobjc.A.dylib/WFNetworkListDelegate.h>
#import <libobjc.A.dylib/WFAirportViewControllerDelegate.h>
#import <libobjc.A.dylib/WFScanManagerDelegate.h>
#import <libobjc.A.dylib/WFGasQueryControllerDelegate.h>
#import <libobjc.A.dylib/WFHealthManagerDelegate.h>

@protocol WFNetworkListing, WFNetworkListRecord, WFOtherNetworkProvider, WFNetworkViewProvider, WFContextPresenting;
@class UIViewController, WFHotspotInterface, NSSet, WFInterface, NSOperationQueue, WFHealthIssueOverrides, WFScanManager, WFLinkQuality, WFHealthManager, WFKnownNetworksListController, WFGasQueryController, WFWiFiStateMonitor, WFClient, WFDetailsContext, WFCredentialsContext, WFKnownNetworkStore, WFCertificateContext, WFAssociationContext, WFScanMetricsManager, NSString;

@interface WFNetworkListController : NSObject <WFHotspotInterfaceDelegate, WFNetworkListDelegate, WFAirportViewControllerDelegate, WFScanManagerDelegate, WFGasQueryControllerDelegate, WFHealthManagerDelegate> {

	BOOL _scanForPersonalHotspots;
	BOOL _scanning;
	BOOL _associatingToOtherNetwork;
	BOOL _viewControllerSupportsCurrentNetworkSubtitle;
	BOOL _powered;
	BOOL _canScanForPersonalHotspots;
	BOOL _refreshedKnownNetworks;
	BOOL _HS20Supported;
	UIViewController*<WFNetworkListing> _viewController;
	WFHotspotInterface* _hotspotInterface;
	NSSet* _networks;
	WFInterface* _interface;
	id<WFNetworkListRecord> _associatingNetwork;
	UIViewController*<WFOtherNetworkProvider> _otherNetworkVC;
	NSOperationQueue* _backgroundQueue;
	WFHealthIssueOverrides* _healthRecommendationOverrides;
	WFScanManager* _scanManager;
	WFLinkQuality* _latestLinkQuality;
	WFHealthManager* _healthManager;
	WFKnownNetworksListController* _knownNetworksListController;
	WFGasQueryController* _gasController;
	WFWiFiStateMonitor* _stateMonitor;
	WFClient* _wifiClient;
	id<WFNetworkViewProvider> _viewProvider;
	WFDetailsContext* _detailsContext;
	WFCredentialsContext* _credentialsContext;
	WFKnownNetworkStore* _knownNetworkStore;
	WFCertificateContext* _certificateContext;
	id<WFContextPresenting> _visibleContext;
	WFAssociationContext* _associationContext;
	WFScanMetricsManager* _scanMetricsManager;

}

@property (nonatomic,retain) UIViewController*<WFNetworkListing> viewController;                       //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) WFHotspotInterface * hotspotInterface;                                    //@synthesize hotspotInterface=_hotspotInterface - In the implementation block
@property (nonatomic,retain) NSSet * networks;                                                         //@synthesize networks=_networks - In the implementation block
@property (nonatomic,retain) WFInterface * interface;                                                  //@synthesize interface=_interface - In the implementation block
@property (nonatomic,retain) id<WFNetworkListRecord> associatingNetwork;                               //@synthesize associatingNetwork=_associatingNetwork - In the implementation block
@property (assign) BOOL associatingToOtherNetwork;                                                     //@synthesize associatingToOtherNetwork=_associatingToOtherNetwork - In the implementation block
@property (nonatomic,retain) UIViewController*<WFOtherNetworkProvider> otherNetworkVC;                 //@synthesize otherNetworkVC=_otherNetworkVC - In the implementation block
@property (nonatomic,retain) NSOperationQueue * backgroundQueue;                                       //@synthesize backgroundQueue=_backgroundQueue - In the implementation block
@property (nonatomic,retain) WFHealthIssueOverrides * healthRecommendationOverrides;                   //@synthesize healthRecommendationOverrides=_healthRecommendationOverrides - In the implementation block
@property (nonatomic,retain) WFScanManager * scanManager;                                              //@synthesize scanManager=_scanManager - In the implementation block
@property (nonatomic,retain) WFLinkQuality * latestLinkQuality;                                        //@synthesize latestLinkQuality=_latestLinkQuality - In the implementation block
@property (nonatomic,retain) WFHealthManager * healthManager;                                          //@synthesize healthManager=_healthManager - In the implementation block
@property (nonatomic,retain) WFKnownNetworksListController * knownNetworksListController;              //@synthesize knownNetworksListController=_knownNetworksListController - In the implementation block
@property (assign,nonatomic) BOOL viewControllerSupportsCurrentNetworkSubtitle;                        //@synthesize viewControllerSupportsCurrentNetworkSubtitle=_viewControllerSupportsCurrentNetworkSubtitle - In the implementation block
@property (assign,nonatomic) BOOL powered;                                                             //@synthesize powered=_powered - In the implementation block
@property (assign,nonatomic) BOOL canScanForPersonalHotspots;                                          //@synthesize canScanForPersonalHotspots=_canScanForPersonalHotspots - In the implementation block
@property (nonatomic,retain) WFGasQueryController * gasController;                                     //@synthesize gasController=_gasController - In the implementation block
@property (nonatomic,retain) WFWiFiStateMonitor * stateMonitor;                                        //@synthesize stateMonitor=_stateMonitor - In the implementation block
@property (assign,nonatomic) BOOL refreshedKnownNetworks;                                              //@synthesize refreshedKnownNetworks=_refreshedKnownNetworks - In the implementation block
@property (nonatomic,retain) WFClient * wifiClient;                                                    //@synthesize wifiClient=_wifiClient - In the implementation block
@property (nonatomic,retain) id<WFNetworkViewProvider> viewProvider;                                   //@synthesize viewProvider=_viewProvider - In the implementation block
@property (nonatomic,retain) WFDetailsContext * detailsContext;                                        //@synthesize detailsContext=_detailsContext - In the implementation block
@property (nonatomic,retain) WFCredentialsContext * credentialsContext;                                //@synthesize credentialsContext=_credentialsContext - In the implementation block
@property (nonatomic,retain) WFKnownNetworkStore * knownNetworkStore;                                  //@synthesize knownNetworkStore=_knownNetworkStore - In the implementation block
@property (nonatomic,retain) WFCertificateContext * certificateContext;                                //@synthesize certificateContext=_certificateContext - In the implementation block
@property (nonatomic,retain) id<WFContextPresenting> visibleContext;                                   //@synthesize visibleContext=_visibleContext - In the implementation block
@property (nonatomic,retain) WFAssociationContext * associationContext;                                //@synthesize associationContext=_associationContext - In the implementation block
@property (nonatomic,retain) WFScanMetricsManager * scanMetricsManager;                                //@synthesize scanMetricsManager=_scanMetricsManager - In the implementation block
@property (assign,getter=isHS20Supported,nonatomic) BOOL HS20Supported;                                //@synthesize HS20Supported=_HS20Supported - In the implementation block
@property (assign,nonatomic) BOOL scanForPersonalHotspots;                                             //@synthesize scanForPersonalHotspots=_scanForPersonalHotspots - In the implementation block
@property (getter=isScanning,nonatomic,readonly) BOOL scanning;                                        //@synthesize scanning=_scanning - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(WFInterface *)interface;
-(void)setInterface:(WFInterface *)arg1 ;
-(void)setViewController:(UIViewController*<WFNetworkListing>)arg1 ;
-(BOOL)handleURL:(id)arg1 ;
-(UIViewController*<WFNetworkListing>)viewController;
-(id)initWithViewController:(id)arg1 ;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(BOOL)isSetup;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(NSSet *)networks;
-(void)setNetworks:(NSSet *)arg1 ;
-(WFHotspotInterface *)hotspotInterface;
-(id)keyValueDictionaryForURL:(id)arg1 ;
-(NSOperationQueue *)backgroundQueue;
-(void)setBackgroundQueue:(NSOperationQueue *)arg1 ;
-(void)startScanning;
-(void)stopScanning;
-(id<WFNetworkViewProvider>)viewProvider;
-(void)setViewProvider:(id<WFNetworkViewProvider>)arg1 ;
-(BOOL)powered;
-(void)setPowered:(BOOL)arg1 ;
-(BOOL)isScanning;
-(void)_powerStateChanged;
-(void)_preferredNetworksDidChange:(id)arg1 ;
-(WFClient *)wifiClient;
-(void)setWifiClient:(WFClient *)arg1 ;
-(id)initWithViewController:(id)arg1 viewProvider:(id)arg2 client:(id)arg3 ;
-(void)_setupWithInterface:(id)arg1 ;
-(void)_updateViewControllerConnectedNetwork;
-(void)_setupWithoutInterface;
-(void)_interfaceDidBecomeAvailable:(id)arg1 ;
-(void)_clientRestartedNotification:(id)arg1 ;
-(void)_stateMonitorChangedStates:(long long)arg1 oldState:(long long)arg2 ;
-(void)_setupGASControllerWithInterface:(id)arg1 ;
-(BOOL)isAirPortSettings;
-(void)_registerForApplicationNotifications;
-(void)_ipStateDidChange:(id)arg1 ;
-(void)_powerDidChangeNotification:(id)arg1 ;
-(void)_networkDidChangeNotification:(id)arg1 ;
-(void)_networkLinkQualityDidChangeNotification:(id)arg1 ;
-(void)_networkRestrictionStateDidChange:(id)arg1 ;
-(void)_networkHealthIssuesDidChange:(id)arg1 ;
-(void)_powerModificationDisableStateDidChange:(id)arg1 ;
-(void)_managedAppleIDStateDidChange:(id)arg1 ;
-(void)_wifiPropertyDidChanged:(id)arg1 ;
-(void)setViewControllerSupportsCurrentNetworkSubtitle:(BOOL)arg1 ;
-(BOOL)viewControllerSupportsCurrentNetworkSubtitle;
-(void)_updateViewControllerDisabled;
-(void)setHS20Supported:(BOOL)arg1 ;
-(WFKnownNetworkStore *)knownNetworkStore;
-(WFScanMetricsManager *)scanMetricsManager;
-(void)_cleanUpStatesForDismissal;
-(void)setRefreshedKnownNetworks:(BOOL)arg1 ;
-(void)_stopHotspotScan;
-(void)_updatePowerState;
-(BOOL)_shouldPauseScanning;
-(void)_pauseScanning;
-(void)removeScanCache;
-(void)_dismissVisibleContext;
-(WFAssociationContext *)associationContext;
-(id<WFNetworkListRecord>)associatingNetwork;
-(void)_associationDidFinish:(BOOL)arg1 error:(id)arg2 ;
-(WFScanManager *)scanManager;
-(WFGasQueryController *)gasController;
-(id)scanManager:(id)arg1 filterScanResults:(id)arg2 ;
-(void)setCanScanForPersonalHotspots:(BOOL)arg1 ;
-(void)_startHotspotScan;
-(void)_resumeScanning;
-(BOOL)isHS20Supported;
-(BOOL)scanForPersonalHotspots;
-(BOOL)canScanForPersonalHotspots;
-(BOOL)isAssociating;
-(void)_updateViewControllerScanResults;
-(void)_updateViewsForNetworks:(id)arg1 ;
-(BOOL)_canStartAssociationToNetwork:(id)arg1 ;
-(void)_associateToScanRecord:(id)arg1 profile:(id)arg2 ;
-(void)_associateToHotspotDevice:(id)arg1 ;
-(void)_associateToUnconfiguredAccessory:(id)arg1 ;
-(void)_associateToHS20Network:(id)arg1 ;
-(void)_associateToEnterpriseNetwork:(id)arg1 profile:(id)arg2 ;
-(void)_associateToNetwork:(id)arg1 profile:(id)arg2 ;
-(void)_associationWillStart:(id)arg1 ;
-(void)_presentHotspotErrorContextWithDevice:(id)arg1 hotspotError:(id)arg2 failure:(long long)arg3 ;
-(void)_handleAssociationResult:(BOOL)arg1 error:(id)arg2 network:(id)arg3 profile:(id)arg4 shouldSaveProfile:(BOOL)arg5 ;
-(void)_promptCredentialsForNetwork:(id)arg1 profile:(id)arg2 ;
-(UIViewController*<WFOtherNetworkProvider>)otherNetworkVC;
-(void)_promptForSecureWACDevice:(id)arg1 ;
-(void)_runUnconfiguredJoinOperationForNetwork:(id)arg1 ;
-(void)_openHomeAppForNetwork:(id)arg1 ;
-(WFCredentialsContext *)credentialsContext;
-(void)_dismissErrorViewControllerWithContext:(id)arg1 ;
-(void)_presentErrorContext:(id)arg1 ;
-(void)_scanNetworkForAssociation:(id)arg1 profile:(id)arg2 ;
-(void)_handleAssociationError:(id)arg1 network:(id)arg2 profile:(id)arg3 ;
-(void)_dismissOtherNetworkViewControllerWithContext:(id)arg1 ;
-(void)_promptTrustCertificateForNetwork:(id)arg1 certificateChain:(id)arg2 profile:(id)arg3 autoJoin:(BOOL)arg4 ;
-(void)setOtherNetworkVC:(UIViewController*<WFOtherNetworkProvider>)arg1 ;
-(long long)_defaultAuthTraits;
-(BOOL)_supportsWiFiPasswordSharing;
-(BOOL)associatingToOtherNetwork;
-(void)setCredentialsContext:(WFCredentialsContext *)arg1 ;
-(void)setVisibleContext:(id<WFContextPresenting>)arg1 ;
-(void)_dismissCredentialsViewControllerWithContext:(id)arg1 ;
-(void)setCertificateContext:(WFCertificateContext *)arg1 ;
-(void)_dismissTrustViewControllerWithContext:(id)arg1 ;
-(BOOL)_canPromptForInstantHotspot;
-(BOOL)_disablePersonalHotspot;
-(BOOL)_canPromptForCarPlay;
-(BOOL)_isActiveCarPlaySession;
-(void)_promptToDisableCarPlayForNetworkName:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_associateToUserSuppliedNetwork:(id)arg1 ;
-(void)setAssociatingNetwork:(id<WFNetworkListRecord>)arg1 ;
-(void)setAssociationContext:(WFAssociationContext *)arg1 ;
-(void)setAssociatingToOtherNetwork:(BOOL)arg1 ;
-(WFLinkQuality *)latestLinkQuality;
-(void)_updateCurrentNetworkIPState;
-(void)_updateHealthSubtitle;
-(id)healthRecommendations;
-(WFHealthManager *)healthManager;
-(WFHealthIssueOverrides *)healthRecommendationOverrides;
-(void)_associateToScanRecord:(id)arg1 ;
-(BOOL)_canStartAssociationToUserSuppliedNetwork:(id)arg1 ;
-(BOOL)refreshedKnownNetworks;
-(id)_sortedHealthRecommendations;
-(void)_dismissDetailsViewControllerWithContext:(id)arg1 ;
-(void)setDetailsContext:(WFDetailsContext *)arg1 ;
-(void)_saveLogsWithComment:(id)arg1 diagnosticsViewController:(id)arg2 ;
-(void)pushDataUsageViewController;
-(WFKnownNetworksListController *)knownNetworksListController;
-(void)setKnownNetworksListController:(WFKnownNetworksListController *)arg1 ;
-(WFDetailsContext *)detailsContext;
-(void)setLatestLinkQuality:(WFLinkQuality *)arg1 ;
-(void)_dismissViewControllerForContext:(id)arg1 ;
-(id<WFContextPresenting>)visibleContext;
-(BOOL)_handleCurrentNetworkDetailsURL;
-(void)networkListViewController:(id)arg1 showSettingsForNetwork:(id)arg2 ;
-(void)hotspotInterfaceDidUpdateNetworks:(id)arg1 ;
-(void)networkListViewController:(id)arg1 didTapRecord:(id)arg2 ;
-(void)networkListViewControllerDidTapOtherNetwork:(id)arg1 ;
-(BOOL)networkListViewControllerCurrentPowerState:(id)arg1 ;
-(void)networkListViewController:(id)arg1 userDidChangePower:(BOOL)arg2 ;
-(void)networkListViewControllerDidAppear:(id)arg1 ;
-(void)networkListViewControllerDidDisappear:(id)arg1 ;
-(void)networkListViewControllerDidFinish:(id)arg1 ;
-(BOOL)networkListViewControllerWAPIEnabled:(id)arg1 ;
-(void)networkListViewController:(id)arg1 setWAPIEnabled:(BOOL)arg2 ;
-(BOOL)networkListViewControllerNetworkRestrictionActive:(id)arg1 ;
-(void)networkListViewController:(id)arg1 setAutoInstantOption:(long long)arg2 ;
-(long long)networkListViewControllerAutoInstantHotspotOption:(id)arg1 ;
-(BOOL)networkListViewControllerPowerModificationDisabled:(id)arg1 ;
-(BOOL)networkListViewControllerIsManagedAppleID:(id)arg1 ;
-(id)airportSettingsViewController:(id)arg1 unconfiguredAccessoriesGroupHeaderTitle:(id)arg2 ;
-(long long)airportSettingsViewControllerAskToJoinMode:(id)arg1 ;
-(void)airportSettingsViewController:(id)arg1 setAskToJoinMode:(long long)arg2 ;
-(BOOL)airportSettingsViewControllerShouldShowDiagnosticsMode:(id)arg1 ;
-(void)airportSettingsViewControllerDidTapDiagnosticsMode:(id)arg1 ;
-(BOOL)airportSettingsViewControllerCurrentNetworkConnectionIsProblematic:(id)arg1 ;
-(void)airportSettingsViewControllerDidTapDataUsage:(id)arg1 ;
-(BOOL)airportSettingsViewControllerShouldShowKnownNetworks:(id)arg1 ;
-(void)airportSettingsViewControllerDidTapKnownNetworks:(id)arg1 ;
-(void)scanManager:(id)arg1 updatedPartialResults:(id)arg2 ;
-(void)scanManagerScanningDidFinish:(id)arg1 withResults:(id)arg2 error:(id)arg3 ;
-(void)scanManagerScanningWillStart:(id)arg1 ;
-(void)scanManager:(id)arg1 stateDidChange:(long long)arg2 ;
-(void)scanManager:(id)arg1 didFindHotspotHelperNetworks:(id)arg2 ;
-(BOOL)scanManagerShouldSupportHotspotHelper:(id)arg1 ;
-(BOOL)scanManagerShouldSupportUnfilteredScanning:(id)arg1 ;
-(id)scanManagerKnownNetworks:(id)arg1 ;
-(id)existingProfileWithSSID:(id)arg1 ;
-(void)gasQueryController:(id)arg1 didUpdateProfiles:(id)arg2 ;
-(id)healthManager:(id)arg1 existingProfileForNetwork:(id)arg2 ;
-(id)initWithViewController:(id)arg1 viewProvider:(id)arg2 ;
-(void)_downloadHomeApp;
-(void)associateToEnterpriseNetwork:(id)arg1 profile:(id)arg2 ;
-(void)presentTrustCertificateForNetwork:(id)arg1 profile:(id)arg2 ;
-(BOOL)_useLegacySettingsUI;
-(void)setScanForPersonalHotspots:(BOOL)arg1 ;
-(void)setHotspotInterface:(WFHotspotInterface *)arg1 ;
-(void)setHealthRecommendationOverrides:(WFHealthIssueOverrides *)arg1 ;
-(void)setScanManager:(WFScanManager *)arg1 ;
-(void)setHealthManager:(WFHealthManager *)arg1 ;
-(void)setGasController:(WFGasQueryController *)arg1 ;
-(WFWiFiStateMonitor *)stateMonitor;
-(void)setStateMonitor:(WFWiFiStateMonitor *)arg1 ;
-(void)setKnownNetworkStore:(WFKnownNetworkStore *)arg1 ;
-(WFCertificateContext *)certificateContext;
-(void)setScanMetricsManager:(WFScanMetricsManager *)arg1 ;
@end


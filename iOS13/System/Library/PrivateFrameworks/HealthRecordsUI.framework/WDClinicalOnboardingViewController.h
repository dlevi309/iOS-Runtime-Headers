/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <HealthRecordsUI/HealthRecordsUI-Structs.h>
#import <HealthUI/HKTableViewController.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UISearchControllerDelegate.h>
#import <UIKit/UISearchResultsUpdating.h>
#import <libobjc.A.dylib/WDUserActivityResponder.h>

@class NSTimer, UISearchController, CLLocationManager, CLLocation, HRProfile, NSMutableOrderedSet, NSString, NSMutableDictionary, _UIContentUnavailableView, WDClinicalOnboardingNoGeoView, UIView, UIViewController, NSIndexPath, HRWDSpinnerView, WDClinicalSampleAccountsLoader, WDClinicalGatewayProxy;

@interface WDClinicalOnboardingViewController : HKTableViewController <CLLocationManagerDelegate, UISearchBarDelegate, UISearchControllerDelegate, UISearchResultsUpdating, WDUserActivityResponder> {

	long long _searchesInFlight;
	NSTimer* _searchTimer;
	UISearchController* _searchController;
	CLLocationManager* _locationManager;
	CLLocation* _location;
	BOOL _showProviderNotFound;
	BOOL _searchInFlight;
	BOOL _hasCompletedAtLeastOneFetch;
	BOOL _locationEnabled;
	HRProfile* _profile;
	NSMutableOrderedSet* _supportedSearchResults;
	NSMutableOrderedSet* _unsupportedSearchResults;
	NSString* _searchQuery;
	NSMutableDictionary* _resultsCache;
	long long _nextFrom;
	_UIContentUnavailableView* _noContentView;
	WDClinicalOnboardingNoGeoView* _noGeoView;
	UIView* _providerNotFoundView;
	UIViewController* _dismissalViewController;
	NSIndexPath* _spinnerIndexPath;
	HRWDSpinnerView* _spinnerView;
	WDClinicalSampleAccountsLoader* _sampleAccountsLoader;
	WDClinicalGatewayProxy* _pendingGatewayProxy;

}

@property (nonatomic,retain) HRProfile * profile;                                                //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * supportedSearchResults;                       //@synthesize supportedSearchResults=_supportedSearchResults - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * unsupportedSearchResults;                     //@synthesize unsupportedSearchResults=_unsupportedSearchResults - In the implementation block
@property (nonatomic,copy) NSString * searchQuery;                                               //@synthesize searchQuery=_searchQuery - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * resultsCache;                               //@synthesize resultsCache=_resultsCache - In the implementation block
@property (assign,nonatomic) long long nextFrom;                                                 //@synthesize nextFrom=_nextFrom - In the implementation block
@property (assign,nonatomic) BOOL searchInFlight;                                                //@synthesize searchInFlight=_searchInFlight - In the implementation block
@property (assign,nonatomic) BOOL hasCompletedAtLeastOneFetch;                                   //@synthesize hasCompletedAtLeastOneFetch=_hasCompletedAtLeastOneFetch - In the implementation block
@property (assign,nonatomic) BOOL locationEnabled;                                               //@synthesize locationEnabled=_locationEnabled - In the implementation block
@property (nonatomic,readonly) BOOL showingMainSpinner; 
@property (nonatomic,readonly) BOOL showingNoGeoView; 
@property (nonatomic,readonly) BOOL showingNoLocations; 
@property (nonatomic,readonly) BOOL couldFetchAdditionalResults; 
@property (nonatomic,readonly) BOOL hasSupportedLocations; 
@property (nonatomic,readonly) BOOL hasUnsupportedLocations; 
@property (nonatomic,readonly) BOOL hasBothSupportedAndUnsupported; 
@property (nonatomic,readonly) BOOL hasNeitherSupportedNorUnsupported; 
@property (nonatomic,readonly) BOOL wantsDefaultList; 
@property (nonatomic,retain) _UIContentUnavailableView * noContentView;                          //@synthesize noContentView=_noContentView - In the implementation block
@property (nonatomic,retain) WDClinicalOnboardingNoGeoView * noGeoView;                          //@synthesize noGeoView=_noGeoView - In the implementation block
@property (nonatomic,retain) UIView * providerNotFoundView;                                      //@synthesize providerNotFoundView=_providerNotFoundView - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * dismissalViewController;                  //@synthesize dismissalViewController=_dismissalViewController - In the implementation block
@property (nonatomic,retain) NSIndexPath * spinnerIndexPath;                                     //@synthesize spinnerIndexPath=_spinnerIndexPath - In the implementation block
@property (nonatomic,retain) HRWDSpinnerView * spinnerView;                                      //@synthesize spinnerView=_spinnerView - In the implementation block
@property (nonatomic,retain) WDClinicalSampleAccountsLoader * sampleAccountsLoader;              //@synthesize sampleAccountsLoader=_sampleAccountsLoader - In the implementation block
@property (nonatomic,retain) WDClinicalGatewayProxy * pendingGatewayProxy;                       //@synthesize pendingGatewayProxy=_pendingGatewayProxy - In the implementation block
@property (assign,nonatomic) BOOL showProviderNotFound;                                          //@synthesize showProviderNotFound=_showProviderNotFound - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HRProfile *)profile;
-(void)setProfile:(HRProfile *)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)loadView;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewDidLoad;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(BOOL)definesPresentationContext;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)didReceiveMemoryWarning;
-(void)didPresentSearchController:(id)arg1 ;
-(void)willDismissSearchController:(id)arg1 ;
-(void)didDismissSearchController:(id)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(void)setNoContentView:(_UIContentUnavailableView *)arg1 ;
-(_UIContentUnavailableView *)noContentView;
-(NSString *)searchQuery;
-(void)setSearchQuery:(NSString *)arg1 ;
-(NSMutableDictionary *)resultsCache;
-(HRWDSpinnerView *)spinnerView;
-(void)dismiss:(id)arg1 ;
-(void)setSpinnerView:(HRWDSpinnerView *)arg1 ;
-(long long)nextFrom;
-(id)searchResultAtIndexPath:(id)arg1 ;
-(BOOL)locationEnabled;
-(void)setNoGeoView:(WDClinicalOnboardingNoGeoView *)arg1 ;
-(void)_configureNavigationItems;
-(void)_configureSearchController;
-(void)_configureTableViewCells;
-(void)_cacheFeaturedBrandLogos;
-(WDClinicalGatewayProxy *)pendingGatewayProxy;
-(void)_loadGatewayProxyForDeeplinking:(id)arg1 ;
-(void)_configureLocationServices;
-(void)setShowProviderNotFound:(BOOL)arg1 ;
-(BOOL)_isSimulator;
-(void)setSampleAccountsLoader:(WDClinicalSampleAccountsLoader *)arg1 ;
-(void)_configureLeftNavigationItemAsCancel;
-(void)setDismissalViewController:(UIViewController *)arg1 ;
-(void)_suggestNewProviders;
-(BOOL)showingNoLocations;
-(void)setPendingGatewayProxy:(WDClinicalGatewayProxy *)arg1 ;
-(void)_configureProviderNotFoundView;
-(void)setProviderNotFoundView:(UIView *)arg1 ;
-(void)_updateTableHeaderViewHeight;
-(UIView *)providerNotFoundView;
-(void)_disableLocationAwareness;
-(void)_presentInitialResultsIfNecessary;
-(void)setLocationEnabled:(BOOL)arg1 ;
-(void)_postAWDMetricForUsingSearch;
-(BOOL)showingNoGeoView;
-(void)_cancelSearch;
-(void)_searchUsingQuery:(id)arg1 ;
-(void)setUnsupportedSearchResults:(NSMutableOrderedSet *)arg1 ;
-(void)setSupportedSearchResults:(NSMutableOrderedSet *)arg1 ;
-(BOOL)wantsDefaultList;
-(id)_cacheKeyForSearchQuery:(id)arg1 ;
-(BOOL)showingMainSpinner;
-(void)_didFetchResultsForQuery:(id)arg1 searchResultsPage:(id)arg2 error:(id)arg3 ;
-(id)_emptyMutableOrderedSet;
-(WDClinicalOnboardingNoGeoView *)noGeoView;
-(void)setNextFrom:(long long)arg1 ;
-(void)setSpinnerIndexPath:(NSIndexPath *)arg1 ;
-(void)_displayNoContentViewIfNeeded;
-(void)_searchResultsForQuery:(id)arg1 from:(long long)arg2 ;
-(BOOL)hasNeitherSupportedNorUnsupported;
-(void)setHasCompletedAtLeastOneFetch:(BOOL)arg1 ;
-(void)_presentError:(id)arg1 ;
-(id)_mutableOrderedSetWithSampleAccountsForQuery:(id)arg1 ;
-(id)_supportedProvidersFromResults:(id)arg1 ;
-(id)_unsupportedProvidersFromResults:(id)arg1 ;
-(NSMutableOrderedSet *)supportedSearchResults;
-(NSMutableOrderedSet *)unsupportedSearchResults;
-(WDClinicalSampleAccountsLoader *)sampleAccountsLoader;
-(BOOL)hasSupportedLocations;
-(BOOL)hasUnsupportedLocations;
-(void)_postAWDOnboardingMetricForType:(int)arg1 ;
-(UIViewController *)dismissalViewController;
-(BOOL)hasCompletedAtLeastOneFetch;
-(BOOL)hasBothSupportedAndUnsupported;
-(BOOL)couldFetchAdditionalResults;
-(NSIndexPath *)spinnerIndexPath;
-(BOOL)searchInFlight;
-(void)applyChangeActivity:(id)arg1 ;
-(id)applyTransitionActivity:(id)arg1 ;
-(id)initWithProfile:(id)arg1 gatewayProxy:(id)arg2 ;
-(void)configureLeftNavigationItemAsCancelAndDismissFromViewController:(id)arg1 ;
-(BOOL)hasOnlySupportedLocations;
-(BOOL)hasOnlyUnsupportedLocations;
-(BOOL)showProviderNotFound;
-(void)setSearchInFlight:(BOOL)arg1 ;
@end

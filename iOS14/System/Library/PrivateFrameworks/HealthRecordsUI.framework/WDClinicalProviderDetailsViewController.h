/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <HealthUI/HKTableViewController.h>
#import <libobjc.A.dylib/HRWDUserActivityResponder.h>

@class HRProfile, HKClinicalProviderSearchResult, HKClinicalProvider, NSCache, NSArray, HRWDSpinnerView, NSString;

@interface WDClinicalProviderDetailsViewController : HKTableViewController <HRWDUserActivityResponder> {

	HRProfile* _profile;
	HKClinicalProviderSearchResult* _searchResult;
	long long _fetchesInFlight;
	HKClinicalProvider* _provider;
	NSCache* _providerCache;
	NSArray* _connectedGateways;
	NSArray* _unconnectedGateways;
	NSArray* _sections;
	HRWDSpinnerView* _spinnerView;

}

@property (nonatomic,retain) HRProfile * profile;                                        //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) HKClinicalProviderSearchResult * searchResult;              //@synthesize searchResult=_searchResult - In the implementation block
@property (assign,nonatomic) long long fetchesInFlight;                                  //@synthesize fetchesInFlight=_fetchesInFlight - In the implementation block
@property (nonatomic,retain) HKClinicalProvider * provider;                              //@synthesize provider=_provider - In the implementation block
@property (nonatomic,retain) NSCache * providerCache;                                    //@synthesize providerCache=_providerCache - In the implementation block
@property (nonatomic,retain) NSArray * connectedGateways;                                //@synthesize connectedGateways=_connectedGateways - In the implementation block
@property (nonatomic,retain) NSArray * unconnectedGateways;                              //@synthesize unconnectedGateways=_unconnectedGateways - In the implementation block
@property (nonatomic,retain) NSArray * sections;                                         //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) HRWDSpinnerView * spinnerView;                              //@synthesize spinnerView=_spinnerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSections:(NSArray *)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)setProfile:(HRProfile *)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)setProvider:(HKClinicalProvider *)arg1 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(HKClinicalProviderSearchResult *)searchResult;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(HKClinicalProvider *)provider;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2 ;
-(void)setSearchResult:(HKClinicalProviderSearchResult *)arg1 ;
-(NSArray *)sections;
-(void)_computeSections;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setSpinnerView:(HRWDSpinnerView *)arg1 ;
-(HRWDSpinnerView *)spinnerView;
-(unsigned long long)supportedInterfaceOrientations;
-(id)initWithProfile:(id)arg1 provider:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2 ;
-(void)_presentError:(id)arg1 ;
-(id)initWithProfile:(id)arg1 searchResult:(id)arg2 ;
-(void)applyChangeActivity:(id)arg1 ;
-(id)applyTransitionActivity:(id)arg1 ;
-(HRProfile *)profile;
-(void)viewDidLoad;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(NSCache *)providerCache;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)setProviderCache:(NSCache *)arg1 ;
-(id)_initWithProfile:(id)arg1 ;
-(void)_fetchDetailsForSearchResult:(id)arg1 ;
-(void)removeSpinnerIfNecessary;
-(long long)fetchesInFlight;
-(void)setFetchesInFlight:(long long)arg1 ;
-(id)_orderGatewaysForDisplay:(id)arg1 ;
-(void)setConnectedGateways:(NSArray *)arg1 ;
-(NSArray *)connectedGateways;
-(void)setUnconnectedGateways:(NSArray *)arg1 ;
-(NSArray *)unconnectedGateways;
-(id)_gatewayAtIndexPath:(id)arg1 ;
-(void)_handleTapForActivateGateway:(id)arg1 ;
-(void)_presentUnavailableAlertForGatewayTitle:(id)arg1 ;
@end


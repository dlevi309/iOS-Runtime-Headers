/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <HealthUI/HKTableViewController.h>
#import <libobjc.A.dylib/WDUserActivityResponder.h>

@class HRProfile, HKClinicalProviderSearchResult, HKClinicalProvider, NSArray, HRWDSpinnerView, NSString;

@interface WDClinicalProviderDetailsViewController : HKTableViewController <WDUserActivityResponder> {

	HRProfile* _profile;
	HKClinicalProviderSearchResult* _searchResult;
	long long _fetchesInFlight;
	HKClinicalProvider* _provider;
	NSArray* _connectedGateways;
	NSArray* _unconnectedGateways;
	NSArray* _sections;
	HRWDSpinnerView* _spinnerView;

}

@property (nonatomic,retain) HRProfile * profile;                                        //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) HKClinicalProviderSearchResult * searchResult;              //@synthesize searchResult=_searchResult - In the implementation block
@property (assign,nonatomic) long long fetchesInFlight;                                  //@synthesize fetchesInFlight=_fetchesInFlight - In the implementation block
@property (nonatomic,retain) HKClinicalProvider * provider;                              //@synthesize provider=_provider - In the implementation block
@property (nonatomic,retain) NSArray * connectedGateways;                                //@synthesize connectedGateways=_connectedGateways - In the implementation block
@property (nonatomic,retain) NSArray * unconnectedGateways;                              //@synthesize unconnectedGateways=_unconnectedGateways - In the implementation block
@property (nonatomic,retain) NSArray * sections;                                         //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) HRWDSpinnerView * spinnerView;                              //@synthesize spinnerView=_spinnerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)providerCache;
-(void)setProvider:(HKClinicalProvider *)arg1 ;
-(HRProfile *)profile;
-(void)setProfile:(HRProfile *)arg1 ;
-(HKClinicalProvider *)provider;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(unsigned long long)supportedInterfaceOrientations;
-(NSArray *)sections;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)setSections:(NSArray *)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2 ;
-(HKClinicalProviderSearchResult *)searchResult;
-(void)setSearchResult:(HKClinicalProviderSearchResult *)arg1 ;
-(HRWDSpinnerView *)spinnerView;
-(void)setSpinnerView:(HRWDSpinnerView *)arg1 ;
-(id)initWithProfile:(id)arg1 provider:(id)arg2 ;
-(void)_presentError:(id)arg1 ;
-(id)initWithProfile:(id)arg1 searchResult:(id)arg2 ;
-(void)applyChangeActivity:(id)arg1 ;
-(id)applyTransitionActivity:(id)arg1 ;
-(void)_computeSections;
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


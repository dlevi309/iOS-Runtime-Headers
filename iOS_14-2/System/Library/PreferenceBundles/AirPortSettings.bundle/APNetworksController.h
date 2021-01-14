/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/AirPortSettings.bundle/AirPortSettings
*/

#import <Preferences/PSViewController.h>

@class WFHealthIssueOverrides, WFNetworkListController, WFAirportViewController, NSURL;

@interface APNetworksController : PSViewController {

	BOOL _pushDataUsage;
	BOOL _viewLoaded;
	BOOL _joinEnterprise;
	WFHealthIssueOverrides* _healthOverrides;
	WFNetworkListController* _airportController;
	WFAirportViewController* _settingsViewController;
	NSURL* _deferredURL;

}

@property (nonatomic,retain) WFHealthIssueOverrides * healthOverrides;                      //@synthesize healthOverrides=_healthOverrides - In the implementation block
@property (nonatomic,retain) WFNetworkListController * airportController;                   //@synthesize airportController=_airportController - In the implementation block
@property (nonatomic,retain) WFAirportViewController * settingsViewController;              //@synthesize settingsViewController=_settingsViewController - In the implementation block
@property (nonatomic,retain) NSURL * deferredURL;                                           //@synthesize deferredURL=_deferredURL - In the implementation block
-(void)willBecomeActive;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)handleURL:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)didWake;
-(void)willResignActive;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(WFAirportViewController *)settingsViewController;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setSettingsViewController:(WFAirportViewController *)arg1 ;
-(WFNetworkListController *)airportController;
-(void)setAirportController:(WFNetworkListController *)arg1 ;
-(void)_loadHealthOverrides;
-(WFHealthIssueOverrides *)healthOverrides;
-(NSURL *)deferredURL;
-(void)setDeferredURL:(NSURL *)arg1 ;
-(void)_notifyAirPortSettingsVisible:(BOOL)arg1 ;
-(void)setHealthOverrides:(WFHealthIssueOverrides *)arg1 ;
@end


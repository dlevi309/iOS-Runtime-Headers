/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/HKOrganDonationRegistrantDelegate.h>
#import <libobjc.A.dylib/HKOrganDonationConnectionManagerDelegate.h>
#import <libobjc.A.dylib/HKSimpleDataEntryItemToolbarDelegate.h>

@class HKOrganDonationConnectionManager, HKHealthStore, UIButton, UIActivityIndicatorView, UIBarButtonItem, UIView, UIFont, _HKMedicalIDData, HKOrganDonationRegistrant, NSString, NSArray;

@interface HKOrganDonationRegisterViewController : UITableViewController <HKOrganDonationRegistrantDelegate, HKOrganDonationConnectionManagerDelegate, HKSimpleDataEntryItemToolbarDelegate> {

	HKOrganDonationConnectionManager* _connectionManager;
	HKHealthStore* _healthStore;
	UIButton* _continueButton;
	UIActivityIndicatorView* _loadingIndicator;
	UIBarButtonItem* _loadingIndicatorBarButtonItem;
	UIBarButtonItem* _updateBarButtonItem;
	UIView* _headerView;
	UIView* _footerView;
	BOOL _isLoading;
	BOOL _isUpdate;
	UIFont* _bodyFont;
	_HKMedicalIDData* _medicalIDData;
	HKOrganDonationRegistrant* _registrant;
	NSString* _completionButtonTitle;
	/*^block*/id _registrationCompletionHandler;
	NSArray* _dataEntryItems;
	UIBarButtonItem* _nextButton;

}

@property (nonatomic,retain) NSArray * dataEntryItems;                            //@synthesize dataEntryItems=_dataEntryItems - In the implementation block
@property (nonatomic,retain) HKOrganDonationRegistrant * registrant;              //@synthesize registrant=_registrant - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * nextButton;                        //@synthesize nextButton=_nextButton - In the implementation block
@property (nonatomic,retain) _HKMedicalIDData * medicalIDData;                    //@synthesize medicalIDData=_medicalIDData - In the implementation block
@property (nonatomic,retain) NSString * completionButtonTitle;                    //@synthesize completionButtonTitle=_completionButtonTitle - In the implementation block
@property (nonatomic,copy) id registrationCompletionHandler;                      //@synthesize registrationCompletionHandler=_registrationCompletionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)init;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(UIBarButtonItem *)nextButton;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)registrationCompletionHandler;
-(void)setNextButton:(UIBarButtonItem *)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(_HKMedicalIDData *)medicalIDData;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setRegistrationCompletionHandler:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setMedicalIDData:(_HKMedicalIDData *)arg1 ;
-(void)viewDidLoad;
-(void)cancelButtonTapped:(id)arg1 ;
-(void)updateButtonTapped:(id)arg1 ;
-(id)_createTableHeaderView;
-(id)_createTableFooterView;
-(void)focusItemAtIndex:(long long)arg1 ;
-(NSArray *)dataEntryItems;
-(void)dataEntryItemDonePressed:(id)arg1 ;
-(void)dataEntryItemPrevPressed:(id)arg1 ;
-(void)dataEntryItemNextPressed:(id)arg1 ;
-(void)setDataEntryItems:(NSArray *)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)nextButtonTapped:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)dealloc;
-(void)organDonationConnectionManagerDidStoreCredential:(id)arg1 ;
-(void)organDonationConnectionManagerDidRemoveCredential:(id)arg1 ;
-(NSString *)completionButtonTitle;
-(void)setCompletionButtonTitle:(NSString *)arg1 ;
-(void)_loadRegistrantInformationIfAvailableAndSetupRegisterView;
-(void)_handleAppWillEnterForegroundNotification:(id)arg1 ;
-(void)_setupRegisterViewWithRegistrant:(id)arg1 demographicsInformation:(id)arg2 ;
-(void)_toggleLoadingStatusIsLoading:(BOOL)arg1 ;
-(void)_toggleNextButtonEnabledState;
-(void)_reloadRegistrantInformationFromServer;
-(void)_setupRegisterViewWithDefaultDemographicsInformation;
-(void)_setupRegisterViewWithRegistrant:(id)arg1 ;
-(BOOL)_registrantIsUnderAge;
-(void)_handleResponse:(id)arg1 status:(long long)arg2 ;
-(void)organDonationRegistrantDidUpdateValue:(id)arg1 ;
-(void)_headerTapped:(id)arg1 ;
-(HKOrganDonationRegistrant *)registrant;
-(void)setRegistrant:(HKOrganDonationRegistrant *)arg1 ;
@end


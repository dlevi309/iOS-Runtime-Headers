/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/HKMedicalIDViewControllerDelegate.h>
#import <libobjc.A.dylib/WDUserActivityResponder.h>

@class _HKMedicalIDData, UIScrollView, UIStackView, HKNavigationController, HKMedicalIDViewController, UIAlertController, SOSContactsManager, WDProfile, NSString;

@interface WDMedicalIDViewController : UITableViewController <HKMedicalIDViewControllerDelegate, WDUserActivityResponder> {

	_HKMedicalIDData* _medicalIDData;
	BOOL _medicalIDIsNew;
	UIScrollView* _introView;
	UIStackView* _introStackView;
	BOOL _loadingMedicalID;
	int _medicalIDChangedToken;
	HKNavigationController* _medicalIDEditor;
	BOOL _shouldShowConsolidationAlert;
	BOOL _shouldReloadMedicalIDData;
	HKMedicalIDViewController* _currentMedicalIDViewController;
	UIAlertController* _consolidationAlertController;
	SOSContactsManager* _sosContactsManager;
	WDProfile* _profile;

}

@property (assign,nonatomic,__weak) HKMedicalIDViewController * currentMedicalIDViewController;              //@synthesize currentMedicalIDViewController=_currentMedicalIDViewController - In the implementation block
@property (assign,nonatomic,__weak) UIAlertController * consolidationAlertController;                        //@synthesize consolidationAlertController=_consolidationAlertController - In the implementation block
@property (nonatomic,retain) SOSContactsManager * sosContactsManager;                                        //@synthesize sosContactsManager=_sosContactsManager - In the implementation block
@property (nonatomic,retain) WDProfile * profile;                                                            //@synthesize profile=_profile - In the implementation block
@property (assign,nonatomic) BOOL shouldReloadMedicalIDData;                                                 //@synthesize shouldReloadMedicalIDData=_shouldReloadMedicalIDData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(WDProfile *)profile;
-(void)setProfile:(WDProfile *)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidAppear:(BOOL)arg1 ;
-(long long)preferredStatusBarStyle;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)medicalIDViewControllerDidCancel:(id)arg1 ;
-(void)medicalIDViewControllerDidSave:(id)arg1 ;
-(void)medicalIDViewControllerDidDelete:(id)arg1 ;
-(void)medicalIDViewControllerDidAppear:(id)arg1 ;
-(void)applyChangeActivity:(id)arg1 ;
-(id)applyTransitionActivity:(id)arg1 ;
-(id)uniqueUserActivityType;
-(void)_updateActivityForViewDidAppear;
-(void)_loadMedicalIDDataIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(void)setShouldReloadMedicalIDData:(BOOL)arg1 ;
-(void)updateNavigationbar;
-(void)_showContactsConsolidationAlert;
-(void)_assertViewStateWhenViewDidAppear;
-(void)_organDonationSignupButtonTapped:(id)arg1 ;
-(void)_handleFetchedMedicalIDData:(id)arg1 ;
-(void)_showMedicalIDView;
-(SOSContactsManager *)sosContactsManager;
-(void)_consolidateSOSContactsWithMedicalIDContacts;
-(id)_createMedicalIDDataFromMeCardAndHealthKit;
-(void)_showMedicalIDEditor;
-(void)_createMedicalIDTapped:(id)arg1 ;
-(id)medicalIDViewControllerInEditMode:(BOOL)arg1 ;
-(void)_dismissMedicalIDEditor;
-(void)_pushAndSetCurrentMedicalIDViewController:(id)arg1 ;
-(void)setCurrentMedicalIDViewController:(HKMedicalIDViewController *)arg1 ;
-(void)_checkForEmergencyContactConsolidationNeeds;
-(void)_dismissMedicalIDView;
-(HKMedicalIDViewController *)currentMedicalIDViewController;
-(UIAlertController *)consolidationAlertController;
-(void)setConsolidationAlertController:(UIAlertController *)arg1 ;
-(void)setSosContactsManager:(SOSContactsManager *)arg1 ;
-(BOOL)shouldReloadMedicalIDData;
@end


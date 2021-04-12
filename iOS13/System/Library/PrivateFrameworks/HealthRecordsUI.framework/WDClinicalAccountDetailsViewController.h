/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <HealthUI/HKTableViewController.h>
#import <libobjc.A.dylib/HKHealthRecordsStoreAccountStateChangeListener.h>

@protocol WDClinicalAccountDetailsViewControllerDelegate;
@class NSDate, UIProgressHUD, HRProfile, NSMutableArray, HKClinicalAccount, NSString;

@interface WDClinicalAccountDetailsViewController : HKTableViewController <HKHealthRecordsStoreAccountStateChangeListener> {

	NSDate* _activityEarliestDismissalDate;
	UIProgressHUD* _hud;
	HRProfile* _profile;
	id<WDClinicalAccountDetailsViewControllerDelegate> _delegate;
	NSMutableArray* _sections;
	HKClinicalAccount* _account;
	NSString* _patientIdentifier;
	NSString* _lastUpdate;
	NSString* _status;

}

@property (nonatomic,retain) NSMutableArray * sections;                                                       //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) HKClinicalAccount * account;                                                     //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSString * patientIdentifier;                                                    //@synthesize patientIdentifier=_patientIdentifier - In the implementation block
@property (nonatomic,retain) NSString * lastUpdate;                                                           //@synthesize lastUpdate=_lastUpdate - In the implementation block
@property (nonatomic,retain) NSString * status;                                                               //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) HRProfile * profile;                                                             //@synthesize profile=_profile - In the implementation block
@property (assign,nonatomic,__weak) id<WDClinicalAccountDetailsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<WDClinicalAccountDetailsViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WDClinicalAccountDetailsViewControllerDelegate>)arg1 ;
-(NSString *)status;
-(NSString *)lastUpdate;
-(HKClinicalAccount *)account;
-(void)setAccount:(HKClinicalAccount *)arg1 ;
-(void)setStatus:(NSString *)arg1 ;
-(HRProfile *)profile;
-(void)setProfile:(HRProfile *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(NSMutableArray *)sections;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)setSections:(NSMutableArray *)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2 ;
-(void)dismiss:(id)arg1 ;
-(void)healthRecordsStore:(id)arg1 accountDidChange:(id)arg2 changeType:(long long)arg3 ;
-(void)setLastUpdate:(NSString *)arg1 ;
-(void)_deleteAccount;
-(void)_computeSections;
-(id)initWithProfile:(id)arg1 account:(id)arg2 ;
-(id)accountOwner;
-(BOOL)_showInternalGatewayDetails;
-(NSString *)patientIdentifier;
-(void)setPatientIdentifier:(NSString *)arg1 ;
-(void)_presentRemoveAccountConfirmation;
-(void)_deleteAccountPromptingForiCloudConfirmationIfNeeded;
-(void)_presentDeleteAccountFromiCloudConfirmation;
-(void)_showActivityInProgressUIWithMessage:(id)arg1 ;
-(void)_hideActivityAndDismissUnlessError:(id)arg1 ;
-(void)_popOrDismissViewController;
@end


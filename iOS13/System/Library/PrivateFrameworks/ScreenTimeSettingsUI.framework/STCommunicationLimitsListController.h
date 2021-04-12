/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/STPINListViewController.h>
#import <libobjc.A.dylib/CNUIFamilyMemberContactsPresentation.h>

@class PSSpecifier, STCommunicationLimits, CNUIFamilyMemberContactsController, NSString;

@interface STCommunicationLimitsListController : STPINListViewController <CNUIFamilyMemberContactsPresentation> {

	BOOL _syncingiCloudContacts;
	PSSpecifier* _duringScreenTimeSpecifier;
	PSSpecifier* _duringDowntimeSpecifier;
	PSSpecifier* _manageContactsGroupSpecifier;
	PSSpecifier* _manageContactsSpecifier;
	PSSpecifier* _iCloudContactsSpecifier;
	PSSpecifier* _allowContactEditingSpecifier;
	STCommunicationLimits* _communicationLimits;
	CNUIFamilyMemberContactsController* _familyMemberContactsController;

}

@property (retain) PSSpecifier * duringScreenTimeSpecifier;                                          //@synthesize duringScreenTimeSpecifier=_duringScreenTimeSpecifier - In the implementation block
@property (retain) PSSpecifier * duringDowntimeSpecifier;                                            //@synthesize duringDowntimeSpecifier=_duringDowntimeSpecifier - In the implementation block
@property (retain) PSSpecifier * manageContactsGroupSpecifier;                                       //@synthesize manageContactsGroupSpecifier=_manageContactsGroupSpecifier - In the implementation block
@property (retain) PSSpecifier * manageContactsSpecifier;                                            //@synthesize manageContactsSpecifier=_manageContactsSpecifier - In the implementation block
@property (retain) PSSpecifier * iCloudContactsSpecifier;                                            //@synthesize iCloudContactsSpecifier=_iCloudContactsSpecifier - In the implementation block
@property (retain) PSSpecifier * allowContactEditingSpecifier;                                       //@synthesize allowContactEditingSpecifier=_allowContactEditingSpecifier - In the implementation block
@property (retain) STCommunicationLimits * communicationLimits;                                      //@synthesize communicationLimits=_communicationLimits - In the implementation block
@property (retain) CNUIFamilyMemberContactsController * familyMemberContactsController;              //@synthesize familyMemberContactsController=_familyMemberContactsController - In the implementation block
@property (assign) BOOL syncingiCloudContacts;                                                       //@synthesize syncingiCloudContacts=_syncingiCloudContacts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)viewDidLoad;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)presentViewController:(id)arg1 ;
-(void)setCoordinator:(id)arg1 ;
-(id)specifiers;
-(void)familyMemberContactsDidChange;
-(void)dismissPresentedViewController:(id)arg1 ;
-(STCommunicationLimits *)communicationLimits;
-(void)_communicationLimitsDidChangeFrom:(id)arg1 to:(id)arg2 ;
-(id)initWithRootViewModelCoordinator:(id)arg1 ;
-(void)setCommunicationLimits:(STCommunicationLimits *)arg1 ;
-(void)_indicateiCloudContactsSyncingStatus;
-(PSSpecifier *)duringDowntimeSpecifier;
-(PSSpecifier *)duringScreenTimeSpecifier;
-(void)setDuringScreenTimeSpecifier:(PSSpecifier *)arg1 ;
-(void)setDuringDowntimeSpecifier:(PSSpecifier *)arg1 ;
-(CNUIFamilyMemberContactsController *)familyMemberContactsController;
-(void)_startSyncingiCloudContacts;
-(id)_manageContactsGroupFooterText;
-(void)setManageContactsGroupSpecifier:(PSSpecifier *)arg1 ;
-(void)_setManageContacts:(id)arg1 specifier:(id)arg2 ;
-(id)_manageContacts:(id)arg1 ;
-(void)setManageContactsSpecifier:(PSSpecifier *)arg1 ;
-(id)_statusPendingDetailText:(id)arg1 ;
-(void)setICloudContactsSpecifier:(PSSpecifier *)arg1 ;
-(id)_totaliCloudContactsDetailText:(id)arg1 ;
-(BOOL)syncingiCloudContacts;
-(void)_setAllowContactEditing:(id)arg1 specifier:(id)arg2 ;
-(id)_allowContactEditing:(id)arg1 ;
-(void)setAllowContactEditingSpecifier:(PSSpecifier *)arg1 ;
-(void)_didCancelSyncingiCloudContacts;
-(void)_updateAllowContactEditingWithAlertIfNeeded:(id)arg1 forSpecifier:(id)arg2 ;
-(void)_updateAllowContactEditing:(id)arg1 ;
-(void)_didFinishSyncingiCloudContacts;
-(void)setSyncingiCloudContacts:(BOOL)arg1 ;
-(void)_didStartSyncingiCloudContacts;
-(void)_enableAllowContactEditingSwitch:(BOOL)arg1 ;
-(void)_updateManageContactsGroupFooterView;
-(PSSpecifier *)manageContactsSpecifier;
-(PSSpecifier *)iCloudContactsSpecifier;
-(PSSpecifier *)manageContactsGroupSpecifier;
-(PSSpecifier *)allowContactEditingSpecifier;
-(void)setFamilyMemberContactsController:(CNUIFamilyMemberContactsController *)arg1 ;
@end


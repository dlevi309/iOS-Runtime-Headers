/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/CNUIFamilyMemberContactsPresentation.h>

@class PSSpecifier, NSMutableArray, STCommunicationLimits, CNUIFamilyMemberWhitelistedContactsController, NSString;

@interface STCommunicationLimitsDowntimeDetailListController : PSListController <CNUIFamilyMemberContactsPresentation> {

	BOOL _syncingWhitelistedContacts;
	PSSpecifier* _allowedCommunicationGroupSpecifier;
	PSSpecifier* _allowEveryoneSpecifier;
	PSSpecifier* _allowContactsOnlySpecifier;
	PSSpecifier* _allowGroupsWithOneContactSpecifier;
	PSSpecifier* _allowSpecificContactsSpecifier;
	PSSpecifier* _allowedContactsGroupSpecifier;
	PSSpecifier* _addContactsSpecifier;
	NSMutableArray* _allowedContactsSpecifiers;
	STCommunicationLimits* _communicationLimits;
	CNUIFamilyMemberWhitelistedContactsController* _whitelistedContactsController;

}

@property (retain) PSSpecifier * allowedCommunicationGroupSpecifier;                                           //@synthesize allowedCommunicationGroupSpecifier=_allowedCommunicationGroupSpecifier - In the implementation block
@property (retain) PSSpecifier * allowEveryoneSpecifier;                                                       //@synthesize allowEveryoneSpecifier=_allowEveryoneSpecifier - In the implementation block
@property (retain) PSSpecifier * allowContactsOnlySpecifier;                                                   //@synthesize allowContactsOnlySpecifier=_allowContactsOnlySpecifier - In the implementation block
@property (retain) PSSpecifier * allowGroupsWithOneContactSpecifier;                                           //@synthesize allowGroupsWithOneContactSpecifier=_allowGroupsWithOneContactSpecifier - In the implementation block
@property (retain) PSSpecifier * allowSpecificContactsSpecifier;                                               //@synthesize allowSpecificContactsSpecifier=_allowSpecificContactsSpecifier - In the implementation block
@property (retain) PSSpecifier * allowedContactsGroupSpecifier;                                                //@synthesize allowedContactsGroupSpecifier=_allowedContactsGroupSpecifier - In the implementation block
@property (retain) PSSpecifier * addContactsSpecifier;                                                         //@synthesize addContactsSpecifier=_addContactsSpecifier - In the implementation block
@property (retain) NSMutableArray * allowedContactsSpecifiers;                                                 //@synthesize allowedContactsSpecifiers=_allowedContactsSpecifiers - In the implementation block
@property (retain) STCommunicationLimits * communicationLimits;                                                //@synthesize communicationLimits=_communicationLimits - In the implementation block
@property (retain) CNUIFamilyMemberWhitelistedContactsController * whitelistedContactsController;              //@synthesize whitelistedContactsController=_whitelistedContactsController - In the implementation block
@property (assign) BOOL syncingWhitelistedContacts;                                                            //@synthesize syncingWhitelistedContacts=_syncingWhitelistedContacts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)willResignActive;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(void)presentViewController:(id)arg1 ;
-(id)specifiers;
-(void)familyMemberContactsDidChange;
-(void)dismissPresentedViewController:(id)arg1 ;
-(STCommunicationLimits *)communicationLimits;
-(void)setCommunicationLimits:(STCommunicationLimits *)arg1 ;
-(void)setWhitelistedContactsController:(CNUIFamilyMemberWhitelistedContactsController *)arg1 ;
-(void)_selectLeastRestrictiveOptionIfNecessary;
-(void)_didFinishEditingCommunicationLimit;
-(PSSpecifier *)allowedCommunicationGroupSpecifier;
-(long long)_downtimeCommunicationLimitForSpecifier:(id)arg1 ;
-(void)setAllowedCommunicationGroupSpecifier:(PSSpecifier *)arg1 ;
-(void)setAllowSpecificContactsSpecifier:(PSSpecifier *)arg1 ;
-(void)setAllowEveryoneSpecifier:(PSSpecifier *)arg1 ;
-(void)setAllowContactsOnlySpecifier:(PSSpecifier *)arg1 ;
-(void)setAllowGroupsWithOneContactSpecifier:(PSSpecifier *)arg1 ;
-(id)_allowedContactsSpecifiers;
-(id)_allowedCommunicationGroupFooterText:(id)arg1 ;
-(CNUIFamilyMemberWhitelistedContactsController *)whitelistedContactsController;
-(void)setAllowedContactsGroupSpecifier:(PSSpecifier *)arg1 ;
-(id)_allowedContactDetailLabelText:(id)arg1 ;
-(void)setAddContactsSpecifier:(PSSpecifier *)arg1 ;
-(void)setAllowedContactsSpecifiers:(NSMutableArray *)arg1 ;
-(PSSpecifier *)allowEveryoneSpecifier;
-(PSSpecifier *)allowContactsOnlySpecifier;
-(PSSpecifier *)allowGroupsWithOneContactSpecifier;
-(BOOL)syncingWhitelistedContacts;
-(void)_didFinishSyncingWhitelistedContacts;
-(PSSpecifier *)allowedContactsGroupSpecifier;
-(PSSpecifier *)addContactsSpecifier;
-(PSSpecifier *)allowSpecificContactsSpecifier;
-(void)_updateAllowedCommunicationGroupFooterText;
-(void)_startSyncingWhitelistedContacts;
-(void)setSyncingWhitelistedContacts:(BOOL)arg1 ;
-(NSMutableArray *)allowedContactsSpecifiers;
@end


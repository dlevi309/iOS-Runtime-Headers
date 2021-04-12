/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/ContactsSettings.bundle/ContactsSettings
*/

#import <ContactsSettings/ContactsSettings-Structs.h>
#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/PSSystemPolicyForAppDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <libobjc.A.dylib/CNContactPickerDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, PSSpecifier, UIAlertController, UIPopoverController, CNContactPickerViewController, NSObject, PSSystemPolicyForApp, NSString;

@interface ContactsSettingsPlugin : PSListController <PSSystemPolicyForAppDelegate, UIActionSheetDelegate, CNContactPickerDelegate, UIPopoverControllerDelegate> {

	void* _addressBook;
	NSMutableArray* _currentSpecifiers;
	PSSpecifier* _SIMImportSpacerSpecifier;
	PSSpecifier* _SIMImportSpecifier;
	PSSpecifier* _MeCardSpecifier;
	PSSpecifier* _ContactsSortOrderSpecifier;
	PSSpecifier* _PersonNameOrderSpecifier;
	PSSpecifier* _ContactsInMailSpecifier;
	NSMutableArray* _contactStores;
	NSMutableArray* _contactStoreNames;
	long long _contactStoresCount;
	int _meCardLastCheckedSequenceNumber;
	CTServerConnectionRef _ctServerConnection;
	UIAlertController* _loadingContacts;
	CFDictionaryRef _importButtonIndexToStoreID;
	int _importStoreID;
	BOOL _shouldShowSIMImport;
	UIPopoverController* _meCardPopover;
	CNContactPickerViewController* _meCardPicker;
	NSObject*<OS_dispatch_queue> _addressBookQueue;
	PSSystemPolicyForApp* _appPolicy;

}

@property (nonatomic,retain) PSSystemPolicyForApp * appPolicy;              //@synthesize appPolicy=_appPolicy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)specifiers;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)contactPicker:(id)arg1 didSelectContact:(id)arg2 ;
-(void)contactPickerDidCancel:(id)arg1 ;
-(PSSystemPolicyForApp *)appPolicy;
-(CTServerConnectionRef)_ctServerConnection;
-(void)setAppPolicy:(PSSystemPolicyForApp *)arg1 ;
-(void)windowDidRotate:(id)arg1 ;
-(void)windowWillRotate:(id)arg1 ;
-(void)dealloc;
-(BOOL)shouldLoadSpecifiersLazily;
-(void)_rootControllerDidSuspend;
-(void)_dismissMeCardPickerAnimated:(BOOL)arg1 ;
-(BOOL)_importAlreadyInProgress;
-(void)_updateSIMImportVisibility;
-(void)_updateABStoresAndNames;
-(void)_updateSIMImportSpecifier:(BOOL)arg1 ;
-(void)_setDefaultContacts:(id)arg1 specifier:(id)arg2 ;
-(void)_stopListeningForSIMPhonebookNotifications;
-(void)_noteImportEnded;
-(void)_erroredDuringSIMPhonebookFetch;
-(id)_simPhonebookEntryAtIndex:(int)arg1 ;
-(void)_noteImportStarted;
-(void)_fetchSIMPhonebook;
-(void)_beginImportToStoreID:(int)arg1 ;
-(void)_reloadMeCardCellIfVisible;
-(void)_showMeCardPopover;
-(void)_synchronizeNanoUserDefault:(id)arg1 ;
-(void)setDefaultContacts:(id)arg1 specifier:(id)arg2 ;
-(id)defaultContactsName:(id)arg1 ;
-(id)contactStoreTitlesForSpecifier:(id)arg1 ;
-(void)_phonebookSelected;
-(void)_phonebookAvailable;
-(void)importFromSIM:(id)arg1 ;
-(void)_clearSpecifiers;
-(void)_SIMStatusChanged;
-(id)meCardName:(id)arg1 ;
-(void)showMeCardPicker:(id)arg1 ;
-(id)contactsSortOrder:(id)arg1 ;
-(void)setContactsSortOrder:(id)arg1 specifier:(id)arg2 ;
-(id)personNameOrder:(id)arg1 ;
-(void)setPersonNameOrder:(id)arg1 specifier:(id)arg2 ;
@end


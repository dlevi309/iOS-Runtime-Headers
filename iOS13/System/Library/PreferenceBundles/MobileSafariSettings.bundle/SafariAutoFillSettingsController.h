/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
*/

#import <MobileSafariSettings/SafariSettingsListController.h>
#import <libobjc.A.dylib/CNContactPickerDelegate.h>
#import <libobjc.A.dylib/DevicePINControllerDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@class UIPopoverController, NSIndexPath, CNContactStore, CNContactPickerViewController, NSString;

@interface SafariAutoFillSettingsController : SafariSettingsListController <CNContactPickerDelegate, DevicePINControllerDelegate, UIPopoverControllerDelegate> {

	/*^block*/id _passcodeEntryCompletionHandler;
	/*^block*/id _promptCompletionHandler;
	/*^block*/id _passcodeSetupCompletionHandler;
	UIPopoverController* _autoFillContactController;
	NSIndexPath* _autoFillContactIndex;
	BOOL _isMeCardSet;
	CNContactStore* _contactStore;
	CNContactPickerViewController* _meCardPicker;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)willResignActive;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(id)specifiers;
-(void)didAcceptSetPIN;
-(void)didAcceptEnteredPIN;
-(void)didCancelEnteringPIN;
-(void)contactPicker:(id)arg1 didSelectContact:(id)arg2 ;
-(void)contactPickerDidCancel:(id)arg1 ;
-(void)updateUseContactInfoSpecifiers;
-(void)_contactStoreChanged:(id)arg1 ;
-(id)_formDataController;
-(id)meCardName;
-(void)_enablingAutoFillWithoutPasscodePromptEndedWithResult:(long long)arg1 ;
-(void)_showPasscodeSetupSheetWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_promptForEnablingAutoFillWithoutPasscodeWithTitle:(id)arg1 message:(id)arg2 allowAnyway:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_setShouldAutoFill:(BOOL)arg1 specifier:(id)arg2 message:(id)arg3 setter:(/*^block*/id)arg4 ;
-(void)_setupMeCardPicker;
-(void)showMeCardPicker;
-(void)presentPopoverContactListInTable:(id)arg1 index:(id)arg2 specifier:(id)arg3 ;
-(void)_dismissMeCardPicker;
-(id)useContactInfo:(id)arg1 ;
-(id)myInfo:(id)arg1 ;
-(id)shouldAutoFillCreditCards:(id)arg1 ;
-(void)setShouldAutoFillCreditCards:(id)arg1 specifier:(id)arg2 ;
-(void)setUseContactInfo:(id)arg1 forSpecifier:(id)arg2 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/_SFCreditCardCaptureViewControllerDelegate.h>

@class WBSCreditCardData, WBSCreditCardFormatter, NSDateFormatter, PSTextFieldSpecifier, NSArray, NSString;

@interface SafariSavedCreditCardDetailController : PSListController <_SFCreditCardCaptureViewControllerDelegate> {

	WBSCreditCardData* _creditCardData;
	WBSCreditCardFormatter* _creditCardFormatter;
	NSDateFormatter* _expirationDateFormatter;
	PSTextFieldSpecifier* _cardholderSpecifier;
	PSTextFieldSpecifier* _numberSpecifier;
	PSTextFieldSpecifier* _expirationDateSpecifier;
	PSTextFieldSpecifier* _descriptionSpecifier;
	NSArray* _deleteButtonSpecifiers;
	NSArray* _useCameraSpecifiers;
	BOOL _hasDefaultDescription;
	BOOL _editing;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSpecifier:(id)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)specifiers;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)init;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_cancelEditing:(id)arg1 ;
-(void)_edit:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)creditCardCaptureViewControllerDidCancel:(id)arg1 ;
-(void)creditCardCaptureViewController:(id)arg1 didCaptureCreditCard:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2 ;
-(BOOL)shouldSelectResponderOnAppearance;
-(void)_willHideUIMenuController:(id)arg1 ;
-(void)dealloc;
-(id)_specifierWithName:(id)arg1 ;
-(void)_updateDoneButtonForCardNumberString:(id)arg1 ;
-(void)_setValue:(id)arg1 forSpecifier:(id)arg2 ;
-(id)_valueOfSpecifier:(id)arg1 ;
-(void)_updateSpecifiersFromCreditCardData:(id)arg1 ;
-(void)_setEditing:(BOOL)arg1 ;
-(void)_updateSpecifiers;
-(id)_useCameraSpecifiers;
-(void)_updateRightBarButtonItem;
-(void)_deleteCreditCard:(id)arg1 ;
-(void)_useCamera:(id)arg1 ;
-(void)_endEditing:(id)arg1 ;
-(id)_deleteButtonSpecifiers;
-(void)_removeCreditCardDataAndPopViewController;
-(BOOL)_isActionACopyMethod:(SEL)arg1 ;
-(BOOL)_isSpecifierACreditCardInfoField:(id)arg1 ;
-(BOOL)_isThereDefaultCreditCardInfoAtIndexPath:(id)arg1 ;
-(void)safari_copyCreditCardholderName:(id)arg1 ;
-(void)safari_copyCreditCardNumber:(id)arg1 ;
-(void)safari_copyCreditCardExpirationDate:(id)arg1 ;
-(void)safari_copyCreditCardName:(id)arg1 ;
@end


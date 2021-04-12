/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKPaymentSetupTableViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol PKAddBankAccountInformationViewControllerDelegate;
@class PKTableHeaderView, PKFindBankAccountInformationFooterView, UIButton, PKBankAccountInformation, NSArray, NSMutableDictionary, NSString, PKAccount;

@interface PKAddBankAccountInformationViewController : PKPaymentSetupTableViewController <UITextFieldDelegate> {

	PKTableHeaderView* _tableHeader;
	PKFindBankAccountInformationFooterView* _footerView;
	UIButton* _deleteBankInformationButton;
	unsigned long long _state;
	PKBankAccountInformation* _bankInformation;
	NSArray* _cellText;
	NSArray* _cellPlaceholderText;
	NSMutableDictionary* _cells;
	NSString* _accountCountryCode;
	NSMutableDictionary* _userEnteredValues;
	BOOL _isEditingBankInformation;
	BOOL _hasInteractedWithCell;
	BOOL _prefilledFromKeychain;
	NSMutableDictionary* _cellHasPastedContent;
	PKAccount* _featureAccount;
	BOOL _offerKeychainPreFill;
	id<PKAddBankAccountInformationViewControllerDelegate> _delegate;

}

@property (assign,nonatomic) BOOL offerKeychainPreFill;                                                          //@synthesize offerKeychainPreFill=_offerKeychainPreFill - In the implementation block
@property (assign,nonatomic,__weak) id<PKAddBankAccountInformationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)viewWillLayoutSubviews;
-(void)_setState:(unsigned long long)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)init;
-(id<PKAddBankAccountInformationViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(id)_headerTitle;
-(void)next:(id)arg1 ;
-(void)cancel:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)_footerView;
-(void)setDelegate:(id<PKAddBankAccountInformationViewControllerDelegate>)arg1 ;
-(void)textFieldDidClear:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 bankInformation:(id)arg2 accountCountryCode:(id)arg3 featureAccount:(id)arg4 ;
-(void)setOfferKeychainPreFill:(BOOL)arg1 ;
-(BOOL)pkui_disablesAutomaticDismissalUponEnteringBackground;
-(id)initWithDelegate:(id)arg1 bankInformation:(id)arg2 accountCountryCode:(id)arg3 ;
-(id)_textForRow:(unsigned long long)arg1 ;
-(id)initWithState:(unsigned long long)arg1 delegate:(id)arg2 bankInformation:(id)arg3 accountCountryCode:(id)arg4 featureAccount:(id)arg5 ;
-(void)_setNavigationBarItemsHidden:(BOOL)arg1 ;
-(id)_placeholderTextForRow:(unsigned long long)arg1 ;
-(id)_headerSubTitle;
-(void)_deleteBankInformation;
-(void)_setTableFooterView;
-(BOOL)_cellValuesAreValid;
-(BOOL)offerKeychainPreFill;
-(id)_bankInformationTextForRow:(unsigned long long)arg1 ;
-(double)_minimumRequiredWidthForCellText:(id)arg1 withFont:(id)arg2 ;
-(void)_setText:(id)arg1 forForCellAtRow:(unsigned long long)arg2 ;
-(unsigned long long)_rowWithTextField:(id)arg1 ;
-(unsigned long long)_maxTextLengthForRow:(unsigned long long)arg1 ;
-(void)_setCellHasPastedContent:(BOOL)arg1 forRow:(unsigned long long)arg2 ;
-(id)_cellHasPastedContent;
-(BOOL)_isAccountNumberCellValid;
-(BOOL)_isRoutingNumberCellValid;
-(BOOL)_isCellValidAtRow:(unsigned long long)arg1 ;
-(id)_userEnteredTextForCellAtRow:(unsigned long long)arg1 ;
-(unsigned long long)_minTextLengthForRow:(unsigned long long)arg1 ;
-(BOOL)_allCellsHavePastedContent;
-(void)_showHeaderActivitySpinner;
-(void)_hideHeaderActivitySpinner;
-(void)_updateHeaderAndNavigationItems;
-(void)_addPaymentFundingSourceWithCompletion:(/*^block*/id)arg1 ;
-(void)_updateBankAccountInformationWithValues:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_reloadTableSection;
-(id)_countrySpecificLocalizedStringKeyForKey:(id)arg1 ;
-(id)_countrySpecificLocalizedStringKeyForKey:(id)arg1 numberOfDigits:(unsigned long long)arg2 ;
-(id)_countrySpecificLocalizedStringKeyForKey:(id)arg1 minDigits:(unsigned long long)arg2 maxDigits:(unsigned long long)arg3 ;
-(void)_showHowToFindAccountInformationViewController:(id)arg1 ;
-(void)_setTableViewHeaderActivitySpinnerAnimated:(BOOL)arg1 title:(id)arg2 subtitle:(id)arg3 ;
-(void)_setNavigationBarEnabled:(BOOL)arg1 ;
-(void)setHeaderViewTitle:(id)arg1 subtitle:(id)arg2 ;
-(void)_setIdleTimerDisabled:(BOOL)arg1 title:(id)arg2 subtitle:(id)arg3 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(void)textFieldDidChange:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)dealloc;
@end


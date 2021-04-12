/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIPickerViewDelegate.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <libobjc.A.dylib/PKAccountBillPaymentControllerDelegate.h>
#import <libobjc.A.dylib/PKAddBankAccountInformationViewControllerDelegate.h>
#import <libobjc.A.dylib/PKAccountBillPaymentPayInterestDescriptionViewDelegate.h>

@protocol PKAccountBillPaymentObserver;
@class CLInUseAssertion, PKAccount, PKPaymentPass, PKAccountBillPaymentController, PKBillPaymentSuggestedAmountList, NSDate, NSDateFormatter, NSCalendar, NSDecimalNumber, UIPickerView, PKContinuousButton, UILabel, PKCompoundInterestCalculator, PKAccountBillPaymentPayInterestDescriptionView, PKAddBankAccountInformationViewController, NSString;

@interface PKAccountBillPaymentPayLaterViewController : UIViewController <UIPickerViewDelegate, UIPickerViewDataSource, PKAccountBillPaymentControllerDelegate, PKAddBankAccountInformationViewControllerDelegate, PKAccountBillPaymentPayInterestDescriptionViewDelegate> {

	CLInUseAssertion* _CLInUse;
	PKAccount* _account;
	PKPaymentPass* _pass;
	PKAccountBillPaymentController* _billPaymentCoordinator;
	PKBillPaymentSuggestedAmountList* _suggestionList;
	unsigned long long _screenType;
	NSDate* _minDate;
	NSDate* _maxDate;
	long long _numDays;
	NSDateFormatter* _dateFormatterDayOfWeek;
	NSDateFormatter* _dateFormatter;
	NSDateFormatter* _localDateFormatter;
	NSCalendar* _productCalendar;
	NSCalendar* _localCalendar;
	NSDecimalNumber* _selectedAmount;
	NSDecimalNumber* _remainingStatementBalance;
	NSDecimalNumber* _apr;
	BOOL _performingAction;
	long long _currentPickerViewRow[1];
	UIPickerView* _datePicker;
	PKContinuousButton* _payOnButton;
	UILabel* _payLaterTitleLabel;
	UILabel* _whenToPayQuestionLabel;
	PKCompoundInterestCalculator* _interestCalculator;
	PKAccountBillPaymentPayInterestDescriptionView* _interestDescriptionView;
	PKAddBankAccountInformationViewController* _addBankAccountViewController;
	id<PKAccountBillPaymentObserver> _observer;

}

@property (assign,nonatomic,__weak) id<PKAccountBillPaymentObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<PKAccountBillPaymentObserver>)observer;
-(void)setObserver:(id<PKAccountBillPaymentObserver>)arg1 ;
-(void)_setEnabled:(BOOL)arg1 ;
-(void)_accountDidChange:(id)arg1 ;
-(void)loadView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(void)_updateLabelText;
-(void)accountBillPaymentController:(id)arg1 hasChangedState:(unsigned long long)arg2 error:(id)arg3 updatedAccount:(id)arg4 ;
-(void)_setNavigationBarEnabled:(BOOL)arg1 ;
-(void)_presentAlertControllerForError:(id)arg1 ;
-(id)_addBankAccountInformationViewController;
-(void)bankAccountInformationViewControllerChangedBankAccountInformation:(id)arg1 ;
-(void)addBankAccountInformationViewController:(id)arg1 didAddFundingSource:(id)arg2 ;
-(void)addBankAccountInformationViewControllerDidFinish:(id)arg1 ;
-(void)_dismissViewControllerWithSuccess:(BOOL)arg1 ;
-(void)_presentAddBankAccount;
-(id)initWithAccount:(id)arg1 billPaymentController:(id)arg2 paymentPass:(id)arg3 suggestionList:(id)arg4 selectedAmount:(id)arg5 ;
-(id)_stripTimeFromDate:(id)arg1 ;
-(void)_payOnButtonTapped:(id)arg1 ;
-(double)_sideMargin;
-(double)_payButtonTopPadding;
-(id)_dateForRow:(long long)arg1 ;
-(id)_dateStringForRow:(long long)arg1 formatter:(id)arg2 ;
-(void)_performBillPaymentWithAmount:(id)arg1 scheduledDate:(id)arg2 billPaymentSuggestedAmountDataEvent:(id)arg3 ;
-(id)_interestForSelectedDate:(id)arg1 ;
-(void)billPaymentPayInterestDescriptionViewHasTappedLearnMore:(id)arg1 ;
@end


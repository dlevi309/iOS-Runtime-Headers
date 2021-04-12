/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKSectionTableViewController.h>
#import <libobjc.A.dylib/PKAddBankAccountInformationViewControllerDelegate.h>
#import <libobjc.A.dylib/PKMonthDayCollectionViewControllerDelegate.h>
#import <UIKit/UIPickerViewDelegate.h>
#import <UIKit/UIPickerViewDataSource.h>

@class PKAccountAutomaticPaymentsController, PKAccount, NSTimeZone, PKTableHeaderView, NSNumberFormatter, NSDateFormatter, NSArray, NSDictionary, NSNumber, NSDate, NSCalendar, PKMonthDayCollectionViewController, UIPickerView, PKFixedAmountWrapperView, PKAccountAutomaticPaymentsDateFooterView, NSString;

@interface PKAccountAutomaticPaymentsConfigurationViewController : PKSectionTableViewController <PKAddBankAccountInformationViewControllerDelegate, PKMonthDayCollectionViewControllerDelegate, UIPickerViewDelegate, UIPickerViewDataSource> {

	PKAccountAutomaticPaymentsController* _controller;
	PKAccount* _account;
	NSTimeZone* _productTimeZone;
	unsigned long long _featureIdentifier;
	PKTableHeaderView* _tableHeaderView;
	NSNumberFormatter* _currencyFormatter;
	NSNumberFormatter* _ordinalDayNumberFormatter;
	NSDateFormatter* _modelDateFormatter;
	NSDateFormatter* _pickerDateFormatter;
	NSDateFormatter* _cellDateFormatter;
	NSDateFormatter* _dayNameFormatter;
	NSDateFormatter* _cardinalDayDateFormatter;
	BOOL _useOrdinalDay;
	NSArray* _amounts;
	NSArray* _frequencies;
	NSDictionary* _frequenciesMap;
	NSArray* _dates;
	NSNumber* _selectedAmount;
	NSNumber* _selectedFrequency;
	NSDate* _selectedDate;
	long long _scheduledDay;
	long long _selectedRowType;
	NSCalendar* _productCalendar;
	PKMonthDayCollectionViewController* _monthDayCollectionViewController;
	BOOL _shouldShowCollectionView;
	UIPickerView* _amountPicker;
	UIPickerView* _frequencyPicker;
	UIPickerView* _datePicker;
	PKFixedAmountWrapperView* _wrapperView;
	PKAccountAutomaticPaymentsDateFooterView* _footerView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)tableView;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableHeaderView;
-(long long)_frequency;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(id)_amount;
-(id)_dates;
-(id)initWithController:(id)arg1 ;
-(id)_footerText;
-(void)_configureCell:(id)arg1 forIndexPath:(id)arg2 ;
-(void)setSelectedDate:(id)arg1 ;
-(id)_amounts;
-(long long)_preset;
-(void)handleNextButtonTapped:(id)arg1 ;
-(id)_addBankAccountInformationViewController;
-(void)_updateNextButtonEnabledIfNecessary;
-(void)bankAccountInformationViewControllerChangedBankAccountInformation:(id)arg1 ;
-(void)addBankAccountInformationViewController:(id)arg1 didAddFundingSource:(id)arg2 ;
-(void)addBankAccountInformationViewControllerDidFinish:(id)arg1 ;
-(void)addBankAccountInformationViewController:(id)arg1 didFailWithError:(id)arg2 ;
-(void)monthDaySelectionViewController:(id)arg1 didSelectDate:(id)arg2 day:(long long)arg3 ;
-(BOOL)shouldMapSection:(unsigned long long)arg1 ;
-(id)_frequencies;
-(void)_updateDates;
-(id)_datesForFrequency:(long long)arg1 ;
-(void)setSelectedFrequency:(id)arg1 ;
-(void)setSelectedAmount:(id)arg1 ;
-(id)_textForAmount:(id)arg1 ;
-(void)_performNextButtonTapped;
-(id)_displayStringForSelectedDate;
-(long long)_paymentRowTypeForIndexPath:(id)arg1 ;
-(id)_textForPaymentRowType:(long long)arg1 ;
-(id)_detailTextForPaymentRowType:(long long)arg1 ;
-(id)_frequencyTitleForFrequency:(long long)arg1 ;
@end


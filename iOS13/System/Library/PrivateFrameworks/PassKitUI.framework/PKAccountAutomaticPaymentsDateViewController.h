/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKSectionTableViewController.h>
#import <libobjc.A.dylib/PKAddBankAccountInformationViewControllerDelegate.h>
#import <libobjc.A.dylib/PKMonthDayCollectionViewControllerDelegate.h>

@class NSDate, PKAccountAutomaticPaymentsController, PKAccount, PKTableHeaderView, NSIndexPath, PKMonthDayCollectionViewController, NSNumberFormatter, NSDateFormatter, PKAccountAutomaticPaymentsDateFooterView, NSTimeZone, NSCalendar, NSString;

@interface PKAccountAutomaticPaymentsDateViewController : PKSectionTableViewController <PKAddBankAccountInformationViewControllerDelegate, PKMonthDayCollectionViewControllerDelegate> {

	NSDate* _date;
	long long _scheduledDay;
	PKAccountAutomaticPaymentsController* _controller;
	PKAccount* _account;
	unsigned long long _featureIdentifier;
	PKTableHeaderView* _tableHeaderView;
	NSIndexPath* _selectedIndexPath;
	PKMonthDayCollectionViewController* _monthDayCollectionViewController;
	NSNumberFormatter* _ordinalDayNumberFormatter;
	NSDateFormatter* _cardinalDayDateFormatter;
	BOOL _useOrdinalDay;
	PKAccountAutomaticPaymentsDateFooterView* _collectionFooterView;
	NSTimeZone* _productTimeZone;
	NSCalendar* _productCalendar;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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
-(id)initWithController:(id)arg1 ;
-(id)_footerText;
-(void)_handleNext:(id)arg1 ;
-(BOOL)_shouldShowCollectionView;
-(void)_handlePresentPayment;
-(void)_performPresentPayment;
-(id)_addBankAccountInformationViewController;
-(void)_updateNextButtonEnabledIfNecessary;
-(void)bankAccountInformationViewControllerChangedBankAccountInformation:(id)arg1 ;
-(void)addBankAccountInformationViewController:(id)arg1 didAddFundingSource:(id)arg2 ;
-(void)addBankAccountInformationViewControllerDidFinish:(id)arg1 ;
-(void)addBankAccountInformationViewController:(id)arg1 didFailWithError:(id)arg2 ;
-(void)monthDaySelectionViewController:(id)arg1 didSelectDate:(id)arg2 day:(long long)arg3 ;
-(BOOL)shouldMapSection:(unsigned long long)arg1 ;
@end


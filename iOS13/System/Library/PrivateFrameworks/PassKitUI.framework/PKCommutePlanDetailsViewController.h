/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKSectionTableViewController.h>
#import <libobjc.A.dylib/PKPerformActionViewControllerDelegate.h>
#import <libobjc.A.dylib/PKPaymentDataProviderDelegate.h>

@protocol PKPaymentDataProvider;
@class NSArray, PKPaymentPass, PKPaymentWebService, PKPaymentPassAction, NSDateComponentsFormatter, PKTransitBalanceModel, PKTransitCommutePlan, NSString;

@interface PKCommutePlanDetailsViewController : PKSectionTableViewController <PKPerformActionViewControllerDelegate, PKPaymentDataProviderDelegate> {

	long long _style;
	NSArray* _fields;
	PKPaymentPass* _pass;
	id<PKPaymentDataProvider> _paymentDataProvider;
	PKPaymentWebService* _webService;
	NSArray* _reminderIntervals;
	unsigned long long _selectedReminderIntervalsIndex;
	BOOL _shouldLoadReminderInterval;
	PKPaymentPassAction* _action;
	NSDateComponentsFormatter* _timeIntervalFormatter;
	BOOL _canShowReminders;
	PKTransitBalanceModel* _balanceModel;
	PKTransitCommutePlan* _commutePlan;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveBalanceUpdate:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2 ;
-(BOOL)shouldMapSection:(unsigned long long)arg1 ;
-(void)performActionViewControllerDidCancel:(id)arg1 ;
-(void)performActionViewControllerDidPerformAction:(id)arg1 ;
-(id)_commutePlanBalanceIdentifier;
-(void)_updateSelectedBalanceReminderWithBalanceReminder:(id)arg1 ;
-(void)_updateSelectedReminderIntervalsIndexWithReminder:(id)arg1 ;
-(void)_reloadBalance;
-(void)_reloadChangedIndexPathsWithOldIndex:(unsigned long long)arg1 newIndex:(unsigned long long)arg2 inSection:(unsigned long long)arg3 ;
-(long long)_numberOfCommutePlanDetailsRowsEnabledForRowType:(unsigned long long)arg1 ;
-(long long)_numberOfCommutePlanDetailsRowsEnabled;
-(unsigned long long)_commutePlanDetailsRowTypeForRowIndex:(long long)arg1 ;
-(void)_handleActionSelected;
-(void)_handleReminderIntervalChanged:(long long)arg1 ;
-(id)initWithCommutePlan:(id)arg1 associatedAction:(id)arg2 forPass:(id)arg3 paymentDataProvider:(id)arg4 webService:(id)arg5 style:(long long)arg6 ;
@end


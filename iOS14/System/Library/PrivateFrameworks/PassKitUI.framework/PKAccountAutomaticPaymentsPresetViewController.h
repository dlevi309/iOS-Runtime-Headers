/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKSectionTableViewController.h>

@class PKAccountAutomaticPaymentsController, PKAccount, PKTableHeaderView, NSIndexPath, NSArray;

@interface PKAccountAutomaticPaymentsPresetViewController : PKSectionTableViewController {

	PKAccountAutomaticPaymentsController* _controller;
	PKAccount* _account;
	unsigned long long _featureIdentifier;
	PKTableHeaderView* _tableHeaderView;
	NSIndexPath* _selectedIndexPath;
	NSArray* _paymentPresets;

}
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(void)_handleNext:(id)arg1 ;
-(BOOL)shouldMapSection:(unsigned long long)arg1 ;
-(id)initWithController:(id)arg1 ;
-(id)tableHeaderView;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
@end


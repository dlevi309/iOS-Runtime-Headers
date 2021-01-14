/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKSectionTableViewController.h>

@class PKPhysicalCardController, UIBarButtonItem, PKOrderPhysicalCardController;

@interface PKReplacePhysicalCardReasonViewController : PKSectionTableViewController {

	PKPhysicalCardController* _controller;
	long long _context;
	unsigned long long _feature;
	UIBarButtonItem* _cancelButton;
	UIBarButtonItem* _nextButton;
	BOOL _hasSelectedRow;
	long long _selectedRow;
	BOOL _loadingCustomizationOptions;
	PKOrderPhysicalCardController* _orderController;

}
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)viewWillLayoutSubviews;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)_updateNavigationButtons;
-(void)_nextButtonPressed:(id)arg1 ;
-(id)_cellForReasonAtIndexPath:(id)arg1 inTableView:(id)arg2 ;
-(void)_reasonRowSelectedAtIndexPath:(id)arg1 inTableView:(id)arg2 ;
-(id)initWithPhysicalCardController:(id)arg1 context:(long long)arg2 ;
-(void)viewDidLoad;
-(BOOL)shouldMapSection:(unsigned long long)arg1 ;
-(void)_cancelButtonPressed:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
@end


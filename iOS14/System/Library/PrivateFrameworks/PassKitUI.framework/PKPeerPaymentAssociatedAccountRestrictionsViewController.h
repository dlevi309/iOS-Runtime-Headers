/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKPaymentSetupTableViewController.h>

@protocol PKPeerPaymentAssociatedAccountSetupDelegate;
@class PKPeerPaymentSetupFlowController, PKFamilyMember, PKPeerPaymentPreferences, NSIndexPath, PKTableHeaderView, PKPeerPaymentSetupFlowControllerAssociatedAccountConfiguration;

@interface PKPeerPaymentAssociatedAccountRestrictionsViewController : PKPaymentSetupTableViewController {

	PKPeerPaymentSetupFlowController* _controller;
	PKFamilyMember* _familyMember;
	PKPeerPaymentPreferences* _currentPreferences;
	NSIndexPath* _defaultSelectedIndexPath;
	PKTableHeaderView* _tableHeader;
	double _cachedHeaderViewWidth;
	id<PKPeerPaymentAssociatedAccountSetupDelegate> _delegate;
	PKPeerPaymentSetupFlowControllerAssociatedAccountConfiguration* _configuration;

}
-(void)viewWillLayoutSubviews;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)_continue;
-(BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2 ;
-(id)initWithPeerPaymentSetupFlowController:(id)arg1 ;
-(void)viewDidLoad;
-(id)_updatedPreferences;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)_textLabelStringForIndexPath:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
@end


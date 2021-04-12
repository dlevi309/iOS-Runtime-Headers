/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKPaymentSetupTableViewController.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class NSArray, PKGroupsController, PKTableHeaderView, NSIndexPath, PKSecureElementPass;

@interface PKShareableCredentialsExpressPassSelectionViewController : PKPaymentSetupTableViewController {

	NSArray* _passes;
	PKGroupsController* _groupsController;
	BOOL _hasSetDefault;
	PKTableHeaderView* _tableHeader;
	double _cachedHeaderViewWidth;
	NSIndexPath* _previouslySelectedIndexPath;
	PKSecureElementPass* _previouslySelectedPass;
	id<PKPaymentSetupViewControllerDelegate> _delegate;

}
-(void)_done;
-(void)viewWillLayoutSubviews;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2 ;
-(void)viewDidLoad;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)initWithPasses:(id)arg1 groupsController:(id)arg2 context:(long long)arg3 delegate:(id)arg4 ;
-(void)_enableView:(BOOL)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end


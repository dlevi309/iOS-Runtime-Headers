/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKSectionTableViewController.h>
#import <libobjc.A.dylib/PKPaymentDataProviderDelegate.h>
#import <libobjc.A.dylib/PKPerformActionViewControllerDelegate.h>
#import <libobjc.A.dylib/PKAccessibleLayoutObserverDelegate.h>

@protocol PKPaymentDataProvider;
@class PKTransitBalanceModel, PKPaymentPass, NSString;

@interface PKPassTransitProductsViewController : PKSectionTableViewController <PKPaymentDataProviderDelegate, PKPerformActionViewControllerDelegate, PKAccessibleLayoutObserverDelegate> {

	PKTransitBalanceModel* _balanceModel;
	long long _accessibleLayout;
	id<PKPaymentDataProvider> _paymentDataProvider;
	BOOL _hasBalance;
	BOOL _hasCommutePlans;
	unsigned long long _transitType;
	PKPaymentPass* _pass;

}

@property (assign,nonatomic) PKPaymentPass * pass;                  //@synthesize pass=_pass - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(PKPaymentPass *)pass;
-(void)setPass:(PKPaymentPass *)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveBalanceUpdate:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2 ;
-(void)accessibleLayoutForView:(id)arg1 changedFrom:(long long)arg2 to:(long long)arg3 ;
-(void)performActionViewControllerDidCancel:(id)arg1 ;
-(void)performActionViewControllerDidPerformAction:(id)arg1 ;
-(id)initWithPaymentPass:(id)arg1 transitType:(unsigned long long)arg2 ;
-(void)_reloadBalance;
-(void)_reloadContent;
-(void)_setupPlans;
-(void)_setupBalances;
@end


/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UITableViewController.h>

@class PKPaymentTransaction, UITableViewCell, NSDictionary;

@interface PKTransactionDebugDetailsViewController : UITableViewController {

	PKPaymentTransaction* _transaction;
	UITableViewCell* _mapsCell;
	BOOL _inBridge;
	NSDictionary* _transactionDetails;
	NSDictionary* _merchantDetails;
	NSDictionary* _mapsMerchantDetails;

}

@property (nonatomic,retain) NSDictionary * transactionDetails;              //@synthesize transactionDetails=_transactionDetails - In the implementation block
@property (nonatomic,retain) NSDictionary * merchantDetails;                 //@synthesize merchantDetails=_merchantDetails - In the implementation block
@property (nonatomic,copy) NSDictionary * mapsMerchantDetails;               //@synthesize mapsMerchantDetails=_mapsMerchantDetails - In the implementation block
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(id)initWithTransaction:(id)arg1 ;
-(NSDictionary *)transactionDetails;
-(NSDictionary *)merchantDetails;
-(NSDictionary *)mapsMerchantDetails;
-(id)mapsBrandDetails;
-(id)_transactionInfoCellForIndex:(long long)arg1 ;
-(id)_merchantInfoCellForIndex:(long long)arg1 ;
-(id)_mapsMerchantInfoCellForIndex:(long long)arg1 ;
-(id)_mapsBrandInfoCellForIndex:(long long)arg1 ;
-(void)_didSelectMap;
-(id)_stringForTransactionStatus:(long long)arg1 ;
-(id)_stringForTransactionType:(long long)arg1 ;
-(id)_stringForTechnologyType:(long long)arg1 ;
-(id)_stringForTransactionSource:(unsigned long long)arg1 ;
-(id)_cellWithPrimaryText:(id)arg1 infoText:(id)arg2 ;
-(id)_mapsCell;
-(void)setTransactionDetails:(NSDictionary *)arg1 ;
-(void)setMerchantDetails:(NSDictionary *)arg1 ;
-(void)setMapsMerchantDetails:(NSDictionary *)arg1 ;
@end


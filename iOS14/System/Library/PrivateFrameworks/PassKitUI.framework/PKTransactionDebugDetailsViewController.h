/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
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
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)initWithTransaction:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(CGPoint)arg3 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)_mapsCell;
-(void)viewDidLoad;
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
-(void)setTransactionDetails:(NSDictionary *)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)_stringForTechnologyType:(long long)arg1 ;
-(id)_stringForTransactionSource:(unsigned long long)arg1 ;
-(id)_cellWithPrimaryText:(id)arg1 infoText:(id)arg2 ;
-(void)setMerchantDetails:(NSDictionary *)arg1 ;
-(void)setMapsMerchantDetails:(NSDictionary *)arg1 ;
@end


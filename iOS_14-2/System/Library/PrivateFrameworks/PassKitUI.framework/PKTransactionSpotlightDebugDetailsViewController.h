/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UITableViewController.h>

@class PKPaymentTransaction, PKSearchService, NSMutableArray, NSMutableDictionary, CSSearchableItem;

@interface PKTransactionSpotlightDebugDetailsViewController : UITableViewController {

	PKPaymentTransaction* _transaction;
	PKSearchService* _searchService;
	BOOL _loading;
	BOOL _inBridge;
	NSMutableArray* _attributes;
	NSMutableDictionary* _attributesPerKey;
	NSMutableArray* _customAttributes;
	NSMutableDictionary* _customAttributesPerKey;
	CSSearchableItem* _item;

}
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)initWithTransaction:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)loadItemWithCompletion:(/*^block*/id)arg1 ;
-(id)_cellWithTitleText:(id)arg1 valueText:(id)arg2 ;
-(void)viewDidLoad;
-(void)spotlightObjectDescriptionWithCompletion:(/*^block*/id)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UITableViewController.h>

@class PKCloudRecordObject, PKPaymentTransaction, PKCloudStoreService, NSMutableDictionary, NSMutableSet;

@interface PKTransactionCloudKitDebugDetailsViewController : UITableViewController {

	PKCloudRecordObject* _cloudRecordObject;
	PKPaymentTransaction* _transaction;
	PKCloudStoreService* _cloudStoreService;
	BOOL _loadingCloudRecordObject;
	BOOL _inBridge;
	NSMutableDictionary* _keysForRecordName;
	NSMutableDictionary* _valuesForRecordName;
	NSMutableSet* _cloudStoreObjectHandlers;

}
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(id)initWithTransaction:(id)arg1 ;
-(void)cloudRecordObjectDescriptionWithCompletion:(/*^block*/id)arg1 ;
-(void)_loadCloudData;
-(id)_recordNameForSection:(long long)arg1 ;
-(id)_recordForSection:(long long)arg1 ;
-(id)_cellWithTitleText:(id)arg1 valueText:(id)arg2 ;
-(void)_processCloudRecords;
-(void)_callCloudRecordObjectDescriptionBlocks;
@end


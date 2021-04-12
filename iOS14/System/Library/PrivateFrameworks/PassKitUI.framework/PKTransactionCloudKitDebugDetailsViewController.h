/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UITableViewController.h>

@class PKCloudRecordObject, NSArray, PKPaymentTransaction, PKCloudStoreService, NSMutableDictionary, NSMutableSet;

@interface PKTransactionCloudKitDebugDetailsViewController : UITableViewController {

	PKCloudRecordObject* _cloudRecordObject;
	NSArray* _records;
	PKPaymentTransaction* _transaction;
	PKCloudStoreService* _cloudStoreService;
	BOOL _loadingCloudRecordObject;
	BOOL _inBridge;
	NSMutableDictionary* _keysForRecordName;
	NSMutableDictionary* _valuesForRecordName;
	NSMutableSet* _cloudStoreObjectHandlers;

}
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)initWithTransaction:(id)arg1 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)_loadCloudData;
-(id)_recordNameForSection:(long long)arg1 ;
-(id)_recordForSection:(long long)arg1 ;
-(void)_processCloudRecords;
-(void)_callCloudRecordObjectDescriptionBlocks;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)_cellWithTitleText:(id)arg1 valueText:(id)arg2 ;
-(void)viewDidLoad;
-(void)cloudRecordObjectDescriptionWithCompletion:(/*^block*/id)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end


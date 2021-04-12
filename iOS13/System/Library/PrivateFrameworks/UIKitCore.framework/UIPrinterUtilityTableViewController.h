/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UITableViewController.h>

@class PKPrinter, NSArray;

@interface UIPrinterUtilityTableViewController : UITableViewController {

	PKPrinter* _printer;
	BOOL _showSupplyDataUnderPrinterName;
	long long _mainPrinterCellSection;
	long long _printerNameAndLocationSection;
	long long _identifyPrinterSection;
	long long _removeKeychainItemSection;
	NSArray* _supplyData;

}

@property (nonatomic,retain) NSArray * supplyData;              //@synthesize supplyData=_supplyData - In the implementation block
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)didReceiveMemoryWarning;
-(void)setShowContactingPrinter:(BOOL)arg1 ;
-(id)initWithPrinter:(id)arg1 ;
-(void)setSupplyData:(NSArray *)arg1 ;
-(NSArray *)supplyData;
@end


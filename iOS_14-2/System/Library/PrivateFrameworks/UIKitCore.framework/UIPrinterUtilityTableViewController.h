/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UITableViewController.h>

@class PKPrinter, NSString, UIPrinterAttributesService, NSArray;

@interface UIPrinterUtilityTableViewController : UITableViewController {

	PKPrinter* _printer;
	NSString* _printerWarning;
	UIPrinterAttributesService* _printerAttributesService;
	BOOL _showSupplyDataUnderPrinterName;
	long long _mainPrinterCellSection;
	long long _printerNameAndLocationSection;
	long long _identifyPrinterSection;
	long long _removeKeychainItemSection;
	NSArray* _supplyData;

}

@property (nonatomic,retain) NSArray * supplyData;              //@synthesize supplyData=_supplyData - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)initWithPrinter:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setSupplyData:(NSArray *)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)didReceiveMemoryWarning;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(NSArray *)supplyData;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)startPrinterWarningPoll;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setShowContactingPrinter:(BOOL)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)stopPrinterWarningPolling;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKSectionTableViewController.h>
#import <libobjc.A.dylib/PKPaymentServiceDelegate.h>
#import <libobjc.A.dylib/QLPreviewItemDataProvider.h>
#import <libobjc.A.dylib/QLPreviewControllerDelegate.h>
#import <libobjc.A.dylib/QLPreviewControllerDataSource.h>

@class PKPaymentService, PKPaymentTransaction, PKTransactionReceipt, QLItem, QLPreviewController, NSString;

@interface PKTransactionReceiptDebugViewController : PKSectionTableViewController <PKPaymentServiceDelegate, QLPreviewItemDataProvider, QLPreviewControllerDelegate, QLPreviewControllerDataSource> {

	PKPaymentService* _paymentService;
	PKPaymentTransaction* _transaction;
	PKTransactionReceipt* _receipt;
	QLItem* _receiptPreviewItem;
	QLPreviewController* _previewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)_infoCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_presentReceiptPreview;
-(id)_headerFieldCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_lineItemCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_summaryItemCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_amountCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_previewCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)transactionWithIdentifier:(id)arg1 didDownloadTransactionReceipt:(id)arg2 ;
-(id)initWithPaymentTransaction:(id)arg1 ;
-(BOOL)shouldMapSection:(unsigned long long)arg1 ;
-(id)provideDataForItem:(id)arg1 ;
-(long long)numberOfPreviewItemsInPreviewController:(id)arg1 ;
-(id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKPaymentSetupTableViewController.h>
#import <UIKit/UITableViewDelegate.h>

@protocol PKPaymentSetupDisambiguationViewControllerDelegate;
@class NSArray, UIBarButtonItem, PKTableHeaderView, PKDisambiguationFooterView, PKPaymentSetupProduct, NSString;

@interface PKPaymentSetupDisambiguationViewController : PKPaymentSetupTableViewController <UITableViewDelegate> {

	NSArray* _products;
	UIBarButtonItem* _nextBarButtonItem;
	PKTableHeaderView* _headerView;
	PKDisambiguationFooterView* _footerView;
	id<PKPaymentSetupDisambiguationViewControllerDelegate> _delegate;
	PKPaymentSetupProduct* _selectedProduct;
	NSString* _enteredCardNumber;

}

@property (assign,nonatomic,__weak) id<PKPaymentSetupDisambiguationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * products;                                                                  //@synthesize products=_products - In the implementation block
@property (nonatomic,retain,readonly) PKPaymentSetupProduct * selectedProduct;                                    //@synthesize selectedProduct=_selectedProduct - In the implementation block
@property (nonatomic,copy) NSString * enteredCardNumber;                                                          //@synthesize enteredCardNumber=_enteredCardNumber - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id<PKPaymentSetupDisambiguationViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setDelegate:(id<PKPaymentSetupDisambiguationViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)_setupLater:(id)arg1 ;
-(id)initWithProducts:(id)arg1 context:(long long)arg2 ;
-(void)_popToCameraCapture:(id)arg1 ;
-(id)_productAtIndexPath:(id)arg1 ;
-(void)_updateSelectedProduct:(id)arg1 ;
-(PKPaymentSetupProduct *)selectedProduct;
-(void)_notifyDelegateDidSelectProduct:(id)arg1 ;
-(void)setEnteredCardNumber:(NSString *)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)setProducts:(NSArray *)arg1 ;
-(void)clearSelectedProduct;
-(NSString *)enteredCardNumber;
-(void)_nextTapped:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(NSArray *)products;
-(void)dealloc;
@end


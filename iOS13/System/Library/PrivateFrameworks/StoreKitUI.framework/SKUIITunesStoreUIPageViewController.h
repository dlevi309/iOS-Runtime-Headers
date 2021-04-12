/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <iTunesStoreUI/SUStorePageViewController.h>

@class SUBarButtonItem, NSString, SKProductPageViewController;

@interface SKUIITunesStoreUIPageViewController : SUStorePageViewController {

	SUBarButtonItem* _cancelButtonItem;
	NSString* _cancelButtonTitle;
	SKProductPageViewController* _productPageViewController;
	BOOL _showsCancelButton;

}

@property (assign,nonatomic,__weak) SKProductPageViewController * productPageViewController;              //@synthesize productPageViewController=_productPageViewController - In the implementation block
@property (assign,nonatomic) BOOL showsCancelButton;                                                      //@synthesize showsCancelButton=_showsCancelButton - In the implementation block
@property (nonatomic,copy) NSString * cancelButtonTitle;                                                  //@synthesize cancelButtonTitle=_cancelButtonTitle - In the implementation block
-(void)dealloc;
-(void)viewWillLayoutSubviews;
-(BOOL)showsCancelButton;
-(void)setShowsCancelButton:(BOOL)arg1 ;
-(void)setCancelButtonTitle:(NSString *)arg1 ;
-(NSString *)cancelButtonTitle;
-(void)setProductPageViewController:(SKProductPageViewController *)arg1 ;
-(void)resetNavigationItem:(id)arg1 ;
-(void)handleFailureWithError:(id)arg1 ;
-(SKProductPageViewController *)productPageViewController;
-(BOOL)presentDialogForError:(id)arg1 pendUntilVisible:(BOOL)arg2 ;
-(void)_addCancelButtonToNavigationItem:(id)arg1 ;
-(id)_cancelButtonItem;
-(void)_storeSheetCancelButtonAction:(id)arg1 ;
@end


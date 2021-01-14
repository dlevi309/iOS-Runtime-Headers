/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewWillLayoutSubviews;
-(BOOL)showsCancelButton;
-(void)setShowsCancelButton:(BOOL)arg1 ;
-(id)_cancelButtonItem;
-(NSString *)cancelButtonTitle;
-(void)dealloc;
-(void)setCancelButtonTitle:(NSString *)arg1 ;
-(void)setProductPageViewController:(SKProductPageViewController *)arg1 ;
-(void)resetNavigationItem:(id)arg1 ;
-(void)handleFailureWithError:(id)arg1 ;
-(SKProductPageViewController *)productPageViewController;
-(BOOL)presentDialogForError:(id)arg1 pendUntilVisible:(BOOL)arg2 ;
-(void)_addCancelButtonToNavigationItem:(id)arg1 ;
-(void)_storeSheetCancelButtonAction:(id)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <libobjc.A.dylib/CNContactPickerDelegate.h>

@class SKUIClientContext, CNContactPickerViewController, SKUIItem, UIViewController, NSString;

@interface SKUITonePurchaseController : NSObject <CNContactPickerDelegate> {

	SKUIClientContext* _clientContext;
	CNContactPickerViewController* _contactPickerController;
	/*^block*/id _completionBlock;
	SKUIItem* _item;
	UIViewController* _parentViewController;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;                           //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * parentViewController;              //@synthesize parentViewController=_parentViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithItem:(id)arg1 ;
-(UIViewController *)parentViewController;
-(void)setParentViewController:(UIViewController *)arg1 ;
-(void)contactPicker:(id)arg1 didSelectContact:(id)arg2 ;
-(void)contactPickerDidCancel:(id)arg1 ;
-(void)_presentViewController:(id)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(void)showPurchaseFlowWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_finishWithTonePurchase:(id)arg1 ;
-(void)_showContactPicker;
-(void)_dismissContactPicker;
-(void)_finishContactPicker:(id)arg1 withContact:(id)arg2 ;
@end


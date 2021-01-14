/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIViewController *)parentViewController;
-(void)_presentViewController:(id)arg1 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)contactPicker:(id)arg1 didSelectContact:(id)arg2 ;
-(void)contactPickerDidCancel:(id)arg1 ;
-(void)_dismissContactPicker;
-(id)initWithItem:(id)arg1 ;
-(void)setParentViewController:(UIViewController *)arg1 ;
-(void)dealloc;
-(void)showPurchaseFlowWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_finishWithTonePurchase:(id)arg1 ;
-(void)_showContactPicker;
-(void)_finishContactPicker:(id)arg1 withContact:(id)arg2 ;
@end


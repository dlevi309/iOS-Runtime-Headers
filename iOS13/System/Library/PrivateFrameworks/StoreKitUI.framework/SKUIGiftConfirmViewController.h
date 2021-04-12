/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIGiftStepViewController.h>

@class SKUIGiftConfirmView, SKUIGiftPurchaseRequest, SKUIFocusedTouchGestureRecognizer;

@interface SKUIGiftConfirmViewController : SKUIGiftStepViewController {

	SKUIGiftConfirmView* _confirmView;
	BOOL _isShowingConfirmation;
	SKUIGiftPurchaseRequest* _purchaseRequest;
	SKUIFocusedTouchGestureRecognizer* _touchRecognizer;

}
-(void)dealloc;
-(void)loadView;
-(id)initWithGift:(id)arg1 configuration:(id)arg2 ;
-(void)_termsButtonAction:(id)arg1 ;
-(id)_buyButtonTitle;
-(id)_newBuyBarButtonItemWithTitle:(id)arg1 ;
-(void)_purchaseGift;
-(void)_setShowingConfirmation:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_removeCancelGestureRecognizer;
-(void)_cancelBuyConfirmation:(id)arg1 ;
-(void)_showSuccessPage;
-(void)_finishPurchaseWithResult:(BOOL)arg1 errorMessage:(id)arg2 ;
-(id)_confirmButtonTitle;
-(void)_buyButtonAction:(id)arg1 ;
@end


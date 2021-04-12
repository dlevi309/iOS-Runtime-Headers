/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIGiftStepViewController.h>

@class UIButton, UIImage, SKUIGiftItemView;

@interface SKUIGiftResultViewController : SKUIGiftStepViewController {

	UIButton* _giftAgainButton;
	UIImage* _itemImage;
	SKUIGiftItemView* _itemView;

}
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)_itemView;
-(id)initWithGift:(id)arg1 configuration:(id)arg2 ;
-(void)_setItemImage:(id)arg1 error:(id)arg2 ;
-(id)_itemImage;
-(void)_giftAgainAction:(id)arg1 ;
-(void)_doneButtonAction:(id)arg1 ;
@end


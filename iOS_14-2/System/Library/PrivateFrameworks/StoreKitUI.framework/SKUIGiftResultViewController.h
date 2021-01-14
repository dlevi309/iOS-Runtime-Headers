/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIGiftStepViewController.h>

@class UIButton, UIImage, SKUIGiftItemView;

@interface SKUIGiftResultViewController : SKUIGiftStepViewController {

	UIButton* _giftAgainButton;
	UIImage* _itemImage;
	SKUIGiftItemView* _itemView;

}
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)_itemView;
-(id)_itemImage;
-(void)loadView;
-(void)dealloc;
-(id)initWithGift:(id)arg1 configuration:(id)arg2 ;
-(void)_setItemImage:(id)arg1 error:(id)arg2 ;
-(void)_giftAgainAction:(id)arg1 ;
-(void)_doneButtonAction:(id)arg1 ;
@end


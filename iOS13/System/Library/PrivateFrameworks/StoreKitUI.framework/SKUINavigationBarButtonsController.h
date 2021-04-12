/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUINavigationBarSectionController.h>
#import <libobjc.A.dylib/SKUIItemOfferButtonDelegate.h>

@class NSMapTable, SKUINavigationBarViewElement, NSString;

@interface SKUINavigationBarButtonsController : SKUINavigationBarSectionController <SKUIItemOfferButtonDelegate> {

	NSMapTable* _buttonItemElements;
	NSMapTable* _buttonItemToImageResourceCacheKey;
	SKUINavigationBarViewElement* _navigationBarElement;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(void)_buttonAction:(id)arg1 ;
-(void)reloadAfterDocumentUpdateWithNavigationItem:(id)arg1 ;
-(void)_cancelConfirmationAction:(id)arg1 ;
-(void)_showConfirmationAction:(id)arg1 ;
-(id)initWithNavigationBarViewElement:(id)arg1 ;
-(void)_updateButtonItem:(id)arg1 withButtonViewElement:(id)arg2 ;
-(id)addButtonItemWithButtonViewElement:(id)arg1 ;
-(void)disconnectAllButtons;
-(id)barButtonItemForElementIdentifier:(id)arg1 ;
-(id)_imageForImageViewElement:(id)arg1 ;
-(void)_itemOfferAction:(id)arg1 ;
-(void)_updateItemOfferButton:(id)arg1 withButtonViewElement:(id)arg2 ;
-(void)_reloadButtonItem:(id)arg1 withButtonViewElement:(id)arg2 ;
-(UIEdgeInsets)_imageInsetsForImageViewElement:(id)arg1 ;
@end


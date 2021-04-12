/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <ShareSheet/UIActivityItemProvider.h>

@class SKUIProductPageItem, SKUIClientContext;

@interface SKUIDeferredActivityItemProvider : UIActivityItemProvider {

	SKUIProductPageItem* _productPageItem;
	SKUIClientContext* _clientContext;
	/*^block*/id _itemProvider;

}

@property (copy) id itemProvider;                                             //@synthesize itemProvider=_itemProvider - In the implementation block
@property (retain) SKUIClientContext * clientContext;                         //@synthesize clientContext=_clientContext - In the implementation block
@property (copy,readonly) SKUIProductPageItem * productPageItem;              //@synthesize productPageItem=_productPageItem - In the implementation block
+(id)placeholderItem;
-(id)itemProvider;
-(void)setItemProvider:(id)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIProductPageItem *)productPageItem;
-(id)initWithProductPageItem:(id)arg1 clientContext:(id)arg2 ;
-(id)initWithProductPageItemProvider:(/*^block*/id)arg1 clientContext:(id)arg2 ;
-(id)initWithProductPageItemProvider:(/*^block*/id)arg1 clientContext:(id)arg2 placeholderItem:(id)arg3 ;
@end


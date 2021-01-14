/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(id)itemProvider;
-(void)setItemProvider:(id)arg1 ;
-(SKUIProductPageItem *)productPageItem;
-(id)initWithProductPageItem:(id)arg1 clientContext:(id)arg2 ;
-(id)initWithProductPageItemProvider:(/*^block*/id)arg1 clientContext:(id)arg2 ;
-(id)initWithProductPageItemProvider:(/*^block*/id)arg1 clientContext:(id)arg2 placeholderItem:(id)arg3 ;
@end


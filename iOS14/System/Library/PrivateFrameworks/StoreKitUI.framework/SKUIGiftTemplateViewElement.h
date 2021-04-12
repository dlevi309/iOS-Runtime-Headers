/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIViewElement.h>

@class NSString, SKUIItem;

@interface SKUIGiftTemplateViewElement : SKUIViewElement {

	long long _giftType;
	NSString* _productBuyParams;
	long long _productItemIdentifier;

}

@property (nonatomic,readonly) long long giftType;                  //@synthesize giftType=_giftType - In the implementation block
@property (nonatomic,readonly) SKUIItem * productItem; 
-(long long)giftType;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(SKUIItem *)productItem;
@end


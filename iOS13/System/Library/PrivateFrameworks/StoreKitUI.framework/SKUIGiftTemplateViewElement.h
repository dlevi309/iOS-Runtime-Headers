/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(long long)giftType;
-(SKUIItem *)productItem;
@end


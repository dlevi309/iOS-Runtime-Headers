/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIViewElement.h>

@interface SKUICardViewElement : SKUIViewElement {

	char _enabled;

}

@property (nonatomic,readonly) long long cardType; 
@property (getter=isAdCard,nonatomic,readonly) BOOL adCard; 
-(BOOL)isEnabled;
-(long long)cardType;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(void)enumerateChildrenUsingBlock:(/*^block*/id)arg1 ;
-(long long)pageComponentType;
-(BOOL)isAdCard;
@end


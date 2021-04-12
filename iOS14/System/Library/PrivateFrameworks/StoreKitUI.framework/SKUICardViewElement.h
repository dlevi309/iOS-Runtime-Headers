/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIViewElement.h>

@interface SKUICardViewElement : SKUIViewElement {

	char _enabled;

}

@property (nonatomic,readonly) long long cardType; 
@property (getter=isAdCard,nonatomic,readonly) BOOL adCard; 
-(long long)cardType;
-(BOOL)isEnabled;
-(BOOL)isAdCard;
-(void)enumerateChildrenUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(long long)pageComponentType;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIHeaderViewElement;

@interface SKUIColumnViewElement : SKUIViewElement {

	long long _columnSpan;

}

@property (nonatomic,readonly) long long columnSpan;                               //@synthesize columnSpan=_columnSpan - In the implementation block
@property (nonatomic,readonly) SKUIHeaderViewElement * headerElement; 
-(long long)columnSpan;
-(SKUIHeaderViewElement *)headerElement;
-(void)enumerateChildrenUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(long long)pageComponentType;
@end


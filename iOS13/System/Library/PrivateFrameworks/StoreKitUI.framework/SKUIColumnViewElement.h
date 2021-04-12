/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(void)enumerateChildrenUsingBlock:(/*^block*/id)arg1 ;
-(long long)pageComponentType;
-(SKUIHeaderViewElement *)headerElement;
@end


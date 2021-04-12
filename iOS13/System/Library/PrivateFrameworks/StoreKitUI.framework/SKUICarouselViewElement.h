/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIProgressIndicatorViewElement;

@interface SKUICarouselViewElement : SKUIViewElement {

	double _displayInterval;

}

@property (nonatomic,readonly) double displayInterval;                                                   //@synthesize displayInterval=_displayInterval - In the implementation block
@property (nonatomic,readonly) SKUIProgressIndicatorViewElement * progressIndicatorElement; 
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(void)enumerateChildrenUsingBlock:(/*^block*/id)arg1 ;
-(long long)pageComponentType;
-(double)displayInterval;
-(SKUIProgressIndicatorViewElement *)progressIndicatorElement;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIProgressIndicatorViewElement;

@interface SKUICarouselViewElement : SKUIViewElement {

	double _displayInterval;

}

@property (nonatomic,readonly) double displayInterval;                                                   //@synthesize displayInterval=_displayInterval - In the implementation block
@property (nonatomic,readonly) SKUIProgressIndicatorViewElement * progressIndicatorElement; 
-(void)enumerateChildrenUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(long long)pageComponentType;
-(double)displayInterval;
-(SKUIProgressIndicatorViewElement *)progressIndicatorElement;
@end


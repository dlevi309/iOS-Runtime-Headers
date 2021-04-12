/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIViewElement.h>

@class SKUILabelViewElement, NSArray, SKUIItemViewElement;

@interface SKUIMenuViewElement : SKUIViewElement {

	char _enabled;
	SKUILabelViewElement* _menuLabel;

}

@property (nonatomic,readonly) NSArray * menuItemTitles; 
@property (nonatomic,readonly) SKUILabelViewElement * menuLabel;              //@synthesize menuLabel=_menuLabel - In the implementation block
@property (nonatomic,readonly) long long selectedItemIndex; 
@property (nonatomic,readonly) SKUIItemViewElement * titleItem; 
-(BOOL)isEnabled;
-(long long)selectedItemIndex;
-(SKUIItemViewElement *)titleItem;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(void)dispatchEventOfType:(unsigned long long)arg1 forItemAtIndex:(long long)arg2 ;
-(NSArray *)menuItemTitles;
-(void)_enumerateItemElementsUsingBlock:(/*^block*/id)arg1 ;
-(SKUILabelViewElement *)menuLabel;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIViewElementText;

@interface SKUIItemViewElement : SKUIViewElement {

	SKUIViewElementText* _itemText;
	BOOL _selected;

}

@property (nonatomic,readonly) SKUIViewElementText * itemText;               //@synthesize itemText=_itemText - In the implementation block
@property (getter=isSelected,nonatomic,readonly) BOOL selected;              //@synthesize selected=_selected - In the implementation block
-(SKUIViewElementText *)itemText;
-(BOOL)isSelected;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
@end


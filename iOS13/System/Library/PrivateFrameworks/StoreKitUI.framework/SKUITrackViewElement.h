/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIActionsViewElement;

@interface SKUITrackViewElement : SKUIViewElement {

	char _enabled;
	BOOL _selected;

}

@property (getter=isSelected,nonatomic,readonly) BOOL selected;                    //@synthesize selected=_selected - In the implementation block
@property (nonatomic,readonly) SKUIActionsViewElement * swipeActions; 
-(BOOL)isEnabled;
-(BOOL)isSelected;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(void)enumerateChildrenUsingBlock:(/*^block*/id)arg1 ;
-(SKUIActionsViewElement *)swipeActions;
@end


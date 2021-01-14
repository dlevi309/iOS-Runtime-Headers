/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIViewElement.h>

@class NSString, SKUIDividerViewElement, NSArray;

@interface SKUISegmentedControlViewElement : SKUIViewElement {

	long long _maximumNumberOfVisibleItems;
	NSString* _moreListTitle;

}

@property (nonatomic,readonly) SKUIDividerViewElement * bottomDivider; 
@property (nonatomic,readonly) long long initialSelectedItemIndex; 
@property (nonatomic,readonly) long long maximumNumberOfVisibleItems;               //@synthesize maximumNumberOfVisibleItems=_maximumNumberOfVisibleItems - In the implementation block
@property (nonatomic,readonly) NSString * moreListTitle;                            //@synthesize moreListTitle=_moreListTitle - In the implementation block
@property (nonatomic,readonly) NSArray * segmentItemTitles; 
-(SKUIDividerViewElement *)bottomDivider;
-(long long)maximumNumberOfVisibleItems;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(long long)pageComponentType;
-(void)dispatchEventOfType:(unsigned long long)arg1 forItemAtIndex:(long long)arg2 ;
-(NSArray *)segmentItemTitles;
-(NSString *)moreListTitle;
-(long long)initialSelectedItemIndex;
-(void)_enumerateItemElementsUsingBlock:(/*^block*/id)arg1 ;
@end


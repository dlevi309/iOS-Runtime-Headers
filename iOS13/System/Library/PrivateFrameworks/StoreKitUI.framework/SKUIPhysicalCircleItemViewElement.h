/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIViewElement.h>

@class NSString, SKUIImageViewElement, SKUILabelViewElement;

@interface SKUIPhysicalCircleItemViewElement : SKUIViewElement {

	long long _circleSize;
	NSString* _itemIdentifier;

}

@property (nonatomic,readonly) long long circleSize;                             //@synthesize circleSize=_circleSize - In the implementation block
@property (nonatomic,readonly) NSString * itemIdentifier;                        //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,readonly) SKUIImageViewElement * imageElement; 
@property (nonatomic,readonly) SKUILabelViewElement * titleElement; 
-(NSString *)itemIdentifier;
-(long long)circleSize;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(SKUILabelViewElement *)titleElement;
-(SKUIImageViewElement *)imageElement;
@end


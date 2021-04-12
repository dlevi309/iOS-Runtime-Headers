/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIItemViewElement.h>

@class SKUIImageViewElement, NSArray;

@interface SKUIBrowseItemViewElement : SKUIItemViewElement {

	BOOL _expands;

}

@property (nonatomic,readonly) SKUIImageViewElement * decorationImage; 
@property (nonatomic,readonly) BOOL expands;                                        //@synthesize expands=_expands - In the implementation block
@property (nonatomic,readonly) NSArray * metadata; 
-(NSArray *)metadata;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(SKUIImageViewElement *)decorationImage;
-(long long)pageComponentType;
-(BOOL)expands;
@end


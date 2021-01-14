/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)expands;
-(NSArray *)metadata;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(SKUIImageViewElement *)decorationImage;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(long long)pageComponentType;
@end


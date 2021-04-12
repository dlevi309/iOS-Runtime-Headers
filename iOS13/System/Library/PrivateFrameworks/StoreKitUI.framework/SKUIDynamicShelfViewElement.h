/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIShelfViewElement.h>
#import <libobjc.A.dylib/SKUIDynamicShelfViewElement.h>

@class SKUIViewElement, NSString;

@interface SKUIDynamicShelfViewElement : SKUIShelfViewElement <SKUIDynamicShelfViewElement> {

	SKUIViewElement* _cellTemplateViewElement;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SKUIViewElement * cellTemplateViewElement; 
@property (nonatomic,readonly) id<SKUIEntityProviding> entityProvider; 
-(id)applyUpdatesWithElement:(id)arg1 ;
-(SKUIViewElement *)cellTemplateViewElement;
-(BOOL)isDynamicContainer;
-(void)setShelfItemViewElementValidator:(/*^block*/id)arg1 ;
@end


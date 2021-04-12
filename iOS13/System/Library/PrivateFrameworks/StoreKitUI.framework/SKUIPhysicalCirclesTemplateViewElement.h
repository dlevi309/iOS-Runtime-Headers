/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIPhysicalCirclesTemplateDOMFeature, SKUILabelViewElement, NSArray, SKUIPaletteViewElement;

@interface SKUIPhysicalCirclesTemplateViewElement : SKUIViewElement {

	SKUIPhysicalCirclesTemplateDOMFeature* _scriptInterface;

}

@property (nonatomic,readonly) SKUILabelViewElement * subtitleElement; 
@property (nonatomic,readonly) SKUILabelViewElement * titleElement; 
@property (nonatomic,readonly) NSArray * circleItemElements; 
@property (nonatomic,readonly) SKUIPaletteViewElement * footerPaletteElement; 
@property (nonatomic,readonly) SKUIPhysicalCirclesTemplateDOMFeature * scriptInterface;              //@synthesize scriptInterface=_scriptInterface - In the implementation block
+(id)supportedFeatures;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(SKUIPhysicalCirclesTemplateDOMFeature *)scriptInterface;
-(NSArray *)circleItemElements;
-(void)dispatchRemovedEventWithChildViewElement:(id)arg1 ;
-(SKUILabelViewElement *)titleElement;
-(SKUIPaletteViewElement *)footerPaletteElement;
-(SKUILabelViewElement *)subtitleElement;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIImageViewElement, SKUILabelViewElement;

@interface SKUIActivityIndicatorViewElement : SKUIViewElement {

	double _period;

}

@property (nonatomic,readonly) SKUIImageViewElement * image; 
@property (nonatomic,readonly) double period; 
@property (nonatomic,readonly) SKUILabelViewElement * text; 
-(double)period;
-(BOOL)isDisabled;
-(SKUIImageViewElement *)image;
-(SKUILabelViewElement *)text;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(long long)pageComponentType;
@end


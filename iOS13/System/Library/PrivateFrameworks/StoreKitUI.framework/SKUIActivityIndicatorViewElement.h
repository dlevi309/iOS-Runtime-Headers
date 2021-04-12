/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(SKUIImageViewElement *)image;
-(SKUILabelViewElement *)text;
-(double)period;
-(BOOL)isDisabled;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(long long)pageComponentType;
@end


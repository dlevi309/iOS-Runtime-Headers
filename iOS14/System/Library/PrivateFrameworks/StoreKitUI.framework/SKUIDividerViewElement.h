/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIButtonViewElement, SKUIViewElementText;

@interface SKUIDividerViewElement : SKUIViewElement {

	SKUIButtonViewElement* _button;
	long long _dividerType;
	BOOL _dividerTypeWasInitialized;
	SKUIViewElementText* _text;

}

@property (nonatomic,readonly) SKUIButtonViewElement * button; 
@property (nonatomic,readonly) long long dividerType; 
@property (nonatomic,readonly) SKUIViewElementText * text;                  //@synthesize text=_text - In the implementation block
-(SKUIButtonViewElement *)button;
-(SKUIViewElementText *)text;
-(BOOL)isEnabled;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(long long)dividerType;
-(long long)pageComponentType;
@end


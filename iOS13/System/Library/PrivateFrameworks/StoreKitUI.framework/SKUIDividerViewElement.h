/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEnabled;
-(SKUIViewElementText *)text;
-(SKUIButtonViewElement *)button;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(long long)dividerType;
-(long long)pageComponentType;
@end


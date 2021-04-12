/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIViewElement.h>

@class SKUILabelViewElement, NSArray, SKUIImageViewElement;

@interface SKUIDialogTemplateViewElement : SKUIViewElement {

	long long _dialogType;

}

@property (nonatomic,readonly) long long dialogType;                        //@synthesize dialogType=_dialogType - In the implementation block
@property (nonatomic,readonly) SKUILabelViewElement * message; 
@property (nonatomic,readonly) SKUILabelViewElement * title; 
@property (nonatomic,readonly) NSArray * buttons; 
@property (nonatomic,readonly) SKUIImageViewElement * image; 
-(SKUILabelViewElement *)message;
-(NSArray *)buttons;
-(SKUIImageViewElement *)image;
-(long long)dialogType;
-(SKUILabelViewElement *)title;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
@end


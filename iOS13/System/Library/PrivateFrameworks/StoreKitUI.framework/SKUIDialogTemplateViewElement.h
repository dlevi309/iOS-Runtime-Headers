/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(SKUILabelViewElement *)title;
-(SKUIImageViewElement *)image;
-(SKUILabelViewElement *)message;
-(NSArray *)buttons;
-(long long)dialogType;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIViewElement.h>

@class NSArray, UIColor;

@interface SKUINavigationBarViewElement : SKUIViewElement {

	BOOL _hidesShadow;
	BOOL _hidesBackButton;

}

@property (nonatomic,readonly) BOOL hidesShadow;                          //@synthesize hidesShadow=_hidesShadow - In the implementation block
@property (nonatomic,readonly) BOOL hidesBackButton;                      //@synthesize hidesBackButton=_hidesBackButton - In the implementation block
@property (nonatomic,readonly) BOOL isTransparent; 
@property (nonatomic,readonly) NSArray * mainViewElements; 
@property (nonatomic,readonly) NSArray * navigationPalettes; 
@property (nonatomic,readonly) UIColor * tintColor; 
-(BOOL)hidesShadow;
-(BOOL)isTransparent;
-(BOOL)hidesBackButton;
-(UIColor *)tintColor;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(NSArray *)navigationPalettes;
-(NSArray *)mainViewElements;
@end


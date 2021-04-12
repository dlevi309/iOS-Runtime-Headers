/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(UIColor *)tintColor;
-(BOOL)hidesShadow;
-(BOOL)hidesBackButton;
-(BOOL)isTransparent;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(NSArray *)navigationPalettes;
-(NSArray *)mainViewElements;
@end


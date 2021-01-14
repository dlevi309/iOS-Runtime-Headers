/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUINavigationBarSectionController.h>

@class SKUINavigationBarContext, SKUINavigationPaletteView, SKUIPaletteViewElement, SKUIViewElementLayoutContext;

@interface SKUINavigationPaletteController : SKUINavigationBarSectionController {

	SKUINavigationBarContext* _navigationBarContext;
	SKUINavigationPaletteView* _paletteView;
	SKUIPaletteViewElement* _viewElement;
	SKUIViewElementLayoutContext* _viewLayoutContext;

}
-(id)view;
-(id)viewForElementIdentifier:(id)arg1 ;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(void)willAppearInNavigationBar;
-(void)reloadSectionViews;
-(id)initWithPaletteViewElement:(id)arg1 ;
@end


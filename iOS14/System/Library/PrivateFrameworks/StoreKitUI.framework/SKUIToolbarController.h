/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@protocol SKUIToolbarControllerDelegate;
@class SKUIToolbarButtonsController, SKUIToolbarViewElement, NSArray;

@interface SKUIToolbarController : NSObject {

	SKUIToolbarButtonsController* _buttonsController;
	SKUIToolbarViewElement* _viewElement;
	NSArray* _toolbarItems;
	id<SKUIToolbarControllerDelegate> _delegate;

}

@property (nonatomic,readonly) SKUIToolbarViewElement * toolbarViewElement;                  //@synthesize viewElement=_viewElement - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIToolbarControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * toolbarItems;                                       //@synthesize toolbarItems=_toolbarItems - In the implementation block
-(NSArray *)toolbarItems;
-(id<SKUIToolbarControllerDelegate>)delegate;
-(void)setDelegate:(id<SKUIToolbarControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)initWithToolbarViewElement:(id)arg1 ;
-(void)detachFromNavigationController:(id)arg1 ;
-(SKUIToolbarViewElement *)toolbarViewElement;
-(void)updateToolbarForNavigationController:(id)arg1 ;
-(id)_barButtonItemWithElement:(id)arg1 ;
-(id)_barButtonItemWithButtonElement:(id)arg1 ;
-(BOOL)toolbarButtonsController:(id)arg1 shouldDispatchEventForButton:(id)arg2 ;
@end


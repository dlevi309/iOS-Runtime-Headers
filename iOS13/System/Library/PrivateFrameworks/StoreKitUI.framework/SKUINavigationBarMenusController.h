/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUINavigationBarSectionController.h>
#import <libobjc.A.dylib/SKUIMenuPopoverDelegate.h>

@class UIControl, SKUINavigationBarMenusView, NSArray, SKUIMenuPopoverController, NSString;

@interface SKUINavigationBarMenusController : SKUINavigationBarSectionController <SKUIMenuPopoverDelegate> {

	UIControl* _focusedMenuButton;
	SKUINavigationBarMenusView* _menusView;
	NSArray* _menuViewElements;
	SKUIMenuPopoverController* _popoverController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)view;
-(void)willAppearInNavigationBar;
-(void)_menuButtonAction:(id)arg1 ;
-(void)menuPopoverDidCancel:(id)arg1 ;
-(void)menuPopover:(id)arg1 didSelectMenuItemAtIndex:(long long)arg2 ;
-(void)menuPopover:(id)arg1 willRepositionToRect:(inout CGRect*)arg2 inView:(inout id*)arg3 ;
-(id)initWithMenuViewElements:(id)arg1 ;
-(void)reloadSectionViews;
-(void)_destroyPopover;
-(id)_menuViewElementForView:(id)arg1 ;
@end


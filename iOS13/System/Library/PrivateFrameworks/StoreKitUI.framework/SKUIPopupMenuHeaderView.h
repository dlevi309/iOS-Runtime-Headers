/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SKUIMenuViewControllerDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@protocol SKUIPopupMenuDelegate;
@class UIButton, UILabel, NSString, NSArray, SKUIMenuViewController, UIPopoverController;

@interface SKUIPopupMenuHeaderView : UIView <SKUIMenuViewControllerDelegate, UIPopoverControllerDelegate> {

	id<SKUIPopupMenuDelegate> _delegate;
	UIButton* _menuButton;
	UILabel* _menuLabel;
	NSString* _menuLabelTitle;
	NSArray* _menuItemTitles;
	SKUIMenuViewController* _menuViewController;
	UIPopoverController* _menuPopoverController;
	long long _selectedMenuItemIndex;
	UILabel* _titleLabel;

}

@property (assign,nonatomic,__weak) id<SKUIPopupMenuDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * menuItemTitles;                                 //@synthesize menuItemTitles=_menuItemTitles - In the implementation block
@property (nonatomic,copy) NSString * menuLabelTitle;                                //@synthesize menuLabelTitle=_menuLabelTitle - In the implementation block
@property (assign,nonatomic) long long selectedMenuItemIndex;                        //@synthesize selectedMenuItemIndex=_selectedMenuItemIndex - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<SKUIPopupMenuDelegate>)delegate;
-(void)setDelegate:(id<SKUIPopupMenuDelegate>)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)_titleLabel;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)setColoringWithColorScheme:(id)arg1 ;
-(void)_menuButtonAction:(id)arg1 ;
-(NSArray *)menuItemTitles;
-(void)menuViewController:(id)arg1 didSelectItemAtIndex:(long long)arg2 ;
-(void)setMenuLabelTitle:(NSString *)arg1 ;
-(void)setMenuItemTitles:(NSArray *)arg1 ;
-(void)setSelectedMenuItemIndex:(long long)arg1 ;
-(void)_reloadMenuButton;
-(NSString *)menuLabelTitle;
-(long long)selectedMenuItemIndex;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/SKUIMenuViewControllerDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@protocol SKUIMenuPopoverDelegate;
@class SKUIMenuViewController, UIPopoverController, NSArray, NSString;

@interface SKUIMenuPopoverController : NSObject <SKUIMenuViewControllerDelegate, UIPopoverControllerDelegate> {

	id<SKUIMenuPopoverDelegate> _delegate;
	SKUIMenuViewController* _menuViewController;
	UIPopoverController* _popoverController;

}

@property (nonatomic,readonly) NSArray * menuTitles; 
@property (assign,nonatomic,__weak) id<SKUIMenuPopoverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)popoverController:(id)arg1 willRepositionPopoverToRect:(inout CGRect*)arg2 inView:(inout id*)arg3 ;
-(id<SKUIMenuPopoverDelegate>)delegate;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)setDelegate:(id<SKUIMenuPopoverDelegate>)arg1 ;
-(void)dismissAnimated:(BOOL)arg1 ;
-(void)dealloc;
-(id)initWithMenuTitles:(id)arg1 selectedIndex:(long long)arg2 ;
-(void)presentFromRect:(CGRect)arg1 inView:(id)arg2 permittedArrowDirections:(unsigned long long)arg3 animated:(BOOL)arg4 ;
-(id)initWithMenuTitles:(id)arg1 ;
-(void)_destroyPopoverController;
-(NSArray *)menuTitles;
-(void)menuViewController:(id)arg1 didSelectItemAtIndex:(long long)arg2 ;
@end


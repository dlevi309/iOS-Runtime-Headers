/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UITabBarController.h>
#import <libobjc.A.dylib/SKUIMoreNavigationControllerDelegate.h>

@class SKUIFloatingOverlayView, UIViewController, NSString;

@interface SKUITabBarController : UITabBarController <SKUIMoreNavigationControllerDelegate> {

	SKUIFloatingOverlayView* _floatingOverlayView;
	UIViewController* _floatingOverlayViewController;
	BOOL _sizeTransitionInProgress;
	long long _forcedUserInterfaceStyle;

}

@property (assign,nonatomic) BOOL sizeTransitionInProgress;                           //@synthesize sizeTransitionInProgress=_sizeTransitionInProgress - In the implementation block
@property (nonatomic,readonly) BOOL containsTransientViewControllerOnly; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)_moreNavigationControllerClass;
-(id)init;
-(id)traitCollection;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(id)moreNavigationController;
-(void)setTransientViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setSelectedViewController:(id)arg1 ;
-(long long)preferredUserInterfaceStyle;
-(void)moreNavigationController:(id)arg1 didSelectItemAtIndex:(long long)arg2 ;
-(long long)forcedUserInterfaceStyle;
-(void)setForcedUserInterfaceStyle:(long long)arg1 ;
-(void)setFloatingOverlayViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)floatingOverlayViewController;
-(void)_layoutFloatingOverlayView;
-(BOOL)sizeTransitionInProgress;
-(void)setSizeTransitionInProgress:(BOOL)arg1 ;
-(BOOL)containsTransientViewControllerOnly;
-(void)cancelTransientViewController:(id)arg1 ;
@end


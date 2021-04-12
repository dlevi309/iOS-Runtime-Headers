/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UINavigationController.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class UIView, UIImageView, UIVisualEffectView, NSString;

@interface PKNavigationController : UINavigationController <UINavigationControllerDelegate> {

	BOOL _hasExplicitlyDefinedSupportedInterfaceOrientations;
	unsigned long long _explicitlyDefinedSupportedInterfaceOrientations;
	UIView* _backgroundView;
	UIImageView* _wallpaperView;
	UIVisualEffectView* _blurView;
	BOOL _hasStatusBarStyleOverride;
	long long _statusBarStyleOverride;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(BOOL)_canShowWhileLocked;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)setSupportedInterfaceOrientations:(unsigned long long)arg1 ;
-(long long)preferredStatusBarStyle;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(id)initWithRootViewController:(id)arg1 ;
-(id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2 ;
-(void)_updateBarAppearanceForViewController:(id)arg1 ;
-(void)_updateWithWallpaperImage:(id)arg1 ;
-(void)setupBackgroundViewWithBlurEffect:(long long)arg1 ;
-(void)setupWallpaper;
-(void)setNeedsNavigationBarUpdate;
@end


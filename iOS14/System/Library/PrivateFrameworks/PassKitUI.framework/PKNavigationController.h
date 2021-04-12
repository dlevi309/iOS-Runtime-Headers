/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewWillLayoutSubviews;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2 ;
-(id)init;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(unsigned long long)supportedInterfaceOrientations;
-(id)initWithRootViewController:(id)arg1 ;
-(BOOL)shouldAutorotate;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(id)initWithCoder:(id)arg1 ;
-(long long)preferredStatusBarStyle;
-(void)_updateBarAppearanceForViewController:(id)arg1 ;
-(void)_updateWithWallpaperImage:(id)arg1 ;
-(void)setupBackgroundViewWithBlurEffect:(long long)arg1 ;
-(void)setupWallpaper;
-(void)setNeedsNavigationBarUpdate;
-(void)setSupportedInterfaceOrientations:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end


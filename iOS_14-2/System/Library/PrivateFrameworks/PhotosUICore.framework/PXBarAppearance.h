/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXMutableBarAppearance.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@protocol PXBarAppearanceImplementationDelegate;
@class UIColor, PXBarAnimationOptions, UIViewController, NSString;

@interface PXBarAppearance : PXObservable <PXMutableBarAppearance, PXChangeObserver> {

	SCD_Struct_PX59 _implementationDelegateFlags;
	long long _transitionsCounter;
	BOOL _prefersStatusBarVisible;
	BOOL _prefersNavigationBarVisible;
	BOOL _prefersToolbarVisible;
	BOOL _prefersTabBarVisible;
	BOOL __hasViewAppeared;
	BOOL _enabled;
	id<PXBarAppearanceImplementationDelegate> __implementationDelegate;
	long long _barAppearancePreferredStatusBarStyle;
	UIColor* _navigationBarTintColor;
	PXBarAnimationOptions* __animationOptions;
	long long __preferredStatusBarUpdateAnimation;
	UIViewController* _viewController;
	id<PXBarAppearanceImplementationDelegate> _implementationDelegate;

}

@property (assign,setter=_setImplementationDelegate:,nonatomic,__weak) id<PXBarAppearanceImplementationDelegate> _implementationDelegate;              //@synthesize _implementationDelegate=__implementationDelegate - In the implementation block
@property (assign,setter=_setHasViewAppeared:,nonatomic) BOOL _hasViewAppeared;                                                                        //@synthesize _hasViewAppeared=__hasViewAppeared - In the implementation block
@property (setter=_setAnimationOptions:,nonatomic,copy) PXBarAnimationOptions * _animationOptions;                                                     //@synthesize _animationOptions=__animationOptions - In the implementation block
@property (assign,setter=_setPreferredStatusBarUpdateAnimation:,nonatomic) long long _preferredStatusBarUpdateAnimation;                               //@synthesize _preferredStatusBarUpdateAnimation=__preferredStatusBarUpdateAnimation - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * viewController;                                                                               //@synthesize viewController=_viewController - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                                                                            //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic,__weak) id<PXBarAppearanceImplementationDelegate> implementationDelegate;                                                  //@synthesize implementationDelegate=_implementationDelegate - In the implementation block
@property (nonatomic,readonly) BOOL prefersStatusBarVisible;                                                                                           //@synthesize prefersStatusBarVisible=_prefersStatusBarVisible - In the implementation block
@property (nonatomic,readonly) long long barAppearancePreferredStatusBarStyle;                                                                         //@synthesize barAppearancePreferredStatusBarStyle=_barAppearancePreferredStatusBarStyle - In the implementation block
@property (nonatomic,readonly) BOOL prefersNavigationBarVisible;                                                                                       //@synthesize prefersNavigationBarVisible=_prefersNavigationBarVisible - In the implementation block
@property (nonatomic,readonly) BOOL prefersToolbarVisible;                                                                                             //@synthesize prefersToolbarVisible=_prefersToolbarVisible - In the implementation block
@property (nonatomic,readonly) BOOL prefersTabBarVisible;                                                                                              //@synthesize prefersTabBarVisible=_prefersTabBarVisible - In the implementation block
@property (nonatomic,copy,readonly) UIColor * navigationBarTintColor;                                                                                  //@synthesize navigationBarTintColor=_navigationBarTintColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)defaultImplementationDelegate;
-(id)init;
-(BOOL)prefersNavigationBarVisible;
-(BOOL)prefersToolbarVisible;
-(BOOL)prefersTabBarVisible;
-(id)initWithViewController:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(long long)_preferredStatusBarUpdateAnimation;
-(PXBarAnimationOptions *)_animationOptions;
-(void)setNavigationBarTintColor:(UIColor *)arg1 ;
-(UIViewController *)viewController;
-(void)setPrefersStatusBarVisible:(BOOL)arg1 ;
-(void)setPrefersNavigationBarVisible:(BOOL)arg1 ;
-(void)setPrefersToolbarVisible:(BOOL)arg1 ;
-(void)setPrefersTabBarVisible:(BOOL)arg1 ;
-(void)performChangesWithAnimationOptions:(id)arg1 changes:(/*^block*/id)arg2 ;
-(void)_update;
-(id)mutableChangeObject;
-(BOOL)isEnabled;
-(void)performChanges:(/*^block*/id)arg1 ;
-(BOOL)_hasViewAppeared;
-(id<PXBarAppearanceImplementationDelegate>)_implementationDelegate;
-(BOOL)prefersStatusBarVisible;
-(long long)barAppearancePreferredStatusBarStyle;
-(void)setBarAppearancePreferredStatusBarStyle:(long long)arg1 ;
-(UIColor *)navigationBarTintColor;
-(void)viewControllerViewWillAppear:(BOOL)arg1 ;
-(void)viewControllerViewDidDisappear:(BOOL)arg1 ;
-(void)_updateImplementationDelegate;
-(long long)adjustedPreferredStatusBarStyle:(long long)arg1 ;
-(BOOL)adjustedPrefersStatusBarHidden:(BOOL)arg1 ;
-(long long)adjustedPreferredStatusBarUpdateAnimation:(long long)arg1 ;
-(void)_setImplementationDelegate:(id)arg1 ;
-(void)_updateOnViewWillAppear:(BOOL)arg1 ;
-(void)_updateWithAnimationOptions:(id)arg1 isStatusBarHidden:(BOOL)arg2 ;
-(void)_updateStatusBarStyleAndVisibilityWithAnimationOptions:(id)arg1 ;
-(void)_setNavigationBarVisible:(BOOL)arg1 withAnimationOptions:(id)arg2 ;
-(void)_setNavigationBarTintColor:(id)arg1 withAnimationOptions:(id)arg2 ;
-(void)_setToolbarVisible:(BOOL)arg1 withAnimationOptions:(id)arg2 ;
-(void)_performBarsTransition:(/*^block*/id)arg1 ;
-(void)_setTabBarVisible:(BOOL)arg1 withAnimationOptions:(id)arg2 ;
-(void)_setHasViewAppeared:(BOOL)arg1 ;
-(void)_setAnimationOptions:(id)arg1 ;
-(void)_setPreferredStatusBarUpdateAnimation:(long long)arg1 ;
-(id<PXBarAppearanceImplementationDelegate>)implementationDelegate;
-(void)setImplementationDelegate:(id<PXBarAppearanceImplementationDelegate>)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end


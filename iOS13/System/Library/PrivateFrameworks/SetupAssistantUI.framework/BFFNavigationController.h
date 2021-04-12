/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
*/

#import <Preferences/PSRootController.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class NSMutableArray, NSMutableDictionary, UIColor, NSString;

@interface BFFNavigationController : PSRootController <UINavigationControllerDelegate> {

	NSMutableArray* _observers;
	NSMutableDictionary* _appearanceHandlers;
	long long _pendingShowOperation;
	UIColor* _backgroundColor;
	BOOL _animating;
	BOOL _pushWithoutDeferringTransitionsWhileInBackground;
	BOOL _inBackground;

}

@property (getter=isAnimating,nonatomic,readonly) BOOL animating;                                //@synthesize animating=_animating - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor; 
@property (assign,nonatomic) BOOL pushWithoutDeferringTransitionsWhileInBackground;              //@synthesize pushWithoutDeferringTransitionsWhileInBackground=_pushWithoutDeferringTransitionsWhileInBackground - In the implementation block
@property (assign,getter=isInBackground,nonatomic) BOOL inBackground;                            //@synthesize inBackground=_inBackground - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)isAnimating;
-(long long)preferredStatusBarStyle;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)popToRootViewControllerAnimated:(BOOL)arg1 ;
-(id)popViewControllerAnimated:(BOOL)arg1 ;
-(void)setViewControllers:(id)arg1 animated:(BOOL)arg2 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(id)popToViewController:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)_canShowTextServices;
-(BOOL)isInBackground;
-(void)pushViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)pushWithoutDeferringTransitionsWhileInBackground;
-(void)removeDelegateObserver:(id)arg1 ;
-(void)addDelegateObserver:(id)arg1 ;
-(void)_reapObservers;
-(BOOL)_usesTransitionController;
-(void)popToViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setPushWithoutDeferringTransitionsWhileInBackground:(BOOL)arg1 ;
-(void)setInBackground:(BOOL)arg1 ;
@end


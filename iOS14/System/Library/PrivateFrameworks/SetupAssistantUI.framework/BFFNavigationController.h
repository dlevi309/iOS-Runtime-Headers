/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
*/

#import <SetupAssistantUI/SetupAssistantUI-Structs.h>
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
	BOOL _ignoreDismissals;
	CGSize _forcedPreferredContentSize;

}

@property (assign,nonatomic) BOOL ignoreDismissals;                                              //@synthesize ignoreDismissals=_ignoreDismissals - In the implementation block
@property (assign,nonatomic) CGSize forcedPreferredContentSize;                                  //@synthesize forcedPreferredContentSize=_forcedPreferredContentSize - In the implementation block
@property (getter=isAnimating,nonatomic,readonly) BOOL animating;                                //@synthesize animating=_animating - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor; 
@property (assign,nonatomic) BOOL pushWithoutDeferringTransitionsWhileInBackground;              //@synthesize pushWithoutDeferringTransitionsWhileInBackground=_pushWithoutDeferringTransitionsWhileInBackground - In the implementation block
@property (assign,getter=isInBackground,nonatomic) BOOL inBackground;                            //@synthesize inBackground=_inBackground - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)prefersStatusBarHidden;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(id)init;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)setInBackground:(BOOL)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(UIColor *)backgroundColor;
-(void)setDelegate:(id)arg1 ;
-(CGSize)preferredContentSize;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)popToViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(long long)preferredStatusBarStyle;
-(BOOL)isInBackground;
-(BOOL)_canShowTextServices;
-(void)setViewControllers:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)isAnimating;
-(id)popToRootViewControllerAnimated:(BOOL)arg1 ;
-(id)popViewControllerAnimated:(BOOL)arg1 ;
-(void)pushViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(CGSize)forcedPreferredContentSize;
-(BOOL)pushWithoutDeferringTransitionsWhileInBackground;
-(BOOL)ignoreDismissals;
-(void)removeDelegateObserver:(id)arg1 ;
-(void)addDelegateObserver:(id)arg1 ;
-(void)_reapObservers;
-(id)initIgnoringDismissals:(BOOL)arg1 ;
-(BOOL)_usesTransitionController;
-(void)popToViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setForcedPreferredContentSize:(CGSize)arg1 ;
-(void)setPushWithoutDeferringTransitionsWhileInBackground:(BOOL)arg1 ;
-(void)setIgnoreDismissals:(BOOL)arg1 ;
@end


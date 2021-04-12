/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <UIKitCore/UINavigationController.h>
#import <UIKit/UIViewControllerRestoration.h>
#import <UIKit/UINavigationBarDelegate.h>

@class NSMutableArray, NSString;

@interface GKNavigationController : UINavigationController <UIViewControllerRestoration, UINavigationBarDelegate> {

	NSMutableArray* _deferredTransitions;

}

@property (nonatomic,retain) NSMutableArray * deferredTransitions;              //@synthesize deferredTransitions=_deferredTransitions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldForwardViewWillTransitionToSize;
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
-(id)init;
-(unsigned long long)supportedInterfaceOrientations;
-(id)initWithRootViewController:(id)arg1 ;
-(void)setupGKNavigationController;
-(void)setDeferredTransitions:(NSMutableArray *)arg1 ;
-(BOOL)hasEmbeddedPopoverNavigationStack;
-(id)popEmbeddedPopoverViewControllers;
-(void)_gkRestorePopoverWithViewControllers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)targetViewControllerForAction:(SEL)arg1 ;
-(void)_performDeferredTransition;
-(NSMutableArray *)deferredTransitions;
-(void)_deferTransitionOfType:(int)arg1 withViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)_gkPushPresentedViewControllerForCompactSizeClass:(id)arg1 ;
-(id)_gkViewControllersForRestoringPopover;
-(BOOL)shouldAutorotate;
-(id)popToViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)willShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)popToRootViewControllerAnimated:(BOOL)arg1 ;
-(id)popViewControllerAnimated:(BOOL)arg1 ;
-(void)didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end


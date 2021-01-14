/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <UIKitCore/UINavigationController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class _SiriUINavigationControllerDelegateAdapter, NSString;

@interface SiriUINavigationController : UINavigationController <UIGestureRecognizerDelegate> {

	_SiriUINavigationControllerDelegateAdapter* _delegateAdapter;

}

@property (setter=_setDelegateAdapter:,getter=_delegateAdapter,nonatomic,retain) _SiriUINavigationControllerDelegateAdapter * delegateAdapter;              //@synthesize delegateAdapter=_delegateAdapter - In the implementation block
@property (nonatomic,retain) id<SiriUINavigationTransitioning> transitionController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2 ;
-(id)delegate;
-(void)setTransitionController:(id<SiriUINavigationTransitioning>)arg1 ;
-(id<SiriUINavigationTransitioning>)transitionController;
-(void)setDelegate:(id)arg1 ;
-(id)initWithRootViewController:(id)arg1 ;
-(void)_sharedInit;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)_delegateAdapter;
-(void)_handleGestureFromRecognizer:(id)arg1 ;
-(void)_setDelegateAdapter:(id)arg1 ;
@end


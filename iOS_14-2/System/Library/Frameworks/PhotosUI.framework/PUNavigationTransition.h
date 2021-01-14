/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUViewControllerTransition.h>

@class UINavigationController, UIViewController;

@interface PUNavigationTransition : PUViewControllerTransition {

	BOOL _wasStatusBarHiddenBeforeTransition;
	double _pushDuration;
	double _popDuration;
	UINavigationController* _navigationController;
	long long __operation;
	UIViewController* _expectedDestinationOnPop;

}

@property (assign,setter=_setOperation:,nonatomic) long long _operation;                        //@synthesize _operation=__operation - In the implementation block
@property (assign,nonatomic,__weak) UINavigationController * navigationController;              //@synthesize navigationController=_navigationController - In the implementation block
@property (assign,nonatomic) BOOL wasStatusBarHiddenBeforeTransition;                           //@synthesize wasStatusBarHiddenBeforeTransition=_wasStatusBarHiddenBeforeTransition - In the implementation block
@property (__weak) UIViewController * expectedDestinationOnPop;                                 //@synthesize expectedDestinationOnPop=_expectedDestinationOnPop - In the implementation block
@property (nonatomic,readonly) double pushDuration;                                             //@synthesize pushDuration=_pushDuration - In the implementation block
@property (nonatomic,readonly) double popDuration;                                              //@synthesize popDuration=_popDuration - In the implementation block
+(id)animationControllerForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 inNavigationController:(id)arg4 ;
+(BOOL)shouldCrossFadeBottomBarsForNavigationController:(id)arg1 ;
-(void)completeTransition:(BOOL)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(long long)_operation;
-(double)transitionDuration:(id)arg1 ;
-(id)initWithDuration:(double)arg1 ;
-(void)cancelInteractiveTransition;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(void)finishInteractiveTransition;
-(void)imageModulationIntensityDidChange;
-(void)_setOperation:(long long)arg1 ;
-(id)initWithPushDuration:(double)arg1 popDuration:(double)arg2 ;
-(void)didCompleteTransitionAnimation;
-(void)transitionWillStartOperation:(long long)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3 ;
-(void)transitionDidStartOperation:(long long)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3 ;
-(void)transitionWillAnimateOperation:(long long)arg1 interactive:(BOOL)arg2 ;
-(void)completeInteractiveOperation:(long long)arg1 finished:(BOOL)arg2 ;
-(double)popDuration;
-(BOOL)wasStatusBarHiddenBeforeTransition;
-(void)setWasStatusBarHiddenBeforeTransition:(BOOL)arg1 ;
-(UIViewController *)expectedDestinationOnPop;
-(void)setExpectedDestinationOnPop:(UIViewController *)arg1 ;
-(double)pushDuration;
-(UINavigationController *)navigationController;
@end


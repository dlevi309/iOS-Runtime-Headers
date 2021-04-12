/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SBNestingViewControllerDelegate.h>
#import <libobjc.A.dylib/SBViewControllerTransitionContextDelegate.h>

@protocol SBNestingViewControllerDelegate;
@class SBViewControllerTransitionContext, NSHashTable, NSArray, NSString;

@interface SBNestingViewController : UIViewController <SBNestingViewControllerDelegate, SBViewControllerTransitionContextDelegate> {

	id<SBNestingViewControllerDelegate> _delegate;
	SBNestingViewController* _parentNestingViewController;
	SBNestingViewController* _nestedViewController;
	long long _currentTransitionOperation;
	SBViewControllerTransitionContext* _currentTransition;
	/*^block*/id _clientOperationCompletion;
	NSHashTable* _transitionObservers;

}

@property (nonatomic,readonly) BOOL isTransitioning; 
@property (assign,nonatomic) long long currentTransitionOperation;                                              //@synthesize currentTransitionOperation=_currentTransitionOperation - In the implementation block
@property (nonatomic,retain) SBViewControllerTransitionContext * currentTransition;                             //@synthesize currentTransition=_currentTransition - In the implementation block
@property (nonatomic,copy) id clientOperationCompletion;                                                        //@synthesize clientOperationCompletion=_clientOperationCompletion - In the implementation block
@property (nonatomic,readonly) SBNestingViewController * viewControllerCurrentlyDrivingTransition; 
@property (nonatomic,retain) NSHashTable * transitionObservers;                                                 //@synthesize transitionObservers=_transitionObservers - In the implementation block
@property (nonatomic,retain) SBNestingViewController * nestedViewController;                                    //@synthesize nestedViewController=_nestedViewController - In the implementation block
@property (assign,nonatomic,__weak) SBNestingViewController * parentNestingViewController;                      //@synthesize parentNestingViewController=_parentNestingViewController - In the implementation block
@property (nonatomic,readonly) BOOL wantsModalPresentation; 
@property (assign,nonatomic,__weak) id<SBNestingViewControllerDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * nestedViewControllers; 
@property (nonatomic,readonly) SBNestingViewController * deepestNestedDescendantViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SBNestingViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SBNestingViewControllerDelegate>)arg1 ;
-(id)transitionCoordinator;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)transitionDidFinish:(id)arg1 ;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(void)transitionWillBegin:(id)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)isTransitioning;
-(SBViewControllerTransitionContext *)currentTransition;
-(void)setCurrentTransition:(SBViewControllerTransitionContext *)arg1 ;
-(void)transitionDidBegin:(id)arg1 ;
-(void)transitionWillReverse:(id)arg1 ;
-(void)transitionDidReverse:(id)arg1 ;
-(void)transitionWillFinish:(id)arg1 ;
-(id)nestingViewController:(id)arg1 animationControllerForOperation:(long long)arg2 onViewController:(id)arg3 animated:(BOOL)arg4 ;
-(void)nestingViewController:(id)arg1 willPerformOperation:(long long)arg2 onViewController:(id)arg3 withTransitionCoordinator:(id)arg4 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 forOperation:(long long)arg2 withTransitionCoordinator:(id)arg3 ;
-(SBNestingViewController *)nestedViewController;
-(SBNestingViewController *)parentNestingViewController;
-(void)pushNestedViewController:(id)arg1 animated:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)popNestedViewControllerAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setNestedViewControllers:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)nestingViewController:(id)arg1 sourceViewForPresentingViewController:(id)arg2 ;
-(void)addViewToHierarchyForNestedViewController:(id)arg1 ;
-(void)removeViewFromHierarchyForNestedViewController:(id)arg1 ;
-(SBNestingViewController *)deepestNestedDescendantViewController;
-(void)_performOperation:(long long)arg1 onViewController:(id)arg2 animated:(BOOL)arg3 withCompletion:(/*^block*/id)arg4 ;
-(NSArray *)nestedViewControllers;
-(void)traverseNestedViewControllersWithBlock:(/*^block*/id)arg1 ;
-(NSHashTable *)transitionObservers;
-(long long)currentTransitionOperation;
-(SBNestingViewController *)viewControllerCurrentlyDrivingTransition;
-(void)_handleWillAddChildViewController:(id)arg1 ;
-(void)setParentNestingViewController:(SBNestingViewController *)arg1 ;
-(void)_handleRemoveChildViewController:(id)arg1 ;
-(CGRect)frameForNestedViewController:(id)arg1 afterOperation:(long long)arg2 withParentContainerSize:(CGSize)arg3 ;
-(void)setNestedViewController:(SBNestingViewController *)arg1 ;
-(id)nestingViewController:(id)arg1 interactionControllerForAnimationController:(id)arg2 ;
-(void)_updateStateForTransitioningViewController:(id)arg1 ;
-(void)_setFinalStateForTransitioningViewController:(id)arg1 ;
-(void)setCurrentTransitionOperation:(long long)arg1 ;
-(id)clientOperationCompletion;
-(void)setClientOperationCompletion:(id)arg1 ;
-(BOOL)wantsModalPresentation;
-(void)nestingViewController:(id)arg1 willPresentViewController:(id)arg2 ;
-(id)_descriptionForOperation:(long long)arg1 ;
-(BOOL)_shouldAddTransitioningViewControllerAfterCurrentTransitionCompletes;
-(void)_handleWillRemoveChildViewController:(id)arg1 ;
-(void)_handleAddChildViewController:(id)arg1 ;
-(void)addTransitionObserver:(id)arg1 ;
-(void)removeTransitionObserver:(id)arg1 ;
-(void)addNestedViewController:(id)arg1 ;
-(void)removeNestedViewController:(id)arg1 ;
-(void)setTransitionObservers:(NSHashTable *)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBModalViewControllerStackDelegate;
@class UIViewController, NSMutableArray, _SBModalViewControllerStackTransition, NSArray;

@interface SBModalViewControllerStack : NSObject {

	id<SBModalViewControllerStackDelegate> _delegate;
	UIViewController* _presentingViewController;
	NSMutableArray* _viewControllerStack;
	_SBModalViewControllerStackTransition* _currentTransition;
	NSMutableArray* _pendingTransitions;

}

@property (assign,nonatomic,__weak) id<SBModalViewControllerStackDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * viewControllers; 
@property (nonatomic,readonly) UIViewController * topViewController; 
-(id<SBModalViewControllerStackDelegate>)delegate;
-(void)setDelegate:(id<SBModalViewControllerStackDelegate>)arg1 ;
-(UIViewController *)topViewController;
-(NSArray *)viewControllers;
-(id)initWithPresentingViewController:(id)arg1 ;
-(void)addViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_queuePendingTransition:(id)arg1 ;
-(void)_performPendingTransitionIfNecessary;
-(void)_removePendingTransition:(id)arg1 forSuccess:(BOOL)arg2 ;
-(void)_addPendingTransition:(id)arg1 ;
-(id)_popNextPendingTransition;
-(void)_setCurrentTransition:(id)arg1 ;
-(void)_addViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_removeViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_noteWillPresentViewController:(id)arg1 ;
-(void)_noteDidPresentViewController:(id)arg1 ;
-(void)_noteWillDismissViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_noteDidDismissViewController:(id)arg1 ;
-(void)removeViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
@end


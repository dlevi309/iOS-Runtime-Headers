/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProxCardKit.framework/ProxCardKit
*/

#import <ProxCardKit/ProxCardKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PRXPullDismissalProvider.h>
#import <libobjc.A.dylib/PRXCardContainerViewDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@protocol PRXFlowDelegate;
@class PRXPullDismissalInteractionDriver, PRXTransitioningController, PRXCardContainerView, UINavigationController, PRXFlowConfiguration, UIViewController, NSString;

@interface PRXCardContainerViewController : UIViewController <PRXPullDismissalProvider, PRXCardContainerViewDelegate, UINavigationControllerDelegate> {

	PRXTransitioningController* _transitionController;
	PRXCardContainerView* _container;
	UINavigationController* _mainNavigationController;
	NSDirectionalEdgeInsets _containerLayoutMargins;
	BOOL _legacyCard;
	PRXPullDismissalInteractionDriver* _pullDismissalInteractionDriver;
	PRXFlowConfiguration* _configuration;
	UIViewController* _contentViewController;
	id<PRXFlowDelegate> _flowDelegate;
	/*^block*/id _didShowViewController;

}

@property (nonatomic,copy) id didShowViewController;                                                            //@synthesize didShowViewController=_didShowViewController - In the implementation block
@property (nonatomic,readonly) PRXFlowConfiguration * configuration;                                            //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) UIViewController * contentViewController;                                        //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,readonly) UINavigationController * mainNavigationController;                               //@synthesize mainNavigationController=_mainNavigationController - In the implementation block
@property (assign,nonatomic,__weak) id<PRXFlowDelegate> flowDelegate;                                           //@synthesize flowDelegate=_flowDelegate - In the implementation block
@property (nonatomic,readonly) PRXPullDismissalInteractionDriver * pullDismissalInteractionDriver;              //@synthesize pullDismissalInteractionDriver=_pullDismissalInteractionDriver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(id)init;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(unsigned long long)supportedInterfaceOrientations;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(UIViewController *)contentViewController;
-(id)initWithConfiguration:(id)arg1 ;
-(PRXFlowConfiguration *)configuration;
-(void)backgroundTapped:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonInit;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)loadView;
-(id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(void)viewDidLayoutSubviews;
-(id<PRXFlowDelegate>)flowDelegate;
-(void)setFlowDelegate:(id<PRXFlowDelegate>)arg1 ;
-(void)_updateCardSizeClassForContainerSize:(CGSize)arg1 ;
-(void)_updatePreferredContentSizeForViewController:(id)arg1 containerSize:(CGSize)arg2 ;
-(void)_updateContainerPreferredContentSize;
-(CGSize)_maximumCardSizeForContainerSize:(CGSize)arg1 ;
-(long long)_cardStyleForContentContainer:(id)arg1 ;
-(id)didShowViewController;
-(PRXPullDismissalInteractionDriver *)pullDismissalInteractionDriver;
-(id)initAsSingleCardWithContentViewController:(id)arg1 containerLayoutMargins:(NSDirectionalEdgeInsets)arg2 configuration:(id)arg3 ;
-(BOOL)_shouldLayoutViewControllerBeforeCalculatingSize:(id)arg1 ;
-(UINavigationController *)mainNavigationController;
-(void)setDidShowViewController:(id)arg1 ;
@end


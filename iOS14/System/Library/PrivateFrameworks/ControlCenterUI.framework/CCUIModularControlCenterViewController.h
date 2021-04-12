/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CCUIModuleCollectionViewControllerDelegate.h>
#import <libobjc.A.dylib/CCUIContentModuleContextDelegate.h>
#import <libobjc.A.dylib/CCUIModuleInstanceManagerObserver.h>

@protocol CCUIModularControlCenterViewControllerDelegate;
@class CCUIModuleInstanceManager, CCUIStatusLabelViewController, CCUIModuleCollectionViewController, NSString;

@interface CCUIModularControlCenterViewController : UIViewController <CCUIModuleCollectionViewControllerDelegate, CCUIContentModuleContextDelegate, CCUIModuleInstanceManagerObserver> {

	CCUIModuleInstanceManager* _moduleManager;
	BOOL _active;
	BOOL _hostedInTestApp;
	id<CCUIModularControlCenterViewControllerDelegate> _delegate;
	CCUIModuleInstanceManager* _moduleInstanceManager;
	CCUIStatusLabelViewController* _statusLabelViewController;

}

@property (nonatomic,readonly) CCUIModuleInstanceManager * moduleInstanceManager;                                  //@synthesize moduleInstanceManager=_moduleInstanceManager - In the implementation block
@property (nonatomic,readonly) CCUIStatusLabelViewController * statusLabelViewController;                          //@synthesize statusLabelViewController=_statusLabelViewController - In the implementation block
@property (nonatomic,readonly) CCUIModuleCollectionViewController * moduleCollectionViewController; 
@property (assign,getter=isHostedInTestApp,nonatomic) BOOL hostedInTestApp;                                        //@synthesize hostedInTestApp=_hostedInTestApp - In the implementation block
@property (getter=isHomeGestureDismissalAllowed,nonatomic,readonly) BOOL homeGestureDismissalAllowed; 
@property (nonatomic,readonly) unsigned long long moduleRowCount; 
@property (assign,nonatomic,__weak) id<CCUIModularControlCenterViewControllerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_sharedCollectionViewController;
-(void)dismissControlCenterForContentModuleContext:(id)arg1 ;
-(BOOL)isHostedInTestApp;
-(void)displayWillTurnOff;
-(void)moduleCollectionViewController:(id)arg1 didOpenExpandedModule:(id)arg2 ;
-(void)dismissExpandedViewForContentModuleContext:(id)arg1 ;
-(void)moduleCollectionViewController:(id)arg1 didFinishInteractionWithModule:(id)arg2 ;
-(void)dismissPresentedContentAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismissPresentedContent;
-(BOOL)canDismissPresentedContent;
-(id)_safeStatusLabelViewContainerView;
-(long long)_interfaceOrientation;
-(void)requestExpandModuleForContentModuleContext:(id)arg1 ;
-(void)moduleCollectionViewController:(id)arg1 didBeginInteractionWithModule:(id)arg2 ;
-(void)moduleInstancesChangedForModuleInstanceManager:(id)arg1 ;
-(void)_reparent;
-(void)moduleCollectionViewControllerDidUpdateModules:(id)arg1 ;
-(void)moduleCollectionViewController:(id)arg1 willDismissViewController:(id)arg2 ;
-(void)closeCurrentModuleWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setHostedInTestApp:(BOOL)arg1 ;
-(id)initWithSystemAgent:(id)arg1 ;
-(long long)interfaceOrientationForModuleCollectionViewController:(id)arg1 ;
-(void)moduleInstancesLayoutChangedForModuleInstanceManager:(id)arg1 ;
-(void)moduleCollectionViewController:(id)arg1 willRemoveModuleContainerViewController:(id)arg2 ;
-(void)moduleCollectionViewController:(id)arg1 didCloseExpandedModule:(id)arg2 ;
-(void)requestModuleLayoutSizeUpdateForContentModuleContext:(id)arg1 ;
-(void)contentModuleContext:(id)arg1 didUpdateHomeGestureDismissalAllowed:(BOOL)arg2 ;
-(void)dismissPresentedContentWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)expandModuleWithIdentifier:(id)arg1 ;
-(id)_statusLabelViewContainerView;
-(void)_resignActive;
-(void)moduleCollectionViewController:(id)arg1 willPresentViewController:(id)arg2 ;
-(void)moduleCollectionViewController:(id)arg1 didUpdateHomeGestureDismissalAllowed:(BOOL)arg2 ;
-(void)_reparentCollectionViewController;
-(void)moduleCollectionViewController:(id)arg1 willCloseExpandedModule:(id)arg2 ;
-(void)dismissExpandedModuleAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)_moduleCollectionViewContainerView;
-(CCUIModuleInstanceManager *)moduleInstanceManager;
-(CCUIModuleCollectionViewController *)moduleCollectionViewController;
-(void)moduleCollectionViewController:(id)arg1 willOpenExpandedModule:(id)arg2 ;
-(void)contentModuleContext:(id)arg1 enqueueStatusUpdate:(id)arg2 ;
-(BOOL)isHomeGestureDismissalAllowed;
-(id)_safeModuleCollectionViewContainerView;
-(unsigned long long)moduleRowCount;
-(CCUIStatusLabelViewController *)statusLabelViewController;
-(void)_reparentAndBecomeActive;
-(void)moduleCollectionViewController:(id)arg1 didAddModuleContainerViewController:(id)arg2 ;
-(id<CCUIModularControlCenterViewControllerDelegate>)delegate;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)setDelegate:(id<CCUIModularControlCenterViewControllerDelegate>)arg1 ;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
@end


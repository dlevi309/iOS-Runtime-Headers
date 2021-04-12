/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
*/

#import <BannerKit/BannerKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/_UISceneSettingsDiffAction.h>
#import <libobjc.A.dylib/_UISceneBSActionHandler.h>

@protocol BSInvalidatable, BNPresentable, BNBannerClientContainerViewControllerDelegate;
@class NSMutableArray, UIScene, NSString;

@interface BNBannerClientContainerViewController : UIViewController <_UISceneSettingsDiffAction, _UISceneBSActionHandler> {

	id<BSInvalidatable> _deferringRule;
	NSMutableArray* _transitionContextStack;
	UIScene* _scene;
	id<BNPresentable> _presentable;
	id<BNBannerClientContainerViewControllerDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) UIScene * scene;                                                       //@synthesize scene=_scene - In the implementation block
@property (nonatomic,readonly) id<BNPresentable> presentable;                                                //@synthesize presentable=_presentable - In the implementation block
@property (assign,nonatomic,__weak) id<BNBannerClientContainerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isDeferringFocus,nonatomic,readonly) BOOL deferringFocus; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(UIScene *)scene;
-(void)viewWillLayoutSubviews;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(id<BNBannerClientContainerViewControllerDelegate>)delegate;
-(void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned)arg6 ;
-(id)_respondToActions:(id)arg1 forFBSScene:(id)arg2 inUIScene:(id)arg3 fromTransitionContext:(id)arg4 ;
-(void)bs_traitCollectionDidChange:(id)arg1 forManagedTraitEnvironment:(id)arg2 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)setDelegate:(id<BNBannerClientContainerViewControllerDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(id)keyWindowForScreen:(id)arg1 ;
-(void)dealloc;
-(BOOL)isDeferringFocus;
-(id)initWithScene:(id)arg1 presentable:(id)arg2 ;
-(id<BNPresentable>)presentable;
-(void)_setPreferredContentSize:(CGSize)arg1 shouldFence:(BOOL)arg2 ;
-(void)_setPresentableViewControllerAppearState:(int)arg1 ;
-(void)_setPresentableBannerAppearState:(int)arg1 reason:(id)arg2 ;
-(void)_setPresentableUserInteractionInProgress:(BOOL)arg1 ;
-(void)_handleViewWillTransitionToSizeAction:(id)arg1 shouldFence:(BOOL)arg2 ;
-(void)_handleSizeTransitionCompleteAction:(id)arg1 ;
-(void)_acquireDeferringRuleIfNecessary;
-(void)_invalidateDeferringRule;
@end


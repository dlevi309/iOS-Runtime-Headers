/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/_UIClickPresentationInteractionDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/CCUIContentModuleContainer.h>
#import <libobjc.A.dylib/CCUISafeAppearancePropagationProvider.h>
#import <libobjc.A.dylib/_UICursorInteractionDelegate.h>

@protocol CCUIContentModuleContentViewController, CCUIContentModuleContainerViewControllerDelegate, CCUIContentModule, CCUIContentModuleBackgroundViewController;
@class NSString, UIViewController, NSArray, CCUIContentModuleContainerPresentationController, UIView, CCUIContentModuleBackgroundView, CCUIContentModuleContentContainerView, UITapGestureRecognizer, _UIClickPresentationInteraction;

@interface CCUIContentModuleContainerViewController : UIViewController <_UIClickPresentationInteractionDelegate, UIGestureRecognizerDelegate, CCUIContentModuleContainer, CCUISafeAppearancePropagationProvider, _UICursorInteractionDelegate> {

	BOOL _expanded;
	BOOL _contentModuleProvidesOwnPlatter;
	BOOL _transitioning;
	NSString* _moduleIdentifier;
	UIViewController*<CCUIContentModuleContentViewController> _contentViewController;
	id<CCUIContentModuleContainerViewControllerDelegate> _delegate;
	NSString* _materialGroupName;
	NSArray* _topLevelBlockingGestureRecognizers;
	id<CCUIContentModule> _contentModule;
	UIViewController*<CCUIContentModuleBackgroundViewController> _backgroundViewController;
	CCUIContentModuleContainerPresentationController* _presentationController;
	UIView* _highlightWrapperView;
	CCUIContentModuleBackgroundView* _backgroundView;
	CCUIContentModuleContentContainerView* _contentContainerView;
	UIView* _contentView;
	UIView* _maskView;
	UITapGestureRecognizer* _tapRecognizer;
	_UIClickPresentationInteraction* _clickPresentationInteraction;
	UITapGestureRecognizer* _expandModuleOnTouchTapRecognizer;
	UIEdgeInsets _expandedContentEdgeInsets;

}

@property (nonatomic,copy) NSString * moduleIdentifier;                                                                          //@synthesize moduleIdentifier=_moduleIdentifier - In the implementation block
@property (nonatomic,retain) id<CCUIContentModule> contentModule;                                                                //@synthesize contentModule=_contentModule - In the implementation block
@property (nonatomic,retain) UIViewController*<CCUIContentModuleContentViewController> contentViewController;                    //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,retain) UIViewController*<CCUIContentModuleBackgroundViewController> backgroundViewController;              //@synthesize backgroundViewController=_backgroundViewController - In the implementation block
@property (nonatomic,retain) CCUIContentModuleContainerPresentationController * presentationController;                          //@synthesize presentationController=_presentationController - In the implementation block
@property (assign,nonatomic) BOOL contentModuleProvidesOwnPlatter;                                                               //@synthesize contentModuleProvidesOwnPlatter=_contentModuleProvidesOwnPlatter - In the implementation block
@property (nonatomic,retain) UIView * highlightWrapperView;                                                                      //@synthesize highlightWrapperView=_highlightWrapperView - In the implementation block
@property (nonatomic,retain) CCUIContentModuleBackgroundView * backgroundView;                                                   //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) CCUIContentModuleContentContainerView * contentContainerView;                                       //@synthesize contentContainerView=_contentContainerView - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                                                               //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * maskView;                                                                                  //@synthesize maskView=_maskView - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapRecognizer;                                                             //@synthesize tapRecognizer=_tapRecognizer - In the implementation block
@property (nonatomic,retain) _UIClickPresentationInteraction * clickPresentationInteraction;                                     //@synthesize clickPresentationInteraction=_clickPresentationInteraction - In the implementation block
@property (assign,getter=isTransitioning,nonatomic) BOOL transitioning;                                                          //@synthesize transitioning=_transitioning - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * expandModuleOnTouchTapRecognizer;                                          //@synthesize expandModuleOnTouchTapRecognizer=_expandModuleOnTouchTapRecognizer - In the implementation block
@property (assign,nonatomic) UIEdgeInsets expandedContentEdgeInsets;                                                             //@synthesize expandedContentEdgeInsets=_expandedContentEdgeInsets - In the implementation block
@property (nonatomic,readonly) CCUIContentModuleContentContainerView * moduleContentView; 
@property (assign,nonatomic,__weak) id<CCUIContentModuleContainerViewControllerDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * materialGroupName;                                                                         //@synthesize materialGroupName=_materialGroupName - In the implementation block
@property (assign,getter=isExpanded,nonatomic) BOOL expanded;                                                                    //@synthesize expanded=_expanded - In the implementation block
@property (nonatomic,readonly) NSArray * topLevelBlockingGestureRecognizers;                                                     //@synthesize topLevelBlockingGestureRecognizers=_topLevelBlockingGestureRecognizers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * childViewControllersForAppearancePropagation; 
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id<CCUIContentModuleContainerViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CCUIContentModuleContainerViewControllerDelegate>)arg1 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)loadView;
-(CCUIContentModuleBackgroundView *)backgroundView;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setContentViewController:(UIViewController*<CCUIContentModuleContentViewController>)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(BOOL)_canShowWhileLocked;
-(void)setMaskView:(UIView *)arg1 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(UIViewController*<CCUIContentModuleContentViewController>)contentViewController;
-(void)viewDidAppear:(BOOL)arg1 ;
-(CCUIContentModuleContainerPresentationController *)presentationController;
-(id)cursorInteraction:(id)arg1 regionForLocation:(CGPoint)arg2 defaultRegion:(id)arg3 ;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3 ;
-(void)setBackgroundView:(CCUIContentModuleBackgroundView *)arg1 ;
-(void)setTransitioning:(BOOL)arg1 ;
-(void)willBecomeActive;
-(void)willResignActive;
-(BOOL)isExpanded;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)dismissViewControllerWithTransition:(int)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isTransitioning;
-(UIView *)maskView;
-(void)setPresentationController:(CCUIContentModuleContainerPresentationController *)arg1 ;
-(void)setExpanded:(BOOL)arg1 ;
-(void)clickPresentationInteractionEnded:(id)arg1 wasCancelled:(BOOL)arg2 ;
-(id)clickPresentationInteraction:(id)arg1 presentationForPresentingViewController:(id)arg2 ;
-(BOOL)clickPresentationInteractionShouldBegin:(id)arg1 ;
-(unsigned long long)activationStyleForClickPresentationInteraction:(id)arg1 ;
-(BOOL)clickPresentationInteractionShouldPresent:(id)arg1 ;
-(id)clickPresentationInteraction:(id)arg1 previewForHighlightingAtLocation:(CGPoint)arg2 ;
-(UITapGestureRecognizer *)tapRecognizer;
-(void)setTapRecognizer:(UITapGestureRecognizer *)arg1 ;
-(_UIClickPresentationInteraction *)clickPresentationInteraction;
-(void)setClickPresentationInteraction:(_UIClickPresentationInteraction *)arg1 ;
-(void)expandModule;
-(void)dismissExpandedModuleAnimated:(BOOL)arg1 ;
-(void)_handleTapGestureRecognizer:(id)arg1 ;
-(CCUIContentModuleContentContainerView *)contentContainerView;
-(NSString *)moduleIdentifier;
-(NSArray *)topLevelBlockingGestureRecognizers;
-(void)displayWillTurnOff;
-(UIViewController*<CCUIContentModuleBackgroundViewController>)backgroundViewController;
-(void)willPresentViewController:(id)arg1 ;
-(void)willDismissViewController:(id)arg1 ;
-(BOOL)definesContentModuleContainer;
-(void)dismissPresentedContentAnimated:(BOOL)arg1 ;
-(id)initWithModuleIdentifier:(id)arg1 contentModule:(id)arg2 presentationContext:(id)arg3 ;
-(void)setMaterialGroupName:(NSString *)arg1 ;
-(void)setExpandedContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)transitionToExpandedMode:(BOOL)arg1 ;
-(void)_loadContentViewController:(id)arg1 ;
-(void)_loadBackgroundViewController:(id)arg1 ;
-(CGRect)_backgroundFrameForExpandedState;
-(CGRect)_presentationFrameForExpandedState;
-(CGRect)_contentFrameForExpandedState;
-(double)_continuousCornerRadiusForExpandedState;
-(double)_continuousCornerRadiusForCompactState;
-(void)_closeExpandedModule:(BOOL)arg1 ;
-(void)dismissModulePresentedContentAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_configureForContentModuleGroupRenderingIfNecessary;
-(void)_findTopLevelGestureRecognizersForView:(id)arg1 installOnView:(id)arg2 ;
-(void)_handleExpandModuleForTapGestureRecognizer:(id)arg1 ;
-(void)_addTopLevelGestureRecognizersFromViewAndSubviews:(id)arg1 toBlockingGestureRecognizers:(id)arg2 ;
-(CGRect)_contentFrameForRestState;
-(BOOL)_isForceTouchAvailable;
-(CGRect)_contentBoundsForExpandedState;
-(CGRect)_containerFrameForExpandedState;
-(void)_configureMaskViewIfNecessary;
-(CCUIContentModuleContentContainerView *)moduleContentView;
-(void)_setDidExpandModulePreference;
-(CGRect)_backgroundFrameForRestState;
-(CGRect)_contentBoundsForTransitionProgress:(double)arg1 ;
-(void)_didEndTransitionWithContentModuleContainerTransition:(id)arg1 completed:(BOOL)arg2 ;
-(void)setModuleIdentifier:(NSString *)arg1 ;
-(UIEdgeInsets)expandedContentEdgeInsets;
-(NSString *)materialGroupName;
-(id<CCUIContentModule>)contentModule;
-(void)setContentModule:(id<CCUIContentModule>)arg1 ;
-(void)setBackgroundViewController:(UIViewController*<CCUIContentModuleBackgroundViewController>)arg1 ;
-(BOOL)contentModuleProvidesOwnPlatter;
-(void)setContentModuleProvidesOwnPlatter:(BOOL)arg1 ;
-(UIView *)highlightWrapperView;
-(void)setHighlightWrapperView:(UIView *)arg1 ;
-(void)setContentContainerView:(CCUIContentModuleContentContainerView *)arg1 ;
-(UITapGestureRecognizer *)expandModuleOnTouchTapRecognizer;
-(void)setExpandModuleOnTouchTapRecognizer:(UITapGestureRecognizer *)arg1 ;
@end


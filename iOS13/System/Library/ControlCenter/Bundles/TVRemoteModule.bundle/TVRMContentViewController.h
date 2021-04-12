/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ControlCenter/Bundles/TVRemoteModule.bundle/TVRemoteModule
*/

#import <TVRemoteModule/TVRemoteModule-Structs.h>
#import <ControlCenterUIKit/CCUIButtonModuleViewController.h>
#import <libobjc.A.dylib/CCUIContentModuleContentViewController.h>

@class UIViewPropertyAnimator, CCUIContentModuleContext, TVRUIRemoteViewController, NSString, _TVRUICubicSpringAnimator;

@interface TVRMContentViewController : CCUIButtonModuleViewController <CCUIContentModuleContentViewController> {

	BOOL _showButtonGlyph;
	BOOL _systemInitiatedDismissal;
	CCUIContentModuleContext* _contentModuleContext;
	TVRUIRemoteViewController* _remoteControlViewController;
	NSString* _lastActiveEndpointIdentifier;
	_TVRUICubicSpringAnimator* _remoteShowAnimator;
	UIViewPropertyAnimator* _remoteDismissAnimator;
	CGSize _transitionSize;

}

@property (getter=isShowingButtonGlyph,nonatomic,readonly) BOOL showButtonGlyph;                   //@synthesize showButtonGlyph=_showButtonGlyph - In the implementation block
@property (nonatomic,retain) TVRUIRemoteViewController * remoteControlViewController;              //@synthesize remoteControlViewController=_remoteControlViewController - In the implementation block
@property (nonatomic,retain) NSString * lastActiveEndpointIdentifier;                              //@synthesize lastActiveEndpointIdentifier=_lastActiveEndpointIdentifier - In the implementation block
@property (assign,nonatomic) CGSize transitionSize;                                                //@synthesize transitionSize=_transitionSize - In the implementation block
@property (nonatomic,retain) _TVRUICubicSpringAnimator * remoteShowAnimator;                       //@synthesize remoteShowAnimator=_remoteShowAnimator - In the implementation block
@property (nonatomic,retain) UIViewPropertyAnimator * remoteDismissAnimator;                       //@synthesize remoteDismissAnimator=_remoteDismissAnimator - In the implementation block
@property (assign,nonatomic) BOOL systemInitiatedDismissal;                                        //@synthesize systemInitiatedDismissal=_systemInitiatedDismissal - In the implementation block
@property (nonatomic,retain) CCUIContentModuleContext * contentModuleContext;                      //@synthesize contentModuleContext=_contentModuleContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double preferredExpandedContentHeight; 
@property (nonatomic,readonly) double preferredExpandedContentWidth; 
@property (nonatomic,readonly) double preferredExpandedContinuousCornerRadius; 
@property (nonatomic,readonly) BOOL providesOwnPlatter; 
@property (nonatomic,readonly) UIViewPropertyAnimator * customAnimator; 
@property (nonatomic,readonly) BOOL shouldPerformHoverInteraction; 
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(BOOL)_canShowWhileLocked;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(UIViewPropertyAnimator *)customAnimator;
-(void)buttonTapped:(id)arg1 forEvent:(id)arg2 ;
-(double)preferredExpandedContentHeight;
-(BOOL)shouldFinishTransitionToExpandedContentModule;
-(void)willTransitionToExpandedContentMode:(BOOL)arg1 ;
-(BOOL)canDismissPresentedContent;
-(void)dismissPresentedContentAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)displayWillTurnOff;
-(double)preferredExpandedContentWidth;
-(double)preferredExpandedContinuousCornerRadius;
-(CCUIContentModuleContext *)contentModuleContext;
-(void)setContentModuleContext:(CCUIContentModuleContext *)arg1 ;
-(void)_prewarm;
-(NSString *)lastActiveEndpointIdentifier;
-(void)setLastActiveEndpointIdentifier:(NSString *)arg1 ;
-(TVRUIRemoteViewController *)remoteControlViewController;
-(void)setTransitionSize:(CGSize)arg1 ;
-(CGSize)transitionSize;
-(CGAffineTransform)_defaultScaledTransformForSize:(CGSize)arg1 ;
-(void)setSystemInitiatedDismissal:(BOOL)arg1 ;
-(BOOL)systemInitiatedDismissal;
-(BOOL)_shouldLaunchAsViewService;
-(void)_requestLaunchAsViewService;
-(void)_createRemoteControlViewControllerIfNeeded;
-(void)_startRemoteControlViewController;
-(void)_stopRemoteControlViewController;
-(void)_remoteLaunchedAsViewService:(id)arg1 ;
-(BOOL)isShowingButtonGlyph;
-(void)setRemoteControlViewController:(TVRUIRemoteViewController *)arg1 ;
-(_TVRUICubicSpringAnimator *)remoteShowAnimator;
-(void)setRemoteShowAnimator:(_TVRUICubicSpringAnimator *)arg1 ;
-(UIViewPropertyAnimator *)remoteDismissAnimator;
-(void)setRemoteDismissAnimator:(UIViewPropertyAnimator *)arg1 ;
@end


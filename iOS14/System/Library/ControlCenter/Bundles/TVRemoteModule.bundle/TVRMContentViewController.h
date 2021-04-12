/*
* Generated on Thursday, January 14, 2021 at 2:29:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) double preferredExpandedContentHeight; 
@property (nonatomic,readonly) double preferredExpandedContentWidth; 
@property (nonatomic,readonly) double preferredExpandedContinuousCornerRadius; 
@property (nonatomic,readonly) BOOL providesOwnPlatter; 
@property (nonatomic,readonly) UIViewPropertyAnimator * customAnimator; 
@property (nonatomic,readonly) BOOL shouldPerformHoverInteraction; 
@property (nonatomic,readonly) BOOL shouldPerformClickInteraction; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)displayWillTurnOff;
-(void)dismissPresentedContentAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewWillLayoutSubviews;
-(BOOL)canDismissPresentedContent;
-(void)buttonTapped:(id)arg1 forEvent:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UIViewPropertyAnimator *)customAnimator;
-(void)setContentModuleContext:(CCUIContentModuleContext *)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)willTransitionToExpandedContentMode:(BOOL)arg1 ;
-(CCUIContentModuleContext *)contentModuleContext;
-(double)preferredExpandedContentHeight;
-(double)preferredExpandedContinuousCornerRadius;
-(double)preferredExpandedContentWidth;
-(BOOL)_canShowWhileLocked;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)shouldFinishTransitionToExpandedContentModule;
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


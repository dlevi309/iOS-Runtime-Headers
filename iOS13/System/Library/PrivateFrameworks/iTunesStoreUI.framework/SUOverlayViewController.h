/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUViewController.h>

@class NSMutableArray, UIViewController, SUOverlayTransition, SUScriptWindowContext, SUScriptFunction, SUMaskedView, SUTouchCaptureView, SUMaskProvider;

@interface SUOverlayViewController : SUViewController {

	NSMutableArray* _actionQueue;
	UIViewController* _activeViewController;
	UIViewController* _backViewController;
	BOOL _canSwipeToDismiss;
	UIViewController* _frontViewController;
	SUOverlayTransition* _lastFlipTransition;
	CGSize _overlaySize;
	SUOverlayTransition* _presentationTransition;
	SUScriptWindowContext* _scriptWindowContext;
	double _shadowOpacity;
	double _shadowRadius;
	SUScriptFunction* _shouldDismissFunction;
	long long _state;
	SUMaskedView* _subviewContainerView;
	SUTouchCaptureView* _touchCaptureView;

}

@property (nonatomic,readonly) UIViewController * activeViewController; 
@property (nonatomic,retain) UIViewController * backViewController;                     //@synthesize backViewController=_backViewController - In the implementation block
@property (nonatomic,retain) UIViewController * frontViewController;                    //@synthesize frontViewController=_frontViewController - In the implementation block
@property (assign,nonatomic) CGSize overlaySize;                                        //@synthesize overlaySize=_overlaySize - In the implementation block
@property (nonatomic,retain) SUMaskProvider * maskProvider; 
@property (assign,nonatomic) double shadowOpacity;                                      //@synthesize shadowOpacity=_shadowOpacity - In the implementation block
@property (assign,nonatomic) double shadowRadius;                                       //@synthesize shadowRadius=_shadowRadius - In the implementation block
@property (assign,nonatomic) BOOL canSwipeToDismiss;                                    //@synthesize canSwipeToDismiss=_canSwipeToDismiss - In the implementation block
@property (nonatomic,retain) SUScriptFunction * shouldDismissFunction;                  //@synthesize shouldDismissFunction=_shouldDismissFunction - In the implementation block
@property (getter=isActiveOverlay,nonatomic,readonly) BOOL activeOverlay; 
@property (getter=isOnFront,nonatomic,readonly) BOOL onFront; 
@property (nonatomic,retain) SUOverlayTransition * presentationTransition;              //@synthesize presentationTransition=_presentationTransition - In the implementation block
+(CGSize)defaultOverlaySize;
-(id)init;
-(void)dealloc;
-(double)shadowRadius;
-(void)setShadowRadius:(double)arg1 ;
-(void)loadView;
-(void)setShadowOpacity:(double)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(double)shadowOpacity;
-(void)_performNextAction;
-(void)storePage:(id)arg1 finishedWithSuccess:(BOOL)arg2 ;
-(id)copyArchivableContext;
-(void)restoreArchivableContext:(id)arg1 ;
-(id)scriptWindowContext;
-(void)setScriptWindowContext:(id)arg1 ;
-(BOOL)isActiveOverlay;
-(BOOL)shouldExcludeFromNavigationHistory;
-(void)invalidateForMemoryPurge;
-(void)setBackViewController:(UIViewController *)arg1 ;
-(UIViewController *)activeViewController;
-(void)flipWithTransition:(id)arg1 ;
-(void)setCanSwipeToDismiss:(BOOL)arg1 ;
-(void)setFrontViewController:(UIViewController *)arg1 ;
-(void)setShouldDismissFunction:(SUScriptFunction *)arg1 ;
-(void)setMaskProvider:(SUMaskProvider *)arg1 ;
-(void)setOverlaySize:(CGSize)arg1 ;
-(UIViewController *)backViewController;
-(BOOL)canSwipeToDismiss;
-(UIViewController *)frontViewController;
-(CGSize)overlaySize;
-(SUScriptFunction *)shouldDismissFunction;
-(void)imagePageViewTapped:(id)arg1 ;
-(SUOverlayTransition *)presentationTransition;
-(void)_enqueueAction:(id)arg1 ;
-(void)setPresentationTransition:(SUOverlayTransition *)arg1 ;
-(void)_overlayAnimationDidFinish;
-(BOOL)isOnFront;
-(void)_overlayActionDidFinish;
-(void)viewWillDismissWithTransition:(id)arg1 ;
-(id)initWithOverlayConfiguration:(id)arg1 ;
-(void)_applyOverlayConfiguration:(id)arg1 ;
-(void)_setActiveViewController:(id)arg1 updateInterface:(BOOL)arg2 ;
-(void)_tearDownTouchCaptureView;
-(id)_activeViewController;
-(SUMaskProvider *)maskProvider;
-(id)_subviewContainerView;
-(void)_applyDisplayProperties;
-(void)_setShadowVisible:(BOOL)arg1 ;
-(void)_touchCaptureAction:(id)arg1 ;
-(id)_flipTransition;
-(void)_finishFlipAction:(id)arg1 ;
-(void)_performFlipTransitionAction:(id)arg1 ;
-(BOOL)_isControllerLoaded:(id)arg1 ;
-(void)_performFlipAction:(id)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UISpringLoadedInteractionBehaviorDelegate.h>
#import <UIKit/UIInteraction_Internal.h>
#import <UIKit/UIDragGestureRecognizerDelegate.h>
#import <UIKit/UIInteraction.h>

@protocol UISpringLoadedInteractionBehavior, UISpringLoadedInteractionEffect;
@class UIView, UISpringLoadedInteractionContextImpl, UIDelayedAction, NSString;

@interface UISpringLoadedInteraction : NSObject <UISpringLoadedInteractionBehaviorDelegate, UIInteraction_Internal, UIDragGestureRecognizerDelegate, UIInteraction> {

	UIView* _view;
	double _possibleStateDuration;
	id<UISpringLoadedInteractionBehavior> _interactionBehavior;
	id<UISpringLoadedInteractionEffect> _interactionEffect;
	UISpringLoadedInteractionContextImpl* _context;
	/*^block*/id _handler;
	UIDelayedAction* _emphasizeAction;
	UIDelayedAction* _activateAction;

}

@property (assign,nonatomic,__weak) UIView * view;                                                         //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) UISpringLoadedInteractionContextImpl * context;                               //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) id handler;                                                                     //@synthesize handler=_handler - In the implementation block
@property (nonatomic,retain) UIDelayedAction * emphasizeAction;                                            //@synthesize emphasizeAction=_emphasizeAction - In the implementation block
@property (nonatomic,retain) UIDelayedAction * activateAction;                                             //@synthesize activateAction=_activateAction - In the implementation block
@property (assign,setter=_setPossibleStateDuration:,nonatomic) double _possibleStateDuration;              //@synthesize possibleStateDuration=_possibleStateDuration - In the implementation block
@property (nonatomic,readonly) id<UISpringLoadedInteractionBehavior> interactionBehavior;                  //@synthesize interactionBehavior=_interactionBehavior - In the implementation block
@property (nonatomic,readonly) id<UISpringLoadedInteractionEffect> interactionEffect;                      //@synthesize interactionEffect=_interactionEffect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_blinkEffect;
+(id)_defaultInteractionBehavior;
+(id)springLoadedInteractionWithHandler:(/*^block*/id)arg1 ;
+(id)hysteresisBehaviorWithBeginningVelocity:(double)arg1 cancelingVelocity:(double)arg2 ;
-(void)setEmphasizeAction:(UIDelayedAction *)arg1 ;
-(void)_resetBehavior;
-(void)setHandler:(id)arg1 ;
-(UIDelayedAction *)emphasizeAction;
-(void)_activateSpringLoading:(id)arg1 ;
-(void)didMoveToView:(id)arg1 ;
-(UISpringLoadedInteractionContextImpl *)context;
-(id<UISpringLoadedInteractionBehavior>)interactionBehavior;
-(void)willMoveToView:(id)arg1 ;
-(void)setView:(UIView *)arg1 ;
-(void)_startEmphasizeAction;
-(UIView *)view;
-(void)_springloadedStateChanged:(id)arg1 ;
-(BOOL)_shouldAllowInteractionWithContext:(id)arg1 ;
-(id<UISpringLoadedInteractionEffect>)interactionEffect;
-(void)_cancelActions;
-(void)setState:(long long)arg1 ;
-(id)initWithInteractionBehavior:(id)arg1 interactionEffect:(id)arg2 activationHandler:(/*^block*/id)arg3 ;
-(void)_setPossibleStateDuration:(double)arg1 ;
-(void)_startActivateAction;
-(void)_reloadSpringLoadedInteractionBehavior;
-(id)_dynamicGestureRecognizersForEvent:(id)arg1 ;
-(UIDelayedAction *)activateAction;
-(void)_emphasizeSpringLoading:(id)arg1 ;
-(id)handler;
-(double)_possibleStateDuration;
-(void)setActivateAction:(UIDelayedAction *)arg1 ;
-(id)initWithActivationHandler:(/*^block*/id)arg1 ;
-(void)setContext:(UISpringLoadedInteractionContextImpl *)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIDragInteractionDriving.h>

@protocol _UIDragInteractionDriverDelegate;
@class UIView, NSArray, NSString;

@interface _UIDragInteractionDriver : NSObject <_UIDragInteractionDriving> {

	UIDragInteractionDriverStateMachine* _stateMachine;
	BOOL _enabled;
	BOOL _additionalTouchesCancelLift;
	BOOL _allowsSimultaneousRecognitionDuringLift;
	BOOL _shouldAnimateLift;
	BOOL _cancellationTimerEnabled;
	BOOL _competingLongPressOnLift;
	BOOL _automaticallyAddsFailureRelationships;
	id<_UIDragInteractionDriverDelegate> _delegate;
	UIView* _view;
	double _liftDelay;
	double _cancellationDelay;
	double _competingLongPressDelay;
	double _liftMoveHysteresis;
	NSArray* _allowedTouchTypes;
	CGPoint _initialLocationInWindow;

}

@property (assign,nonatomic) BOOL shouldAnimateLift;                                            //@synthesize shouldAnimateLift=_shouldAnimateLift - In the implementation block
@property (assign,nonatomic) CGPoint initialLocationInWindow;                                   //@synthesize initialLocationInWindow=_initialLocationInWindow - In the implementation block
@property (assign,nonatomic,__weak) id<_UIDragInteractionDriverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIView * view;                                              //@synthesize view=_view - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                     //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) double liftDelay;                                                  //@synthesize liftDelay=_liftDelay - In the implementation block
@property (assign,nonatomic) double liftMoveHysteresis;                                         //@synthesize liftMoveHysteresis=_liftMoveHysteresis - In the implementation block
@property (assign,nonatomic) BOOL additionalTouchesCancelLift;                                  //@synthesize additionalTouchesCancelLift=_additionalTouchesCancelLift - In the implementation block
@property (assign,nonatomic) BOOL competingLongPressOnLift;                                     //@synthesize competingLongPressOnLift=_competingLongPressOnLift - In the implementation block
@property (assign,nonatomic) BOOL allowsSimultaneousRecognitionDuringLift;                      //@synthesize allowsSimultaneousRecognitionDuringLift=_allowsSimultaneousRecognitionDuringLift - In the implementation block
@property (assign,nonatomic) double cancellationDelay;                                          //@synthesize cancellationDelay=_cancellationDelay - In the implementation block
@property (assign,nonatomic) double competingLongPressDelay;                                    //@synthesize competingLongPressDelay=_competingLongPressDelay - In the implementation block
@property (assign,nonatomic) BOOL cancellationTimerEnabled;                                     //@synthesize cancellationTimerEnabled=_cancellationTimerEnabled - In the implementation block
@property (assign,nonatomic) BOOL automaticallyAddsFailureRelationships;                        //@synthesize automaticallyAddsFailureRelationships=_automaticallyAddsFailureRelationships - In the implementation block
@property (nonatomic,copy) NSArray * allowedTouchTypes;                                         //@synthesize allowedTouchTypes=_allowedTouchTypes - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didTransitionToBeginState;
-(void)attachToView:(id)arg1 ;
-(void)setAutomaticallyAddsFailureRelationships:(BOOL)arg1 ;
-(void)didTransitionToDeferred;
-(void)didTransitionToPreparing;
-(void)setShouldAnimateLift:(BOOL)arg1 ;
-(void)setInitialLocationInWindow:(CGPoint)arg1 ;
-(double)competingLongPressDelay;
-(CGPoint)initialLocationInWindow;
-(double)liftDelay;
-(void)setAdditionalTouchesCancelLift:(BOOL)arg1 ;
-(void)didTransitionToInactiveState;
-(void)setCompetingLongPressDelay:(double)arg1 ;
-(void)setLiftMoveHysteresis:(double)arg1 ;
-(BOOL)additionalTouchesCancelLift;
-(void)setCancellationTimerEnabled:(BOOL)arg1 ;
-(void)setAllowedTouchTypes:(NSArray *)arg1 ;
-(NSArray *)allowedTouchTypes;
-(void)setCancellationDelay:(double)arg1 ;
-(BOOL)isGestureRecognizerForDragInitiation:(id)arg1 ;
-(BOOL)competingLongPressOnLift;
-(BOOL)shouldAnimateLift;
-(BOOL)automaticallyAddsFailureRelationships;
-(double)liftMoveHysteresis;
-(void)didTransitionToCancelState;
-(void)setLiftDelay:(double)arg1 ;
-(unsigned long long)_state;
-(void)setAllowsSimultaneousRecognitionDuringLift:(BOOL)arg1 ;
-(BOOL)allowsSimultaneousRecognitionDuringLift;
-(id)init;
-(id<_UIDragInteractionDriverDelegate>)delegate;
-(void)detachFromView:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isActive;
-(void)setView:(UIView *)arg1 ;
-(void)setDelegate:(id<_UIDragInteractionDriverDelegate>)arg1 ;
-(UIView *)view;
-(void)_handleEvent:(unsigned long long)arg1 ;
-(BOOL)isEnabled;
-(void)setCompetingLongPressOnLift:(BOOL)arg1 ;
-(void)cancel;
-(void)didTransitionToInflightState;
-(double)cancellationDelay;
-(BOOL)cancellationTimerEnabled;
@end


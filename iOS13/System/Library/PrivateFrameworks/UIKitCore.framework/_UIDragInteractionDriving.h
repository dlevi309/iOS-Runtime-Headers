/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class UIView, NSArray;


@protocol _UIDragInteractionDriving <NSObject>
@property (assign,nonatomic,__weak) id<_UIDragInteractionDriverDelegate> delegate; 
@property (assign,nonatomic,__weak) UIView * view; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,nonatomic) double liftDelay; 
@property (assign,nonatomic) double liftMoveHysteresis; 
@property (assign,nonatomic) BOOL additionalTouchesCancelLift; 
@property (assign,nonatomic) BOOL competingLongPressOnLift; 
@property (assign,nonatomic) BOOL allowsSimultaneousRecognitionDuringLift; 
@property (assign,nonatomic) double cancellationDelay; 
@property (assign,nonatomic) double competingLongPressDelay; 
@property (assign,nonatomic) BOOL cancellationTimerEnabled; 
@property (assign,nonatomic) BOOL automaticallyAddsFailureRelationships; 
@property (nonatomic,copy) NSArray * allowedTouchTypes; 
@property (nonatomic,readonly) CGPoint initialLocationInWindow; 
@property (nonatomic,readonly) BOOL shouldAnimateLift; 
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@required
-(void)setEnabled:(BOOL)arg1;
-(id<_UIDragInteractionDriverDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(BOOL)isActive;
-(void)cancel;
-(BOOL)isEnabled;
-(UIView *)view;
-(void)setView:(id)arg1;
-(void)setAllowedTouchTypes:(id)arg1;
-(NSArray *)allowedTouchTypes;
-(BOOL)shouldAnimateLift;
-(void)setAutomaticallyAddsFailureRelationships:(BOOL)arg1;
-(BOOL)allowsSimultaneousRecognitionDuringLift;
-(void)setAllowsSimultaneousRecognitionDuringLift:(BOOL)arg1;
-(void)setAdditionalTouchesCancelLift:(BOOL)arg1;
-(void)setLiftDelay:(double)arg1;
-(void)setCompetingLongPressDelay:(double)arg1;
-(void)setCancellationTimerEnabled:(BOOL)arg1;
-(void)setCancellationDelay:(double)arg1;
-(void)setLiftMoveHysteresis:(double)arg1;
-(BOOL)isGestureRecognizerForDragInitiation:(id)arg1;
-(CGPoint)initialLocationInWindow;
-(double)liftDelay;
-(double)liftMoveHysteresis;
-(BOOL)additionalTouchesCancelLift;
-(BOOL)competingLongPressOnLift;
-(void)setCompetingLongPressOnLift:(BOOL)arg1;
-(double)cancellationDelay;
-(double)competingLongPressDelay;
-(BOOL)cancellationTimerEnabled;
-(BOOL)automaticallyAddsFailureRelationships;

@end


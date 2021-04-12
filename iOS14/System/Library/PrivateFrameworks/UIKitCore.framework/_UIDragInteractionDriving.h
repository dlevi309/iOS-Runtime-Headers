/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setAutomaticallyAddsFailureRelationships:(BOOL)arg1;
-(double)competingLongPressDelay;
-(CGPoint)initialLocationInWindow;
-(double)liftDelay;
-(void)setAdditionalTouchesCancelLift:(BOOL)arg1;
-(void)setCompetingLongPressDelay:(double)arg1;
-(void)setLiftMoveHysteresis:(double)arg1;
-(BOOL)additionalTouchesCancelLift;
-(void)setCancellationTimerEnabled:(BOOL)arg1;
-(void)setAllowedTouchTypes:(id)arg1;
-(NSArray *)allowedTouchTypes;
-(void)setCancellationDelay:(double)arg1;
-(BOOL)isGestureRecognizerForDragInitiation:(id)arg1;
-(BOOL)competingLongPressOnLift;
-(BOOL)shouldAnimateLift;
-(BOOL)automaticallyAddsFailureRelationships;
-(double)liftMoveHysteresis;
-(void)setLiftDelay:(double)arg1;
-(void)setAllowsSimultaneousRecognitionDuringLift:(BOOL)arg1;
-(BOOL)allowsSimultaneousRecognitionDuringLift;
-(id<_UIDragInteractionDriverDelegate>)delegate;
-(void)setEnabled:(BOOL)arg1;
-(BOOL)isActive;
-(void)setView:(id)arg1;
-(void)setDelegate:(id)arg1;
-(UIView *)view;
-(BOOL)isEnabled;
-(void)setCompetingLongPressOnLift:(BOOL)arg1;
-(void)cancel;
-(double)cancellationDelay;
-(BOOL)cancellationTimerEnabled;

@end


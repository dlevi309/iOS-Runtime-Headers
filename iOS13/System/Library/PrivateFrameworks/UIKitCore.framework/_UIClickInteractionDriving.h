/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class UIView, UIGestureRecognizer;


@protocol _UIClickInteractionDriving <NSObject>
@property (assign,nonatomic,__weak) id<_UIClickInteractionDriverDelegate> delegate; 
@property (assign,nonatomic,__weak) UIView * view; 
@property (assign,nonatomic) double allowableMovement; 
@property (assign,nonatomic) BOOL cancelsTouchesInView; 
@property (nonatomic,readonly) UIGestureRecognizer * primaryGestureRecognizer; 
@property (nonatomic,readonly) double touchDuration; 
@property (nonatomic,readonly) BOOL hasExceededAllowableMovement; 
@property (nonatomic,readonly) BOOL isCurrentlyAcceleratedByForce; 
@property (nonatomic,readonly) BOOL clicksUpAutomaticallyAfterTimeout; 
@property (nonatomic,readonly) double maximumEffectProgress; 
@property (nonatomic,readonly) unsigned long long inputPrecision; 
@property (assign,nonatomic) unsigned long long behavior; 
@optional
-(unsigned long long)behavior;
-(void)setBehavior:(unsigned long long)arg1;

@required
+(BOOL)requiresForceCapability;
+(BOOL)prefersCancelsTouchesInView;
-(id<_UIClickInteractionDriverDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(UIView *)view;
-(void)setView:(id)arg1;
-(void)setCancelsTouchesInView:(BOOL)arg1;
-(void)setAllowableMovement:(double)arg1;
-(UIGestureRecognizer *)primaryGestureRecognizer;
-(double)allowableMovement;
-(BOOL)cancelsTouchesInView;
-(double)touchDuration;
-(BOOL)hasExceededAllowableMovement;
-(void)cancelInteraction;
-(BOOL)clicksUpAutomaticallyAfterTimeout;
-(CGPoint*)locationInCoordinateSpace:(id)arg1;
-(BOOL)isCurrentlyAcceleratedByForce;
-(double)maximumEffectProgress;
-(unsigned long long)inputPrecision;

@end


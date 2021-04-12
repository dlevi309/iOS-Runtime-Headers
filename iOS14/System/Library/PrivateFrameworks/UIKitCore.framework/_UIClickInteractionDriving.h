/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setBehavior:(unsigned long long)arg1;
-(unsigned long long)behavior;

@required
+(BOOL)requiresForceCapability;
+(BOOL)prefersCancelsTouchesInView;
-(BOOL)cancelsTouchesInView;
-(BOOL)isCurrentlyAcceleratedByForce;
-(void)setCancelsTouchesInView:(BOOL)arg1;
-(UIGestureRecognizer *)primaryGestureRecognizer;
-(BOOL)clicksUpAutomaticallyAfterTimeout;
-(void)setAllowableMovement:(double)arg1;
-(id<_UIClickInteractionDriverDelegate>)delegate;
-(double)touchDuration;
-(CGPoint*)locationInCoordinateSpace:(id)arg1;
-(double)allowableMovement;
-(unsigned long long)inputPrecision;
-(void)setView:(id)arg1;
-(void)setDelegate:(id)arg1;
-(UIView *)view;
-(void)cancelInteraction;
-(double)maximumEffectProgress;
-(BOOL)hasExceededAllowableMovement;

@end


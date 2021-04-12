/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/


@protocol QLDismissGestureTracking <NSObject>
@property (nonatomic,readonly) CGPoint anchorPoint; 
@property (nonatomic,readonly) CGPoint trackedCenter; 
@property (nonatomic,readonly) CGRect trackedBounds; 
@property (nonatomic,readonly) CGAffineTransform trackedTransform; 
@property (nonatomic,readonly) QLDismissGestureTrackingVelocity trackedVelocity; 
@property (nonatomic,readonly) double finalAnimationDuration; 
@property (nonatomic,readonly) double finalAnimationSpringDamping; 
@property (nonatomic,readonly) double dismissalProgress; 
@property (nonatomic,readonly) BOOL shouldFinishDismissal; 
@required
-(CGPoint)anchorPoint;
-(CGPoint)trackedCenter;
-(CGAffineTransform)trackedTransform;
-(QLDismissGestureTrackingVelocity)trackedVelocity;
-(double)finalAnimationSpringDamping;
-(double)dismissalProgress;
-(BOOL)shouldFinishDismissal;
-(CGRect)trackedBounds;
-(double)finalAnimationDuration;

@end


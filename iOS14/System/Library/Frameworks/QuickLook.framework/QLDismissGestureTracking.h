/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)dismissalProgress;
-(BOOL)shouldFinishDismissal;
-(CGPoint)trackedCenter;
-(CGRect)trackedBounds;
-(CGAffineTransform)trackedTransform;
-(QLDismissGestureTrackingVelocity)trackedVelocity;
-(double)finalAnimationDuration;
-(double)finalAnimationSpringDamping;

@end


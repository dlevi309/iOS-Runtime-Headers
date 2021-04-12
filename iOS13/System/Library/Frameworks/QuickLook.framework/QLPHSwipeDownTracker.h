/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/


#import <QuickLook/QuickLook-Structs.h>
@class QLPXSwipeDownTracker;

@interface QLPHSwipeDownTracker : NSObject {

	QLPXSwipeDownTracker* _impl;

}

@property (nonatomic,readonly) QLPXSwipeDownTracker * impl;                      //@synthesize impl=_impl - In the implementation block
@property (nonatomic,readonly) double dismissalProgress; 
@property (nonatomic,readonly) BOOL shouldFinishDismissal; 
@property (nonatomic,readonly) CGPoint trackedCenter; 
@property (nonatomic,readonly) CGRect trackedBounds; 
@property (nonatomic,readonly) CGAffineTransform trackedTransform; 
@property (nonatomic,readonly) QLPHDisplayVelocity trackedVelocity; 
@property (nonatomic,readonly) double finalAnimationDuration; 
@property (nonatomic,readonly) double finalAnimationSpringDamping; 
-(id)init;
-(QLPXSwipeDownTracker *)impl;
-(CGPoint)trackedCenter;
-(CGAffineTransform)trackedTransform;
-(QLPHDisplayVelocity)trackedVelocity;
-(double)finalAnimationSpringDamping;
-(void)startTrackingCenter:(CGPoint)arg1 bounds:(CGRect)arg2 transform:(CGAffineTransform)arg3 withInitialGestureLocation:(CGPoint)arg4 ;
-(double)dismissalProgress;
-(void)trackGestureTranslation:(CGPoint)arg1 velocity:(CGPoint)arg2 ;
-(BOOL)shouldFinishDismissal;
-(CGRect)trackedBounds;
-(double)finalAnimationDuration;
@end


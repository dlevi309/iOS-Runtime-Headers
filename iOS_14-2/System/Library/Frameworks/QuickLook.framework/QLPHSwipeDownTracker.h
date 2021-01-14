/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)trackGestureTranslation:(CGPoint)arg1 velocity:(CGPoint)arg2 ;
-(double)dismissalProgress;
-(void)startTrackingCenter:(CGPoint)arg1 bounds:(CGRect)arg2 transform:(CGAffineTransform)arg3 withInitialGestureLocation:(CGPoint)arg4 ;
-(BOOL)shouldFinishDismissal;
-(CGPoint)trackedCenter;
-(CGRect)trackedBounds;
-(CGAffineTransform)trackedTransform;
-(QLPHDisplayVelocity)trackedVelocity;
-(double)finalAnimationDuration;
-(double)finalAnimationSpringDamping;
-(QLPXSwipeDownTracker *)impl;
@end


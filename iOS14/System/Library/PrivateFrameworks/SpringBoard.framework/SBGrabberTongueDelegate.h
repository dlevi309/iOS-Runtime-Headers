/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBGrabberTongueDelegate <NSObject>
@optional
-(void)grabberTongueEndedPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3 andGesture:(id)arg4;
-(void)grabberTongueWillPresent:(id)arg1;
-(BOOL)grabberTongue:(id)arg1 shouldAllowSecondSwipeWithEdgeLocation:(double)arg2;
-(void)grabberTongueDidDismiss:(id)arg1;
-(void)grabberTongueUpdatedPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3 andGesture:(id)arg4;
-(void)grabberTongueBeganPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3 andGesture:(id)arg4;
-(BOOL)grabberTongue:(id)arg1 shouldReceiveTouch:(id)arg2;
-(id)customGestureRecognizerForGrabberTongue:(id)arg1;
-(void)grabberTongueCanceledPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3 andGesture:(id)arg4;
-(void)grabberTongueWillPresentInteractively:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
-(BOOL)shouldSuppressTongueViewForGrabberTongue:(id)arg1;
-(unsigned long long)indirectPanSystemGestureTypeForGrabberTongue:(id)arg1;
-(void)grabberTongueDidPresentInteractively:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
-(id)indirectPanGestureRecognizerForGrabberTongue:(id)arg1;
-(void)grabberTongueWillDismiss:(id)arg1;
-(BOOL)grabberTongueHonorsAmbiguousActivationMargin:(id)arg1;

@required
-(BOOL)grabberTongueOrPullEnabled:(id)arg1 forGestureRecognizer:(id)arg2;
-(BOOL)grabberTongue:(id)arg1 shouldShowTongueOnFirstSwipeWithEdgeLocation:(double)arg2;

@end


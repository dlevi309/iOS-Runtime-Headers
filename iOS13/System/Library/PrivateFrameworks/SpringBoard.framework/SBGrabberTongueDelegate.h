/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBGrabberTongueDelegate <NSObject>
@optional
-(BOOL)grabberTongue:(id)arg1 shouldReceiveTouch:(id)arg2;
-(BOOL)grabberTongue:(id)arg1 shouldAllowSecondSwipeWithEdgeLocation:(double)arg2;
-(BOOL)grabberTongueHonorsAmbiguousActivationMargin:(id)arg1;
-(void)grabberTongueBeganPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3 andGesture:(id)arg4;
-(void)grabberTongueUpdatedPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3 andGesture:(id)arg4;
-(void)grabberTongueEndedPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3 andGesture:(id)arg4;
-(void)grabberTongueCanceledPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3 andGesture:(id)arg4;
-(void)grabberTongueWillPresent:(id)arg1;
-(void)grabberTongueWillDismiss:(id)arg1;
-(void)grabberTongueDidDismiss:(id)arg1;
-(void)grabberTongueWillPresentInteractively:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
-(void)grabberTongueDidPresentInteractively:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
-(id)customGestureRecognizerForGrabberTongue:(id)arg1;
-(id)indirectPanGestureRecognizerForGrabberTongue:(id)arg1;
-(unsigned long long)indirectPanSystemGestureTypeForGrabberTongue:(id)arg1;
-(BOOL)shouldSuppressTongueViewForGrabberTongue:(id)arg1;

@required
-(BOOL)grabberTongueOrPullEnabled:(id)arg1 forGestureRecognizer:(id)arg2;
-(BOOL)grabberTongue:(id)arg1 shouldShowTongueOnFirstSwipeWithEdgeLocation:(double)arg2;

@end


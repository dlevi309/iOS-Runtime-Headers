/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIScrollDynamics.h>

@interface _UIScrollDynamicsiOSMac : _UIScrollDynamics {

	double _durationUntilStop;
	double _durationUntilStopIgnoringRubberbanding;
	CGSize _absDisplacementVectorIgnoringRubberbanding;
	double _linearDisplacementIgnoringRubberbanding;
	CGPoint _destinationIgnoringRubberbanding;
	double _durationUntilRubberband;
	CGPoint _initialRubberbandingOrigin;
	CGVector _initialRubberbandingVelocity;
	double _decelerationRate;

}
-(id)init;
-(double)durationUntilStop;
-(double)speedAfterDuration:(double)arg1 ;
-(void)calculateToReachDecelerationTarget;
-(void)calculateDecelerationTarget;
-(CGVector)velocityAfterDuration:(double)arg1 ;
-(CGPoint)positionAfterDuration:(double)arg1 ;
-(BOOL)isRubberBandingAfterDuration:(double)arg1 ;
@end


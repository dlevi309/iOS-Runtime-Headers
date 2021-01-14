/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/_PXValueAnimation.h>

@interface _PXValueSpringAnimation : _PXValueAnimation {

	double _A;
	double _B;
	double _omega0;

}
+(double)durationOfSpringAnimationWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 velocity:(double)arg4 epsilon:(double)arg5 ;
-(id)initWithFromValue:(double)arg1 currentMediaTime:(double)arg2 spec:(PXValueAnimationSpec)arg3 ;
-(double)currentValue;
-(id)initWithDuration:(double)arg1 currentMediaTime:(double)arg2 spec:(PXValueAnimationSpec)arg3 ;
@end


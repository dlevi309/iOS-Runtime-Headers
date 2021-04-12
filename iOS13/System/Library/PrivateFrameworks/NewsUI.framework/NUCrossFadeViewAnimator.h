/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/


@interface NUCrossFadeViewAnimator : NSObject {

	double _duration;

}

@property (assign,nonatomic) double duration;              //@synthesize duration=_duration - In the implementation block
-(id)init;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)resetView:(id)arg1 ;
-(void)crossFadeFromView:(id)arg1 toView:(id)arg2 value:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)animateView:(id)arg1 toValue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)animateView:(id)arg1 toEmptyStateWithCompletion:(/*^block*/id)arg2 ;
@end


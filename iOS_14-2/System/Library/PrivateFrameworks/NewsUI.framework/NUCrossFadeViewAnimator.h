/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/


@interface NUCrossFadeViewAnimator : NSObject {

	double _duration;

}

@property (assign,nonatomic) double duration;              //@synthesize duration=_duration - In the implementation block
-(void)setDuration:(double)arg1 ;
-(id)init;
-(void)animateView:(id)arg1 toValue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)animateView:(id)arg1 toEmptyStateWithCompletion:(/*^block*/id)arg2 ;
-(void)crossFadeFromView:(id)arg1 toView:(id)arg2 value:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)resetView:(id)arg1 ;
-(double)duration;
@end


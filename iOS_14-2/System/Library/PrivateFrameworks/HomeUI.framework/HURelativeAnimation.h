/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@class HUAnimationApplier;

@interface HURelativeAnimation : NSObject {

	HUAnimationApplier* _applier;
	double _relativeStart;
	double _relativeDuration;

}

@property (nonatomic,readonly) HUAnimationApplier * applier;              //@synthesize applier=_applier - In the implementation block
@property (nonatomic,readonly) double relativeStart;                      //@synthesize relativeStart=_relativeStart - In the implementation block
@property (nonatomic,readonly) double relativeDuration;                   //@synthesize relativeDuration=_relativeDuration - In the implementation block
-(double)relativeStart;
-(HUAnimationApplier *)applier;
-(id)initWithAnimationApplier:(id)arg1 relativeStart:(double)arg2 relativeDuration:(double)arg3 ;
-(double)relativeDuration;
@end


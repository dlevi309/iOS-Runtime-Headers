/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(HUAnimationApplier *)applier;
-(double)relativeStart;
-(double)relativeDuration;
-(id)initWithAnimationApplier:(id)arg1 relativeStart:(double)arg2 relativeDuration:(double)arg3 ;
@end


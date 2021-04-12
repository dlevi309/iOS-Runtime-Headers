/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


@class CAMediaTimingFunction;

@interface WBSFluidProgressAnimation : NSObject {

	CAMediaTimingFunction* _timingFunction;
	double _initialPosition;
	double _destinationPosition;
	double _animationDuration;

}

@property (nonatomic,retain) CAMediaTimingFunction * timingFunction;              //@synthesize timingFunction=_timingFunction - In the implementation block
@property (assign,nonatomic) double initialPosition;                              //@synthesize initialPosition=_initialPosition - In the implementation block
@property (assign,nonatomic) double destinationPosition;                          //@synthesize destinationPosition=_destinationPosition - In the implementation block
@property (assign,nonatomic) double animationDuration;                            //@synthesize animationDuration=_animationDuration - In the implementation block
-(CAMediaTimingFunction *)timingFunction;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(double)animationDuration;
-(void)setAnimationDuration:(double)arg1 ;
-(double)destinationPosition;
-(double)initialPosition;
-(void)setInitialPosition:(double)arg1 ;
-(void)setDestinationPosition:(double)arg1 ;
@end


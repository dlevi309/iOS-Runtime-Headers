/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@protocol NACancelable;
@interface HUEffectiveProgressObserver : NSObject {

	/*^block*/id _observerBlock;
	double _targetEffectiveProgress;
	id<NACancelable> _timerCancellationToken;

}

@property (nonatomic,copy,readonly) id observerBlock;                              //@synthesize observerBlock=_observerBlock - In the implementation block
@property (nonatomic,readonly) double targetEffectiveProgress;                     //@synthesize targetEffectiveProgress=_targetEffectiveProgress - In the implementation block
@property (nonatomic,retain) id<NACancelable> timerCancellationToken;              //@synthesize timerCancellationToken=_timerCancellationToken - In the implementation block
-(id)observerBlock;
-(id)initWithTargetEffectiveProgress:(double)arg1 observerBlock:(/*^block*/id)arg2 ;
-(double)targetEffectiveProgress;
-(id<NACancelable>)timerCancellationToken;
-(void)setTimerCancellationToken:(id<NACancelable>)arg1 ;
@end


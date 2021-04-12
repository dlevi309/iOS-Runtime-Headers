/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSDContentAnimation.h>

@interface TSDContinuousContentPathAnimation : TSDContentAnimation {

	/*^block*/id _tick;
	/*^block*/id _isFinished;

}

@property (nonatomic,copy) id tick;                    //@synthesize tick=_tick - In the implementation block
@property (nonatomic,copy) id isFinished;              //@synthesize isFinished=_isFinished - In the implementation block
-(void)dealloc;
-(id)isFinished;
-(void)setIsFinished:(id)arg1 ;
-(id)tick;
-(void)i_applyToLayer:(id)arg1 withTransformBlock:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setTick:(id)arg1 ;
@end


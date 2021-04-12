/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/


#import <PhotosPlayer/PhotosPlayer-Structs.h>
@class ISAVPlayer;

@interface ISRateCurveRequest : NSObject {

	double _startTime;
	SCD_Struct_IS1 _startVideoTime;
	BOOL _cancelled;
	id _boundaryObserver;
	double _stepInterval;
	long long _stepIndex;
	float _initialRate;
	double _duration;
	ISAVPlayer* _avPlayer;
	/*^block*/id _progressHandler;
	SCD_Struct_IS1 _targetTime;

}

@property (nonatomic,readonly) SCD_Struct_IS1 targetTime;                 //@synthesize targetTime=_targetTime - In the implementation block
@property (nonatomic,readonly) double duration;                           //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) float initialRate;                         //@synthesize initialRate=_initialRate - In the implementation block
@property (nonatomic,__weak,readonly) ISAVPlayer * avPlayer;              //@synthesize avPlayer=_avPlayer - In the implementation block
@property (nonatomic,copy,readonly) id progressHandler;                   //@synthesize progressHandler=_progressHandler - In the implementation block
-(void)dealloc;
-(void)cancel;
-(void)start;
-(double)duration;
-(id)progressHandler;
-(ISAVPlayer *)avPlayer;
-(SCD_Struct_IS1)targetTime;
-(id)initWithTargetTime:(SCD_Struct_IS1)arg1 duration:(double)arg2 initialRate:(float)arg3 avPlayer:(id)arg4 progressHandler:(/*^block*/id)arg5 ;
-(void)_stepDownRate;
-(void)_didReachTargetTime;
-(void)_stopObservingPlayer;
-(float)initialRate;
@end


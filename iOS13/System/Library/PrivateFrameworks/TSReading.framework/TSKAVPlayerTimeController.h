/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@class TSKAVPlayerController;

@interface TSKAVPlayerTimeController : NSObject {

	id mTimeObserver;
	BOOL mObservingPlayerStatus;
	double mAbsoluteCurrentTime;
	double mCurrentTime;
	double mRemainingTime;
	double mUpdateInterval;
	TSKAVPlayerController* mPlayerController;

}

@property (assign,nonatomic) double absoluteCurrentTime; 
@property (assign,nonatomic) double currentTime; 
@property (nonatomic,readonly) double remainingTime; 
@property (assign,nonatomic) double updateInterval; 
@property (nonatomic,retain,readonly) TSKAVPlayerController * playerController; 
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(double)currentTime;
-(void)setUpdateInterval:(double)arg1 ;
-(double)updateInterval;
-(double)remainingTime;
-(TSKAVPlayerController *)playerController;
-(void)setCurrentTime:(double)arg1 ;
-(id)initWithPlayerController:(id)arg1 ;
-(double)absoluteCurrentTime;
-(void)setAbsoluteCurrentTime:(double)arg1 ;
-(void)p_createTimeObserver;
-(void)p_setTimeValuesWithoutScrubbing;
-(void)p_teardownTimeObserver;
-(void)p_beginScrubbingIfNeeded;
-(void)p_endScrubbing;
-(void)startObservingTime;
-(void)stopObservingTime;
@end


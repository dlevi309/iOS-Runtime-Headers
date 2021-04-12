/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/


@class TVPPlayer, NSTimer;

@interface TVPProgressiveJumpingScrubber : NSObject {

	TVPPlayer* _player;
	double _rate;
	unsigned long long _skipCount;
	double _skipAdjustTime;
	double _nextSkipAdjustTime;
	double _skipAdjustPeriod;
	NSTimer* _skipTimer;

}

@property (assign,nonatomic) unsigned long long skipCount;              //@synthesize skipCount=_skipCount - In the implementation block
@property (assign,nonatomic) double skipAdjustTime;                     //@synthesize skipAdjustTime=_skipAdjustTime - In the implementation block
@property (assign,nonatomic) double nextSkipAdjustTime;                 //@synthesize nextSkipAdjustTime=_nextSkipAdjustTime - In the implementation block
@property (assign,nonatomic) double skipAdjustPeriod;                   //@synthesize skipAdjustPeriod=_skipAdjustPeriod - In the implementation block
@property (nonatomic,retain) NSTimer * skipTimer;                       //@synthesize skipTimer=_skipTimer - In the implementation block
@property (assign,nonatomic,__weak) TVPPlayer * player;                 //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) double rate;                               //@synthesize rate=_rate - In the implementation block
-(void)setRate:(double)arg1 ;
-(double)rate;
-(TVPPlayer *)player;
-(void)setPlayer:(TVPPlayer *)arg1 ;
-(unsigned long long)skipCount;
-(void)setSkipCount:(unsigned long long)arg1 ;
-(void)_skipTimerFired:(id)arg1 ;
-(void)cancelScrub;
-(double)_nextTimeToAdvanceFromTime:(double)arg1 ;
-(void)startScrubWithRate:(double)arg1 ;
-(double)skipAdjustTime;
-(void)setSkipAdjustTime:(double)arg1 ;
-(double)nextSkipAdjustTime;
-(void)setNextSkipAdjustTime:(double)arg1 ;
-(double)skipAdjustPeriod;
-(void)setSkipAdjustPeriod:(double)arg1 ;
-(NSTimer *)skipTimer;
-(void)setSkipTimer:(NSTimer *)arg1 ;
@end


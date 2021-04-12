/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(TVPPlayer *)player;
-(void)setPlayer:(TVPPlayer *)arg1 ;
-(void)setRate:(double)arg1 ;
-(void)setSkipCount:(unsigned long long)arg1 ;
-(double)rate;
-(unsigned long long)skipCount;
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


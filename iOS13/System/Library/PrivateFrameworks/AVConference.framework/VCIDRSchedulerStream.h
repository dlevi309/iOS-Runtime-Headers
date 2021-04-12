/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@interface VCIDRSchedulerStream : NSObject {

	unsigned _keyFrameInterval;
	unsigned _framerate;
	unsigned _weightFactor;
	unsigned _framePosition;
	unsigned _framesPerIdrPeriod;

}

@property (assign,nonatomic) unsigned keyFrameInterval;                //@synthesize keyFrameInterval=_keyFrameInterval - In the implementation block
@property (assign,nonatomic) unsigned framerate;                       //@synthesize framerate=_framerate - In the implementation block
@property (assign,nonatomic) unsigned weightFactor;                    //@synthesize weightFactor=_weightFactor - In the implementation block
@property (assign,nonatomic) unsigned framePosition;                   //@synthesize framePosition=_framePosition - In the implementation block
@property (assign,nonatomic) unsigned framesPerIdrPeriod;              //@synthesize framesPerIdrPeriod=_framesPerIdrPeriod - In the implementation block
+(id)schedulerStreamWithKeyFrameInterval:(unsigned)arg1 framerate:(unsigned)arg2 weightFactor:(unsigned)arg3 ;
-(id)description;
-(unsigned)framePosition;
-(void)setFramePosition:(unsigned)arg1 ;
-(unsigned)framerate;
-(void)setFramerate:(unsigned)arg1 ;
-(unsigned)keyFrameInterval;
-(void)setKeyFrameInterval:(unsigned)arg1 ;
-(unsigned)weightFactor;
-(void)setWeightFactor:(unsigned)arg1 ;
-(unsigned)framesPerIdrPeriod;
-(id)initWithKeyFrameInterval:(unsigned)arg1 framerate:(unsigned)arg2 weightFactor:(unsigned)arg3 ;
-(long long)compareWeightFactor:(id)arg1 ;
-(void)setFramesPerIdrPeriod:(unsigned)arg1 ;
@end


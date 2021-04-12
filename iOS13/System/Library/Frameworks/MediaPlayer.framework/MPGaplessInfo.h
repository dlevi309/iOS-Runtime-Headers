/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@interface MPGaplessInfo : NSObject {

	unsigned _encodingDelayInFrames;
	unsigned _encodingDrainInFrames;
	unsigned _heuristicInfo;
	unsigned long long _durationInFrames;
	unsigned long long _lastPacketsResync;

}

@property (assign,nonatomic) unsigned long long durationInFrames;               //@synthesize durationInFrames=_durationInFrames - In the implementation block
@property (assign,nonatomic) unsigned encodingDelayInFrames;                    //@synthesize encodingDelayInFrames=_encodingDelayInFrames - In the implementation block
@property (assign,nonatomic) unsigned encodingDrainInFrames;                    //@synthesize encodingDrainInFrames=_encodingDrainInFrames - In the implementation block
@property (assign,nonatomic) unsigned heuristicInfo;                            //@synthesize heuristicInfo=_heuristicInfo - In the implementation block
@property (assign,nonatomic) unsigned long long lastPacketsResync;              //@synthesize lastPacketsResync=_lastPacketsResync - In the implementation block
-(unsigned long long)durationInFrames;
-(void)setDurationInFrames:(unsigned long long)arg1 ;
-(unsigned)encodingDelayInFrames;
-(void)setEncodingDelayInFrames:(unsigned)arg1 ;
-(unsigned)encodingDrainInFrames;
-(void)setEncodingDrainInFrames:(unsigned)arg1 ;
-(unsigned)heuristicInfo;
-(void)setHeuristicInfo:(unsigned)arg1 ;
-(unsigned long long)lastPacketsResync;
-(void)setLastPacketsResync:(unsigned long long)arg1 ;
@end


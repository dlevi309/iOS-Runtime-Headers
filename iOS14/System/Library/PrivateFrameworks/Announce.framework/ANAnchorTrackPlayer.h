/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
*/

#import <Announce/ANTrackPlayer.h>

@interface ANAnchorTrackPlayer : ANTrackPlayer {

	double _anchorPoint;

}

@property (assign,nonatomic) double anchorPoint;              //@synthesize anchorPoint=_anchorPoint - In the implementation block
-(double)anchorPoint;
-(void)setAnchorPoint:(double)arg1 ;
-(BOOL)playInternalSync;
-(id)whatIsPlaying;
-(void)stopInternalSync;
-(void)nextInternalSync;
-(void)previousInternalSync;
-(void)handleInterruptionDelay:(double)arg1 ;
-(int)numberActivePlayers;
-(id)initWithAnchorPoint:(double)arg1 options:(unsigned long long)arg2 audioSession:(id)arg3 ;
-(double)_trackTrimTime:(long long)arg1 ;
-(double)_currentEndTime;
-(double)_anchorDeltaForNextSync:(double)arg1 ;
-(double)_anchorDeltaForPreviousSync:(double)arg1 ;
-(id)initWithAnchorPoint:(double)arg1 andOptions:(unsigned long long)arg2 ;
-(BOOL)addingNewPlayer:(id)arg1 ;
@end


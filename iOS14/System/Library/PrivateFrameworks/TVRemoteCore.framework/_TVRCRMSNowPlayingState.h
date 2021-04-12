/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


@class NSDate;

@interface _TVRCRMSNowPlayingState : NSObject {

	double _playbackRate;
	double _duration;
	NSDate* _lastReportedTimestamp;
	double _lastReportedPlaybackPosition;

}

@property (assign,nonatomic) double playbackRate;                              //@synthesize playbackRate=_playbackRate - In the implementation block
@property (assign,nonatomic) double duration;                                  //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) NSDate * lastReportedTimestamp;                   //@synthesize lastReportedTimestamp=_lastReportedTimestamp - In the implementation block
@property (assign,nonatomic) double lastReportedPlaybackPosition;              //@synthesize lastReportedPlaybackPosition=_lastReportedPlaybackPosition - In the implementation block
+(id)nowPlayingStateFromInfo:(id)arg1 ;
-(void)setPlaybackRate:(double)arg1 ;
-(void)setDuration:(double)arg1 ;
-(double)playbackRate;
-(double)duration;
-(void)setLastReportedTimestamp:(NSDate *)arg1 ;
-(void)setLastReportedPlaybackPosition:(double)arg1 ;
-(NSDate *)lastReportedTimestamp;
-(double)lastReportedPlaybackPosition;
@end


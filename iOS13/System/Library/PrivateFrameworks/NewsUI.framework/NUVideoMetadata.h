/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/


@class NSError;

@interface NUVideoMetadata : NSObject {

	BOOL _muted;
	double _playbackPosition;
	double _timePlayed;
	double _duration;
	double _volume;
	NSError* _error;

}

@property (assign,nonatomic) double playbackPosition;              //@synthesize playbackPosition=_playbackPosition - In the implementation block
@property (assign,nonatomic) double timePlayed;                    //@synthesize timePlayed=_timePlayed - In the implementation block
@property (assign,nonatomic) double duration;                      //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL muted;                           //@synthesize muted=_muted - In the implementation block
@property (assign,nonatomic) double volume;                        //@synthesize volume=_volume - In the implementation block
@property (nonatomic,copy) NSError * error;                        //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(double)volume;
-(void)setVolume:(double)arg1 ;
-(BOOL)muted;
-(void)setMuted:(BOOL)arg1 ;
-(void)setTimePlayed:(double)arg1 ;
-(double)timePlayed;
-(void)setPlaybackPosition:(double)arg1 ;
-(double)playbackPosition;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <AVFCore/AVPlayer.h>
#import <libobjc.A.dylib/AVPlayerItemDelegate.h>

@class SVKeyValueObserver, NSString;

@interface SXAVPlayer : AVPlayer <AVPlayerItemDelegate> {

	int _audioMode;
	int _playbackPosition;
	int _playbackStatus;
	/*^block*/id _playbackStatusBlock;
	/*^block*/id _playbackProgressBlock;
	/*^block*/id _loadingProgressBlock;
	double _elapsedTime;
	double _duration;
	double _frameRate;
	id _timeObserver;
	SVKeyValueObserver* _timeControlStatusObserver;
	SVKeyValueObserver* _statusObserver;
	SVKeyValueObserver* _durationObserver;
	SVKeyValueObserver* _loadedTimeRangesObserver;
	SCD_Struct_SX19 _cumulativeTimePlayed;

}

@property (assign,nonatomic) int playbackStatus;                                          //@synthesize playbackStatus=_playbackStatus - In the implementation block
@property (assign,nonatomic) double elapsedTime;                                          //@synthesize elapsedTime=_elapsedTime - In the implementation block
@property (assign,nonatomic) double duration;                                             //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double frameRate;                                            //@synthesize frameRate=_frameRate - In the implementation block
@property (nonatomic,retain) id timeObserver;                                             //@synthesize timeObserver=_timeObserver - In the implementation block
@property (assign,nonatomic) SCD_Struct_SX19 cumulativeTimePlayed;                        //@synthesize cumulativeTimePlayed=_cumulativeTimePlayed - In the implementation block
@property (nonatomic,retain) SVKeyValueObserver * timeControlStatusObserver;              //@synthesize timeControlStatusObserver=_timeControlStatusObserver - In the implementation block
@property (nonatomic,retain) SVKeyValueObserver * statusObserver;                         //@synthesize statusObserver=_statusObserver - In the implementation block
@property (nonatomic,retain) SVKeyValueObserver * durationObserver;                       //@synthesize durationObserver=_durationObserver - In the implementation block
@property (nonatomic,retain) SVKeyValueObserver * loadedTimeRangesObserver;               //@synthesize loadedTimeRangesObserver=_loadedTimeRangesObserver - In the implementation block
@property (nonatomic,readonly) int audioMode;                                             //@synthesize audioMode=_audioMode - In the implementation block
@property (assign,nonatomic) int playbackPosition;                                        //@synthesize playbackPosition=_playbackPosition - In the implementation block
@property (nonatomic,copy) id playbackStatusBlock;                                        //@synthesize playbackStatusBlock=_playbackStatusBlock - In the implementation block
@property (nonatomic,copy) id playbackProgressBlock;                                      //@synthesize playbackProgressBlock=_playbackProgressBlock - In the implementation block
@property (nonatomic,copy) id loadingProgressBlock;                                       //@synthesize loadingProgressBlock=_loadingProgressBlock - In the implementation block
@property (nonatomic,readonly) double totalTimePlayed; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setElapsedTime:(double)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)statusChanged;
-(void)setPlaybackPosition:(int)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(double)frameRate;
-(double)elapsedTime;
-(void)setFrameRate:(double)arg1 ;
-(int)playbackPosition;
-(int)audioMode;
-(double)duration;
-(void)dealloc;
-(id)initWithURL:(id)arg1 audioMode:(int)arg2 ;
-(id)initWithPlayerItem:(id)arg1 audioMode:(int)arg2 ;
-(void)addObservers;
-(void)loadFrameRate;
-(void)stopTimeObserver;
-(SCD_Struct_SX19)cumulativeTimePlayed;
-(void)updateTime:(SCD_Struct_SX19)arg1 duration:(SCD_Struct_SX19)arg2 ;
-(void)setCumulativeTimePlayed:(SCD_Struct_SX19)arg1 ;
-(void)setTimeObserver:(id)arg1 ;
-(void)setElapsedTime:(double)arg1 duration:(double)arg2 ;
-(id)timeObserver;
-(void)timeControlStatusChanged;
-(void)setTimeControlStatusObserver:(SVKeyValueObserver *)arg1 ;
-(void)setStatusObserver:(SVKeyValueObserver *)arg1 ;
-(void)durationChanged;
-(void)setDurationObserver:(SVKeyValueObserver *)arg1 ;
-(void)loadedTimeRangesChanged;
-(void)setLoadedTimeRangesObserver:(SVKeyValueObserver *)arg1 ;
-(void)playedToEnd:(id)arg1 ;
-(void)setPlaybackStatus:(int)arg1 ;
-(id)playbackProgressBlock;
-(void)startTimeObserver;
-(id)playbackStatusBlock;
-(int)playbackStatus;
-(id)loadingProgressBlock;
-(void)seekToStartWithCompletionBlock:(/*^block*/id)arg1 ;
-(double)totalTimePlayed;
-(void)setPlaybackStatusBlock:(id)arg1 ;
-(void)setPlaybackProgressBlock:(id)arg1 ;
-(void)setLoadingProgressBlock:(id)arg1 ;
-(SVKeyValueObserver *)timeControlStatusObserver;
-(SVKeyValueObserver *)statusObserver;
-(SVKeyValueObserver *)durationObserver;
-(SVKeyValueObserver *)loadedTimeRangesObserver;
@end


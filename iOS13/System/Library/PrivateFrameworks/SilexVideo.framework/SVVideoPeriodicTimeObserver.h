/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <SilexVideo/SilexVideo-Structs.h>
#import <libobjc.A.dylib/SVVideoPeriodicTimeObserving.h>

@protocol SVVideoPlaybackStateObserving, SVTimeConverting;
@class SVPlayer, NSString;

@interface SVVideoPeriodicTimeObserver : NSObject <SVVideoPeriodicTimeObserving> {

	/*^block*/id changeBlock;
	SVPlayer* _player;
	id<SVVideoPlaybackStateObserving> _playbackStateObserver;
	id<SVTimeConverting> _timeConverter;
	id _timeObserverToken;
	double _time;

}

@property (nonatomic,readonly) SVPlayer * player;                                                    //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) id<SVVideoPlaybackStateObserving> playbackStateObserver;              //@synthesize playbackStateObserver=_playbackStateObserver - In the implementation block
@property (nonatomic,readonly) id<SVTimeConverting> timeConverter;                                   //@synthesize timeConverter=_timeConverter - In the implementation block
@property (nonatomic,retain) id timeObserverToken;                                                   //@synthesize timeObserverToken=_timeObserverToken - In the implementation block
@property (assign,nonatomic) double time;                                                            //@synthesize time=_time - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (setter=onChange:,nonatomic,copy) id changeBlock; 
-(void)dealloc;
-(double)time;
-(void)setTime:(double)arg1 ;
-(SVPlayer *)player;
-(id)changeBlock;
-(void)onChange:(/*^block*/id)arg1 ;
-(id<SVVideoPlaybackStateObserving>)playbackStateObserver;
-(void)updateTime:(SCD_Struct_SV4)arg1 ;
-(void)startPeriodicTimeObserverForPlayer:(id)arg1 ;
-(void)stopPeriodicTimeObserverForPlayer:(id)arg1 ;
-(void)setTimeObserverToken:(id)arg1 ;
-(id)timeObserverToken;
-(id<SVTimeConverting>)timeConverter;
-(id)initWithPlayer:(id)arg1 playbackStateObserver:(id)arg2 timeConverter:(id)arg3 ;
@end


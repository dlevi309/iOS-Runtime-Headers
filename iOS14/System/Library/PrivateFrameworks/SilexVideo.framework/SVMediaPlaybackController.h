/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/


@class NSMapTable, AVPlayer;

@interface SVMediaPlaybackController : NSObject {

	NSMapTable* _timeControlStatusObservers;
	AVPlayer* _currentlyPlaying;

}

@property (nonatomic,readonly) NSMapTable * timeControlStatusObservers;              //@synthesize timeControlStatusObservers=_timeControlStatusObservers - In the implementation block
@property (assign,nonatomic,__weak) AVPlayer * currentlyPlaying;                     //@synthesize currentlyPlaying=_currentlyPlaying - In the implementation block
-(void)registerPlayer:(id)arg1 ;
-(id)init;
-(void)setCurrentlyPlaying:(AVPlayer *)arg1 ;
-(void)unregisterPlayer:(id)arg1 ;
-(AVPlayer *)currentlyPlaying;
-(void)updateCurrentlyPlaying:(id)arg1 ;
-(NSMapTable *)timeControlStatusObservers;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@protocol MPMusicPlayerControllerClient <NSObject>
@required
-(void)setServerQueueDescriptor:(id)arg1;
-(void)setServerNowPlaying:(id)arg1;
-(void)setServerTimeSnapshot:(id)arg1;
-(void)serverItemDidEnd;
-(void)serverPlaybackModeDidChangeAffectingQueue:(BOOL)arg1;
-(void)serverQueueDidEnd;

@end


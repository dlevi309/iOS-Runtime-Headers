/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@interface PUPlayPauseBarItemsControllerChange : NSObject {

	BOOL _playPauseStateDidChange;
	BOOL _currentPlaybackTimeDidChange;
	BOOL _playbackDurationDidChange;

}

@property (nonatomic,readonly) BOOL hasChanges; 
@property (assign,setter=_setPlayPauseStateDidChange:,nonatomic) BOOL playPauseStateDidChange;                        //@synthesize playPauseStateDidChange=_playPauseStateDidChange - In the implementation block
@property (assign,setter=_setCurrentPlaybackTimeDidChange:,nonatomic) BOOL currentPlaybackTimeDidChange;              //@synthesize currentPlaybackTimeDidChange=_currentPlaybackTimeDidChange - In the implementation block
@property (assign,setter=_setPlaybackDurationDidChange:,nonatomic) BOOL playbackDurationDidChange;                    //@synthesize playbackDurationDidChange=_playbackDurationDidChange - In the implementation block
-(BOOL)hasChanges;
-(BOOL)playPauseStateDidChange;
-(void)_setPlayPauseStateDidChange:(BOOL)arg1 ;
-(BOOL)currentPlaybackTimeDidChange;
-(void)_setCurrentPlaybackTimeDidChange:(BOOL)arg1 ;
-(BOOL)playbackDurationDidChange;
-(void)_setPlaybackDurationDidChange:(BOOL)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUViewModelChange.h>

@interface PUBrowsingIrisPlayerChange : PUViewModelChange {

	BOOL _isLivePhotoPlaybackAllowedDidChange;
	BOOL _isLivePhotoLoadingAllowedDidChange;
	BOOL _livePhotoDidChange;
	BOOL _playerDidChange;
	BOOL _playbackStateDidChange;
	BOOL _activatedDidChange;
	BOOL _scrubbingPhotoTimeDidChange;
	BOOL _currentlyDisplayedTimesDidChange;
	BOOL _playingDidChange;
	BOOL _vitalityTransformDidChange;

}

@property (assign,nonatomic) BOOL playbackStateDidChange;                           //@synthesize playbackStateDidChange=_playbackStateDidChange - In the implementation block
@property (assign,nonatomic) BOOL livePhotoDidChange;                               //@synthesize livePhotoDidChange=_livePhotoDidChange - In the implementation block
@property (assign,nonatomic) BOOL isLivePhotoLoadingAllowedDidChange;               //@synthesize isLivePhotoLoadingAllowedDidChange=_isLivePhotoLoadingAllowedDidChange - In the implementation block
@property (assign,nonatomic) BOOL isLivePhotoPlaybackAllowedDidChange;              //@synthesize isLivePhotoPlaybackAllowedDidChange=_isLivePhotoPlaybackAllowedDidChange - In the implementation block
@property (assign,nonatomic) BOOL playerDidChange;                                  //@synthesize playerDidChange=_playerDidChange - In the implementation block
@property (assign,nonatomic) BOOL activatedDidChange;                               //@synthesize activatedDidChange=_activatedDidChange - In the implementation block
@property (assign,nonatomic) BOOL scrubbingPhotoTimeDidChange;                      //@synthesize scrubbingPhotoTimeDidChange=_scrubbingPhotoTimeDidChange - In the implementation block
@property (assign,nonatomic) BOOL currentlyDisplayedTimesDidChange;                 //@synthesize currentlyDisplayedTimesDidChange=_currentlyDisplayedTimesDidChange - In the implementation block
@property (assign,nonatomic) BOOL playingDidChange;                                 //@synthesize playingDidChange=_playingDidChange - In the implementation block
@property (assign,nonatomic) BOOL vitalityTransformDidChange;                       //@synthesize vitalityTransformDidChange=_vitalityTransformDidChange - In the implementation block
-(void)setPlaybackStateDidChange:(BOOL)arg1 ;
-(void)setPlayingDidChange:(BOOL)arg1 ;
-(void)setVitalityTransformDidChange:(BOOL)arg1 ;
-(void)setPlayerDidChange:(BOOL)arg1 ;
-(BOOL)isLivePhotoPlaybackAllowedDidChange;
-(void)setIsLivePhotoPlaybackAllowedDidChange:(BOOL)arg1 ;
-(BOOL)isLivePhotoLoadingAllowedDidChange;
-(void)setIsLivePhotoLoadingAllowedDidChange:(BOOL)arg1 ;
-(BOOL)livePhotoDidChange;
-(void)setLivePhotoDidChange:(BOOL)arg1 ;
-(BOOL)playerDidChange;
-(BOOL)playbackStateDidChange;
-(BOOL)activatedDidChange;
-(void)setActivatedDidChange:(BOOL)arg1 ;
-(BOOL)scrubbingPhotoTimeDidChange;
-(void)setScrubbingPhotoTimeDidChange:(BOOL)arg1 ;
-(BOOL)currentlyDisplayedTimesDidChange;
-(void)setCurrentlyDisplayedTimesDidChange:(BOOL)arg1 ;
-(BOOL)playingDidChange;
-(BOOL)vitalityTransformDidChange;
-(BOOL)hasChanges;
@end


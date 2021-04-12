/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <PhotosPlayer/ISBehavior.h>

@interface ISLivePhotoPlaybackBehavior : ISBehavior {

	SCD_Struct_IS9 _delegateFlags;
	BOOL _immediatelyShowsPhotoWhenPlaybackEnds;
	BOOL _hasBlurryTransition;
	BOOL _isTransitioningToPhoto;
	BOOL __videoReadyToPlay;
	BOOL __preparing;
	double _photoTransitionDuration;
	long long __currentPlaybackID;
	long long __readyToPlayPlaybackID;
	SCD_Struct_IS1 _keyTime;
	SCD_Struct_IS10 _playbackTimeRange;

}

@property (assign,setter=_setCurrentPlaybackID:,nonatomic) long long _currentPlaybackID;                                  //@synthesize _currentPlaybackID=__currentPlaybackID - In the implementation block
@property (assign,setter=_setReadyToPlayPlaybackID:,nonatomic) long long _readyToPlayPlaybackID;                          //@synthesize _readyToPlayPlaybackID=__readyToPlayPlaybackID - In the implementation block
@property (assign,setter=_setVideoReadyToPlay:,getter=_isVideoReadyToPlay,nonatomic) BOOL _videoReadyToPlay;              //@synthesize _videoReadyToPlay=__videoReadyToPlay - In the implementation block
@property (assign,setter=_setPreparing:,getter=_isPreparing,nonatomic) BOOL _preparing;                                   //@synthesize _preparing=__preparing - In the implementation block
@property (nonatomic,readonly) SCD_Struct_IS1 keyTime;                                                                    //@synthesize keyTime=_keyTime - In the implementation block
@property (nonatomic,readonly) SCD_Struct_IS10 playbackTimeRange;                                                         //@synthesize playbackTimeRange=_playbackTimeRange - In the implementation block
@property (nonatomic,readonly) double photoTransitionDuration;                                                            //@synthesize photoTransitionDuration=_photoTransitionDuration - In the implementation block
@property (nonatomic,readonly) BOOL immediatelyShowsPhotoWhenPlaybackEnds;                                                //@synthesize immediatelyShowsPhotoWhenPlaybackEnds=_immediatelyShowsPhotoWhenPlaybackEnds - In the implementation block
@property (nonatomic,readonly) BOOL hasBlurryTransition;                                                                  //@synthesize hasBlurryTransition=_hasBlurryTransition - In the implementation block
@property (nonatomic,readonly) BOOL isTransitioningToPhoto;                                                               //@synthesize isTransitioningToPhoto=_isTransitioningToPhoto - In the implementation block
@property (assign,nonatomic,__weak) id<ISLivePhotoPlaybackBehaviorDelegate> delegate; 
-(void)setDelegate:(id<ISLivePhotoPlaybackBehaviorDelegate>)arg1 ;
-(void)startPlayback;
-(long long)behaviorType;
-(SCD_Struct_IS10)playbackTimeRange;
-(SCD_Struct_IS1)keyTime;
-(void)videoWillPlayToEnd;
-(void)videoDidPlayToEnd;
-(void)activeDidChange;
-(void)_handleDidSeekToBeginning;
-(void)_didFinishPreparing;
-(BOOL)_isPreparing;
-(void)_setPreparing:(BOOL)arg1 ;
-(id)initWithInitialLayoutInfo:(id)arg1 keyTime:(SCD_Struct_IS1)arg2 playbackTimeRange:(SCD_Struct_IS10)arg3 photoTransitionDuration:(double)arg4 immediatelyShowsPhotoWhenPlaybackEnds:(BOOL)arg5 hasBlurryTransition:(BOOL)arg6 ;
-(void)_handleDidFinish;
-(void)_prepareVideoForPlaybackIfNeeded;
-(void)_prerollWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_handleDidFinishPreroll;
-(void)_startPlaybackWithPlaybackID:(long long)arg1 ;
-(void)_transitionToVideoWithPlaybackID:(long long)arg1 ;
-(void)_showVideoWithPlaybackID:(long long)arg1 ;
-(double)photoTransitionDuration;
-(BOOL)immediatelyShowsPhotoWhenPlaybackEnds;
-(BOOL)hasBlurryTransition;
-(BOOL)isTransitioningToPhoto;
-(long long)_currentPlaybackID;
-(void)_setCurrentPlaybackID:(long long)arg1 ;
-(long long)_readyToPlayPlaybackID;
-(void)_setReadyToPlayPlaybackID:(long long)arg1 ;
-(BOOL)_isVideoReadyToPlay;
-(void)_setVideoReadyToPlay:(BOOL)arg1 ;
@end


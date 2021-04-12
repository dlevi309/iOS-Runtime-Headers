/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <AVKit/AVPlayerController.h>

@protocol AVPictureInPictureSampleBufferPlaybackDelegate;
@class AVPictureInPictureController, AVPictureInPicturePlaybackState, AVObservationController;

@interface AVSampleBufferDisplayLayerPlayerController : AVPlayerController {

	BOOL _pictureInPictureAvailable;
	BOOL _paused;
	long long _status;
	long long _timeControlStatus;
	AVPictureInPictureController* _pictureInPictureController;
	id<AVPictureInPictureSampleBufferPlaybackDelegate> _playbackDelegate;
	AVPictureInPicturePlaybackState* _playbackState;
	AVObservationController* _sbdlObservationController;
	CGSize _enqueuedBufferDimensions;
	SCD_Struct_AV15 _contentTimeRange;

}

@property (nonatomic,copy) AVPictureInPicturePlaybackState * playbackState;                                           //@synthesize playbackState=_playbackState - In the implementation block
@property (nonatomic,retain) AVObservationController * sbdlObservationController;                                     //@synthesize sbdlObservationController=_sbdlObservationController - In the implementation block
@property (assign,getter=isPictureInPictureAvailable,nonatomic) BOOL pictureInPictureAvailable;                       //@synthesize pictureInPictureAvailable=_pictureInPictureAvailable - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused;                                                             //@synthesize paused=_paused - In the implementation block
@property (assign,nonatomic) SCD_Struct_AV15 contentTimeRange;                                                        //@synthesize contentTimeRange=_contentTimeRange - In the implementation block
@property (assign,nonatomic) long long status;                                                                        //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) long long timeControlStatus;                                                             //@synthesize timeControlStatus=_timeControlStatus - In the implementation block
@property (assign,nonatomic,__weak) AVPictureInPictureController * pictureInPictureController;                        //@synthesize pictureInPictureController=_pictureInPictureController - In the implementation block
@property (assign,nonatomic,__weak) id<AVPictureInPictureSampleBufferPlaybackDelegate> playbackDelegate;              //@synthesize playbackDelegate=_playbackDelegate - In the implementation block
@property (assign,nonatomic) CGSize enqueuedBufferDimensions;                                                         //@synthesize enqueuedBufferDimensions=_enqueuedBufferDimensions - In the implementation block
+(id)keyPathsForValuesAffectingContentDuration;
+(id)keyPathsForValuesAffectingContentDimensions;
+(id)keyPathsForValuesAffectingContentDurationWithinEndTimes;
+(id)keyPathsForValuesAffectingPlaying;
+(id)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;
+(id)keyPathsForValuesAffectingRate;
+(id)keyPathsForValuesAffectingPictureInPicturePossible;
-(void)setPlaybackState:(AVPictureInPicturePlaybackState *)arg1 ;
-(BOOL)isPlaying;
-(void)invalidatePlaybackState;
-(AVPictureInPicturePlaybackState *)playbackState;
-(void)seekByTimeInterval:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3 ;
-(void)setPlaying:(BOOL)arg1 ;
-(void)togglePlaybackEvenWhenInBackground:(id)arg1 ;
-(double)currentTimeWithinEndTimes;
-(void)setPictureInPictureInterrupted:(BOOL)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(CGSize)contentDimensions;
-(double)contentDurationWithinEndTimes;
-(double)contentDuration;
-(double)rate;
-(double)_effectiveRate;
-(SCD_Struct_AV3)_currentSBDLTime;
-(void)setEnqueuedBufferDimensions:(CGSize)arg1 ;
-(BOOL)isPictureInPictureAvailable;
-(void)setPictureInPictureAvailable:(BOOL)arg1 ;
-(CGSize)enqueuedBufferDimensions;
-(SCD_Struct_AV15)contentTimeRange;
-(AVObservationController *)sbdlObservationController;
-(void)setSbdlObservationController:(AVObservationController *)arg1 ;
-(void)setContentTimeRange:(SCD_Struct_AV15)arg1 ;
-(AVPictureInPictureController *)pictureInPictureController;
-(id<AVPictureInPictureSampleBufferPlaybackDelegate>)playbackDelegate;
-(void)setPlaybackDelegate:(id<AVPictureInPictureSampleBufferPlaybackDelegate>)arg1 ;
-(long long)timeControlStatus;
-(void)setStatus:(long long)arg1 ;
-(void)_updateStatus;
-(void)setPictureInPictureController:(AVPictureInPictureController *)arg1 ;
-(void)setTimeControlStatus:(long long)arg1 ;
-(BOOL)isPictureInPicturePossible;
-(BOOL)isPaused;
-(long long)status;
-(void)dealloc;
-(void)_startObservation;
@end


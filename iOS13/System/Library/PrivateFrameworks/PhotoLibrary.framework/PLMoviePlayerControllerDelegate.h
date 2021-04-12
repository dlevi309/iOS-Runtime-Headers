/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
*/


@protocol PLMoviePlayerControllerDelegate <NSObject>
@required
-(void)moviePlayerControllerDidBecomeActiveController:(id)arg1;
-(void)moviePlayerControllerWillResignAsActiveController:(id)arg1;
-(BOOL)moviePlayerExitRequest:(id)arg1 exitReason:(int)arg2;
-(void)moviePlayerReadyToPlay:(id)arg1;
-(void)moviePlayerReadyToDisplay:(id)arg1;
-(void)moviePlayerBufferingStateDidChange:(id)arg1;
-(void)moviePlayerPlaybackStateDidChange:(id)arg1 fromPlaybackState:(unsigned long long)arg2;
-(void)moviePlayerPlaybackRateDidChange:(id)arg1;
-(void)moviePlayerPlaybackDidEnd:(id)arg1;
-(void)moviePlayerDurationAvailable:(id)arg1;
-(void)moviePlayerUpdatedDestinationPlaceholder:(id)arg1;
-(void)moviePlayerWasSuspendedDuringPlayback:(id)arg1;
-(void)moviePlayerEncounteredAuthenticationError:(id)arg1;
-(BOOL)moviePlayerShouldNotifyOnPreparationError:(id)arg1;
-(BOOL)moviePlayerControllerShouldAllowExternalPlayback:(id)arg1;
-(void)moviePlayerDidChangeExternalPlaybackType:(id)arg1;
-(id)moviePlayerRequestsPickedAirplayRoute:(id)arg1;
-(void)moviePlayerHeadsetPlayPausePressed:(id)arg1;
-(void)moviePlayerHeadsetNextTrackPressed:(id)arg1;
-(void)moviePlayerHeadsetPreviousTrackPressed:(id)arg1;

@end


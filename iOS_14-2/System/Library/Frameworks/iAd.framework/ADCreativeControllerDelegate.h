/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
*/


@protocol ADCreativeControllerDelegate <NSObject>
@required
-(void)creativeControllerVideoTapped:(float)arg1 volume:(float)arg2;
-(void)creativeControllerVideoVolumeChanged:(float)arg1 playTime:(float)arg2;
-(void)creativeControllerTapGestureTimerDidExpireBeforePrimaryActionWasInvoked;
-(void)creativeControllerViewDidRequestCreateCalendarEvent:(id)arg1 withTapLocation:(CGPoint)arg2;
-(void)creativeControllerVideoMuted:(float)arg1;
-(void)creativeControllerVideoMoreInfoTapped:(float)arg1 volume:(float)arg2;
-(void)creativeControllerViewDidRequestExpandURL:(id)arg1 withMaximumSize:(CGSize)arg2 withTapLocation:(CGPoint)arg3;
-(void)creativeControllerViewDidRequestOpenURL:(id)arg1 withTapLocation:(CGPoint)arg2;
-(void)creativeControllerVideoPaused:(float)arg1 volume:(float)arg2;
-(void)creativeControllerVideoProgressed:(float)arg1 volume:(float)arg2;
-(void)creativeControllerVideoCreativeViewLoaded;
-(void)creativeControllerVideoCompletedWithVolume:(float)arg1;
-(void)creativeControllerVideoUnmuted:(float)arg1 volume:(float)arg2;
-(void)creativeControllerVideoResumedPlaying:(float)arg1 volume:(float)arg2;
-(void)creativeControllerVideoSkipAdTapped:(float)arg1 volume:(float)arg2;
-(void)creativeControllerNavigationAttemptBlockedDueToAccidentalTap;
-(void)creativeControllerVideoExitFullScreenTapped:(float)arg1 volume:(float)arg2;
-(void)creativeControllerVideoViewabilityChanged:(BOOL)arg1 playTime:(float)arg2 volume:(float)arg3;
-(void)creativeControllerViewDidRequestCloseWithTapLocation:(CGPoint)arg1;
-(void)creativeControllerVideoStartedPlaying:(float)arg1 volume:(float)arg2;
-(void)creativeControllerVideoFullScreenTapped:(float)arg1 volume:(float)arg2;

@end


/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUVideoPlayerEventTracker.h>

@class NSString;

@interface NULoggingVideoPlayerEventTracker : NSObject <NUVideoPlayerEventTracker>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)videoDidAppearWithVideoItem:(id)arg1 ;
-(void)videoDidDisappearWithVideoItem:(id)arg1 ;
-(void)playbackInitiatedWithVideoItem:(id)arg1 metadata:(id)arg2 ;
-(void)playbackStartedWithVideoItem:(id)arg1 metadata:(id)arg2 ;
-(void)playbackPausedWithVideoItem:(id)arg1 metadata:(id)arg2 ;
-(void)playbackResumedWithVideoItem:(id)arg1 metadata:(id)arg2 ;
-(void)playbackFinishedWithVideoItem:(id)arg1 metadata:(id)arg2 ;
-(void)playbackFailedWithVideoItem:(id)arg1 metadata:(id)arg2 ;
-(void)muteStateChanged:(BOOL)arg1 withVideoItem:(id)arg2 metadata:(id)arg3 ;
-(void)videoPlaybackPassedFirstQuartileWithVideoItem:(id)arg1 ;
-(void)videoPlaybackPassedSecondQuartileWithVideoItem:(id)arg1 ;
-(void)videoPlaybackPassedThirdQuartileWithVideoItem:(id)arg1 ;
-(void)userEngagedWithCallToActionBarWithVideoItem:(id)arg1 ;
-(void)userEngagedWithDiscoverMoreButtonWithVideoItem:(id)arg1 ;
-(void)userEngagedWithNowPlayingButtonWithVideoItem:(id)arg1 ;
-(void)userEngagedWithReplayButtonWithVideoItem:(id)arg1 ;
-(void)userEngagedWithAdvanceButtonWithVideoItem:(id)arg1 ;
@end


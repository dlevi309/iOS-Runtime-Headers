/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
*/

#import <libobjc.A.dylib/SXVideoEventTracker.h>
#import <libobjc.A.dylib/SXVideoAdEventTracker.h>

@interface NewsArticles.VideoAdProviderMetricsHelper : NSObject <SXVideoEventTracker, SXVideoAdEventTracker> {

	 diagnosticMetricsHelper;
	 metadata;
	 mediaMetricsHelper;

}
-(void)skipped;
-(void)playbackReadyToStart;
-(void)playbackStarted;
-(void)playbackPaused;
-(void)playbackResumed;
-(void)playbackFinished;
-(void)playbackFailedWithError:(id)arg1 ;
-(void)enteredFullscreen;
-(void)exitedFullscreen;
-(void)muteStateChanged:(BOOL)arg1 ;
-(void)playbackPassedQuartile:(unsigned long long)arg1 ;
-(void)tappedToToggleControlVisibility:(BOOL)arg1 ;
-(void)nextVideoStartedPlaying;
-(id)init;
@end


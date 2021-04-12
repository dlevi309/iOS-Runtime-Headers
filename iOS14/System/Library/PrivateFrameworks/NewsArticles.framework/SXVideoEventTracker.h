/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
*/


@protocol SXVideoEventTracker <NSObject>
@property (readonly,nonatomic) double impressionThreshold; 
@optional
-(void)playbackReadyToStart;
-(void)playbackStarted;
-(void)playbackPaused;
-(void)playbackResumed;
-(void)playbackFinished;
-(void)playbackFailedWithError:(id)arg1;
-(void)enteredFullscreen;
-(void)exitedFullscreen;
-(void)muteStateChanged:(BOOL)arg1;
-(void)playbackPassedQuartile:(unsigned long long)arg1;
-(void)playbackPassedQuartile:(unsigned long long)arg1;
-(void)tappedToToggleControlVisibility:(BOOL)arg1;
-(void)tappedToToggleControlVisibility:(BOOL)arg1;
-(void)playbackInitiatedWithButtonTapped:(BOOL)arg1;
-(void)playbackInitiatedWithButtonTapped:(BOOL)arg1;
-(void)timeElapsed:(double)arg1 duration:(double)arg2;
-(double)impressionThreshold;
-(void)playbackPassedImpressionThreshold;

@end


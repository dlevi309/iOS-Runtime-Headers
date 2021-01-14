/*
* Generated on Thursday, January 14, 2021 at 2:24:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
*/

#import <libobjc.A.dylib/SXVideoURLProviding.h>
#import <libobjc.A.dylib/SXVideoAdProviding.h>
#import <libobjc.A.dylib/SXVideoEventTracker.h>
#import <libobjc.A.dylib/SXVideoAdEventTracker.h>

@class UIView, UIButton;

@interface NewsArticles.VideoAdProvider : NSObject <SXVideoURLProviding, SXVideoAdProviding, SXVideoEventTracker, SXVideoAdEventTracker> {

	 journal;
	 appConfiguration;
	 presentationHandler;
	 tracker;
	 metricsHelper;
	 video;
	 metadata;

}

@property (readonly,nonatomic) unsigned long long skipThreshold; 
@property (readonly,nonatomic) BOOL hasAction; 
@property (readonly,nonatomic) UIView * metricsView; 
@property (readonly,nonatomic) UIButton * privacyMarker; 
@property (readonly,nonatomic) double impressionThreshold; 
-(void)skipped;
-(BOOL)hasAction;
-(/*^block*/id)loadWithCompletionBlock:(/*^block*/id)arg1 ;
-(UIButton *)privacyMarker;
-(unsigned long long)skipThreshold;
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
-(double)impressionThreshold;
-(void)playbackPassedImpressionThreshold;
-(UIView *)metricsView;
-(void)presentAction;
-(id)init;
@end


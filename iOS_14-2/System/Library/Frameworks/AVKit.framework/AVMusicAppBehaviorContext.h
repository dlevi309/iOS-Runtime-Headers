/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <AVKit/AVBehaviorContextInternal.h>
#import <AVKit/AVPlayerViewControllerBehaviorContext.h>
#import <AVKit/AVMetricsCollectionBehaviorContext.h>
#import <AVKit/AVBehaviorContext.h>

@class AVPlayerViewController, AVMusicAppBehavior, NSNumber, AVObservationController, AVPlayerController, NSString;

@interface AVMusicAppBehaviorContext : NSObject <AVBehaviorContextInternal, AVPlayerViewControllerBehaviorContext, AVMetricsCollectionBehaviorContext, AVBehaviorContext> {

	BOOL _showsSkipItemButtons;
	BOOL _skipToPreviousItemButtonEnabled;
	BOOL _skipToNextItemButtonEnabled;
	BOOL _scrubbing;
	AVPlayerViewController* _playerViewController;
	AVMusicAppBehavior* _behavior;
	NSNumber* _seekTargetTime;
	AVObservationController* _observationController;
	AVPlayerController* _playerController;

}

@property (assign,nonatomic,__weak) AVMusicAppBehavior * behavior;                                                       //@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,readonly) AVObservationController * observationController;                                          //@synthesize observationController=_observationController - In the implementation block
@property (nonatomic,retain) AVPlayerController * playerController;                                                      //@synthesize playerController=_playerController - In the implementation block
@property (assign,getter=isScrubbing,nonatomic) BOOL scrubbing;                                                          //@synthesize scrubbing=_scrubbing - In the implementation block
@property (nonatomic,retain) NSNumber * seekTargetTime;                                                                  //@synthesize seekTargetTime=_seekTargetTime - In the implementation block
@property (assign,nonatomic) BOOL showsSkipItemButtons;                                                                  //@synthesize showsSkipItemButtons=_showsSkipItemButtons - In the implementation block
@property (assign,getter=isSkipToPreviousItemButtonEnabled,nonatomic) BOOL skipToPreviousItemButtonEnabled;              //@synthesize skipToPreviousItemButtonEnabled=_skipToPreviousItemButtonEnabled - In the implementation block
@property (assign,getter=isSkipToNextItemButtonEnabled,nonatomic) BOOL skipToNextItemButtonEnabled;                      //@synthesize skipToNextItemButtonEnabled=_skipToNextItemButtonEnabled - In the implementation block
@property (nonatomic,__weak,readonly) AVPlayerViewController * playerViewController;                                     //@synthesize playerViewController=_playerViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setBehavior:(AVMusicAppBehavior *)arg1 ;
-(AVMusicAppBehavior *)behavior;
-(void)playerViewController:(id)arg1 didCollectMetricsEvent:(long long)arg2 ;
-(id)initWithAVKitOwner:(id)arg1 ;
-(void)willAddBehavior:(id)arg1 ;
-(void)didAddBehavior:(id)arg1 ;
-(void)willRemoveBehavior:(id)arg1 ;
-(void)didRemoveBehavior:(id)arg1 ;
-(void)setSkipToNextItemButtonEnabled:(BOOL)arg1 ;
-(void)setSkipToPreviousItemButtonEnabled:(BOOL)arg1 ;
-(void)setShowsSkipItemButtons:(BOOL)arg1 ;
-(void)_updateSkipItemButtonsEnabled;
-(void)_updatePlaybackControlsInclusion;
-(BOOL)showsSkipItemButtons;
-(NSNumber *)seekTargetTime;
-(BOOL)isSkipToPreviousItemButtonEnabled;
-(BOOL)isSkipToNextItemButtonEnabled;
-(void)setSeekTargetTime:(NSNumber *)arg1 ;
-(AVPlayerViewController *)playerViewController;
-(AVPlayerController *)playerController;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
-(void)viewDidLoad;
-(AVObservationController *)observationController;
-(BOOL)isScrubbing;
-(void)dealloc;
-(void)setScrubbing:(BOOL)arg1 ;
@end


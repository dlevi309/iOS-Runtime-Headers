/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <AVKit/AVBehaviorContextInternal.h>
#import <AVKit/AVPlayerViewControllerBehaviorContext.h>
#import <AVKit/AVMetricsCollectionBehaviorContext.h>
#import <AVKit/AVBehaviorContext.h>

@class AVPlayerViewController, AVMusicAppBehavior, AVObservationController, AVPlayerController, NSNumber, NSString;

@interface AVMusicAppBehaviorContext : NSObject <AVBehaviorContextInternal, AVPlayerViewControllerBehaviorContext, AVMetricsCollectionBehaviorContext, AVBehaviorContext> {

	BOOL _showsSkipItemButtons;
	BOOL _skipToPreviousItemButtonEnabled;
	BOOL _skipToNextItemButtonEnabled;
	BOOL _scrubbing;
	AVPlayerViewController* _playerViewController;
	AVMusicAppBehavior* _behavior;
	AVObservationController* _observationController;
	AVPlayerController* _playerController;
	NSNumber* _seekTargetTime;

}

@property (assign,nonatomic,__weak) AVMusicAppBehavior * behavior;                                                       //@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,readonly) AVObservationController * observationController;                                          //@synthesize observationController=_observationController - In the implementation block
@property (nonatomic,retain) AVPlayerController * playerController;                                                      //@synthesize playerController=_playerController - In the implementation block
@property (assign,getter=isScrubbing,nonatomic) BOOL scrubbing;                                                          //@synthesize scrubbing=_scrubbing - In the implementation block
@property (nonatomic,retain) NSNumber * seekTargetTime;                                                                  //@synthesize seekTargetTime=_seekTargetTime - In the implementation block
@property (assign,nonatomic) BOOL showsSkipItemButtons;                                                                  //@synthesize showsSkipItemButtons=_showsSkipItemButtons - In the implementation block
@property (assign,getter=isSkipToPreviousItemButtonEnabled,nonatomic) BOOL skipToPreviousItemButtonEnabled;              //@synthesize skipToPreviousItemButtonEnabled=_skipToPreviousItemButtonEnabled - In the implementation block
@property (assign,getter=isSkipToNextItemButtonEnabled,nonatomic) BOOL skipToNextItemButtonEnabled;                      //@synthesize skipToNextItemButtonEnabled=_skipToNextItemButtonEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) AVPlayerViewController * playerViewController;                                     //@synthesize playerViewController=_playerViewController - In the implementation block
-(void)dealloc;
-(void)viewDidLoad;
-(AVMusicAppBehavior *)behavior;
-(void)setBehavior:(AVMusicAppBehavior *)arg1 ;
-(BOOL)isScrubbing;
-(AVPlayerController *)playerController;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
-(AVPlayerViewController *)playerViewController;
-(AVObservationController *)observationController;
-(void)playerViewController:(id)arg1 didCollectMetricsEvent:(long long)arg2 ;
-(id)initWithAVKitOwner:(id)arg1 ;
-(void)willAddBehavior:(id)arg1 ;
-(void)didAddBehavior:(id)arg1 ;
-(void)willRemoveBehavior:(id)arg1 ;
-(void)didRemoveBehavior:(id)arg1 ;
-(void)setSkipToNextItemButtonEnabled:(BOOL)arg1 ;
-(void)setSkipToPreviousItemButtonEnabled:(BOOL)arg1 ;
-(void)setShowsSkipItemButtons:(BOOL)arg1 ;
-(NSNumber *)seekTargetTime;
-(void)_updateSkipItemButtonsEnabled;
-(BOOL)showsSkipItemButtons;
-(BOOL)isSkipToPreviousItemButtonEnabled;
-(BOOL)isSkipToNextItemButtonEnabled;
-(void)setScrubbing:(BOOL)arg1 ;
-(void)setSeekTargetTime:(NSNumber *)arg1 ;
@end


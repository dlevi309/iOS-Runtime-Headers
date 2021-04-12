/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
*/

#import <libobjc.A.dylib/ADPrerollViewDelegate.h>
#import <libobjc.A.dylib/ADPlayerDelegate.h>

@class MPMoviePlayerController, ADPrerollView, ADPlayer, NSString;

@interface ADPrerollController : NSObject <ADPrerollViewDelegate, ADPlayerDelegate> {

	BOOL _setupInProgress;
	BOOL _isObservingThirdPartyAVPlayer;
	unsigned long long _type;
	MPMoviePlayerController* _moviePlayerController;
	ADPrerollView* _view;
	ADPlayer* _adPlayer;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) unsigned long long type;                                           //@synthesize type=_type - In the implementation block
@property (assign,nonatomic,__weak) MPMoviePlayerController * moviePlayerController;              //@synthesize moviePlayerController=_moviePlayerController - In the implementation block
@property (nonatomic,retain) ADPrerollView * view;                                                //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) ADPlayer * adPlayer;                                                 //@synthesize adPlayer=_adPlayer - In the implementation block
@property (assign,nonatomic) BOOL setupInProgress;                                                //@synthesize setupInProgress=_setupInProgress - In the implementation block
@property (assign,nonatomic) BOOL isObservingThirdPartyAVPlayer;                                  //@synthesize isObservingThirdPartyAVPlayer=_isObservingThirdPartyAVPlayer - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                  //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(unsigned long long)type;
-(void)cancel;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(ADPrerollView *)view;
-(void)setView:(ADPrerollView *)arg1 ;
-(void)doneButtonPressed;
-(void)shutdown;
-(id)_advertisementView;
-(id)initWithMoviePlayerController:(id)arg1 ;
-(void)setMoviePlayerController:(MPMoviePlayerController *)arg1 ;
-(void)_appWillResignActive;
-(BOOL)setupInProgress;
-(void)setSetupInProgress:(BOOL)arg1 ;
-(BOOL)_beginPlayback;
-(ADPlayer *)adPlayer;
-(BOOL)_isEmbedded;
-(MPMoviePlayerController *)moviePlayerController;
-(void)setAdPlayer:(ADPlayer *)arg1 ;
-(void)_addAccessibilityIdentifier:(id)arg1 ;
-(BOOL)prerollViewRequestsEmbeddedStatus;
-(void)playButtonPressed;
-(void)pauseButtonPressed;
-(void)skipButtonPressed;
-(void)actionButtonPressed;
-(void)privacyButtonPressed;
-(void)adPlayerDidTimeout:(id)arg1 ;
-(void)adPlayerFailedToLoadAsset:(id)arg1 ;
-(void)adPlayerFailedToPlayWithUnknownError:(id)arg1 ;
-(void)adPlayer:(id)arg1 readyForPlaybackWithAVPlayer:(id)arg2 impressionProperties:(id)arg3 ;
-(void)adPlayer:(id)arg1 elapsedTime:(double)arg2 totalTime:(double)arg3 ;
-(void)adPlayerDidFinishPlayback:(id)arg1 ;
-(id)viewControllerForActionFromAdPlayer:(id)arg1 ;
-(void)adPlayer:(id)arg1 didChangePlaybackState:(unsigned long long)arg2 ;
-(void)playPrerollAdWithCompletion:(/*^block*/id)arg1 ;
-(void)adPlayerDidBeginAction:(id)arg1 ;
-(void)_handlePlaybackCompletion:(BOOL)arg1 ;
-(BOOL)isObservingThirdPartyAVPlayer;
-(void)setIsObservingThirdPartyAVPlayer:(BOOL)arg1 ;
@end


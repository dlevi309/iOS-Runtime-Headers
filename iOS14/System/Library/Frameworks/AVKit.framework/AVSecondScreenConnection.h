/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/


#import <AVKit/AVKit-Structs.h>
@class AVSecondScreenDebugAssistant, AVPlayer, AVPlayerLayer, AVSecondScreen, AVDisplayCriteria, AVObservationController, UIView, AVSecondScreenViewController, UIViewController;

@interface AVSecondScreenConnection : NSObject {

	BOOL _readyToConnect;
	BOOL _active;
	BOOL _playing;
	BOOL _requiresTVOutScreen;
	BOOL _ready;
	AVSecondScreenDebugAssistant* _debugAssistant;
	AVPlayer* _player;
	AVPlayerLayer* _playerLayer;
	AVSecondScreen* _connectedSecondScreen;
	AVDisplayCriteria* _preferredDisplayCriteria;
	AVObservationController* _observationController;
	UIView* _contentView;
	AVSecondScreenViewController* _secondScreenViewController;
	CGSize _maximumVideoResolution;

}

@property (assign,getter=isActive,nonatomic) BOOL active;                                            //@synthesize active=_active - In the implementation block
@property (assign,nonatomic,__weak) AVSecondScreen * connectedSecondScreen;                          //@synthesize connectedSecondScreen=_connectedSecondScreen - In the implementation block
@property (nonatomic,retain) AVDisplayCriteria * preferredDisplayCriteria;                           //@synthesize preferredDisplayCriteria=_preferredDisplayCriteria - In the implementation block
@property (assign,nonatomic) CGSize maximumVideoResolution;                                          //@synthesize maximumVideoResolution=_maximumVideoResolution - In the implementation block
@property (assign,getter=isReady,nonatomic) BOOL ready;                                              //@synthesize ready=_ready - In the implementation block
@property (assign,getter=isPlaying,nonatomic) BOOL playing;                                          //@synthesize playing=_playing - In the implementation block
@property (assign,nonatomic) BOOL requiresTVOutScreen;                                               //@synthesize requiresTVOutScreen=_requiresTVOutScreen - In the implementation block
@property (nonatomic,readonly) AVObservationController * observationController;                      //@synthesize observationController=_observationController - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                                   //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) AVSecondScreenViewController * secondScreenViewController;              //@synthesize secondScreenViewController=_secondScreenViewController - In the implementation block
@property (nonatomic,readonly) AVPlayer * player;                                                    //@synthesize player=_player - In the implementation block
@property (nonatomic,__weak,readonly) AVPlayerLayer * playerLayer;                                   //@synthesize playerLayer=_playerLayer - In the implementation block
@property (getter=isReadyToConnect,nonatomic,readonly) BOOL readyToConnect;                          //@synthesize readyToConnect=_readyToConnect - In the implementation block
@property (nonatomic,readonly) UIViewController * contentViewController; 
@property (nonatomic,readonly) AVSecondScreenDebugAssistant * debugAssistant;                        //@synthesize debugAssistant=_debugAssistant - In the implementation block
@property (nonatomic,readonly) CGSize videoDisplaySize; 
@property (nonatomic,readonly) double videoDisplayScale; 
-(AVPlayer *)player;
-(BOOL)isPlaying;
-(void)setActive:(BOOL)arg1 ;
-(CGSize)videoDisplaySize;
-(CGSize)maximumVideoResolution;
-(BOOL)isActive;
-(void)setPlaying:(BOOL)arg1 ;
-(UIViewController *)contentViewController;
-(void)_updatePreferredDisplayCriteria;
-(void)startUpdates;
-(void)setReady:(BOOL)arg1 ;
-(id)initWithPlayer:(id)arg1 playerLayer:(id)arg2 ;
-(AVSecondScreenDebugAssistant *)debugAssistant;
-(void)setPreferredDisplayCriteria:(AVDisplayCriteria *)arg1 ;
-(void)setReadyToConnect:(BOOL)arg1 ;
-(void)connectWithScreen:(id)arg1 active:(BOOL)arg2 ;
-(void)_loadSecondScreenViewControllerIfNeeded;
-(void)_postNotification:(id)arg1 oldValue:(id)arg2 newValue:(id)arg3 ;
-(void)_startObservingPlayer;
-(BOOL)_determineIsReadyToConnect;
-(BOOL)isReadyToConnect;
-(void)_updatePreferredDisplayCriteriaFromPreparedAssetIfNeeded:(id)arg1 ;
-(BOOL)_allowsNonAirPlayExternalPlayback;
-(BOOL)_currentItemIsReadyToPlayVideoOrLoadingWhileActive;
-(AVSecondScreen *)connectedSecondScreen;
-(void)setConnectedSecondScreen:(AVSecondScreen *)arg1 ;
-(BOOL)requiresTVOutScreen;
-(void)setRequiresTVOutScreen:(BOOL)arg1 ;
-(void)setMaximumVideoResolution:(CGSize)arg1 ;
-(BOOL)isReady;
-(double)videoDisplayScale;
-(void)setContentView:(UIView *)arg1 ;
-(UIView *)contentView;
-(void)setSecondScreenViewController:(AVSecondScreenViewController *)arg1 ;
-(AVSecondScreenViewController *)secondScreenViewController;
-(AVDisplayCriteria *)preferredDisplayCriteria;
-(void)setPlayerLayer:(AVPlayerLayer *)arg1 ;
-(AVObservationController *)observationController;
-(void)dealloc;
-(AVPlayerLayer *)playerLayer;
@end


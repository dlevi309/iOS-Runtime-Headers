/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/


@class AVPlayer, UIScene, NSString, AVSecondScreenViewController, CADisplay, AVObservationController;

@interface AVSecondScreenDebugAssistant : NSObject {

	AVPlayer* _player;
	UIScene* _scene;
	NSString* _debugText;
	AVSecondScreenViewController* _secondScreenViewController;
	CADisplay* _debugInfoDisplay;
	AVObservationController* _observationController;

}

@property (nonatomic,retain) CADisplay * debugInfoDisplay;                                                  //@synthesize debugInfoDisplay=_debugInfoDisplay - In the implementation block
@property (nonatomic,retain) AVObservationController * observationController;                               //@synthesize observationController=_observationController - In the implementation block
@property (nonatomic,retain) AVPlayer * player;                                                             //@synthesize player=_player - In the implementation block
@property (assign,nonatomic,__weak) UIScene * scene;                                                        //@synthesize scene=_scene - In the implementation block
@property (nonatomic,copy) NSString * debugText;                                                            //@synthesize debugText=_debugText - In the implementation block
@property (assign,nonatomic,__weak) AVSecondScreenViewController * secondScreenViewController;              //@synthesize secondScreenViewController=_secondScreenViewController - In the implementation block
-(AVPlayer *)player;
-(UIScene *)scene;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(void)setScene:(UIScene *)arg1 ;
-(id)init;
-(CADisplay *)debugInfoDisplay;
-(void)setDebugInfoDisplay:(CADisplay *)arg1 ;
-(void)setObservationController:(AVObservationController *)arg1 ;
-(NSString *)debugText;
-(id)_currentDisplay;
-(void)setSecondScreenViewController:(AVSecondScreenViewController *)arg1 ;
-(id)_currentEnabledVideoTrack;
-(id)_currentVideoDynamicRange;
-(void)_updateDebugLabelText;
-(void)_actuallyUpdateDebugLabelTextWithCurrentResolution:(id)arg1 currentVideoDynamicRange:(id)arg2 ;
-(AVSecondScreenViewController *)secondScreenViewController;
-(void)setDebugText:(NSString *)arg1 ;
-(AVObservationController *)observationController;
-(void)dealloc;
@end


/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <UIKitCore/UIViewController.h>

@class AVPlayerViewController, PMTitleSubtitleView, UIView;

@interface PMRotationViewController : UIViewController {

	BOOL _zoomedToFill;
	BOOL _preventRotation;
	AVPlayerViewController* _playerViewController;
	PMTitleSubtitleView* _titleView;
	/*^block*/id _playerDidSwapBlock;
	double _orientationSwitchTime;
	id _proVideoPeriodicCaller;
	UIView* _playerRotationView;
	CGSize _playerSize;

}

@property (assign,nonatomic) BOOL preventRotation;                                       //@synthesize preventRotation=_preventRotation - In the implementation block
@property (assign,nonatomic) CGSize playerSize;                                          //@synthesize playerSize=_playerSize - In the implementation block
@property (copy) id playerDidSwapBlock;                                                  //@synthesize playerDidSwapBlock=_playerDidSwapBlock - In the implementation block
@property (assign,nonatomic) double orientationSwitchTime;                               //@synthesize orientationSwitchTime=_orientationSwitchTime - In the implementation block
@property (nonatomic,retain) id proVideoPeriodicCaller;                                  //@synthesize proVideoPeriodicCaller=_proVideoPeriodicCaller - In the implementation block
@property (nonatomic,retain) UIView * playerRotationView;                                //@synthesize playerRotationView=_playerRotationView - In the implementation block
@property (nonatomic,retain) AVPlayerViewController * playerViewController;              //@synthesize playerViewController=_playerViewController - In the implementation block
@property (nonatomic,retain) PMTitleSubtitleView * titleView;                            //@synthesize titleView=_titleView - In the implementation block
@property (assign,nonatomic) BOOL zoomedToFill;                                          //@synthesize zoomedToFill=_zoomedToFill - In the implementation block
-(void)dealloc;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(PMTitleSubtitleView *)titleView;
-(void)setTitleView:(PMTitleSubtitleView *)arg1 ;
-(id)playerItem;
-(AVPlayerViewController *)playerViewController;
-(void)setPlayerViewController:(AVPlayerViewController *)arg1 ;
-(void)setZoomedToFill:(BOOL)arg1 ;
-(void)externalClientMessedWithPlayerItem;
-(void)gentleRebuild;
-(BOOL)zoomedToFill;
-(void)extremeRebuild;
-(void)setPreventRotation:(BOOL)arg1 ;
-(void)ImAfraidOfStuckBlur;
-(void)signalCustomCompositorScheduler;
-(void)signalCustomCompositorScheduler:(SCD_Struct_Mi3)arg1 playerRate:(float)arg2 ;
-(BOOL)preventRotation;
-(void)setPlayerRotationView:(UIView *)arg1 ;
-(UIView *)playerRotationView;
-(void)createAVPlayer;
-(void)destroyAVPlayer;
-(id)_snapshotPlayer;
-(SCD_Struct_Mi3)currentPlayerTime;
-(void)setOrientationSwitchTime:(double)arg1 ;
-(void)setPlayerSize:(CGSize)arg1 ;
-(void)refreshCompositionIfNotPlaying;
-(id)playerDidSwapBlock;
-(double)orientationSwitchTime;
-(void)adjustPlayerSizeAndViewTransform:(CGSize)arg1 ;
-(void)setPlayerDidSwapBlock:(id)arg1 ;
-(id)_snapshotPlayerWithAspect:(double)arg1 ;
-(void)addProVideoTimeObserver;
-(void)removeProVideoTimeObserver;
-(id)proVideoPeriodicCaller;
-(void)setProVideoPeriodicCaller:(id)arg1 ;
-(void)effectRenderedTime:(SCD_Struct_Mi3)arg1 ;
-(CGSize)playerSize;
@end


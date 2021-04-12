/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIViewController.h>

@class UIView, AVPlayerLayer, UILabel, AVSecondScreenPlayerLayerView;

@interface AVSecondScreenViewController : UIViewController {

	BOOL _playingOnSecondScreen;
	UIView* _contentView;
	AVPlayerLayer* _sourcePlayerLayer;
	UILabel* _debugLabel;
	AVSecondScreenPlayerLayerView* _playerLayerView;
	CGRect _initialScreenBoundsHint;

}

@property (nonatomic,readonly) UILabel * debugLabel;                                                 //@synthesize debugLabel=_debugLabel - In the implementation block
@property (nonatomic,retain) AVSecondScreenPlayerLayerView * playerLayerView;                        //@synthesize playerLayerView=_playerLayerView - In the implementation block
@property (assign,getter=isPlayingOnSecondScreen,nonatomic) BOOL playingOnSecondScreen;              //@synthesize playingOnSecondScreen=_playingOnSecondScreen - In the implementation block
@property (assign,nonatomic) CGRect initialScreenBoundsHint;                                         //@synthesize initialScreenBoundsHint=_initialScreenBoundsHint - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                                   //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic,__weak) AVPlayerLayer * sourcePlayerLayer;                               //@synthesize sourcePlayerLayer=_sourcePlayerLayer - In the implementation block
@property (nonatomic,readonly) CGSize videoDisplaySize; 
-(void)dealloc;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_updateLayout;
-(BOOL)isPlayingOnSecondScreen;
-(void)setPlayingOnSecondScreen:(BOOL)arg1 ;
-(AVSecondScreenPlayerLayerView *)playerLayerView;
-(void)setPlayerLayerView:(AVSecondScreenPlayerLayerView *)arg1 ;
-(CGSize)videoDisplaySize;
-(void)setDebugText:(id)arg1 ;
-(id)debugText;
-(void)loadPlayerLayerViewIfNeeded;
-(void)setSourcePlayerLayer:(AVPlayerLayer *)arg1 ;
-(void)setInitialScreenBoundsHint:(CGRect)arg1 ;
-(void)_updateContentViewIfNeeded;
-(CGRect)initialScreenBoundsHint;
-(AVPlayerLayer *)sourcePlayerLayer;
-(UILabel *)debugLabel;
@end


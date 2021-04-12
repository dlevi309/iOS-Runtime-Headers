/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/JTClipSequenceDisplayViewController.h>

@protocol JTAVPlayerViewer;
@class JTClip, UIView, UIViewController, JTCompositionClipDataSource;

@interface JTClipPlayerViewController : JTClipSequenceDisplayViewController {

	BOOL _disableProjectBackgroundAudio;
	JTClip* _clip;
	UIView* _playerContainerView;
	UIView* _placeholderContainerView;
	UIViewController*<JTAVPlayerViewer> _avPlayerView;
	JTCompositionClipDataSource* _clipDataSource;

}

@property (nonatomic,retain) UIView * playerContainerView;                                         //@synthesize playerContainerView=_playerContainerView - In the implementation block
@property (nonatomic,retain) UIView * placeholderContainerView;                                    //@synthesize placeholderContainerView=_placeholderContainerView - In the implementation block
@property (assign,nonatomic,__weak) UIViewController*<JTAVPlayerViewer> avPlayerView;              //@synthesize avPlayerView=_avPlayerView - In the implementation block
@property (nonatomic,retain) JTCompositionClipDataSource * clipDataSource;                         //@synthesize clipDataSource=_clipDataSource - In the implementation block
@property (nonatomic,retain) JTClip * clip;                                                        //@synthesize clip=_clip - In the implementation block
@property (assign,nonatomic) BOOL disableProjectBackgroundAudio;                                   //@synthesize disableProjectBackgroundAudio=_disableProjectBackgroundAudio - In the implementation block
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)prepareForSegue:(id)arg1 sender:(id)arg2 ;
-(JTClip *)clip;
-(void)setClip:(JTClip *)arg1 ;
-(UIView *)playerContainerView;
-(void)updateCompositionForEffectChange;
-(void)setPlayerContainerView:(UIView *)arg1 ;
-(void)setDontRenderLiveTitles:(BOOL)arg1 ;
-(void)setDuckAllAudioClips:(BOOL)arg1 ;
-(JTCompositionClipDataSource *)clipDataSource;
-(void)reloadClip;
-(void)setClipDataSource:(JTCompositionClipDataSource *)arg1 ;
-(void)reloadClipAndSeekToStart:(BOOL)arg1 ;
-(void)setAvPlayerView:(UIViewController*<JTAVPlayerViewer>)arg1 ;
-(UIViewController*<JTAVPlayerViewer>)avPlayerView;
-(void)setDisableProjectBackgroundAudio:(BOOL)arg1 ;
-(id)playerViewer;
-(BOOL)disableProjectBackgroundAudio;
-(UIView *)placeholderContainerView;
-(void)setPlaceholderContainerView:(UIView *)arg1 ;
@end


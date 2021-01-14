/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/JFXCompositionPlayerViewController.h>

@protocol JFXAVPlayerViewer;
@class CFXClip, UIView, UIViewController, CFXClipCompositionDataSource;

@interface CFXClipPlayerViewController : JFXCompositionPlayerViewController {

	CFXClip* _clip;
	UIView* _playerContainerView;
	UIView* _placeholderContainerView;
	UIViewController*<JFXAVPlayerViewer> _avPlayerView;
	CFXClipCompositionDataSource* _clipDataSource;

}

@property (nonatomic,retain) UIView * playerContainerView;                                          //@synthesize playerContainerView=_playerContainerView - In the implementation block
@property (nonatomic,retain) UIView * placeholderContainerView;                                     //@synthesize placeholderContainerView=_placeholderContainerView - In the implementation block
@property (assign,nonatomic,__weak) UIViewController*<JFXAVPlayerViewer> avPlayerView;              //@synthesize avPlayerView=_avPlayerView - In the implementation block
@property (nonatomic,retain) CFXClipCompositionDataSource * clipDataSource;                         //@synthesize clipDataSource=_clipDataSource - In the implementation block
@property (nonatomic,retain) CFXClip * clip;                                                        //@synthesize clip=_clip - In the implementation block
-(CFXClip *)clip;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)prepareForSegue:(id)arg1 sender:(id)arg2 ;
-(void)setClip:(CFXClip *)arg1 ;
-(void)updateCompositionForEffectChange;
-(UIView *)playerContainerView;
-(void)displayCompositionUpdateLoadingView:(id)arg1 ;
-(void)setPlayerContainerView:(UIView *)arg1 ;
-(id)playerViewer;
-(UIView *)placeholderContainerView;
-(CFXClipCompositionDataSource *)clipDataSource;
-(void)reloadClip;
-(void)setClipDataSource:(CFXClipCompositionDataSource *)arg1 ;
-(void)reloadClipAndSeekToStart:(BOOL)arg1 ;
-(void)setAvPlayerView:(UIViewController*<JFXAVPlayerViewer>)arg1 ;
-(UIViewController*<JFXAVPlayerViewer>)avPlayerView;
-(void)setPlaceholderContainerView:(UIView *)arg1 ;
@end


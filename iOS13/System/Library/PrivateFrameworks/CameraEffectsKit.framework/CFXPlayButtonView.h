/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol CFXPlayButtonViewDelegate;
@class CAShapeLayer, UIView, UIButton, UIImage;

@interface CFXPlayButtonView : UIView {

	id<CFXPlayButtonViewDelegate> _delegate;
	CAShapeLayer* _playControlMaskLayer;
	UIView* _contentView;
	UIButton* _playButton;
	UIImage* _playImage;
	UIImage* _pauseImage;

}

@property (nonatomic,retain) CAShapeLayer * playControlMaskLayer;                        //@synthesize playControlMaskLayer=_playControlMaskLayer - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                       //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic,__weak) UIButton * playButton;                               //@synthesize playButton=_playButton - In the implementation block
@property (nonatomic,retain) UIImage * playImage;                                        //@synthesize playImage=_playImage - In the implementation block
@property (nonatomic,retain) UIImage * pauseImage;                                       //@synthesize pauseImage=_pauseImage - In the implementation block
@property (assign,nonatomic,__weak) id<CFXPlayButtonViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(id<CFXPlayButtonViewDelegate>)delegate;
-(void)setDelegate:(id<CFXPlayButtonViewDelegate>)arg1 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIButton *)playButton;
-(void)setPlayButton:(UIButton *)arg1 ;
-(UIImage *)playImage;
-(UIImage *)pauseImage;
-(void)setPlayImage:(UIImage *)arg1 ;
-(void)setPauseImage:(UIImage *)arg1 ;
-(void)playButtonTapped:(id)arg1 ;
-(void)sharedInit;
-(void)notifyPlaybackDidStart;
-(void)notifyPlaybackDidStop;
-(void)setPlayControlMaskLayer:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)playControlMaskLayer;
-(void)notifyWasTapped;
@end


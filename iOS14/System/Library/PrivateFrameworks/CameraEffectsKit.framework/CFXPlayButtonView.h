/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(id<CFXPlayButtonViewDelegate>)delegate;
-(UIButton *)playButton;
-(void)setDelegate:(id<CFXPlayButtonViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setContentView:(UIView *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIImage *)playImage;
-(void)setPlayButton:(UIButton *)arg1 ;
-(UIView *)contentView;
-(UIImage *)pauseImage;
-(void)playButtonTapped:(id)arg1 ;
-(void)setPlayImage:(UIImage *)arg1 ;
-(void)setPauseImage:(UIImage *)arg1 ;
-(void)sharedInit;
-(void)notifyPlaybackDidStart;
-(void)notifyPlaybackDidStop;
-(void)setPlayControlMaskLayer:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)playControlMaskLayer;
-(void)notifyWasTapped;
@end


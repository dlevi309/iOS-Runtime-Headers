/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SUICFlamesViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <SiriUI/SiriUISiriStatusViewProtocol.h>

@protocol OS_dispatch_queue, SiriUISiriStatusViewDelegate, SiriUISiriStatusViewAnimationDelegate;
@class UIView, UILongPressGestureRecognizer, SUICFlamesView, AVPlayerLayer, AVPlayerLooper, AVQueuePlayer, AVPlayerItem, AVAudioSession, NSObject, UIScreen, SiriUIConfiguration, NSString;

@interface SiriUISiriStatusView : UIView <SUICFlamesViewDelegate, UIGestureRecognizerDelegate, SiriUISiriStatusViewProtocol> {

	UIView* _touchInputView;
	UILongPressGestureRecognizer* _longPressRecognizer;
	UIView* _flamesContainerView;
	SUICFlamesView* _flamesView;
	UIView* _glyphView;
	AVPlayerLayer* _glyphLayer;
	AVPlayerLooper* _glyphPlayerLooper;
	AVQueuePlayer* _glyphQueuePlayer;
	AVPlayerItem* _glyphPlayerItem;
	AVAudioSession* _glyphAudioSession;
	NSObject*<OS_dispatch_queue> _glyphConfigurationQueue;
	double _lastStateChangeTime;
	UIScreen* _screen;
	long long _deferredFlamesViewState;
	SiriUIConfiguration* _configuration;
	BOOL _textInputEnabled;
	BOOL _siriGlyphHidden;
	BOOL _flamesViewDeferred;
	BOOL _inUITrackingMode;
	BOOL _paused;
	long long _mode;
	double _disabledMicOpacity;
	id<SiriUISiriStatusViewDelegate> _delegate;
	double _flamesViewWidth;
	id<SiriUISiriStatusViewAnimationDelegate> _animationDelegate;

}

@property (assign,nonatomic,__weak) id<SiriUISiriStatusViewAnimationDelegate> animationDelegate;              //@synthesize animationDelegate=_animationDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long mode;                                                                  //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) double flamesViewWidth;                                                          //@synthesize flamesViewWidth=_flamesViewWidth - In the implementation block
@property (assign,nonatomic) double disabledMicOpacity;                                                       //@synthesize disabledMicOpacity=_disabledMicOpacity - In the implementation block
@property (assign,nonatomic,__weak) id<SiriUISiriStatusViewDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIView * flamesContainerView; 
@property (assign,nonatomic) BOOL flamesViewDeferred;                                                         //@synthesize flamesViewDeferred=_flamesViewDeferred - In the implementation block
@property (assign,getter=isInUITrackingMode,nonatomic) BOOL inUITrackingMode;                                 //@synthesize inUITrackingMode=_inUITrackingMode - In the implementation block
@property (assign,nonatomic) BOOL paused;                                                                     //@synthesize paused=_paused - In the implementation block
@property (nonatomic,readonly) double statusViewHeight; 
+(double)glyphHeightForScreen:(id)arg1 ;
+(CGRect)activeFrameForScreen:(id)arg1 frame:(CGRect)arg2 safeAreaInsets:(UIEdgeInsets)arg3 ;
-(void)dealloc;
-(id<SiriUISiriStatusViewDelegate>)delegate;
-(void)setDelegate:(id<SiriUISiriStatusViewDelegate>)arg1 ;
-(void)setMode:(long long)arg1 ;
-(long long)mode;
-(BOOL)paused;
-(void)setPaused:(BOOL)arg1 ;
-(UIEdgeInsets)safeAreaInsets;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)safeAreaInsetsDidChange;
-(float)audioLevelForFlamesView:(id)arg1 ;
-(id)_flamesView;
-(void)setAnimationDelegate:(id<SiriUISiriStatusViewAnimationDelegate>)arg1 ;
-(id<SiriUISiriStatusViewAnimationDelegate>)animationDelegate;
-(void)_handleKeyboardWillHideNotification:(id)arg1 ;
-(void)fadeOutCurrentAura;
-(void)_micButtonTapped:(id)arg1 ;
-(void)_micButtonHeld:(id)arg1 ;
-(void)_handleKeyboardDidShowNotification:(id)arg1 ;
-(double)_statusViewHeight;
-(void)_animateSiriGlyphHidden:(BOOL)arg1 ;
-(void)_setupOrbIfNeeded:(/*^block*/id)arg1 ;
-(CGRect)_flamesViewFrame;
-(void)_layoutFlamesViewIfNeeded;
-(CGRect)_flamesFrame;
-(double)flamesViewWidth;
-(void)_setFlamesViewState:(long long)arg1 ;
-(void)_attachFlamesViewIfNeeded;
-(CGRect)_siriGlyphTappableRect;
-(void)setupOrbIfNeeded;
-(void)forceMicVisible:(BOOL)arg1 ;
-(void)setFlamesViewWidth:(double)arg1 ;
-(double)disabledMicOpacity;
-(void)setDisabledMicOpacity:(double)arg1 ;
-(UIView *)flamesContainerView;
-(BOOL)flamesViewDeferred;
-(void)setFlamesViewDeferred:(BOOL)arg1 ;
-(BOOL)isInUITrackingMode;
-(void)setInUITrackingMode:(BOOL)arg1 ;
-(double)statusViewHeight;
-(id)initWithFrame:(CGRect)arg1 screen:(id)arg2 textInputEnabled:(BOOL)arg3 configuration:(id)arg4 ;
@end


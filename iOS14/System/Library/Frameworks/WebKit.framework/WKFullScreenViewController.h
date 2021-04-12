/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIToolbarDelegate.h>

@class NSString, WKWebView;

@interface WKFullScreenViewController : UIViewController <UIGestureRecognizerDelegate, UIToolbarDelegate> {

	RetainPtr<UILongPressGestureRecognizer>* _touchGestureRecognizer;
	RetainPtr<UIView>* _animatingView;
	RetainPtr<WKFullscreenStackView>* _stackView;
	RetainPtr<_WKExtrinsicButton>* _cancelButton;
	RetainPtr<_WKExtrinsicButton>* _pipButton;
	RetainPtr<UIButton>* _locationButton;
	RetainPtr<UILayoutGuide>* _topGuide;
	RetainPtr<NSLayoutConstraint>* _topConstraint;
	FullscreenTouchSecheuristic _secheuristic;
	WKFullScreenViewControllerPlaybackSessionModelClient* _playbackClient;
	double _nonZeroStatusBarHeight;
	BOOL _prefersStatusBarHidden;
	BOOL _prefersHomeIndicatorAutoHidden;
	BOOL _playing;
	BOOL _pictureInPictureActive;
	BOOL _animating;
	id _target;
	SEL _exitFullScreenAction;
	NSString* _location;
	WKWebView* __webView;

}

@property (assign,nonatomic,__weak) WKWebView * _webView;                                              //@synthesize _webView=__webView - In the implementation block
@property (nonatomic,readonly) WebFullScreenManagerProxy* _manager; 
@property (nonatomic,readonly) RectEdges<float> _effectiveFullscreenInsets; 
@property (nonatomic,retain) id target;                                                                //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL exitFullScreenAction;                                                 //@synthesize exitFullScreenAction=_exitFullScreenAction - In the implementation block
@property (nonatomic,copy) NSString * location;                                                        //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL prefersStatusBarHidden;                                              //@synthesize prefersStatusBarHidden=_prefersStatusBarHidden - In the implementation block
@property (assign,nonatomic) BOOL prefersHomeIndicatorAutoHidden;                                      //@synthesize prefersHomeIndicatorAutoHidden=_prefersHomeIndicatorAutoHidden - In the implementation block
@property (assign,getter=isPlaying,nonatomic) BOOL playing;                                            //@synthesize playing=_playing - In the implementation block
@property (assign,getter=isPictureInPictureActive,nonatomic) BOOL pictureInPictureActive;              //@synthesize pictureInPictureActive=_pictureInPictureActive - In the implementation block
@property (assign,getter=isAnimating,nonatomic) BOOL animating;                                        //@synthesize animating=_animating - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTarget:(id)arg1 ;
-(BOOL)prefersStatusBarHidden;
-(WebFullScreenManagerProxy*)_manager;
-(BOOL)isPlaying;
-(void)setAnimating:(BOOL)arg1 ;
-(void)hideUI;
-(void)showUI;
-(void)viewWillAppear:(BOOL)arg1 ;
-(NSString *)location;
-(void)setPlaying:(BOOL)arg1 ;
-(WKWebView *)_webView;
-(void)setLocation:(NSString *)arg1 ;
-(id)initWithWebView:(id)arg1 ;
-(long long)preferredStatusBarStyle;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)target;
-(void)videoControlsManagerDidChange;
-(void)loadView;
-(BOOL)isPictureInPictureActive;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)set_webView:(WKWebView *)arg1 ;
-(void)_statusBarFrameDidChange:(id)arg1 ;
-(void)setPrefersStatusBarHidden:(BOOL)arg1 ;
-(void)setPrefersHomeIndicatorAutoHidden:(BOOL)arg1 ;
-(void)_cancelAction:(id)arg1 ;
-(BOOL)isAnimating;
-(void)_updateWebViewFullscreenInsets;
-(void)_togglePiPAction:(id)arg1 ;
-(void)_touchDetected:(id)arg1 ;
-(SEL)exitFullScreenAction;
-(void)_showPhishingAlert;
-(RectEdges<float>)_effectiveFullscreenInsets;
-(void)setAnimatingViewAlpha:(double)arg1 ;
-(void)setPictureInPictureActive:(BOOL)arg1 ;
-(void)setExitFullScreenAction:(SEL)arg1 ;
-(void)viewDidLayoutSubviews;
-(BOOL)prefersHomeIndicatorAutoHidden;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)dealloc;
@end


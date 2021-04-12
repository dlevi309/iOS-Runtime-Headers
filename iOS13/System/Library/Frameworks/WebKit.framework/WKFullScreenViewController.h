/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	WKFullScreenViewControllerVideoFullscreenModelClient* _videoFullscreenClient;
	double _nonZeroStatusBarHeight;
	BOOL _prefersStatusBarHidden;
	BOOL _prefersHomeIndicatorAutoHidden;
	BOOL _playing;
	BOOL _pictureInPictureActive;
	BOOL _animating;
	id _target;
	SEL _action;
	NSString* _location;
	WKWebView* __webView;

}

@property (assign,nonatomic,__weak) WKWebView * _webView;                                              //@synthesize _webView=__webView - In the implementation block
@property (nonatomic,readonly) WebFullScreenManagerProxy* _manager; 
@property (nonatomic,readonly) RectEdges<float> _effectiveFullscreenInsets; 
@property (nonatomic,retain) id target;                                                                //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                                                               //@synthesize action=_action - In the implementation block
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
-(void)dealloc;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(WebFullScreenManagerProxy*)_manager;
-(SEL)action;
-(NSString *)location;
-(void)setLocation:(NSString *)arg1 ;
-(void)loadView;
-(WKWebView *)_webView;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(BOOL)isAnimating;
-(void)setAction:(SEL)arg1 ;
-(long long)preferredStatusBarStyle;
-(BOOL)prefersHomeIndicatorAutoHidden;
-(BOOL)prefersStatusBarHidden;
-(void)setAnimating:(BOOL)arg1 ;
-(BOOL)isPlaying;
-(BOOL)isPictureInPictureActive;
-(void)videoControlsManagerDidChange;
-(id)initWithWebView:(id)arg1 ;
-(void)_statusBarFrameDidChange:(id)arg1 ;
-(void)set_webView:(WKWebView *)arg1 ;
-(void)hideUI;
-(void)setPrefersStatusBarHidden:(BOOL)arg1 ;
-(void)setPrefersHomeIndicatorAutoHidden:(BOOL)arg1 ;
-(void)setPlaying:(BOOL)arg1 ;
-(void)_updateWebViewFullscreenInsets;
-(void)showUI;
-(void)_cancelAction:(id)arg1 ;
-(void)_togglePiPAction:(id)arg1 ;
-(void)_touchDetected:(id)arg1 ;
-(void)_showPhishingAlert;
-(RectEdges<float>)_effectiveFullscreenInsets;
-(void)setPictureInPictureActive:(BOOL)arg1 ;
-(void)willEnterPictureInPicture;
-(void)didEnterPictureInPicture;
-(void)failedToEnterPictureInPicture;
@end


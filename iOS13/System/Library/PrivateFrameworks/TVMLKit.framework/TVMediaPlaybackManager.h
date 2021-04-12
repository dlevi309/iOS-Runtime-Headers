/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol TVMediaController, TVMediaPlaybackManagerDelegate;
@class NSTimer, _TVNonFocusSwipeUpCapture, UIViewController, UITapGestureRecognizer, UIPanGestureRecognizer, NSString;

@interface TVMediaPlaybackManager : NSObject <UIGestureRecognizerDelegate> {

	int _mediaPlaybackState;
	int _mediaPlaybackTrigger;
	unsigned long long _mediaPlaybackStateModifier;
	unsigned long long _mediaPlaybackTriggerModifier;
	NSTimer* _backgroundedTimer;
	_TVNonFocusSwipeUpCapture* _swipeUpCapture;
	struct {
		BOOL hasShouldEnableUIModeImplicitly;
		BOOL hasEvaluateSwipeUpMessage;
		BOOL hasPresentPlaybackController;
	}  _delegateFlags;
	BOOL _isFirstAppearance;
	BOOL _goesToForegroundOnFirstAppear;
	UIViewController*<TVMediaController> _mediaController;
	id<TVMediaPlaybackManagerDelegate> _delegate;
	UITapGestureRecognizer* _menuGestureRecognizer;
	double _showcaseFactor;

}

@property (nonatomic,readonly) UIViewController*<TVMediaController> mediaController;              //@synthesize mediaController=_mediaController - In the implementation block
@property (assign,nonatomic,__weak) id<TVMediaPlaybackManagerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * menuGestureRecognizer;                    //@synthesize menuGestureRecognizer=_menuGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UIPanGestureRecognizer * swipeUpGestureRecognizer; 
@property (assign,nonatomic) double showcaseFactor;                                               //@synthesize showcaseFactor=_showcaseFactor - In the implementation block
@property (nonatomic,readonly) BOOL shouldHideUI; 
@property (nonatomic,readonly) long long currentUIMode; 
@property (assign,nonatomic) BOOL goesToForegroundOnFirstAppear;                                  //@synthesize goesToForegroundOnFirstAppear=_goesToForegroundOnFirstAppear - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<TVMediaPlaybackManagerDelegate>)delegate;
-(void)setDelegate:(id<TVMediaPlaybackManagerDelegate>)arg1 ;
-(UIViewController*<TVMediaController>)mediaController;
-(void)onAppear;
-(void)onDisappear;
-(BOOL)_shouldPause;
-(UITapGestureRecognizer *)menuGestureRecognizer;
-(double)showcaseFactor;
-(void)setShowcaseFactor:(double)arg1 ;
-(void)_onMenu;
-(void)_onSwipeUp;
-(void)_processTrigger;
-(long long)currentUIMode;
-(void)_onShowcaseFactorDidChange;
-(int)_processUndefinedStateTriggers;
-(int)_processBackgroundedStateTriggers;
-(int)_processForegroundedStateTriggers;
-(int)_processWaitingForTimeoutStateTriggers;
-(int)_processWillBeBackgroundedStateTriggers;
-(int)_processWillBeForegroundedStateTriggers;
-(int)_processPausedStateTriggers;
-(void)_processStateExit;
-(void)_processStateEnter;
-(BOOL)_canMenu;
-(UIPanGestureRecognizer *)swipeUpGestureRecognizer;
-(BOOL)_canSwipeUp;
-(void)_scheduleBackgroundedTimer;
-(void)_onTimeout;
-(BOOL)goesToForegroundOnFirstAppear;
-(id)initWithMediaController:(id)arg1 ;
-(void)onEvent;
-(void)onMediaControllerStateDidChange;
-(BOOL)onSupplementaryUIShouldPresent;
-(void)onSupplementaryUIShouldDismiss;
-(BOOL)shouldHideUI;
-(void)setGoesToForegroundOnFirstAppear:(BOOL)arg1 ;
@end


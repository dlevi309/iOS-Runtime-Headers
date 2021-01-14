/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<TVMediaPlaybackManagerDelegate>)delegate;
-(UIViewController*<TVMediaController>)mediaController;
-(BOOL)_shouldPause;
-(void)setDelegate:(id<TVMediaPlaybackManagerDelegate>)arg1 ;
-(void)onAppear;
-(void)dealloc;
-(void)_onMenu;
-(void)onEvent;
-(void)onDisappear;
-(double)showcaseFactor;
-(void)onSupplementaryUIShouldDismiss;
-(long long)currentUIMode;
-(id)initWithMediaController:(id)arg1 ;
-(UITapGestureRecognizer *)menuGestureRecognizer;
-(void)setShowcaseFactor:(double)arg1 ;
-(void)_onSwipeUp;
-(void)_processTrigger;
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
-(void)onMediaControllerStateDidChange;
-(BOOL)onSupplementaryUIShouldPresent;
-(BOOL)shouldHideUI;
-(void)setGoesToForegroundOnFirstAppear:(BOOL)arg1 ;
@end


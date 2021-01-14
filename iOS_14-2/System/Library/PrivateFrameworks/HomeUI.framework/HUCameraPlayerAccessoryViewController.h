/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/HFCameraPlaybackEngineObserver.h>

@protocol HFCameraRecordingEvent;
@class HFCameraPlaybackEngine, UIView, UIImageView, HUCameraLoadingActivityIndicatorView, UILabel, NSString;

@interface HUCameraPlayerAccessoryViewController : UIViewController <HFCameraPlaybackEngineObserver> {

	BOOL _canShowOverlayContent;
	BOOL _shouldShowLoadingIndicatorForClipPlayback;
	BOOL _showingNoActivity;
	BOOL _showingError;
	BOOL _showingLoadingIndicator;
	BOOL _reachabilityEventWasOffline;
	HFCameraPlaybackEngine* _playbackEngine;
	UIView* _loadingOverlayView;
	UIImageView* _noResponseView;
	HUCameraLoadingActivityIndicatorView* _loadingActivityIndicator;
	UILabel* _noActivityLabel;
	UILabel* _primaryErrorLabel;
	UILabel* _secondaryErrorLabel;
	unsigned long long _currentAccessMode;
	id<HFCameraRecordingEvent> _lastDisplayedEvent;
	unsigned long long _lastEngineMode;

}

@property (nonatomic,retain) UIImageView * noResponseView;                                                 //@synthesize noResponseView=_noResponseView - In the implementation block
@property (nonatomic,retain) HUCameraLoadingActivityIndicatorView * loadingActivityIndicator;              //@synthesize loadingActivityIndicator=_loadingActivityIndicator - In the implementation block
@property (nonatomic,retain) UILabel * noActivityLabel;                                                    //@synthesize noActivityLabel=_noActivityLabel - In the implementation block
@property (nonatomic,retain) UILabel * primaryErrorLabel;                                                  //@synthesize primaryErrorLabel=_primaryErrorLabel - In the implementation block
@property (nonatomic,retain) UILabel * secondaryErrorLabel;                                                //@synthesize secondaryErrorLabel=_secondaryErrorLabel - In the implementation block
@property (assign,nonatomic) BOOL showingNoActivity;                                                       //@synthesize showingNoActivity=_showingNoActivity - In the implementation block
@property (assign,nonatomic) BOOL showingError;                                                            //@synthesize showingError=_showingError - In the implementation block
@property (assign,nonatomic) BOOL showingLoadingIndicator;                                                 //@synthesize showingLoadingIndicator=_showingLoadingIndicator - In the implementation block
@property (assign,nonatomic) unsigned long long currentAccessMode;                                         //@synthesize currentAccessMode=_currentAccessMode - In the implementation block
@property (assign,nonatomic,__weak) id<HFCameraRecordingEvent> lastDisplayedEvent;                         //@synthesize lastDisplayedEvent=_lastDisplayedEvent - In the implementation block
@property (assign,nonatomic) BOOL reachabilityEventWasOffline;                                             //@synthesize reachabilityEventWasOffline=_reachabilityEventWasOffline - In the implementation block
@property (assign,nonatomic) unsigned long long lastEngineMode;                                            //@synthesize lastEngineMode=_lastEngineMode - In the implementation block
@property (assign,nonatomic) BOOL canShowOverlayContent;                                                   //@synthesize canShowOverlayContent=_canShowOverlayContent - In the implementation block
@property (assign,nonatomic) BOOL shouldShowLoadingIndicatorForClipPlayback;                               //@synthesize shouldShowLoadingIndicatorForClipPlayback=_shouldShowLoadingIndicatorForClipPlayback - In the implementation block
@property (assign,nonatomic,__weak) HFCameraPlaybackEngine * playbackEngine;                               //@synthesize playbackEngine=_playbackEngine - In the implementation block
@property (assign,nonatomic,__weak) UIView * loadingOverlayView;                                           //@synthesize loadingOverlayView=_loadingOverlayView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_newLabel;
-(id)initWithPlaybackEngine:(id)arg1 ;
-(BOOL)showingLoadingIndicator;
-(void)playbackEngine:(id)arg1 didUpdateTimeControlStatus:(unsigned long long)arg2 ;
-(void)playbackEngine:(id)arg1 didUpdatePlaybackPosition:(id)arg2 ;
-(void)playbackEngine:(id)arg1 didUpdatePlaybackError:(id)arg2 ;
-(void)playbackEngine:(id)arg1 didUpdateEvents:(id)arg2 ;
-(void)viewDidLoad;
-(unsigned long long)currentAccessMode;
-(void)setShowingLoadingIndicator:(BOOL)arg1 ;
-(void)playbackEngine:(id)arg1 didRemoveEvents:(id)arg2 ;
-(void)setCurrentAccessMode:(unsigned long long)arg1 ;
-(void)setPlaybackEngine:(HFCameraPlaybackEngine *)arg1 ;
-(HFCameraPlaybackEngine *)playbackEngine;
-(void)hu_reloadData;
-(HUCameraLoadingActivityIndicatorView *)loadingActivityIndicator;
-(UILabel *)noActivityLabel;
-(UILabel *)primaryErrorLabel;
-(UILabel *)secondaryErrorLabel;
-(UIImageView *)noResponseView;
-(void)_updateAllOverlayStateAnimated:(BOOL)arg1 ;
-(void)_updateLoadingStateAnimated:(BOOL)arg1 ;
-(void)_updateErrorStateAnimated:(BOOL)arg1 ;
-(void)_updateNoActivityStateAnimated:(BOOL)arg1 ;
-(BOOL)shouldShortCircuitLoadingIndicator;
-(UIView *)loadingOverlayView;
-(BOOL)shouldShowLoadingIndicatorForClipPlayback;
-(BOOL)canShowOverlayContent;
-(void)_updateStateAnimated:(BOOL)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)showingNoActivity;
-(void)setShowingNoActivity:(BOOL)arg1 ;
-(BOOL)showingError;
-(void)setShowingError:(BOOL)arg1 ;
-(BOOL)reachabilityEventWasOffline;
-(id<HFCameraRecordingEvent>)lastDisplayedEvent;
-(void)setLastDisplayedEvent:(id<HFCameraRecordingEvent>)arg1 ;
-(void)setReachabilityEventWasOffline:(BOOL)arg1 ;
-(unsigned long long)lastEngineMode;
-(void)setLastEngineMode:(unsigned long long)arg1 ;
-(id)_errorStringDetailsForError:(id)arg1 ;
-(void)_displayReachabilityMessageForEvent:(id)arg1 ;
-(void)setCanShowOverlayContent:(BOOL)arg1 ;
-(void)setShouldShowLoadingIndicatorForClipPlayback:(BOOL)arg1 ;
-(BOOL)_shouldShortCircuitBlurEffect;
-(void)setLoadingOverlayView:(UIView *)arg1 ;
-(void)setNoResponseView:(UIImageView *)arg1 ;
-(void)setLoadingActivityIndicator:(HUCameraLoadingActivityIndicatorView *)arg1 ;
-(void)setNoActivityLabel:(UILabel *)arg1 ;
-(void)setPrimaryErrorLabel:(UILabel *)arg1 ;
-(void)setSecondaryErrorLabel:(UILabel *)arg1 ;
@end

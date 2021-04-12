/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/HFCameraPlaybackEngineObserver.h>

@class HFCameraPlaybackEngine, UIImageView, UIActivityIndicatorView, UILabel, UIVisualEffectView, NSString;

@interface HUCameraPlayerAccessoryViewController : UIViewController <HFCameraPlaybackEngineObserver> {

	BOOL _canShowOverlayContent;
	BOOL _shouldShowLoadingIndicatorForClipPlayback;
	BOOL _showingNoActivity;
	BOOL _showingError;
	BOOL _showingLoadingIndicator;
	BOOL _showingBlur;
	HFCameraPlaybackEngine* _playbackEngine;
	UIImageView* _noResponseView;
	UIActivityIndicatorView* _loadingActivityIndicator;
	UILabel* _noActivityLabel;
	UILabel* _primaryErrorLabel;
	UILabel* _secondaryErrorLabel;
	UIVisualEffectView* _blurView;
	unsigned long long _currentAccessMode;

}

@property (nonatomic,retain) UIImageView * noResponseView;                                    //@synthesize noResponseView=_noResponseView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * loadingActivityIndicator;              //@synthesize loadingActivityIndicator=_loadingActivityIndicator - In the implementation block
@property (nonatomic,retain) UILabel * noActivityLabel;                                       //@synthesize noActivityLabel=_noActivityLabel - In the implementation block
@property (nonatomic,retain) UILabel * primaryErrorLabel;                                     //@synthesize primaryErrorLabel=_primaryErrorLabel - In the implementation block
@property (nonatomic,retain) UILabel * secondaryErrorLabel;                                   //@synthesize secondaryErrorLabel=_secondaryErrorLabel - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * blurView;                                   //@synthesize blurView=_blurView - In the implementation block
@property (assign,nonatomic) BOOL showingNoActivity;                                          //@synthesize showingNoActivity=_showingNoActivity - In the implementation block
@property (assign,nonatomic) BOOL showingError;                                               //@synthesize showingError=_showingError - In the implementation block
@property (assign,nonatomic) BOOL showingLoadingIndicator;                                    //@synthesize showingLoadingIndicator=_showingLoadingIndicator - In the implementation block
@property (assign,nonatomic) BOOL showingBlur;                                                //@synthesize showingBlur=_showingBlur - In the implementation block
@property (assign,nonatomic) unsigned long long currentAccessMode;                            //@synthesize currentAccessMode=_currentAccessMode - In the implementation block
@property (assign,nonatomic) BOOL canShowOverlayContent;                                      //@synthesize canShowOverlayContent=_canShowOverlayContent - In the implementation block
@property (assign,nonatomic) BOOL shouldShowLoadingIndicatorForClipPlayback;                  //@synthesize shouldShowLoadingIndicatorForClipPlayback=_shouldShowLoadingIndicatorForClipPlayback - In the implementation block
@property (assign,nonatomic,__weak) HFCameraPlaybackEngine * playbackEngine;                  //@synthesize playbackEngine=_playbackEngine - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_newLabel;
-(void)viewDidLoad;
-(void)setBlurView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)blurView;
-(BOOL)showingError;
-(unsigned long long)currentAccessMode;
-(void)setShowingLoadingIndicator:(BOOL)arg1 ;
-(BOOL)showingLoadingIndicator;
-(HFCameraPlaybackEngine *)playbackEngine;
-(id)initWithPlaybackEngine:(id)arg1 ;
-(void)setPlaybackEngine:(HFCameraPlaybackEngine *)arg1 ;
-(void)playbackEngine:(id)arg1 didUpdateTimeControlStatus:(unsigned long long)arg2 ;
-(void)playbackEngine:(id)arg1 didUpdatePlaybackPosition:(id)arg2 ;
-(void)playbackEngine:(id)arg1 didUpdatePlaybackError:(id)arg2 ;
-(void)setCurrentAccessMode:(unsigned long long)arg1 ;
-(void)setShowingError:(BOOL)arg1 ;
-(void)_updateStateAnimated:(BOOL)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)hu_reloadData;
-(UIActivityIndicatorView *)loadingActivityIndicator;
-(UILabel *)noActivityLabel;
-(UILabel *)primaryErrorLabel;
-(UILabel *)secondaryErrorLabel;
-(UIImageView *)noResponseView;
-(void)_updateAllOverlayStateAnimated:(BOOL)arg1 ;
-(void)_updateLoadingStateAnimated:(BOOL)arg1 ;
-(void)_updateBlurVisibilityAnimated:(BOOL)arg1 ;
-(void)_updateErrorStateAnimated:(BOOL)arg1 ;
-(void)_updateNoActivityStateAnimated:(BOOL)arg1 ;
-(BOOL)_shouldShortCircuitLoadingIndicator;
-(BOOL)shouldShowLoadingIndicatorForClipPlayback;
-(BOOL)canShowOverlayContent;
-(BOOL)showingNoActivity;
-(void)setShowingNoActivity:(BOOL)arg1 ;
-(id)_errorStringDetailsForError:(id)arg1 ;
-(BOOL)_shouldShortCircuitBlurEffect;
-(BOOL)showingBlur;
-(void)setShowingBlur:(BOOL)arg1 ;
-(void)setCanShowOverlayContent:(BOOL)arg1 ;
-(void)setShouldShowLoadingIndicatorForClipPlayback:(BOOL)arg1 ;
-(void)setNoResponseView:(UIImageView *)arg1 ;
-(void)setLoadingActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)setNoActivityLabel:(UILabel *)arg1 ;
-(void)setPrimaryErrorLabel:(UILabel *)arg1 ;
-(void)setSecondaryErrorLabel:(UILabel *)arg1 ;
@end


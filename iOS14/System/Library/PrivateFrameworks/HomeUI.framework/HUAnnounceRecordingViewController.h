/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/HFAudioRecorderDelegate.h>
#import <libobjc.A.dylib/HFAccessoryObserver.h>
#import <libobjc.A.dylib/HFMediaObjectObserver.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class HUHomeControlServiceContext, HFAudioRecorder, UILabel, UIVisualEffectView, UIButton, HUWaveformView, HURecordingButton, NSURL, UIBlurEffect, UIImpactFeedbackGenerator, UIView, NSLayoutConstraint, UITapGestureRecognizer, ANAnnounce, NSString;

@interface HUAnnounceRecordingViewController : UIViewController <HFAudioRecorderDelegate, HFAccessoryObserver, HFMediaObjectObserver, UIGestureRecognizerDelegate> {

	BOOL _recordingDismissedByUser;
	HUHomeControlServiceContext* _serviceContext;
	HFAudioRecorder* _audioRecorder;
	UILabel* _dismissLabel;
	UIVisualEffectView* _dismissLabelVisualEffectView;
	UILabel* _largeTitleLabel;
	UILabel* _subTitleLabel;
	UIVisualEffectView* _closeButtonVisualEffectView;
	UIButton* _closeButton;
	HUWaveformView* _audioWaveformView;
	UILabel* _announcementDeliveryFailureLabel;
	HURecordingButton* _recordButton;
	UILabel* _recordingStateChangeLabel;
	UILabel* _errorStatusLabel;
	double _recordedDuration;
	NSURL* _recordedAnnouncementURL;
	UIBlurEffect* _blurEffect;
	UIImpactFeedbackGenerator* _feedbackGenerator;
	UIView* _contentView;
	NSLayoutConstraint* _contentViewHeightConstraint;
	NSLayoutConstraint* _contentViewWidthConstraint;
	NSLayoutConstraint* _closeButtonTopConstraint;
	NSLayoutConstraint* _contentViewTopConstraint;
	NSLayoutConstraint* _dismissLabelTopConstraint;
	UITapGestureRecognizer* _tapGestureRecognizer;
	ANAnnounce* _announce;

}

@property (nonatomic,retain) HUHomeControlServiceContext * serviceContext;                   //@synthesize serviceContext=_serviceContext - In the implementation block
@property (nonatomic,retain) HFAudioRecorder * audioRecorder;                                //@synthesize audioRecorder=_audioRecorder - In the implementation block
@property (nonatomic,retain) UILabel * dismissLabel;                                         //@synthesize dismissLabel=_dismissLabel - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * dismissLabelVisualEffectView;              //@synthesize dismissLabelVisualEffectView=_dismissLabelVisualEffectView - In the implementation block
@property (nonatomic,retain) UILabel * largeTitleLabel;                                      //@synthesize largeTitleLabel=_largeTitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subTitleLabel;                                        //@synthesize subTitleLabel=_subTitleLabel - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * closeButtonVisualEffectView;               //@synthesize closeButtonVisualEffectView=_closeButtonVisualEffectView - In the implementation block
@property (nonatomic,retain) UIButton * closeButton;                                         //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,retain) HUWaveformView * audioWaveformView;                             //@synthesize audioWaveformView=_audioWaveformView - In the implementation block
@property (nonatomic,retain) UILabel * announcementDeliveryFailureLabel;                     //@synthesize announcementDeliveryFailureLabel=_announcementDeliveryFailureLabel - In the implementation block
@property (nonatomic,retain) HURecordingButton * recordButton;                               //@synthesize recordButton=_recordButton - In the implementation block
@property (nonatomic,retain) UILabel * recordingStateChangeLabel;                            //@synthesize recordingStateChangeLabel=_recordingStateChangeLabel - In the implementation block
@property (nonatomic,retain) UILabel * errorStatusLabel;                                     //@synthesize errorStatusLabel=_errorStatusLabel - In the implementation block
@property (assign,nonatomic) double recordedDuration;                                        //@synthesize recordedDuration=_recordedDuration - In the implementation block
@property (nonatomic,retain) NSURL * recordedAnnouncementURL;                                //@synthesize recordedAnnouncementURL=_recordedAnnouncementURL - In the implementation block
@property (nonatomic,retain) UIBlurEffect * blurEffect;                                      //@synthesize blurEffect=_blurEffect - In the implementation block
@property (nonatomic,retain) UIImpactFeedbackGenerator * feedbackGenerator;                  //@synthesize feedbackGenerator=_feedbackGenerator - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                           //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentViewHeightConstraint;               //@synthesize contentViewHeightConstraint=_contentViewHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentViewWidthConstraint;                //@synthesize contentViewWidthConstraint=_contentViewWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * closeButtonTopConstraint;                  //@synthesize closeButtonTopConstraint=_closeButtonTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentViewTopConstraint;                  //@synthesize contentViewTopConstraint=_contentViewTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * dismissLabelTopConstraint;                 //@synthesize dismissLabelTopConstraint=_dismissLabelTopConstraint - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                  //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (assign,nonatomic) BOOL recordingDismissedByUser;                                  //@synthesize recordingDismissedByUser=_recordingDismissedByUser - In the implementation block
@property (nonatomic,retain) ANAnnounce * announce;                                          //@synthesize announce=_announce - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)prefersStatusBarHidden;
-(void)setFeedbackGenerator:(UIImpactFeedbackGenerator *)arg1 ;
-(BOOL)_shouldRemoveViewFromHierarchyOnDisappear;
-(void)_didTap:(id)arg1 ;
-(void)setCloseButton:(UIButton *)arg1 ;
-(UILabel *)subTitleLabel;
-(void)setSubTitleLabel:(UILabel *)arg1 ;
-(void)didUpdateAveragePower:(float)arg1 ;
-(void)audioRecorderDidStartRecording:(id)arg1 ;
-(void)audioRecorderFailedToStartRecording:(id)arg1 ;
-(void)audioRecorderFailedToFinishRecording:(id)arg1 ;
-(void)audioRecorderFinishedRecording:(id)arg1 audioFile:(id)arg2 ;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(UIImpactFeedbackGenerator *)feedbackGenerator;
-(UIBlurEffect *)blurEffect;
-(void)setAudioRecorder:(HFAudioRecorder *)arg1 ;
-(void)setBlurEffect:(UIBlurEffect *)arg1 ;
-(NSLayoutConstraint *)contentViewHeightConstraint;
-(void)setContentViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)viewDidLoad;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)setContentView:(UIView *)arg1 ;
-(void)accessoryDidUpdateControllable:(id)arg1 ;
-(UILabel *)dismissLabel;
-(void)accessoryDidUpdateReachableTransports:(id)arg1 ;
-(HUHomeControlServiceContext *)serviceContext;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setContentViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)contentViewTopConstraint;
-(void)accessoryDidUpdateReachability:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)_didPan:(id)arg1 ;
-(ANAnnounce *)announce;
-(double)recordedDuration;
-(UIView *)contentView;
-(HFAudioRecorder *)audioRecorder;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIButton *)closeButton;
-(void)dealloc;
-(id)_waveformColor;
-(HUWaveformView *)audioWaveformView;
-(void)_dismissDownRecordingView:(id)arg1 ;
-(id)_contentViewBackgroundColor;
-(id)_largeTitleTextColor;
-(void)beginRecording:(id)arg1 ;
-(UILabel *)largeTitleLabel;
-(NSLayoutConstraint *)contentViewWidthConstraint;
-(HURecordingButton *)recordButton;
-(UILabel *)recordingStateChangeLabel;
-(BOOL)_areAllHomePodsOffline;
-(void)_updateUIBasedOnReachabilityStatus;
-(void)_deleteAudioFile;
-(UILabel *)announcementDeliveryFailureLabel;
-(UILabel *)errorStatusLabel;
-(NSURL *)recordedAnnouncementURL;
-(void)_dismissViewOrDisplayError:(id)arg1 ;
-(void)_submitAnalyticsForAnnounceRecordingCompletdSuccessfully:(BOOL)arg1 interruptedByUser:(BOOL)arg2 ;
-(void)_dismissUpRecordingView:(id)arg1 ;
-(NSLayoutConstraint *)closeButtonTopConstraint;
-(UIVisualEffectView *)closeButtonVisualEffectView;
-(void)_restoreRecordingUI;
-(BOOL)_isRoomContext;
-(BOOL)_isHomeContext;
-(void)_hideRecordingUI;
-(void)setRecordedAnnouncementURL:(NSURL *)arg1 ;
-(void)stopRecordAndSend:(id)arg1 ;
-(void)sendAnnouncement:(id)arg1 ;
-(void)_deleteRecording:(id)arg1 ;
-(id)initWithServiceContext:(id)arg1 blurEffectStyle:(long long)arg2 ;
-(id)_fontForTimeCodeLabel;
-(id)_stringForDuration:(double)arg1 ;
-(void)setServiceContext:(HUHomeControlServiceContext *)arg1 ;
-(void)setDismissLabel:(UILabel *)arg1 ;
-(UIVisualEffectView *)dismissLabelVisualEffectView;
-(void)setDismissLabelVisualEffectView:(UIVisualEffectView *)arg1 ;
-(void)setLargeTitleLabel:(UILabel *)arg1 ;
-(void)setCloseButtonVisualEffectView:(UIVisualEffectView *)arg1 ;
-(void)setAudioWaveformView:(HUWaveformView *)arg1 ;
-(void)setAnnouncementDeliveryFailureLabel:(UILabel *)arg1 ;
-(void)setRecordButton:(HURecordingButton *)arg1 ;
-(void)setRecordingStateChangeLabel:(UILabel *)arg1 ;
-(void)setErrorStatusLabel:(UILabel *)arg1 ;
-(void)setRecordedDuration:(double)arg1 ;
-(void)setContentViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setCloseButtonTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)dismissLabelTopConstraint;
-(void)setDismissLabelTopConstraint:(NSLayoutConstraint *)arg1 ;
-(BOOL)recordingDismissedByUser;
-(void)setRecordingDismissedByUser:(BOOL)arg1 ;
-(void)setAnnounce:(ANAnnounce *)arg1 ;
@end


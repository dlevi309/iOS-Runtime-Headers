/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/HFAudioRecorderDelegate.h>
#import <libobjc.A.dylib/HUAnnouncementsGlobeViewDelegate.h>
#import <libobjc.A.dylib/HFAccessoryObserver.h>
#import <libobjc.A.dylib/HFMediaObjectObserver.h>

@protocol HUAnnouncementsBrowserViewControllerDelegate;
@class NSDictionary, UILabel, UIVisualEffectView, HUWaveformView, HURecordingButton, UIScrollView, UIStackView, NSString, HFAudioRecorder, NSURL, UIBlurEffect, UIView, HUAnnouncementGlobeView, UIButton, UILongPressGestureRecognizer, NSLayoutConstraint, UIImpactFeedbackGenerator, ANAnnounce;

@interface HUAnnouncementsBrowserViewController : UIViewController <HFAudioRecorderDelegate, HUAnnouncementsGlobeViewDelegate, HFAccessoryObserver, HFMediaObjectObserver> {

	BOOL _isTearingDown;
	BOOL _shouldNotSendCurrentRecording;
	NSDictionary* _notificationPayload;
	UILabel* _largeTitleLabel;
	UIVisualEffectView* _largeTitleVisualEffectView;
	UILabel* _subTitleLabel;
	UIVisualEffectView* _subTitleVisualEffectView;
	HUWaveformView* _audioWaveformView;
	UILabel* _announcementDeliveryFailureLabel;
	HURecordingButton* _recordButton;
	UILabel* _recordButtonLabel;
	UIVisualEffectView* _recordButtonLabelVisualEffectView;
	UIScrollView* _transcriptionScrollView;
	UIStackView* _transcriptionStackView;
	UILabel* _transcriptionText;
	UILabel* _transcriptionTitleLabel;
	UILabel* _errorStatusLabel;
	NSString* _senderName;
	HFAudioRecorder* _audioRecorder;
	double _recordedDuration;
	NSURL* _recordedAnnouncementURL;
	UIBlurEffect* _blurEffect;
	id<HUAnnouncementsBrowserViewControllerDelegate> _delegate;
	UIView* _lightedCircleView;
	HUAnnouncementGlobeView* _announcementGlobeView;
	UILabel* _announcementProgressLabel;
	UIButton* _nextAnnouncementButton;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	NSLayoutConstraint* _audioWaveformViewLeadingConstraint;
	NSLayoutConstraint* _audioWaveformViewTrailingConstraint;
	NSString* _recipientTitle;
	UIImpactFeedbackGenerator* _feedbackGenerator;
	double _notificationLaunchTimeInterval;
	double _notificationDismissTimeInterval;
	ANAnnounce* _announce;

}

@property (nonatomic,retain) UILabel * largeTitleLabel;                                                     //@synthesize largeTitleLabel=_largeTitleLabel - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * largeTitleVisualEffectView;                               //@synthesize largeTitleVisualEffectView=_largeTitleVisualEffectView - In the implementation block
@property (nonatomic,retain) UILabel * subTitleLabel;                                                       //@synthesize subTitleLabel=_subTitleLabel - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * subTitleVisualEffectView;                                 //@synthesize subTitleVisualEffectView=_subTitleVisualEffectView - In the implementation block
@property (nonatomic,retain) HUWaveformView * audioWaveformView;                                            //@synthesize audioWaveformView=_audioWaveformView - In the implementation block
@property (nonatomic,retain) UILabel * announcementDeliveryFailureLabel;                                    //@synthesize announcementDeliveryFailureLabel=_announcementDeliveryFailureLabel - In the implementation block
@property (nonatomic,retain) HURecordingButton * recordButton;                                              //@synthesize recordButton=_recordButton - In the implementation block
@property (nonatomic,retain) UILabel * recordButtonLabel;                                                   //@synthesize recordButtonLabel=_recordButtonLabel - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * recordButtonLabelVisualEffectView;                        //@synthesize recordButtonLabelVisualEffectView=_recordButtonLabelVisualEffectView - In the implementation block
@property (nonatomic,retain) UIScrollView * transcriptionScrollView;                                        //@synthesize transcriptionScrollView=_transcriptionScrollView - In the implementation block
@property (nonatomic,retain) UIStackView * transcriptionStackView;                                          //@synthesize transcriptionStackView=_transcriptionStackView - In the implementation block
@property (nonatomic,retain) UILabel * transcriptionText;                                                   //@synthesize transcriptionText=_transcriptionText - In the implementation block
@property (nonatomic,retain) UILabel * transcriptionTitleLabel;                                             //@synthesize transcriptionTitleLabel=_transcriptionTitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * errorStatusLabel;                                                    //@synthesize errorStatusLabel=_errorStatusLabel - In the implementation block
@property (nonatomic,retain) NSString * senderName;                                                         //@synthesize senderName=_senderName - In the implementation block
@property (nonatomic,retain) HFAudioRecorder * audioRecorder;                                               //@synthesize audioRecorder=_audioRecorder - In the implementation block
@property (assign,nonatomic) double recordedDuration;                                                       //@synthesize recordedDuration=_recordedDuration - In the implementation block
@property (nonatomic,retain) NSURL * recordedAnnouncementURL;                                               //@synthesize recordedAnnouncementURL=_recordedAnnouncementURL - In the implementation block
@property (nonatomic,retain) UIBlurEffect * blurEffect;                                                     //@synthesize blurEffect=_blurEffect - In the implementation block
@property (nonatomic,retain) NSDictionary * notificationPayload;                                            //@synthesize notificationPayload=_notificationPayload - In the implementation block
@property (assign,nonatomic,__weak) id<HUAnnouncementsBrowserViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * lightedCircleView;                                                    //@synthesize lightedCircleView=_lightedCircleView - In the implementation block
@property (nonatomic,retain) HUAnnouncementGlobeView * announcementGlobeView;                               //@synthesize announcementGlobeView=_announcementGlobeView - In the implementation block
@property (nonatomic,retain) UILabel * announcementProgressLabel;                                           //@synthesize announcementProgressLabel=_announcementProgressLabel - In the implementation block
@property (nonatomic,retain) UIButton * nextAnnouncementButton;                                             //@synthesize nextAnnouncementButton=_nextAnnouncementButton - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longPressGestureRecognizer;                     //@synthesize longPressGestureRecognizer=_longPressGestureRecognizer - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * audioWaveformViewLeadingConstraint;                       //@synthesize audioWaveformViewLeadingConstraint=_audioWaveformViewLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * audioWaveformViewTrailingConstraint;                      //@synthesize audioWaveformViewTrailingConstraint=_audioWaveformViewTrailingConstraint - In the implementation block
@property (nonatomic,copy) NSString * recipientTitle;                                                       //@synthesize recipientTitle=_recipientTitle - In the implementation block
@property (nonatomic,retain) UIImpactFeedbackGenerator * feedbackGenerator;                                 //@synthesize feedbackGenerator=_feedbackGenerator - In the implementation block
@property (assign,nonatomic) BOOL shouldNotSendCurrentRecording;                                            //@synthesize shouldNotSendCurrentRecording=_shouldNotSendCurrentRecording - In the implementation block
@property (assign,nonatomic) double notificationLaunchTimeInterval;                                         //@synthesize notificationLaunchTimeInterval=_notificationLaunchTimeInterval - In the implementation block
@property (assign,nonatomic) double notificationDismissTimeInterval;                                        //@synthesize notificationDismissTimeInterval=_notificationDismissTimeInterval - In the implementation block
@property (nonatomic,retain) ANAnnounce * announce;                                                         //@synthesize announce=_announce - In the implementation block
@property (assign,nonatomic) BOOL isTearingDown;                                                            //@synthesize isTearingDown=_isTearingDown - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFeedbackGenerator:(UIImpactFeedbackGenerator *)arg1 ;
-(id<HUAnnouncementsBrowserViewControllerDelegate>)delegate;
-(UILabel *)subTitleLabel;
-(void)setSubTitleLabel:(UILabel *)arg1 ;
-(void)didUpdateAveragePower:(float)arg1 ;
-(void)audioRecorderDidStartRecording:(id)arg1 ;
-(void)audioRecorderFailedToStartRecording:(id)arg1 ;
-(void)audioRecorderFailedToFinishRecording:(id)arg1 ;
-(void)audioRecorderFinishedRecording:(id)arg1 audioFile:(id)arg2 ;
-(UIImpactFeedbackGenerator *)feedbackGenerator;
-(UIBlurEffect *)blurEffect;
-(void)setAudioRecorder:(HFAudioRecorder *)arg1 ;
-(void)setBlurEffect:(UIBlurEffect *)arg1 ;
-(void)setDelegate:(id<HUAnnouncementsBrowserViewControllerDelegate>)arg1 ;
-(UILongPressGestureRecognizer *)longPressGestureRecognizer;
-(void)setLongPressGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(void)viewDidLoad;
-(void)accessoryDidUpdateControllable:(id)arg1 ;
-(void)accessoryDidUpdateReachableTransports:(id)arg1 ;
-(void)_commonInit;
-(void)accessoryDidUpdateReachability:(id)arg1 ;
-(ANAnnounce *)announce;
-(double)recordedDuration;
-(HFAudioRecorder *)audioRecorder;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)dealloc;
-(id)_waveformColor;
-(void)didSelectItemWithInfo:(id)arg1 totalNumberOfAnnouncements:(unsigned long long)arg2 ;
-(UILabel *)transcriptionText;
-(HUWaveformView *)audioWaveformView;
-(UILabel *)largeTitleLabel;
-(HURecordingButton *)recordButton;
-(void)_updateUIBasedOnReachabilityStatus;
-(void)_deleteAudioFile;
-(UILabel *)announcementDeliveryFailureLabel;
-(UILabel *)errorStatusLabel;
-(NSURL *)recordedAnnouncementURL;
-(void)_dismissViewOrDisplayError:(id)arg1 ;
-(BOOL)_isRoomContext;
-(BOOL)_isHomeContext;
-(void)_hideRecordingUI;
-(void)setRecordedAnnouncementURL:(NSURL *)arg1 ;
-(void)_deleteRecording:(id)arg1 ;
-(void)setLargeTitleLabel:(UILabel *)arg1 ;
-(void)setAudioWaveformView:(HUWaveformView *)arg1 ;
-(void)setAnnouncementDeliveryFailureLabel:(UILabel *)arg1 ;
-(void)setRecordButton:(HURecordingButton *)arg1 ;
-(void)setErrorStatusLabel:(UILabel *)arg1 ;
-(void)setRecordedDuration:(double)arg1 ;
-(void)setAnnounce:(ANAnnounce *)arg1 ;
-(BOOL)_isNotificationPayloadValid;
-(void)setIsTearingDown:(BOOL)arg1 ;
-(HUAnnouncementGlobeView *)announcementGlobeView;
-(void)setNotificationPayload:(NSDictionary *)arg1 ;
-(void)setNotificationDismissTimeInterval:(double)arg1 ;
-(void)_submitAnalyticsForAnnounceNotificationUsage;
-(void)_submitAnalyticsForAnnounceRecordingCompletedSuccessfully:(BOOL)arg1 interruptedByUser:(BOOL)arg2 ;
-(void)_configureSubViewsForValidNotificationPayload;
-(UIButton *)nextAnnouncementButton;
-(void)_configureVisualStyleForLightedCircleView;
-(void)_setupRecipientInformation;
-(NSDictionary *)notificationPayload;
-(UILabel *)announcementProgressLabel;
-(UILabel *)transcriptionTitleLabel;
-(void)_addCommonTranscriptionConstraints;
-(id)_fontForAnnouncementProgressLabel;
-(NSString *)recipientTitle;
-(void)_applyTranscriptionText:(id)arg1 ;
-(void)_recordButtonLongPressGesture:(id)arg1 ;
-(void)_recordButtonTapped:(id)arg1 ;
-(void)_skipToNextAnnouncement:(id)arg1 ;
-(double)_transcriptionStackViewHeight;
-(void)_addTranscriptionConstraintsForValidNotificationPayload;
-(void)_beginRecordingReply:(id)arg1 ;
-(void)_stopRecordingAndSendReply:(id)arg1 ;
-(UILabel *)recordButtonLabel;
-(UIStackView *)transcriptionStackView;
-(UIView *)lightedCircleView;
-(NSLayoutConstraint *)audioWaveformViewLeadingConstraint;
-(NSLayoutConstraint *)audioWaveformViewTrailingConstraint;
-(BOOL)shouldNotSendCurrentRecording;
-(void)_sendAnnouncement:(id)arg1 ;
-(id)_lightedCircleBackgroundColorForCurrentInterfaceStyle;
-(id)_lightedCircleShadowColorForCurrentInterfaceStyle;
-(void)_sendAnnouncementReply:(id)arg1 ;
-(double)notificationDismissTimeInterval;
-(double)notificationLaunchTimeInterval;
-(id)initWithNotificationPayload:(id)arg1 delegate:(id)arg2 ;
-(void)tearDownAudioActivity;
-(id)_backgroundColorForNextAnnouncementButton;
-(BOOL)isTearingDown;
-(UIVisualEffectView *)largeTitleVisualEffectView;
-(void)setLargeTitleVisualEffectView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)subTitleVisualEffectView;
-(void)setSubTitleVisualEffectView:(UIVisualEffectView *)arg1 ;
-(void)setRecordButtonLabel:(UILabel *)arg1 ;
-(UIVisualEffectView *)recordButtonLabelVisualEffectView;
-(void)setRecordButtonLabelVisualEffectView:(UIVisualEffectView *)arg1 ;
-(UIScrollView *)transcriptionScrollView;
-(void)setTranscriptionScrollView:(UIScrollView *)arg1 ;
-(void)setTranscriptionStackView:(UIStackView *)arg1 ;
-(void)setTranscriptionText:(UILabel *)arg1 ;
-(void)setTranscriptionTitleLabel:(UILabel *)arg1 ;
-(NSString *)senderName;
-(void)setSenderName:(NSString *)arg1 ;
-(void)setLightedCircleView:(UIView *)arg1 ;
-(void)setAnnouncementGlobeView:(HUAnnouncementGlobeView *)arg1 ;
-(void)setAnnouncementProgressLabel:(UILabel *)arg1 ;
-(void)setNextAnnouncementButton:(UIButton *)arg1 ;
-(void)setAudioWaveformViewLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setAudioWaveformViewTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setRecipientTitle:(NSString *)arg1 ;
-(void)setShouldNotSendCurrentRecording:(BOOL)arg1 ;
-(void)setNotificationLaunchTimeInterval:(double)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
*/

#import <ReplayKit/ReplayKit-Structs.h>
#import <libobjc.A.dylib/RPPreviewViewControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@protocol RPScreenRecorderDelegate, RPScreenRecorderPrivateDelegate;
@class UIView, NSString, UIWindow, RPPipViewController, RPBroadcastController, NSURL;

@interface RPScreenRecorder : NSObject <RPPreviewViewControllerDelegate, UINavigationControllerDelegate, UIPopoverPresentationControllerDelegate> {

	BOOL _available;
	BOOL _recording;
	BOOL _microphoneEnabled;
	BOOL _cameraEnabled;
	BOOL _broadcasting;
	BOOL _hasUserConsentForCamera;
	BOOL _hasUserConsentForMicrophone;
	BOOL _paused;
	BOOL _systemRecording;
	int _processIDForAudioCapture;
	id<RPScreenRecorderDelegate> _delegate;
	long long _cameraPosition;
	UIView* _cameraPreviewView;
	unsigned long long _previousAudioSessionOptions;
	NSString* _previousAudioCategory;
	UIWindow* _windowToRecord;
	RPPipViewController* _pipViewController;
	/*^block*/id _saveVideoToCameraRollCompletionBlock;
	/*^block*/id _captureHandler;
	RPBroadcastController* _activeBroadcastController;
	NSURL* _broadcastURL;
	id<RPScreenRecorderPrivateDelegate> _privateDelegate;

}

@property (assign,nonatomic) unsigned long long previousAudioSessionOptions;                                   //@synthesize previousAudioSessionOptions=_previousAudioSessionOptions - In the implementation block
@property (nonatomic,retain) NSString * previousAudioCategory;                                                 //@synthesize previousAudioCategory=_previousAudioCategory - In the implementation block
@property (assign,getter=isRecording,nonatomic) BOOL recording;                                                //@synthesize recording=_recording - In the implementation block
@property (assign,nonatomic) BOOL broadcasting;                                                                //@synthesize broadcasting=_broadcasting - In the implementation block
@property (assign,getter=isAvailable,nonatomic) BOOL available;                                                //@synthesize available=_available - In the implementation block
@property (nonatomic,retain) UIWindow * windowToRecord;                                                        //@synthesize windowToRecord=_windowToRecord - In the implementation block
@property (nonatomic,retain) RPPipViewController * pipViewController;                                          //@synthesize pipViewController=_pipViewController - In the implementation block
@property (nonatomic,retain) UIView * cameraPreviewView;                                                       //@synthesize cameraPreviewView=_cameraPreviewView - In the implementation block
@property (nonatomic,copy) id saveVideoToCameraRollCompletionBlock;                                            //@synthesize saveVideoToCameraRollCompletionBlock=_saveVideoToCameraRollCompletionBlock - In the implementation block
@property (assign,nonatomic) BOOL hasUserConsentForCamera;                                                     //@synthesize hasUserConsentForCamera=_hasUserConsentForCamera - In the implementation block
@property (assign,nonatomic) BOOL hasUserConsentForMicrophone;                                                 //@synthesize hasUserConsentForMicrophone=_hasUserConsentForMicrophone - In the implementation block
@property (nonatomic,copy) id captureHandler;                                                                  //@synthesize captureHandler=_captureHandler - In the implementation block
@property (nonatomic,retain) RPBroadcastController * activeBroadcastController;                                //@synthesize activeBroadcastController=_activeBroadcastController - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused;                                                      //@synthesize paused=_paused - In the implementation block
@property (assign,setter=updateProcessIDForAudioCapture:,nonatomic) int processIDForAudioCapture;              //@synthesize processIDForAudioCapture=_processIDForAudioCapture - In the implementation block
@property (assign,nonatomic) BOOL systemRecording;                                                             //@synthesize systemRecording=_systemRecording - In the implementation block
@property (nonatomic,retain) NSURL * broadcastURL;                                                             //@synthesize broadcastURL=_broadcastURL - In the implementation block
@property (nonatomic,retain) id<RPScreenRecorderPrivateDelegate> privateDelegate;                              //@synthesize privateDelegate=_privateDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<RPScreenRecorderDelegate> delegate;                                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isMicrophoneEnabled,nonatomic) BOOL microphoneEnabled;                                //@synthesize microphoneEnabled=_microphoneEnabled - In the implementation block
@property (assign,getter=isCameraEnabled,nonatomic) BOOL cameraEnabled;                                        //@synthesize cameraEnabled=_cameraEnabled - In the implementation block
@property (assign,nonatomic) long long cameraPosition;                                                         //@synthesize cameraPosition=_cameraPosition - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedRecorder;
-(id)init;
-(void)dealloc;
-(id<RPScreenRecorderDelegate>)delegate;
-(void)setDelegate:(id<RPScreenRecorderDelegate>)arg1 ;
-(BOOL)isPaused;
-(BOOL)isAvailable;
-(void)setAvailable:(BOOL)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(id<RPScreenRecorderPrivateDelegate>)privateDelegate;
-(void)setPrivateDelegate:(id<RPScreenRecorderPrivateDelegate>)arg1 ;
-(BOOL)isRecording;
-(void)setRecording:(BOOL)arg1 ;
-(void)pauseRecording;
-(void)resumeRecording;
-(id)videoQueue;
-(long long)cameraPosition;
-(void)setMicrophoneEnabled:(BOOL)arg1 ;
-(BOOL)isMicrophoneEnabled;
-(void)setCameraPosition:(long long)arg1 ;
-(void)controlCenterWillPresent;
-(void)controlCenterDidDismiss;
-(void)startRecordingWithHandler:(/*^block*/id)arg1 ;
-(void)stopRecordingWithHandler:(/*^block*/id)arg1 ;
-(void)stopCaptureWithHandler:(/*^block*/id)arg1 ;
-(void)stopRecordingAndSaveToCameraRoll:(/*^block*/id)arg1 ;
-(id)audioQueue;
-(void)setHasUserConsentForCamera:(BOOL)arg1 ;
-(void)setHasUserConsentForMicrophone:(BOOL)arg1 ;
-(void)setBroadcastURL:(NSURL *)arg1 ;
-(void)updateRecordingAvailability:(id)arg1 ;
-(void)updateRecordingAvailabilityWithHandler:(/*^block*/id)arg1 ;
-(id)applicationWindow;
-(UIWindow *)windowToRecord;
-(void)setWindowToRecord:(UIWindow *)arg1 ;
-(BOOL)screenRecordingAllowed;
-(void)_startRecordingWithMicrophoneEnabled:(BOOL)arg1 cameraEnabled:(BOOL)arg2 streamingEnabled:(BOOL)arg3 captureEnabled:(BOOL)arg4 handler:(/*^block*/id)arg5 ;
-(void)startRecordingWithMicrophoneEnabled:(BOOL)arg1 cameraEnabled:(BOOL)arg2 streamingEnabled:(BOOL)arg3 captureEnabled:(BOOL)arg4 handler:(/*^block*/id)arg5 ;
-(void)setWindowRotationLocked:(BOOL)arg1 ;
-(void)setCameraEnabled:(BOOL)arg1 ;
-(unsigned)currentWindowLayerContextID;
-(CGSize)currentWindowSize;
-(void)setBroadcasting:(BOOL)arg1 ;
-(BOOL)systemRecording;
-(void)didStopRecordingWithError:(id)arg1 previewViewController:(id)arg2 ;
-(BOOL)isCameraEnabled;
-(void)setPipViewController:(RPPipViewController *)arg1 ;
-(RPPipViewController *)pipViewController;
-(void)setCameraPreviewView:(UIView *)arg1 ;
-(void)stopRecordingWithAdditionalShareFileAttachment:(id)arg1 overrideShareMessage:(id)arg2 previewViewControllerOverrideTintColor:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)updateProcessIDForAudioCapture:(int)arg1 ;
-(void)stopRecordingWithVideoURLHandler:(/*^block*/id)arg1 ;
-(void)setActiveBroadcastController:(RPBroadcastController *)arg1 ;
-(void)stopSystemRecording:(/*^block*/id)arg1 ;
-(void)recordingTimerDidUpdate:(id)arg1 ;
-(void)notifyDelegateOfUpdatedState;
-(void)discardRecordingWithHandler:(/*^block*/id)arg1 ;
-(id)processQueue;
-(BOOL)screenRecordingSupportedOnDevice;
-(void)notifyDelegateOfRecorderAvailability;
-(void)startSystemRecordingWithMicrophoneEnabled:(BOOL)arg1 handler:(/*^block*/id)arg2 ;
-(void)startBroadcastWithHandler:(/*^block*/id)arg1 ;
-(void)startCaptureWithHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)startRecordingWithMicrophoneEnabled:(BOOL)arg1 handler:(/*^block*/id)arg2 ;
-(void)stopBroadcastWithHandler:(/*^block*/id)arg1 ;
-(void)recordingLockInterrupted:(id)arg1 ;
-(void)updateScreenRecordingStateWithCurrentState:(id)arg1 ;
-(void)recordingDidStopWithError:(id)arg1 movieURL:(id)arg2 ;
-(void)recordingDidPause;
-(void)recordingShouldResume;
-(void)captureHandlerWithSample:(id)arg1 timingData:(id)arg2 ;
-(void)captureHandlerWithAudioSample:(id)arg1 bufferType:(long long)arg2 ;
-(UIView *)cameraPreviewView;
-(unsigned long long)previousAudioSessionOptions;
-(void)setPreviousAudioSessionOptions:(unsigned long long)arg1 ;
-(NSString *)previousAudioCategory;
-(void)setPreviousAudioCategory:(NSString *)arg1 ;
-(BOOL)broadcasting;
-(id)saveVideoToCameraRollCompletionBlock;
-(void)setSaveVideoToCameraRollCompletionBlock:(id)arg1 ;
-(BOOL)hasUserConsentForCamera;
-(BOOL)hasUserConsentForMicrophone;
-(id)captureHandler;
-(void)setCaptureHandler:(id)arg1 ;
-(RPBroadcastController *)activeBroadcastController;
-(int)processIDForAudioCapture;
-(void)setSystemRecording:(BOOL)arg1 ;
-(NSURL *)broadcastURL;
@end


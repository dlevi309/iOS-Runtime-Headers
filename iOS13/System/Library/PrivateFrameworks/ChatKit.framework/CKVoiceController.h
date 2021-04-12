/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <libobjc.A.dylib/AVVoiceControllerRecordDelegate.h>

@protocol CKVoiceControllerDelegate, OS_dispatch_queue, OS_dispatch_source;
@class NSDictionary, NSObject, AVVoiceController, CKAudioAnalyzer, NSString;

@interface CKVoiceController : NSObject <AVVoiceControllerRecordDelegate> {

	id<CKVoiceControllerDelegate> _delegate;
	long long __activationMode;
	NSDictionary* _recordSettings;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _powerUpdateTimer;
	AVVoiceController* _voiceController;
	CKAudioAnalyzer* _audioAnalyzer;

}

@property (assign,setter=_setActivationMode:,nonatomic) long long _activationMode;              //@synthesize _activationMode=__activationMode - In the implementation block
@property (nonatomic,copy) NSDictionary * recordSettings;                                       //@synthesize recordSettings=_recordSettings - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> powerUpdateTimer;                    //@synthesize powerUpdateTimer=_powerUpdateTimer - In the implementation block
@property (nonatomic,retain) AVVoiceController * voiceController;                               //@synthesize voiceController=_voiceController - In the implementation block
@property (nonatomic,retain) CKAudioAnalyzer * audioAnalyzer;                                   //@synthesize audioAnalyzer=_audioAnalyzer - In the implementation block
@property (assign,nonatomic,__weak) id<CKVoiceControllerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<CKVoiceControllerDelegate>)delegate;
-(void)setDelegate:(id<CKVoiceControllerDelegate>)arg1 ;
-(void)stop;
-(void)cleanup;
-(void)setActivationMode:(long long)arg1 ;
-(long long)_activationMode;
-(void)record;
-(void)voiceControllerDidStartRecording:(id)arg1 successfully:(BOOL)arg2 ;
-(void)voiceControllerDidStopRecording:(id)arg1 forReason:(long long)arg2 ;
-(void)voiceControllerDidDetectStartpoint:(id)arg1 ;
-(void)voiceControllerRecordBufferAvailable:(id)arg1 buffer:(id)arg2 ;
-(void)releaseAudioSession;
-(void)playAlertSoundForType:(int)arg1 ;
-(NSDictionary *)recordSettings;
-(AVVoiceController *)voiceController;
-(void)setRecordSettings:(NSDictionary *)arg1 ;
-(void)_setActivationMode:(long long)arg1 ;
-(void)messageSent:(id)arg1 ;
-(void)voiceControllerDidStopRecordingForClientError;
-(void)setAudioAnalyzer:(CKAudioAnalyzer *)arg1 ;
-(void)setVoiceController:(AVVoiceController *)arg1 ;
-(CKAudioAnalyzer *)audioAnalyzer;
-(void)stopUpdatingPower;
-(void)startUpdatingPower;
-(NSObject*<OS_dispatch_source>)powerUpdateTimer;
-(void)setPowerUpdateTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(id)initWithActivationMode:(long long)arg1 recordSettings:(id)arg2 queue:(id)arg3 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)record;
-(AVVoiceController *)voiceController;
-(void)setRecordSettings:(NSDictionary *)arg1 ;
-(void)_setActivationMode:(long long)arg1 ;
-(void)messageSent:(id)arg1 ;
-(void)voiceControllerDidStopRecordingForClientError;
-(void)setAudioAnalyzer:(CKAudioAnalyzer *)arg1 ;
-(void)setVoiceController:(AVVoiceController *)arg1 ;
-(void)stopUpdatingPower;
-(void)voiceControllerDidDetectStartpoint:(id)arg1 ;
-(void)startUpdatingPower;
-(void)voiceControllerRecordBufferAvailable:(id)arg1 buffer:(id)arg2 ;
-(void)setPowerUpdateTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)voiceControllerDidStopRecording:(id)arg1 forReason:(long long)arg2 ;
-(NSObject*<OS_dispatch_source>)powerUpdateTimer;
-(void)voiceControllerDidStartRecording:(id)arg1 successfully:(BOOL)arg2 ;
-(void)releaseAudioSession;
-(id)initWithActivationMode:(long long)arg1 recordSettings:(id)arg2 queue:(id)arg3 ;
-(CKAudioAnalyzer *)audioAnalyzer;
-(id<CKVoiceControllerDelegate>)delegate;
-(void)stop;
-(void)setDelegate:(id<CKVoiceControllerDelegate>)arg1 ;
-(void)setActivationMode:(long long)arg1 ;
-(void)cleanup;
-(NSObject*<OS_dispatch_queue>)queue;
-(long long)_activationMode;
-(void)playAlertSoundForType:(int)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSDictionary *)recordSettings;
-(void)dealloc;
@end


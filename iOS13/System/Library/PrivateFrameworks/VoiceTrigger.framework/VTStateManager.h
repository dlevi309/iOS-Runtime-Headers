/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/

#import <libobjc.A.dylib/VTFirstUnlockMonitorDelegate.h>
#import <libobjc.A.dylib/VTGestureMonitorDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, VTPhraseSpotter, VTBuiltInRTModel, VTPolicy, VTXPCServiceServer, VTGestureMonitor, VTCoreSpeechKeepAliveHandler, NSString;

@interface VTStateManager : NSObject <VTFirstUnlockMonitorDelegate, VTGestureMonitorDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	VTPhraseSpotter* _phraseSpotter;
	VTBuiltInRTModel* _builtInRTModel;
	/*^block*/id _callbackWithMessageAndTimestamp;
	VTPolicy* _enablePolicy;
	VTXPCServiceServer* _xpcServer;
	BOOL _voiceTriggerIsEnabled;
	BOOL _voiceTriggerIsEnabledOnCoreSpeechDaemon;
	BOOL _rtModelDownloaded;
	VTGestureMonitor* _gestureMonitor;
	unsigned long long _wakeGestureHostTime;
	VTCoreSpeechKeepAliveHandler* _coreSpeechKeepAliveHandler;

}

@property (nonatomic,retain) VTCoreSpeechKeepAliveHandler * coreSpeechKeepAliveHandler;              //@synthesize coreSpeechKeepAliveHandler=_coreSpeechKeepAliveHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)notifyVoiceTrigger;
+(id)_serviceClient;
+(void)notifyVoiceTriggeredSiriSessionCancelled:(id)arg1 ;
+(void)clearVoiceTriggerCount;
+(void)requestAudioCapture:(double)arg1 ;
+(void)requestCurrentVoiceTriggerAssetDictionaryWithReply:(/*^block*/id)arg1 ;
+(void)setCurrentBuiltInRTModelDictionary:(id)arg1 ;
+(long long)getVoiceTriggerCount;
+(id)requestCurrentVoiceTriggerAssetDictionary;
+(id)requestCurrentBuiltInRTModelDictionary;
+(void)notifyVoiceTriggeredSiriSessionCancelled;
+(void)requestVoiceTriggerEnabled:(BOOL)arg1 forReason:(id)arg2 ;
+(void)requestPhraseSpotterBypassing:(BOOL)arg1 timeout:(double)arg2 ;
+(void)requestRaiseToSpeakBypassing:(BOOL)arg1 timeout:(double)arg2 ;
+(void)requestForcedSecondChance;
+(void)requestForcedTriggerEvent;
+(BOOL)isLastTriggerForced;
+(BOOL)isLastTriggerSecondChanceTriggered;
+(id)firstChanceAudioBuffer;
+(id)firstChanceVTEventInfo;
+(id)firstChanceTriggeredDate;
+(BOOL)iPhoneShouldStartVoiceTriggerInCoreSpeech;
-(id)initWithProperty:(id)arg1 callbackWithMessageAndTimestamp:(/*^block*/id)arg2 ;
-(id)getModel;
-(id)getPhraseSpotter;
-(void)gestureMonitorDidReceiveWakeGesture:(id)arg1 ;
-(void)gestureMonitorDidReceiveSleepGesture:(id)arg1 ;
-(id)initWithProperty:(id)arg1 phraseSpotter:(id)arg2 enablePolicy:(id)arg3 callbackWithMessageAndTimestamp:(/*^block*/id)arg4 ;
-(void)_notifyStateTransitionToState:(long long)arg1 withStartTimestamp:(unsigned long long)arg2 ;
-(void)_initializeXPCService;
-(void)_stateTransitionDidOccur:(BOOL)arg1 fromCallback:(BOOL)arg2 ;
-(VTCoreSpeechKeepAliveHandler *)coreSpeechKeepAliveHandler;
-(void)_powerlog:(id)arg1 ;
-(void)VTFirstUnlockMonitor:(id)arg1 didReceiveFirstUnlock:(BOOL)arg2 ;
-(id)initWithProperty:(id)arg1 callbackWithMessage:(/*^block*/id)arg2 ;
-(void)setCoreSpeechKeepAliveHandler:(VTCoreSpeechKeepAliveHandler *)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)requestCurrentVoiceTriggerAssetDictionary;
+(void)notifyVoiceTrigger;
+(void)clearVoiceTriggerCount;
+(void)setCurrentBuiltInRTModelDictionary:(id)arg1 ;
+(void)requestCurrentVoiceTriggerAssetDictionaryWithReply:(/*^block*/id)arg1 ;
+(void)requestForcedSecondChance;
+(void)requestRaiseToSpeakBypassing:(BOOL)arg1 timeout:(double)arg2 ;
+(void)requestPhraseSpotterBypassing:(BOOL)arg1 timeout:(double)arg2 ;
+(id)requestCurrentBuiltInRTModelDictionary;
+(long long)getVoiceTriggerCount;
+(void)requestForcedTriggerEvent;
+(id)_serviceClient;
+(void)notifyVoiceTriggeredSiriSessionCancelled;
+(void)notifyVoiceTriggeredSiriSessionCancelled:(id)arg1 ;
+(id)firstChanceAudioBuffer;
+(id)firstChanceVTEventInfo;
+(BOOL)iPhoneShouldStartVoiceTriggerInCoreSpeech;
+(BOOL)isLastTriggerSecondChanceTriggered;
+(BOOL)isLastTriggerForced;
+(void)requestVoiceTriggerEnabled:(BOOL)arg1 forReason:(id)arg2 ;
+(id)firstChanceTriggeredDate;
+(void)requestAudioCapture:(double)arg1 ;
-(void)gestureMonitorDidReceiveSleepGesture:(id)arg1 ;
-(id)initWithProperty:(id)arg1 callbackWithMessage:(/*^block*/id)arg2 ;
-(void)_notifyStateTransitionToState:(long long)arg1 withStartTimestamp:(unsigned long long)arg2 ;
-(id)initWithProperty:(id)arg1 callbackWithMessageAndTimestamp:(/*^block*/id)arg2 ;
-(id)initWithProperty:(id)arg1 phraseSpotter:(id)arg2 enablePolicy:(id)arg3 callbackWithMessageAndTimestamp:(/*^block*/id)arg4 ;
-(void)VTFirstUnlockMonitor:(id)arg1 didReceiveFirstUnlock:(BOOL)arg2 ;
-(void)gestureMonitorDidReceiveWakeGesture:(id)arg1 ;
-(id)getModel;
-(void)setCoreSpeechKeepAliveHandler:(VTCoreSpeechKeepAliveHandler *)arg1 ;
-(void)_powerlog:(id)arg1 ;
-(void)_initializeXPCService;
-(VTCoreSpeechKeepAliveHandler *)coreSpeechKeepAliveHandler;
-(id)getPhraseSpotter;
-(void)_stateTransitionDidOccur:(BOOL)arg1 fromCallback:(BOOL)arg2 ;
@end


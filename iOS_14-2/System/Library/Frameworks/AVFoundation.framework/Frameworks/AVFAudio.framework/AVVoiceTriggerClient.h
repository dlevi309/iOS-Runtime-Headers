/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/

#import <libobjc.A.dylib/VoiceTriggerNotificationInterface.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface AVVoiceTriggerClient : NSObject <VoiceTriggerNotificationInterface> {

	/*^block*/id _voiceTriggerBlock;
	/*^block*/id _speakerStateChangedBlock;
	/*^block*/id _speakerMuteStateChangedBlock;
	/*^block*/id _siriClientRecordStateChangedBlock;
	/*^block*/id _serverCrashedBlock;
	/*^block*/id _serverResetBlock;
	NSXPCConnection* _voiceTriggerServerConnection;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,retain) NSXPCConnection * voiceTriggerServerConnection;                        //@synthesize voiceTriggerServerConnection=_voiceTriggerServerConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                                //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,copy) id voiceTriggerBlock;                                                    //@synthesize voiceTriggerBlock=_voiceTriggerBlock - In the implementation block
@property (nonatomic,copy) id speakerStateChangedBlock;                                             //@synthesize speakerStateChangedBlock=_speakerStateChangedBlock - In the implementation block
@property (nonatomic,copy) id speakerMuteStateChangedBlock;                                         //@synthesize speakerMuteStateChangedBlock=_speakerMuteStateChangedBlock - In the implementation block
@property (nonatomic,copy) id siriClientRecordStateChangedBlock;                                    //@synthesize siriClientRecordStateChangedBlock=_siriClientRecordStateChangedBlock - In the implementation block
@property (nonatomic,copy) id serverCrashedBlock;                                                   //@synthesize serverCrashedBlock=_serverCrashedBlock - In the implementation block
@property (nonatomic,copy) id serverResetBlock;                                                     //@synthesize serverResetBlock=_serverResetBlock - In the implementation block
@property (nonatomic,readonly) unsigned long long voiceTriggerPastDataFramesAvailable; 
+(BOOL)isAPIAvailable;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)speakerStateChangedNotification:(id)arg1 ;
-(id)speakerMuteStateChangedBlock;
-(void)updateVoiceTriggerConfiguration:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(BOOL)hasBargeInSupport;
-(void)setServerResetBlock:(id)arg1 ;
-(void)enableBargeInMode:(BOOL)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)init;
-(unsigned long long)voiceTriggerPastDataFramesAvailable;
-(BOOL)speakerStateActive;
-(void)speakerStateActiveCompletionBlock:(/*^block*/id)arg1 ;
-(void)enableSpeakerStateListening:(BOOL)arg1 ;
-(void)enableVoiceTriggerListening:(BOOL)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)siriClientsRecordingCompletionBlock:(/*^block*/id)arg1 ;
-(void)voiceTriggerPastDataFramesAvailableCompletion:(/*^block*/id)arg1 ;
-(void)setListeningProperty:(BOOL)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)serverResetBlock;
-(id)voiceTriggerBlock;
-(void)callServerCrashedBlock;
-(void)handleMediaServerDeath:(id)arg1 ;
-(void)speakerMuteStateChangedNotification:(BOOL)arg1 ;
-(NSXPCConnection *)voiceTriggerServerConnection;
-(void)setServerCrashedBlock:(id)arg1 ;
-(void)closeServerConnection;
-(void)callServerResetBlock;
-(BOOL)speakerStateMuted;
-(void)setSpeakerMuteStateChangedBlock:(id)arg1 ;
-(void)siriClientRecordStateChangedNotification:(BOOL)arg1 recordingCount:(unsigned long long)arg2 ;
-(void)enableSpeakerStateListening:(BOOL)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)speakerStateChangedBlock;
-(void)handleMediaServerReset:(id)arg1 ;
-(id)siriClientRecordStateChangedBlock;
-(void)voiceTriggerNotification:(id)arg1 ;
-(void)updateVoiceTriggerConfiguration:(id)arg1 ;
-(void)speakerStateMutedCompletionBlock:(/*^block*/id)arg1 ;
-(id)serverCrashedBlock;
-(void)hasBargeInSupportCompletionBlock:(/*^block*/id)arg1 ;
-(void)setVoiceTriggerServerConnection:(NSXPCConnection *)arg1 ;
-(void)setSiriClientRecordStateChangedBlock:(id)arg1 ;
-(void)setSpeakerStateChangedBlock:(id)arg1 ;
-(void)enableVoiceTriggerListening:(BOOL)arg1 ;
-(void)listeningEnabledCompletionBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)setVoiceTriggerBlock:(id)arg1 ;
@end


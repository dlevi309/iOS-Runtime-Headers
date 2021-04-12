/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
*/

#import <AudioToolbox/AudioToolbox-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/VoiceTriggerInterface.h>

@protocol OS_dispatch_queue;
@class NSXPCListener, NSMutableArray, NSObject, VTStateManager, NSString;

@interface BorealisServer : NSObject <NSXPCListenerDelegate, VoiceTriggerInterface> {

	BorealisServerImpl* serverImpl;
	NSXPCListener* _serverListener;
	NSMutableArray* _clientConnections;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	void* _mobileAssistantDylib;
	/*function pointer*/void* _afSiriActivationBuiltInMicVoiceFuncPtr;
	void* _voiceTriggerDylib;
	Class _clsVTStateManager;
	VTStateManager* _vtStateManager;

}

@property (nonatomic,retain) NSXPCListener * serverListener;                                                //@synthesize serverListener=_serverListener - In the implementation block
@property (nonatomic,retain) NSMutableArray * clientConnections;                                            //@synthesize clientConnections=_clientConnections - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> notificationQueue;                                //@synthesize notificationQueue=_notificationQueue - In the implementation block
@property (assign,nonatomic) void* mobileAssistantDylib;                                                    //@synthesize mobileAssistantDylib=_mobileAssistantDylib - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* afSiriActivationBuiltInMicVoiceFuncPtr;              //@synthesize afSiriActivationBuiltInMicVoiceFuncPtr=_afSiriActivationBuiltInMicVoiceFuncPtr - In the implementation block
@property (assign,nonatomic) void* voiceTriggerDylib;                                                       //@synthesize voiceTriggerDylib=_voiceTriggerDylib - In the implementation block
@property (nonatomic,retain) Class clsVTStateManager;                                                       //@synthesize clsVTStateManager=_clsVTStateManager - In the implementation block
@property (nonatomic,retain) VTStateManager * vtStateManager;                                               //@synthesize vtStateManager=_vtStateManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)initializeWithReply:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)notificationQueue;
-(void)enableVoiceTriggerListening:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(void)setListeningProperty:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(void)enableSpeakerStateListening:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(void)speakerStateActiveReply:(/*^block*/id)arg1 ;
-(void)speakerStateMutedReply:(/*^block*/id)arg1 ;
-(void)updateVoiceTriggerConfiguration:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)voiceTriggerPastDataFramesAvailable:(/*^block*/id)arg1 ;
-(void)hasBargeInSupportReply:(/*^block*/id)arg1 ;
-(void)enableBargeInMode:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(void)listeningEnabledReply:(/*^block*/id)arg1 ;
-(void)siriClientsRecordingReply:(/*^block*/id)arg1 ;
-(void)sendVoiceTriggerOccuredNotification:(id)arg1 ;
-(void)sendSpeakerActiveStateChangedNotification:(BOOL)arg1 ;
-(void)sendSpeakerMuteStateChangedNotification:(BOOL)arg1 ;
-(BOOL)heySiriEnabled;
-(void)speechDetectionVADCreated;
-(void)siriClientRecordStateChanged:(BOOL)arg1 ;
-(BOOL)hardwareSupportsVoiceTrigger;
-(NSXPCListener *)serverListener;
-(void)setServerListener:(NSXPCListener *)arg1 ;
-(NSMutableArray *)clientConnections;
-(void)setClientConnections:(NSMutableArray *)arg1 ;
-(void)setNotificationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void*)mobileAssistantDylib;
-(void)setMobileAssistantDylib:(void*)arg1 ;
-(/*function pointer*/void*)afSiriActivationBuiltInMicVoiceFuncPtr;
-(void)setAfSiriActivationBuiltInMicVoiceFuncPtr:(/*function pointer*/void*)arg1 ;
-(void*)voiceTriggerDylib;
-(void)setVoiceTriggerDylib:(void*)arg1 ;
-(Class)clsVTStateManager;
-(void)setClsVTStateManager:(Class)arg1 ;
-(VTStateManager *)vtStateManager;
-(void)setVtStateManager:(VTStateManager *)arg1 ;
@end


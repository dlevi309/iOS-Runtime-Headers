/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setNotificationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)sendSpeakerActiveStateChangedNotification:(BOOL)arg1 ;
-(void)enableSpeakerStateListening:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(id)init;
-(void)voiceTriggerPastDataFramesAvailable:(/*^block*/id)arg1 ;
-(/*function pointer*/void*)afSiriActivationBuiltInMicVoiceFuncPtr;
-(BOOL)heySiriEnabled;
-(Class)clsVTStateManager;
-(void)setListeningProperty:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(void)sendVoiceTriggerOccuredNotification:(id)arg1 ;
-(void)speakerStateActiveReply:(/*^block*/id)arg1 ;
-(void)enableBargeInMode:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(VTStateManager *)vtStateManager;
-(void)siriClientsRecordingReply:(/*^block*/id)arg1 ;
-(void)enableVoiceTriggerListening:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(void*)mobileAssistantDylib;
-(void)hasBargeInSupportReply:(/*^block*/id)arg1 ;
-(void)setVtStateManager:(VTStateManager *)arg1 ;
-(NSObject*<OS_dispatch_queue>)notificationQueue;
-(void)setAfSiriActivationBuiltInMicVoiceFuncPtr:(/*function pointer*/void*)arg1 ;
-(NSXPCListener *)serverListener;
-(void*)voiceTriggerDylib;
-(void)setClientConnections:(NSMutableArray *)arg1 ;
-(void)initializeWithReply:(/*^block*/id)arg1 ;
-(void)sendSpeakerMuteStateChangedNotification:(BOOL)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setClsVTStateManager:(Class)arg1 ;
-(NSMutableArray *)clientConnections;
-(void)updateVoiceTriggerConfiguration:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)speakerStateMutedReply:(/*^block*/id)arg1 ;
-(void)speechDetectionVADCreated;
-(void)setVoiceTriggerDylib:(void*)arg1 ;
-(BOOL)hardwareSupportsVoiceTrigger;
-(void)setMobileAssistantDylib:(void*)arg1 ;
-(void)dealloc;
-(void)siriClientRecordStateChanged:(BOOL)arg1 ;
-(void)setServerListener:(NSXPCListener *)arg1 ;
-(void)listeningEnabledReply:(/*^block*/id)arg1 ;
@end


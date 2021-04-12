/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMapTable, CSActivationEvent;

@interface CSActivationEventNotifier : NSObject {

	int _notifyToken;
	NSObject*<OS_dispatch_queue> _queue;
	NSMapTable* _delegates;
	CSActivationEvent* _pendingActivationEvent;
	/*^block*/id _pendingCompletion;

}

@property (assign,nonatomic) int notifyToken;                                         //@synthesize notifyToken=_notifyToken - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMapTable * delegates;                                  //@synthesize delegates=_delegates - In the implementation block
@property (nonatomic,retain) CSActivationEvent * pendingActivationEvent;              //@synthesize pendingActivationEvent=_pendingActivationEvent - In the implementation block
@property (nonatomic,copy) id pendingCompletion;                                      //@synthesize pendingCompletion=_pendingCompletion - In the implementation block
+(id)sharedNotifier;
+(id)sharedNotifierForCoreSpeechDaemon;
-(id)init;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(int)notifyToken;
-(void)stop;
-(void)start;
-(void)_stopMonitoring;
-(NSMapTable *)delegates;
-(void)setDelegates:(NSMapTable *)arg1 ;
-(void)notifyActivationEvent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_startMonitoring;
-(void)setNotifyToken:(int)arg1 ;
-(void)setPendingCompletion:(id)arg1 ;
-(id)pendingCompletion;
-(void)setDelegate:(id)arg1 for:(unsigned long long)arg2 ;
-(id)_createXPCClientConnection;
-(void)_notifyActivationEvent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_isVoiceTriggerEvent:(id)arg1 ;
-(BOOL)_hasPendingActivationForType:(unsigned long long)arg1 ;
-(void)_setupTestNotification;
-(void)receiveTestNotificationAPMode;
-(void)receiveTestNotificationAOPMode;
-(void)notifyActivationEventForCoreSpeechDaemon:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)notifyActivationEvent:(unsigned long long)arg1 deviceId:(id)arg2 activationInfo:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_didReceiveAOPFirstPassTrigger:(id)arg1 completion:(/*^block*/id)arg2 ;
-(CSActivationEvent *)pendingActivationEvent;
-(void)setPendingActivationEvent:(CSActivationEvent *)arg1 ;
@end


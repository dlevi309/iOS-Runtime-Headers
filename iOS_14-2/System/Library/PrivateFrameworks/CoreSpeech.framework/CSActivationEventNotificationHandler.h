/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMapTable, CSActivationEvent;

@interface CSActivationEventNotificationHandler : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMapTable* _delegates;
	CSActivationEvent* _pendingActivationEvent;
	/*^block*/id _pendingCompletion;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMapTable * delegates;                                  //@synthesize delegates=_delegates - In the implementation block
@property (nonatomic,retain) CSActivationEvent * pendingActivationEvent;              //@synthesize pendingActivationEvent=_pendingActivationEvent - In the implementation block
@property (nonatomic,copy) id pendingCompletion;                                      //@synthesize pendingCompletion=_pendingCompletion - In the implementation block
+(id)sharedInstance;
-(void)_stopMonitoring;
-(NSMapTable *)delegates;
-(void)setDelegates:(NSMapTable *)arg1 ;
-(void)setPendingCompletion:(id)arg1 ;
-(id)pendingCompletion;
-(id)init;
-(void)notifyActivationEvent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)start;
-(void)_didReceiveAOPFirstPassTrigger:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)stop;
-(BOOL)_isVoiceTriggerEvent:(id)arg1 ;
-(void)setPendingActivationEvent:(CSActivationEvent *)arg1 ;
-(void)_notifyActivationEvent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_startMonitoring;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)_hasPendingActivationForType:(unsigned long long)arg1 ;
-(CSActivationEvent *)pendingActivationEvent;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 forType:(unsigned long long)arg2 ;
@end


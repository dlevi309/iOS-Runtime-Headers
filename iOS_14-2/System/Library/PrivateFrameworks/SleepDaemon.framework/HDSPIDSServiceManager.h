/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>
#import <libobjc.A.dylib/HDSPSleepActionObserver.h>
#import <libobjc.A.dylib/HDSPSource.h>
#import <libobjc.A.dylib/HDSPEnvironmentAware.h>

@protocol HDSPIDSService, HKSPQueueBackedScheduler;
@class HDSPEnvironment, NSString;

@interface HDSPIDSServiceManager : NSObject <IDSServiceDelegate, HDSPSleepActionObserver, HDSPSource, HDSPEnvironmentAware> {

	HDSPEnvironment* _environment;
	id<HDSPIDSService> _service;
	id<HKSPQueueBackedScheduler> _scheduler;

}

@property (nonatomic,readonly) id<HDSPIDSService> service;                          //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) id<HKSPQueueBackedScheduler> scheduler;              //@synthesize scheduler=_scheduler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * sourceIdentifier; 
@property (nonatomic,readonly) BOOL dontNotify; 
@property (nonatomic,readonly) BOOL dontSync; 
@property (nonatomic,readonly) id<HDSPSource> targetSource; 
@property (nonatomic,__weak,readonly) HDSPEnvironment * environment;                //@synthesize environment=_environment - In the implementation block
-(void)environmentDidBecomeReady:(id)arg1 ;
-(void)goodMorningWasDismissed:(id)arg1 ;
-(void)environmentWillBecomeReady:(id)arg1 ;
-(void)sendMessage:(id)arg1 ;
-(void)_handleDelayBedtimeMessage:(id)arg1 ;
-(void)_handleSetSleepModeMessage:(id)arg1 ;
-(void)wakeNotificationWasConfirmed:(id)arg1 ;
-(void)_handleConfirmWakeUpMessage:(id)arg1 ;
-(void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)_handleDismissGoodMorningMessage:(id)arg1 ;
-(void)windDownWasSkipped:(id)arg1 ;
-(void)_handleSkipWindDownMessage:(id)arg1 ;
-(void)_handleReceivedMessage:(id)arg1 ;
-(void)_sendSerializedMessage:(id)arg1 originalMessage:(id)arg2 ;
-(id)initWithEnvironment:(id)arg1 ;
-(BOOL)dontSync;
-(void)sleepModeSet:(long long)arg1 source:(id)arg2 ;
-(HDSPEnvironment *)environment;
-(void)_handleSkipBedtimeMessage:(id)arg1 ;
-(id)initWithEnvironment:(id)arg1 idsService:(id)arg2 scheduler:(id)arg3 ;
-(void)bedtimeWasSkipped:(id)arg1 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 context:(id)arg6 ;
-(id<HDSPIDSService>)service;
-(NSString *)sourceIdentifier;
-(id<HKSPQueueBackedScheduler>)scheduler;
-(void)bedtimeWasDelayed:(id)arg1 ;
@end


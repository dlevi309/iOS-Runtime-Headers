/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <libobjc.A.dylib/MTAlarmServer.h>

@protocol MTAlarmServer <MTXPCServer>
@required
-(void)getAlarmsWithCompletion:(/*^block*/id)arg1;
-(void)updateAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)addAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)dismissAlarmWithIdentifier:(id)arg1 dismissAction:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3;
-(void)removeAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)snoozeAlarmWithIdentifier:(id)arg1 snoozeAction:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3;
-(void)updateSleepAlarmsWithCompletion:(/*^block*/id)arg1;
-(void)resetSleepAlarmSnoozeStateWithCompletion:(/*^block*/id)arg1;
-(void)nextSleepAlarmWithCompletion:(/*^block*/id)arg1;

@end

#import <libobjc.A.dylib/MTAlarmObserver.h>
#import <libobjc.A.dylib/MTAgentDiagnosticDelegate.h>

@protocol NAScheduler;
@class MTAlarmStorage, MTXPCConnectionListenerProvider, NSString;

@interface MTAlarmServer : NSObject <MTAlarmServer, MTAlarmObserver, MTAgentDiagnosticDelegate> {

	BOOL _systemReady;
	MTAlarmStorage* _storage;
	MTXPCConnectionListenerProvider* _connectionListenerProvider;
	id<NAScheduler> _serializer;

}

@property (nonatomic,readonly) MTAlarmStorage * storage;                                                  //@synthesize storage=_storage - In the implementation block
@property (nonatomic,readonly) MTXPCConnectionListenerProvider * connectionListenerProvider;              //@synthesize connectionListenerProvider=_connectionListenerProvider - In the implementation block
@property (getter=isSystemReady,nonatomic,readonly) BOOL systemReady;                                     //@synthesize systemReady=_systemReady - In the implementation block
@property (nonatomic,retain) id<NAScheduler> serializer;                                                  //@synthesize serializer=_serializer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_notifyClientsForTriggerType:(unsigned long long)arg1 ;
-(void)getAlarmsWithCompletion:(/*^block*/id)arg1 ;
-(void)setSerializer:(id<NAScheduler>)arg1 ;
-(void)source:(id)arg1 didUpdateAlarms:(id)arg2 ;
-(id)initWithStorage:(id)arg1 ;
-(void)source:(id)arg1 didRemoveAlarms:(id)arg2 ;
-(void)handleSystemReady;
-(void)source:(id)arg1 didAddAlarms:(id)arg2 ;
-(void)source:(id)arg1 didSnoozeAlarm:(id)arg2 snoozeAction:(unsigned long long)arg3 ;
-(void)checkIn;
-(BOOL)_isSystemReady;
-(void)source:(id)arg1 didDismissAlarm:(id)arg2 dismissAction:(unsigned long long)arg3 ;
-(id)gatherDiagnostics;
-(void)source:(id)arg1 didFireAlarm:(id)arg2 triggerType:(unsigned long long)arg3 ;
-(void)printDiagnostics;
-(void)startListening;
-(void)source:(id)arg1 didChangeNextAlarm:(id)arg2 ;
-(void)stopListening;
-(void)updateAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(MTXPCConnectionListenerProvider *)connectionListenerProvider;
-(void)addAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(MTAlarmStorage *)storage;
-(id<NAScheduler>)serializer;
-(id)_systemNotReadyError;
-(void)dismissAlarmWithIdentifier:(id)arg1 dismissAction:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(BOOL)isSystemReady;
-(void)removeAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)snoozeAlarmWithIdentifier:(id)arg1 snoozeAction:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)updateSleepAlarmsWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithStorage:(id)arg1 connectionListenerProvider:(id)arg2 ;
-(void)resetSleepAlarmSnoozeStateWithCompletion:(/*^block*/id)arg1 ;
-(void)nextSleepAlarmWithCompletion:(/*^block*/id)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <libobjc.A.dylib/MTAlarmServer.h>

@protocol MTAlarmServer <MTXPCServer>
@required
-(void)getAlarmsWithCompletion:(/*^block*/id)arg1;
-(void)addAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)updateAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)removeAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)snoozeAlarmWithIdentifier:(id)arg1 snoozeAction:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3;
-(void)dismissAlarmWithIdentifier:(id)arg1 dismissAction:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3;

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
-(MTAlarmStorage *)storage;
-(void)checkIn;
-(id)initWithStorage:(id)arg1 ;
-(void)startListening;
-(void)stopListening;
-(id<NAScheduler>)serializer;
-(void)setSerializer:(id<NAScheduler>)arg1 ;
-(void)printDiagnostics;
-(id)gatherDiagnostics;
-(void)source:(id)arg1 didAddAlarms:(id)arg2 ;
-(void)source:(id)arg1 didUpdateAlarms:(id)arg2 ;
-(void)source:(id)arg1 didRemoveAlarms:(id)arg2 ;
-(void)source:(id)arg1 didSnoozeAlarm:(id)arg2 snoozeAction:(unsigned long long)arg3 ;
-(void)source:(id)arg1 didFireAlarm:(id)arg2 triggerType:(unsigned long long)arg3 ;
-(void)source:(id)arg1 didDismissAlarm:(id)arg2 dismissAction:(unsigned long long)arg3 ;
-(void)source:(id)arg1 didChangeNextAlarm:(id)arg2 ;
-(void)getAlarmsWithCompletion:(/*^block*/id)arg1 ;
-(void)handleSystemReady;
-(void)addAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)updateAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)removeAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)snoozeAlarmWithIdentifier:(id)arg1 snoozeAction:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)dismissAlarmWithIdentifier:(id)arg1 dismissAction:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)initWithStorage:(id)arg1 connectionListenerProvider:(id)arg2 ;
-(BOOL)_isSystemReady;
-(id)_systemNotReadyError;
-(MTXPCConnectionListenerProvider *)connectionListenerProvider;
-(BOOL)isSystemReady;
@end


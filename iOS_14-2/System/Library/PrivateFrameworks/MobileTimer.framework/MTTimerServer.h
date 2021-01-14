/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <libobjc.A.dylib/MTTimerObserver.h>
#import <libobjc.A.dylib/MTTimerServer.h>

@protocol MTTimerServer <MTXPCServer>
@required
-(void)addTimer:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)repeatTimerWithIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)removeTimer:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)getTimersWithCompletion:(/*^block*/id)arg1;
-(void)updateTimer:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)dismissTimerWithIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2;

@end

#import <libobjc.A.dylib/MTAgentDiagnosticDelegate.h>

@protocol NAScheduler;
@class MTTimerStorage, MTXPCConnectionListenerProvider, NSString;

@interface MTTimerServer : NSObject <MTTimerObserver, MTTimerServer, MTAgentDiagnosticDelegate> {

	BOOL _systemReady;
	MTTimerStorage* _storage;
	MTXPCConnectionListenerProvider* _connectionListenerProvider;
	id<NAScheduler> _serializer;

}

@property (nonatomic,readonly) MTTimerStorage * storage;                                                  //@synthesize storage=_storage - In the implementation block
@property (nonatomic,readonly) MTXPCConnectionListenerProvider * connectionListenerProvider;              //@synthesize connectionListenerProvider=_connectionListenerProvider - In the implementation block
@property (getter=isSystemReady,nonatomic,readonly) BOOL systemReady;                                     //@synthesize systemReady=_systemReady - In the implementation block
@property (nonatomic,retain) id<NAScheduler> serializer;                                                  //@synthesize serializer=_serializer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSerializer:(id<NAScheduler>)arg1 ;
-(void)nextTimerDidChange:(id)arg1 ;
-(id)initWithStorage:(id)arg1 ;
-(void)source:(id)arg1 didAddTimers:(id)arg2 ;
-(void)source:(id)arg1 didUpdateTimers:(id)arg2 ;
-(void)handleSystemReady;
-(void)checkIn;
-(BOOL)_isSystemReady;
-(id)gatherDiagnostics;
-(void)printDiagnostics;
-(void)startListening;
-(void)stopListening;
-(MTXPCConnectionListenerProvider *)connectionListenerProvider;
-(MTTimerStorage *)storage;
-(id<NAScheduler>)serializer;
-(id)_systemNotReadyError;
-(void)source:(id)arg1 didFireTimer:(id)arg2 ;
-(void)addTimer:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)source:(id)arg1 didRemoveTimers:(id)arg2 ;
-(void)repeatTimerWithIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)isSystemReady;
-(void)removeTimer:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)source:(id)arg1 didDismissTimer:(id)arg2 ;
-(id)initWithStorage:(id)arg1 connectionListenerProvider:(id)arg2 ;
-(void)getTimersWithCompletion:(/*^block*/id)arg1 ;
-(void)updateTimer:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)dismissTimerWithIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end


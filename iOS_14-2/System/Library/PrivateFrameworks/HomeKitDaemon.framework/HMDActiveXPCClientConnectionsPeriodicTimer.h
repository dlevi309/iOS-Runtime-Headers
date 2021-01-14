/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol HMDActiveXPCClientConnectionsPeriodicTimerDelegate, OS_dispatch_queue;
@class NSString, NSObject, NSHashTable, HMFTimer, NSSet;

@interface HMDActiveXPCClientConnectionsPeriodicTimer : HMFObject <HMFLogging, HMFTimerDelegate> {

	NSString* _logIdentifier;
	double _timeInterval;
	id<HMDActiveXPCClientConnectionsPeriodicTimerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSHashTable* _mutableClientConnections;
	HMFTimer* _timer;
	/*^block*/id _timerFactory;

}

@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                     //@synthesize workQueue=_workQueue - In the implementation block
@property (copy,readonly) NSString * logIdentifier;                                              //@synthesize logIdentifier=_logIdentifier - In the implementation block
@property (readonly) NSHashTable * mutableClientConnections;                                     //@synthesize mutableClientConnections=_mutableClientConnections - In the implementation block
@property (retain) HMFTimer * timer;                                                             //@synthesize timer=_timer - In the implementation block
@property (copy) id timerFactory;                                                                //@synthesize timerFactory=_timerFactory - In the implementation block
@property (readonly) double timeInterval;                                                        //@synthesize timeInterval=_timeInterval - In the implementation block
@property (copy,readonly) NSSet * clientConnections; 
@property (__weak) id<HMDActiveXPCClientConnectionsPeriodicTimerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)timerDidFire:(id)arg1 ;
-(HMFTimer *)timer;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setTimer:(HMFTimer *)arg1 ;
-(void)removeClientConnection:(id)arg1 ;
-(id<HMDActiveXPCClientConnectionsPeriodicTimerDelegate>)delegate;
-(double)timeInterval;
-(NSString *)logIdentifier;
-(void)setDelegate:(id<HMDActiveXPCClientConnectionsPeriodicTimerDelegate>)arg1 ;
-(NSSet *)clientConnections;
-(void)_updateTimer;
-(id)timerFactory;
-(void)setTimerFactory:(id)arg1 ;
-(NSHashTable *)mutableClientConnections;
-(void)handleClientConnectionDidActivate:(id)arg1 ;
-(void)handleClientConnectionDidDeactivate:(id)arg1 ;
-(id)initWithTimeInterval:(double)arg1 logIdentifier:(id)arg2 workQueue:(id)arg3 ;
-(void)addClientConnection:(id)arg1 ;
@end


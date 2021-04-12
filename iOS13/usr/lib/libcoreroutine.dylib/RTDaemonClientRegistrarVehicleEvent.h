/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTDaemonClientRegistrar.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/RTDaemonClientRegistrarProtocol.h>

@protocol RTDaemonClientRegistrarVehicleEventProtocol, OS_dispatch_queue;
@class RTInvocationDispatcher, RTVehicleLocationProvider, NSObject, NSString;

@interface RTDaemonClientRegistrarVehicleEvent : RTDaemonClientRegistrar <NSSecureCoding, RTDaemonClientRegistrarProtocol> {

	BOOL _registered;
	id<RTDaemonClientRegistrarVehicleEventProtocol> _delegate;
	RTInvocationDispatcher* _dispatcher;
	RTVehicleLocationProvider* _vehicleLocationProvider;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic) BOOL registered;                                                              //@synthesize registered=_registered - In the implementation block
@property (nonatomic,retain) RTInvocationDispatcher * dispatcher;                                          //@synthesize dispatcher=_dispatcher - In the implementation block
@property (nonatomic,retain) RTVehicleLocationProvider * vehicleLocationProvider;                          //@synthesize vehicleLocationProvider=_vehicleLocationProvider - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                           //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<RTDaemonClientRegistrarVehicleEventProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<RTDaemonClientRegistrarVehicleEventProtocol>)delegate;
-(void)setDelegate:(id<RTDaemonClientRegistrarVehicleEventProtocol>)arg1 ;
-(BOOL)registered;
-(void)setRegistered:(BOOL)arg1 ;
-(RTInvocationDispatcher *)dispatcher;
-(void)setDispatcher:(RTInvocationDispatcher *)arg1 ;
-(void)stopMonitoringVehicleEvents;
-(long long)countOfPendingInvocations;
-(BOOL)invocationsPending;
-(id)initWithVehicleLocationProvider:(id)arg1 queue:(id)arg2 ;
-(void)startMonitoringVehicleEvents;
-(void)addPendingVehicleEventBlock:(/*^block*/id)arg1 failBlock:(/*^block*/id)arg2 description:(id)arg3 ;
-(RTVehicleLocationProvider *)vehicleLocationProvider;
-(void)setVehicleLocationProvider:(RTVehicleLocationProvider *)arg1 ;
-(void)onVehicleEventNotification:(id)arg1 ;
@end


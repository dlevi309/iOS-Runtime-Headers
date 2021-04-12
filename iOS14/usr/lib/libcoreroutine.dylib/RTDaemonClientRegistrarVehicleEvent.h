/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setRegistered:(BOOL)arg1 ;
-(RTVehicleLocationProvider *)vehicleLocationProvider;
-(BOOL)registered;
-(void)setVehicleLocationProvider:(RTVehicleLocationProvider *)arg1 ;
-(void)stopMonitoringVehicleEvents;
-(RTInvocationDispatcher *)dispatcher;
-(void)setDispatcher:(RTInvocationDispatcher *)arg1 ;
-(id<RTDaemonClientRegistrarVehicleEventProtocol>)delegate;
-(BOOL)invocationsPending;
-(long long)countOfPendingInvocations;
-(void)setDelegate:(id<RTDaemonClientRegistrarVehicleEventProtocol>)arg1 ;
-(id)initWithVehicleLocationProvider:(id)arg1 queue:(id)arg2 ;
-(void)addPendingVehicleEventBlock:(/*^block*/id)arg1 failBlock:(/*^block*/id)arg2 description:(id)arg3 ;
-(void)onVehicleEventNotification:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)startMonitoringVehicleEvents;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VirtualGarage.framework/VirtualGarage
*/

#import <VirtualGarage/VirtualGarage-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/VGVirtualGarageDelegate.h>
#import <libobjc.A.dylib/GEOConfigChangeListenerDelegate.h>
#import <libobjc.A.dylib/VGVirtualGarageActions.h>

@protocol OS_dispatch_queue, VGVirtualGaragePersisting, VGVirtualGarageObserver;
@class NSObject, VGVirtualGarage, NSXPCListener, NSMutableArray, NSString;

@interface VGVirtualGarageServer : NSObject <NSXPCListenerDelegate, VGVirtualGarageDelegate, GEOConfigChangeListenerDelegate, VGVirtualGarageActions> {

	NSObject*<OS_dispatch_queue> _isolationQueue;
	id<VGVirtualGaragePersisting> _persister;
	BOOL _hostsVirtualGarage;
	id<VGVirtualGarageObserver> _observer;
	NSObject*<OS_dispatch_queue> _observerQueue;
	VGVirtualGarage* _garage;
	NSXPCListener* _listener;
	NSMutableArray* _activeConnections;

}

@property (assign,nonatomic) BOOL hostsVirtualGarage;                                  //@synthesize hostsVirtualGarage=_hostsVirtualGarage - In the implementation block
@property (nonatomic,retain) VGVirtualGarage * garage;                                 //@synthesize garage=_garage - In the implementation block
@property (nonatomic,retain) NSXPCListener * listener;                                 //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) NSMutableArray * activeConnections;                       //@synthesize activeConnections=_activeConnections - In the implementation block
@property (assign,nonatomic,__weak) id<VGVirtualGarageObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> observerQueue;               //@synthesize observerQueue=_observerQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedServer;
+(BOOL)canUseVirtualGarageXPCService;
-(void)virtualGarageSelectVehicle:(id)arg1 ;
-(void)virtualGarageSaveVehicle:(id)arg1 ;
-(void)virtualGarageGetGarageWithReply:(/*^block*/id)arg1 ;
-(void)virtualGarageGetListOfUnpairedVehiclesWithReply:(/*^block*/id)arg1 ;
-(void)virtualGarageOnboardVehicle:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)observerQueue;
-(void)virtualGarageAddVehicle:(id)arg1 ;
-(void)virtualGarageSetAssumesFullCharge:(BOOL)arg1 ;
-(void)valueChangedForGEOConfigKey:(SCD_Struct_VG2*)arg1 ;
-(void)virtualGarageRemoveVehicle:(id)arg1 ;
-(NSMutableArray *)activeConnections;
-(void)virtualGarageEndContinuousUpdates;
-(void)setObserver:(id<VGVirtualGarageObserver>)arg1 ;
-(id)init;
-(id<VGVirtualGarageObserver>)observer;
-(BOOL)hostsVirtualGarage;
-(void)setObserverQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setActiveConnections:(NSMutableArray *)arg1 ;
-(void)stop;
-(VGVirtualGarage *)garage;
-(void)virtualGarageGetLatestStateOfVehicleWithIdentifier:(id)arg1 syncAcrossDevices:(BOOL)arg2 withReply:(/*^block*/id)arg3 ;
-(NSXPCListener *)listener;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)_setupVirtualGarageHostingIfNeeded;
-(void)setListener:(NSXPCListener *)arg1 ;
-(void)virtualGarageDidUpdate:(id)arg1 ;
-(void)setHostsVirtualGarage:(BOOL)arg1 ;
-(void)virtualGarageStartContinuousUpdatesIfNeeded;
-(void)_cleanUp;
-(void)setGarage:(VGVirtualGarage *)arg1 ;
-(void)startWithPersister:(id)arg1 ;
-(void)virtualGarage:(id)arg1 didUpdateUnpairedVehicles:(id)arg2 ;
-(void)dealloc;
@end


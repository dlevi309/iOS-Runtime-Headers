/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VirtualGarage.framework/VirtualGarage
*/

#import <libobjc.A.dylib/VGVirtualGarageObserver.h>
#import <libobjc.A.dylib/VGVirtualGarageActions.h>

@protocol OS_dispatch_queue;
@class NSHashTable, geo_isolater, GEOObserverHashTable, NSObject, NSString, NSXPCConnection;

@interface VGVirtualGarageService : NSObject <VGVirtualGarageObserver, VGVirtualGarageActions> {

	NSHashTable* _clients;
	geo_isolater* _clientsIsolater;
	GEOObserverHashTable* _observers;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSString* _activeVehicleIdentifier;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (copy) NSString * activeVehicleIdentifier;                    //@synthesize activeVehicleIdentifier=_activeVehicleIdentifier - In the implementation block
+(id)sharedService;
+(BOOL)canUseVirtualGarageXPCService;
-(void)virtualGarageSelectVehicle:(id)arg1 ;
-(void)virtualGarageSaveVehicle:(id)arg1 ;
-(void)virtualGarageGetGarageWithReply:(/*^block*/id)arg1 ;
-(void)virtualGarageGetListOfUnpairedVehiclesWithReply:(/*^block*/id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)virtualGarageOnboardVehicle:(id)arg1 ;
-(void)virtualGarageAddVehicle:(id)arg1 ;
-(void)virtualGarageSetAssumesFullCharge:(BOOL)arg1 ;
-(void)virtualGarageRemoveVehicle:(id)arg1 ;
-(void)virtualGarageEndContinuousUpdates;
-(id)init;
-(void)virtualGarageGetLatestStateOfVehicleWithIdentifier:(id)arg1 syncAcrossDevices:(BOOL)arg2 withReply:(/*^block*/id)arg3 ;
-(void)closeForClient:(id)arg1 ;
-(NSXPCConnection *)connection;
-(void)_closeConnection;
-(void)removeObserver:(id)arg1 ;
-(void)openForClient:(id)arg1 ;
-(void)virtualGarageDidUpdate:(id)arg1 ;
-(void)virtualGarageStartContinuousUpdatesIfNeeded;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)virtualGarage:(id)arg1 didUpdateUnpairedVehicles:(id)arg2 ;
-(void)_openConnection;
-(void)setActiveVehicleIdentifier:(NSString *)arg1 ;
-(NSString *)activeVehicleIdentifier;
-(id)messageTargetWithErrorReply:(/*^block*/id)arg1 ;
-(void)_clearActiveVehicleIdentifierIfNeeded:(id)arg1 ;
@end


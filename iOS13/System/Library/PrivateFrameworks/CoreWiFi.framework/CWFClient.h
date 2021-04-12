/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
*/

#import <libobjc.A.dylib/CWFXPCEventProxyDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet, NSMutableDictionary, SFAuthorization, NSXPCConnection;

@interface CWFClient : NSObject <CWFXPCEventProxyDelegate> {

	NSObject*<OS_dispatch_queue> _mutex;
	NSMutableSet* _mutableEventIDs;
	NSMutableDictionary* _mutableEventCallbackMap;
	NSMutableDictionary* _mutableActivityMap;
	BOOL _activated;
	BOOL _invalidated;
	SFAuthorization* _authorization;
	long long _XPCServiceType;
	NSXPCConnection* _XPCConnection;

}

@property (nonatomic,readonly) NSXPCConnection * XPCConnection;              //@synthesize XPCConnection=_XPCConnection - In the implementation block
@property (assign) BOOL activated;                                           //@synthesize activated=_activated - In the implementation block
@property (assign) BOOL invalidated;                                         //@synthesize invalidated=_invalidated - In the implementation block
@property (copy) SFAuthorization * authorization;                            //@synthesize authorization=_authorization - In the implementation block
@property (readonly) long long XPCServiceType;                               //@synthesize XPCServiceType=_XPCServiceType - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> targetQueue; 
@property (copy) id invalidationHandler; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(NSXPCConnection *)XPCConnection;
-(id)deviceUUID;
-(BOOL)activated;
-(id)activities;
-(id)IPv6Addresses;
-(id)IPv4Addresses;
-(NSObject*<OS_dispatch_queue>)targetQueue;
-(void)activate;
-(void)setActivated:(BOOL)arg1 ;
-(BOOL)invalidated;
-(void)setInvalidated:(BOOL)arg1 ;
-(unsigned)reachabilityFlags;
-(void)setTargetQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(SFAuthorization *)authorization;
-(void)setAuthorization:(SFAuthorization *)arg1 ;
-(void)proxy:(id)arg1 receivedEvent:(id)arg2 ;
-(void)stopMonitoringAllEvents;
-(long long)XPCServiceType;
-(id)initWithXPCServiceType:(long long)arg1 ;
-(id)DNSServerAddresses;
-(id)IPv4InterfaceName;
-(id)IPv6InterfaceName;
-(id)IPv4ServiceID;
-(id)IPv6ServiceID;
-(id)IPv4ServiceName;
-(id)IPv6ServiceName;
-(id)virtualInterfaceNames;
-(id)interfaceWithName:(id)arg1 ;
-(id)IPv4RouterAddress;
-(id)IPv6RouterAddress;
-(BOOL)startMonitoringEvent:(id)arg1 error:(id*)arg2 ;
-(BOOL)beginActivity:(id)arg1 error:(id*)arg2 ;
-(void)endActivityWithUUID:(id)arg1 ;
-(id)interfaceNames;
-(BOOL)cancelRequestWithUUID:(id)arg1 error:(id*)arg2 ;
-(void)endAllActivities;
-(void)performActivity:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)systemActivities;
-(id)eventIDs;
-(id)systemEventIDs;
-(void)stopMonitoringEvent:(id)arg1 ;
-(void)setEventHandler:(/*^block*/id)arg1 matching:(id)arg2 ;
-(void)clearAllEventHandlers;
-(id)mainInterface;
-(id)knownNetworkProfilesWithProperties:(id)arg1 ;
-(id)knownNetworkProfileMatchingScanResult:(id)arg1 ;
-(id)knownNetworkProfileMatchingNetworkProfile:(id)arg1 ;
-(BOOL)updateKnownNetworkProfile:(id)arg1 properties:(id)arg2 error:(id*)arg3 ;
-(BOOL)addKnownNetworkProfile:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeKnownNetworkProfile:(id)arg1 reason:(long long)arg2 error:(id*)arg3 ;
-(long long)thermalIndex;
-(BOOL)setThermalIndex:(long long)arg1 error:(id*)arg2 ;
@end


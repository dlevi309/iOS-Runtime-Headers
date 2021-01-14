/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/


@protocol NRXPCProxyDelegate, NRNSXPCConnectionProtocol;
@class NSString;

@interface NRXPCProxy : NSObject {

	id<NRXPCProxyDelegate> _delegate;
	unsigned _entitlementBitmask;
	BOOL _invalidated;
	BOOL _monitorClientForSuspension;
	NSString* _appPath;
	id _target;
	id<NRNSXPCConnectionProtocol> _connection;

}

@property (nonatomic,readonly) BOOL invalidated;                                      //@synthesize invalidated=_invalidated - In the implementation block
@property (nonatomic,readonly) int pid; 
@property (nonatomic,readonly) NSString * appPath;                                    //@synthesize appPath=_appPath - In the implementation block
@property (nonatomic,readonly) id target;                                             //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) id remoteObjectProxy; 
@property (nonatomic,readonly) id<NRNSXPCConnectionProtocol> connection;              //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) BOOL monitorClientForSuspension;                         //@synthesize monitorClientForSuspension=_monitorClientForSuspension - In the implementation block
+(id)entitlements;
+(id)serverRemoteObjectInterface;
+(BOOL)requireAnEntitlement;
+(id)machServiceName;
+(id)clientExportedInterface;
+(id)serverExportedInterface;
+(id)clientRemoteObjectInterface;
-(void)_invalidate;
-(int)pid;
-(id)remoteObjectProxy;
-(BOOL)invalidated;
-(BOOL)hasEntitlements;
-(id)initWithConnection:(id)arg1 delegate:(id)arg2 xpcTarget:(id)arg3 entitlementBitmask:(unsigned)arg4 ;
-(void)setMonitorClientForSuspension:(BOOL)arg1 ;
-(BOOL)monitorClientForSuspension;
-(id<NRNSXPCConnectionProtocol>)connection;
-(NSString *)appPath;
-(id)target;
-(BOOL)hasEntitlement:(id)arg1 ;
@end


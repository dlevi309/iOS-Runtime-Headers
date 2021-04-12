/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)machServiceName;
+(id)serverExportedInterface;
+(id)serverRemoteObjectInterface;
+(id)clientExportedInterface;
+(id)clientRemoteObjectInterface;
+(BOOL)requireAnEntitlement;
-(void)_invalidate;
-(id)target;
-(id)remoteObjectProxy;
-(id<NRNSXPCConnectionProtocol>)connection;
-(int)pid;
-(BOOL)hasEntitlement:(id)arg1 ;
-(BOOL)invalidated;
-(NSString *)appPath;
-(BOOL)hasEntitlements;
-(id)initWithConnection:(id)arg1 delegate:(id)arg2 xpcTarget:(id)arg3 entitlementBitmask:(unsigned)arg4 ;
-(void)setMonitorClientForSuspension:(BOOL)arg1 ;
-(BOOL)monitorClientForSuspension;
@end


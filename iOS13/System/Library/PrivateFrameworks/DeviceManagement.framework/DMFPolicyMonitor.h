/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSMutableDictionary;

@interface DMFPolicyMonitor : NSObject {

	NSXPCConnection* _xpcConnection;
	NSObject*<OS_dispatch_queue> _registrationCallbackQueue;
	NSMutableDictionary* _notificationTokensByPolicyMonitorIdentifier;

}

@property (nonatomic,readonly) NSXPCConnection * xpcConnection;                                                //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> registrationCallbackQueue;                         //@synthesize registrationCallbackQueue=_registrationCallbackQueue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * notificationTokensByPolicyMonitorIdentifier;              //@synthesize notificationTokensByPolicyMonitorIdentifier=_notificationTokensByPolicyMonitorIdentifier - In the implementation block
+(id)remoteInterface;
+(id)policyMonitor;
-(id)init;
-(void)dealloc;
-(NSXPCConnection *)xpcConnection;
-(id)initWithXPCConnection:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)registrationCallbackQueue;
-(void)addRegistration:(id)arg1 forPolicyMonitorIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)invalidatePolicyMonitor:(id)arg1 ;
-(id)requestPoliciesForTypes:(id)arg1 withError:(id*)arg2 ;
-(void)requestPoliciesForTypes:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)notificationTokensByPolicyMonitorIdentifier;
@end


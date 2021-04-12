/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSMutableDictionary, NSMutableArray;

@interface DMFPolicyMonitor : NSObject {

	int _firstUnlockToken;
	NSXPCConnection* _xpcConnection;
	NSObject*<OS_dispatch_queue> _firstUnlockQueue;
	NSObject*<OS_dispatch_queue> _registrationCallbackQueue;
	NSMutableDictionary* _notificationTokensByPolicyMonitorIdentifier;
	NSMutableArray* _pendingRequests;

}

@property (nonatomic,readonly) NSXPCConnection * xpcConnection;                                                //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,readonly) int firstUnlockToken;                                                           //@synthesize firstUnlockToken=_firstUnlockToken - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> firstUnlockQueue;                                  //@synthesize firstUnlockQueue=_firstUnlockQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> registrationCallbackQueue;                         //@synthesize registrationCallbackQueue=_registrationCallbackQueue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * notificationTokensByPolicyMonitorIdentifier;              //@synthesize notificationTokensByPolicyMonitorIdentifier=_notificationTokensByPolicyMonitorIdentifier - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingRequests;                                               //@synthesize pendingRequests=_pendingRequests - In the implementation block
+(id)remoteInterface;
+(BOOL)hasFirstUnlocked;
+(const char*)mobileKeyBagFirstUnlockNotificationName;
+(id)policyMonitor;
-(NSXPCConnection *)xpcConnection;
-(NSMutableArray *)pendingRequests;
-(id)initWithXPCConnection:(id)arg1 ;
-(id)init;
-(int)firstUnlockToken;
-(id)requestPoliciesForTypes:(id)arg1 withError:(id*)arg2 ;
-(NSMutableDictionary *)notificationTokensByPolicyMonitorIdentifier;
-(void)requestPoliciesForTypes:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addRegistration:(id)arg1 forPolicyMonitorIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_dispatchRequest:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)firstUnlockQueue;
-(void)invalidatePolicyMonitor:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)registrationCallbackQueue;
-(void)dealloc;
@end


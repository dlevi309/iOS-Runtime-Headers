/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/


@protocol OS_dispatch_queue;
@class NSString, NSDictionary, NSObject, HMPendingRequests, HMDelegateCaller, HMFMessageDispatcher, HMXPCClient;

@interface _HMContext : NSObject {

	NSString* _name;
	NSDictionary* _userInfo;
	NSObject*<OS_dispatch_queue> _queue;
	HMPendingRequests* _pendingRequests;
	HMDelegateCaller* _delegateCaller;
	HMFMessageDispatcher* _messageDispatcher;
	HMXPCClient* _xpcClient;

}

@property (nonatomic,readonly) HMXPCClient * xpcClient;                               //@synthesize xpcClient=_xpcClient - In the implementation block
@property (copy,readonly) NSString * name;                                            //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSDictionary * userInfo;                                    //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                    //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) HMPendingRequests * pendingRequests;                   //@synthesize pendingRequests=_pendingRequests - In the implementation block
@property (nonatomic,readonly) HMDelegateCaller * delegateCaller;                     //@synthesize delegateCaller=_delegateCaller - In the implementation block
@property (nonatomic,readonly) HMFMessageDispatcher * messageDispatcher;              //@synthesize messageDispatcher=_messageDispatcher - In the implementation block
@property (nonatomic,readonly) HMXPCClient * messageTransport; 
+(id)contextWithName:(id)arg1 ;
+(id)contextWithName:(id)arg1 delegateCaller:(id)arg2 ;
+(id)contextWithName:(id)arg1 userInfo:(id)arg2 delegateCaller:(id)arg3 ;
-(NSDictionary *)userInfo;
-(HMPendingRequests *)pendingRequests;
-(id)init;
-(HMXPCClient *)messageTransport;
-(HMFMessageDispatcher *)messageDispatcher;
-(NSString *)name;
-(HMDelegateCaller *)delegateCaller;
-(HMXPCClient *)xpcClient;
-(id)subcontextWithName:(id)arg1 ;
-(id)initWithName:(id)arg1 userInfo:(id)arg2 pendingRequests:(id)arg3 delegateCaller:(id)arg4 messageDispatcher:(id)arg5 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithName:(id)arg1 userInfo:(id)arg2 pendingRequests:(id)arg3 delegateCaller:(id)arg4 messageDispatcher:(id)arg5 messageTransport:(id)arg6 ;
@end


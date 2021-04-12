/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject, HMPendingRequests, HMDelegateCaller, HMFMessageDispatcher, HMXPCClient;

@interface _HMContext : NSObject {

	NSString* _name;
	NSObject*<OS_dispatch_queue> _queue;
	HMPendingRequests* _pendingRequests;
	HMDelegateCaller* _delegateCaller;
	HMFMessageDispatcher* _messageDispatcher;

}

@property (copy,readonly) NSString * name;                                            //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                    //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) HMPendingRequests * pendingRequests;                   //@synthesize pendingRequests=_pendingRequests - In the implementation block
@property (nonatomic,readonly) HMDelegateCaller * delegateCaller;                     //@synthesize delegateCaller=_delegateCaller - In the implementation block
@property (nonatomic,readonly) HMFMessageDispatcher * messageDispatcher;              //@synthesize messageDispatcher=_messageDispatcher - In the implementation block
@property (nonatomic,readonly) HMXPCClient * messageTransport; 
+(id)contextWithName:(id)arg1 ;
+(id)contextWithName:(id)arg1 delegateCaller:(id)arg2 ;
-(id)init;
-(NSString *)name;
-(NSObject*<OS_dispatch_queue>)queue;
-(HMPendingRequests *)pendingRequests;
-(HMDelegateCaller *)delegateCaller;
-(HMFMessageDispatcher *)messageDispatcher;
-(id)subcontextWithName:(id)arg1 ;
-(HMXPCClient *)messageTransport;
-(id)initWithName:(id)arg1 pendingRequests:(id)arg2 delegateCaller:(id)arg3 messageDispatcher:(id)arg4 ;
@end


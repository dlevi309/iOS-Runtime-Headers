/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject, NSString, NSMutableDictionary;

@interface SSXPCServer : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _entitlementName;
	NSObject*<OS_xpc_object> _listener;
	NSObject*<OS_dispatch_queue> _observerQueue;
	NSMutableDictionary* _observers;
	NSString* _serviceName;

}
+(id)mainServer;
-(id)init;
-(void)dealloc;
-(void)start;
-(id)initWithServiceName:(id)arg1 ;
-(id)initWithServiceName:(id)arg1 entitlement:(id)arg2 queue:(id)arg3 ;
-(void)_dispatchMessage:(id)arg1 connection:(id)arg2 ;
-(void)addObserver:(id)arg1 selector:(SEL)arg2 forMessage:(long long)arg3 ;
-(void)removeObserver:(id)arg1 selector:(SEL)arg2 forMessage:(long long)arg3 ;
@end


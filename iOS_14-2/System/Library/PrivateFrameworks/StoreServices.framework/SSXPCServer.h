/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)start;
-(id)initWithServiceName:(id)arg1 ;
-(void)addObserver:(id)arg1 selector:(SEL)arg2 forMessage:(long long)arg3 ;
-(id)initWithServiceName:(id)arg1 entitlement:(id)arg2 queue:(id)arg3 ;
-(void)_dispatchMessage:(id)arg1 connection:(id)arg2 ;
-(void)removeObserver:(id)arg1 selector:(SEL)arg2 forMessage:(long long)arg3 ;
-(void)dealloc;
@end


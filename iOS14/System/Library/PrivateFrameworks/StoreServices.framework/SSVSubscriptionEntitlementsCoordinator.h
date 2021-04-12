/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@protocol OS_dispatch_queue;
@class SSVSubscriptionEntitlements, SSXPCConnection, NSObject;

@interface SSVSubscriptionEntitlementsCoordinator : NSObject {

	SSVSubscriptionEntitlements* _cachedEntitlements;
	SSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}
+(id)sharedCoordinator;
-(id)init;
-(void)getSubscriptionEntitlementsIgnoreCaches:(BOOL)arg1 entitlementsBlock:(/*^block*/id)arg2 ;
-(id)_cachedSubscriptionEntitlements;
-(id)_loadSubscriptionEntitlementsIgnoreCaches:(BOOL)arg1 error:(id*)arg2 ;
-(void)_setCachedSubscriptionEntitlements:(id)arg1 ;
-(void)getSubscriptionEntitlements:(/*^block*/id)arg1 ;
-(id)_connection;
-(void)dealloc;
@end


/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)_connection;
-(void)getSubscriptionEntitlementsIgnoreCaches:(BOOL)arg1 entitlementsBlock:(/*^block*/id)arg2 ;
-(id)_cachedSubscriptionEntitlements;
-(id)_loadSubscriptionEntitlementsIgnoreCaches:(BOOL)arg1 error:(id*)arg2 ;
-(void)_setCachedSubscriptionEntitlements:(id)arg1 ;
-(void)getSubscriptionEntitlements:(/*^block*/id)arg1 ;
@end


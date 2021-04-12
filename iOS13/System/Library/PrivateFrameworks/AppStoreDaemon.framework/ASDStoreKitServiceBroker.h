/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/


@class NSLock, NSXPCConnection;

@interface ASDStoreKitServiceBroker : NSObject {

	NSLock* _serviceConnectionLock;
	NSXPCConnection* _serviceConnection;

}
+(id)defaultBroker;
+(id)_storeKitServiceInterface;
+(id)_storeKitClientInterface;
-(id)init;
-(id)_serviceConnection;
-(id)storeKitServiceWithErrorHandler:(/*^block*/id)arg1 ;
-(id)storeKitSynchronousServiceWithErrorHandler:(/*^block*/id)arg1 ;
-(id)storeKitService;
-(void)_serviceConnectionInvalidated;
-(id)storeKitSynchronousService;
@end


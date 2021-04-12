/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/


@class NSLock, NSXPCConnection;

@interface ASDStoreKitServiceBroker : NSObject {

	NSLock* _serviceConnectionLock;
	NSXPCConnection* _serviceConnection;

}
+(id)_storeKitServiceInterface;
+(id)_storeKitClientInterface;
+(id)defaultBroker;
-(id)init;
-(void)_serviceConnectionInvalidated;
-(id)storeKitSynchronousServiceWithErrorHandler:(/*^block*/id)arg1 ;
-(id)storeKitSynchronousService;
-(id)storeKitService;
-(id)_serviceConnection;
-(id)storeKitServiceWithErrorHandler:(/*^block*/id)arg1 ;
@end


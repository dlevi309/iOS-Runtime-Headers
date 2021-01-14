/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/


@class NSLock, NSXPCConnection;

@interface SKServiceProxy : NSObject {

	NSLock* _serviceConnectionLock;
	NSXPCConnection* _serviceConnection;

}
+(id)serviceProxy;
+(id)inAppServiceInterface;
+(id)inAppClientInterface;
-(id)init;
-(id)objectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_serviceConnectionInvalidated;
-(id)serviceConnection;
-(id)inAppServiceWithErrorHandler:(/*^block*/id)arg1 ;
-(id)inAppService;
@end


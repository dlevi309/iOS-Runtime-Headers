/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)serviceConnection;
-(void)_serviceConnectionInvalidated;
-(id)inAppServiceWithErrorHandler:(/*^block*/id)arg1 ;
-(id)inAppService;
@end


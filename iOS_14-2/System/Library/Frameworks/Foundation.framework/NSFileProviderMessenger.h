/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@class NSXPCConnection, Protocol, NSFileProviderMessageInterface, NSLock;

@interface NSFileProviderMessenger : NSObject {

	NSXPCConnection* _conn;
	Protocol* _protocol;
	NSFileProviderMessageInterface* _interface;
	NSLock* _lock;
	BOOL _triedConnection;

}
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)initWithInterface:(id)arg1 protocol:(id)arg2 ;
-(void)invalidate;
-(void)dealloc;
@end


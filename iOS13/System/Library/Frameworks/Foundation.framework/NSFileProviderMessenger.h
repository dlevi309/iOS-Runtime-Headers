/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)invalidate;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)initWithInterface:(id)arg1 protocol:(id)arg2 ;
@end


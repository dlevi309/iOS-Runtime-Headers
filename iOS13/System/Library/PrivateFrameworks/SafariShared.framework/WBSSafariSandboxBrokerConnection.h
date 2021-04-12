/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/WBSSafariSandboxBrokerProtocol.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface WBSSafariSandboxBrokerConnection : NSObject <WBSSafariSandboxBrokerProtocol> {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)_connectionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)ensureConnected:(/*^block*/id)arg1 ;
@end


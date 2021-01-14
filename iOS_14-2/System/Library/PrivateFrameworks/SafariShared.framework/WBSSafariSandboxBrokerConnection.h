/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/WBSSafariSandboxBrokerProtocol.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface WBSSafariSandboxBrokerConnection : NSObject <WBSSafariSandboxBrokerProtocol> {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)ensureConnected:(/*^block*/id)arg1 ;
-(void)_connectionWithCompletionHandler:(/*^block*/id)arg1 ;
@end


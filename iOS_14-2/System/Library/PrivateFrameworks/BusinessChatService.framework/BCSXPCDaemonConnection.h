/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

#import <libobjc.A.dylib/BCSXPCDaemonConnectionProtocol.h>

@class NSXPCConnection, NSString;

@interface BCSXPCDaemonConnection : NSObject <BCSXPCDaemonConnectionProtocol> {

	NSXPCConnection* _connection;

}

@property (nonatomic,readonly) NSXPCConnection * connection;                         //@synthesize connection=_connection - In the implementation block
@property (retain,readonly) id<BCSXPCDaemonProtocol> remoteObjectProxy; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<BCSXPCDaemonProtocol>)remoteObjectProxy;
-(id)initWithMachServiceName:(id)arg1 ;
-(NSXPCConnection *)connection;
-(void)resume;
@end


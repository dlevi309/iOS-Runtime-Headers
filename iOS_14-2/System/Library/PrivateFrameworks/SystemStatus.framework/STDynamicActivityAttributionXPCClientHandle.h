/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
*/

#import <libobjc.A.dylib/STDynamicAttributionXPCServerProtocol.h>

@protocol STDynamicActivityAttributionServerHandle;
@class NSXPCConnection, NSString;

@interface STDynamicActivityAttributionXPCClientHandle : NSObject <STDynamicAttributionXPCServerProtocol> {

	id<STDynamicActivityAttributionServerHandle> _serverHandle;
	NSXPCConnection* _clientXPCConnection;

}

@property (nonatomic,__weak,readonly) id<STDynamicActivityAttributionServerHandle> serverHandle;              //@synthesize serverHandle=_serverHandle - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * clientXPCConnection;                                         //@synthesize clientXPCConnection=_clientXPCConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<STDynamicActivityAttributionServerHandle>)serverHandle;
-(NSXPCConnection *)clientXPCConnection;
-(id)initWithXPCConnection:(id)arg1 serverHandle:(id)arg2 ;
-(void)setCurrentAttributionKey:(id)arg1 application:(id)arg2 reply:(/*^block*/id)arg3 ;
@end


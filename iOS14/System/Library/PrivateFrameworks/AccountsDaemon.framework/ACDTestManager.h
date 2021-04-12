/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
*/


@class NSXPCListenerEndpoint;

@interface ACDTestManager : NSObject

@property (nonatomic,readonly) NSXPCListenerEndpoint * remoteAccountStoreEndpoint; 
@property (nonatomic,readonly) NSXPCListenerEndpoint * remoteOAuthSignerEndpoint; 
+(id)testServer;
-(void)startTestServer;
-(void)stopTestServer;
-(NSXPCListenerEndpoint *)remoteAccountStoreEndpoint;
-(NSXPCListenerEndpoint *)remoteOAuthSignerEndpoint;
@end


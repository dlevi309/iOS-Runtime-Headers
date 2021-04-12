/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/


@class NSXPCConnection;

@interface WCAClient : NSObject {

	NSXPCConnection* _connectionToService;

}

@property (nonatomic,retain) NSXPCConnection * connectionToService;              //@synthesize connectionToService=_connectionToService - In the implementation block
+(id)sharedClient;
-(void)_establishDaemonConnection;
-(void)executeFetchRequest:(id)arg1 ;
-(NSXPCConnection *)connectionToService;
-(void)setConnectionToService:(NSXPCConnection *)arg1 ;
@end


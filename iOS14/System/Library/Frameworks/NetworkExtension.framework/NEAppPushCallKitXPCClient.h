/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/CXNetworkExtensionVoIPXPCClient.h>

@class NSXPCConnection;

@interface NEAppPushCallKitXPCClient : NSObject <CXNetworkExtensionVoIPXPCClient> {

	os_unfair_lock_s _lock;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s lock;                   //@synthesize lock=_lock - In the implementation block
-(id)init;
-(os_unfair_lock_s)lock;
-(void)voipNetworkExtensionPayloadReceived:(id)arg1 mustPostCall:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)voipNetworkExtensionRegistrationFailed;
-(void)unregisterVoIPMessagePayload;
-(NSXPCConnection *)connection;
-(void)invalidate;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)registerVoIPMessagePayload;
-(void)dealloc;
@end


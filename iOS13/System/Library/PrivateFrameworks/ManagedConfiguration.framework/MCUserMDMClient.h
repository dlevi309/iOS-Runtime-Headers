/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface MCUserMDMClient : NSObject {

	NSXPCConnection* _xpcConnection;
	NSObject*<OS_dispatch_queue> _xpcConnectionSyncQueue;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;                                    //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> xpcConnectionSyncQueue;              //@synthesize xpcConnectionSyncQueue=_xpcConnectionSyncQueue - In the implementation block
+(id)sharedClient;
-(id)init;
-(void)dealloc;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(NSObject*<OS_dispatch_queue>)xpcConnectionSyncQueue;
-(void)_queue_createAndStartMDMXPCConnection;
-(void)getAssertionDescriptionsWithCompletion:(/*^block*/id)arg1 ;
-(void)processUserRequest:(id)arg1 encodeResponse:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_destroyXPCConnectionAndInvalidate:(BOOL)arg1 ;
-(BOOL)supportsPerUserMDM;
-(void)scheduleTokenUpdate;
-(void)simulatePush;
-(id)pushToken;
@end


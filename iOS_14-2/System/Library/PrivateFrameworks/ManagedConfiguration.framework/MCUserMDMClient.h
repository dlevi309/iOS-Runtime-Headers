/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(id)pushToken;
-(BOOL)supportsPerUserMDM;
-(void)processUserRequest:(id)arg1 encodeResponse:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)init;
-(void)_queue_createAndStartMDMXPCConnection;
-(void)_destroyXPCConnectionAndInvalidate:(BOOL)arg1 ;
-(void)simulatePush;
-(void)scheduleTokenUpdate;
-(void)getAssertionDescriptionsWithCompletion:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)xpcConnectionSyncQueue;
-(void)dealloc;
@end


/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@protocol OS_dispatch_queue, ICCloudServerListenerEndpointProvider;
@class NSXPCConnection, NSObject;

@interface ICCloudClientCloudService : NSObject {

	NSXPCConnection* _xpcConnection;
	NSObject*<OS_dispatch_queue> _serialQueue;
	id<ICCloudServerListenerEndpointProvider> _listenerEndpointProvider;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serialQueue;                                               //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,__weak,readonly) id<ICCloudServerListenerEndpointProvider> listenerEndpointProvider;              //@synthesize listenerEndpointProvider=_listenerEndpointProvider - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * xpcConnection;                                                        //@synthesize xpcConnection=_xpcConnection - In the implementation block
-(NSXPCConnection *)xpcConnection;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(id<ICCloudServerListenerEndpointProvider>)listenerEndpointProvider;
-(id)_xpcConnectionWithListenerEndpoint:(id)arg1 ;
-(id)initWithListenerEndpointProvider:(id)arg1 ;
@end


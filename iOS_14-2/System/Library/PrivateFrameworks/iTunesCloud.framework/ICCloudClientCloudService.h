/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@protocol OS_dispatch_queue, ICCloudServerListenerEndpointProviding;
@class NSXPCConnection, NSObject;

@interface ICCloudClientCloudService : NSObject {

	NSXPCConnection* _xpcConnection;
	NSObject*<OS_dispatch_queue> _serialQueue;
	id<ICCloudServerListenerEndpointProviding> _listenerEndpointProvider;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serialQueue;                                                //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,__weak,readonly) id<ICCloudServerListenerEndpointProviding> listenerEndpointProvider;              //@synthesize listenerEndpointProvider=_listenerEndpointProvider - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * xpcConnection;                                                         //@synthesize xpcConnection=_xpcConnection - In the implementation block
-(id<ICCloudServerListenerEndpointProviding>)listenerEndpointProvider;
-(NSXPCConnection *)xpcConnection;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(id)_xpcConnectionWithListenerEndpoint:(id)arg1 ;
-(id)initWithListenerEndpointProvider:(id)arg1 ;
@end


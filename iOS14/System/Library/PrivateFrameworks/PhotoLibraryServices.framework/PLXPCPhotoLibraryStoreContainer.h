/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSXPCStoreServer, NSXPCListener, NSXPCListenerEndpoint;

@interface PLXPCPhotoLibraryStoreContainer : NSObject {

	NSXPCStoreServer* _server;
	NSXPCListener* _listener;

}

@property (readonly) NSXPCStoreServer * server;                             //@synthesize server=_server - In the implementation block
@property (readonly) NSXPCListenerEndpoint * listenerEndpoint; 
+(id)newContainerWithPathManager:(id)arg1 connectionAuthorization:(id)arg2 ;
-(NSXPCStoreServer *)server;
-(id)initWithServer:(id)arg1 listener:(id)arg2 ;
-(NSXPCListenerEndpoint *)listenerEndpoint;
@end


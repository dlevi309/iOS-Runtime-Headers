/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSXPCStoreServer, NSXPCListener, NSXPCListenerEndpoint;

@interface PLXPCPhotoLibraryStoreContainer : NSObject {

	NSXPCStoreServer* _server;
	NSXPCListener* _listener;

}

@property (readonly) NSXPCStoreServer * server;                             //@synthesize server=_server - In the implementation block
@property (readonly) NSXPCListenerEndpoint * listenerEndpoint; 
+(id)newContainerWithPathManager:(id)arg1 ;
-(NSXPCStoreServer *)server;
-(NSXPCListenerEndpoint *)listenerEndpoint;
-(id)initWithServer:(id)arg1 listener:(id)arg2 ;
@end


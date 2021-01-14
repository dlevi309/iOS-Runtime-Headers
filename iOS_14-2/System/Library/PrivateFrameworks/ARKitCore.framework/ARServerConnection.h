/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <libobjc.A.dylib/NSXPCProxyCreating.h>

@protocol ARServerConnectionDelegate;
@class ARWeakReference, NSXPCConnection, NSXPCInterface;

@interface ARServerConnection : NSObject <NSXPCProxyCreating> {

	/*^block*/id _connectionCreationBlock;
	ARWeakReference* _exportedObjectWeakReference;
	NSXPCConnection* _connection;
	id<ARServerConnectionDelegate> _delegate;
	NSXPCInterface* _exportedInterface;
	NSXPCInterface* _remoteObjectInterface;

}

@property (nonatomic,readonly) NSXPCConnection * connection;                              //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic,__weak) id<ARServerConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSXPCInterface * exportedInterface;                          //@synthesize exportedInterface=_exportedInterface - In the implementation block
@property (assign,nonatomic,__weak) id exportedObject; 
@property (nonatomic,retain) NSXPCInterface * remoteObjectInterface;                      //@synthesize remoteObjectInterface=_remoteObjectInterface - In the implementation block
-(void)setExportedObject:(id)arg1 ;
-(id)initWithListenerEndpoint:(id)arg1 ;
-(void)setRemoteObjectInterface:(NSXPCInterface *)arg1 ;
-(id)remoteObjectProxy;
-(id)exportedObject;
-(id<ARServerConnectionDelegate>)delegate;
-(NSXPCInterface *)remoteObjectInterface;
-(NSXPCInterface *)exportedInterface;
-(id)initWithServiceName:(id)arg1 ;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)setExportedInterface:(NSXPCInterface *)arg1 ;
-(void)setDelegate:(id<ARServerConnectionDelegate>)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(NSXPCConnection *)connection;
-(void)invalidate;
-(void)dealloc;
-(void)serverConnectionInterrupted;
-(void)serverConnectionInvalidated;
@end


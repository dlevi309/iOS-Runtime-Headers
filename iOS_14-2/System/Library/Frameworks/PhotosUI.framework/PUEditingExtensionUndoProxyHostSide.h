/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <libobjc.A.dylib/PUEditingExtensionUndoButtonHost.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/PUEditingExtensionUndoTarget.h>

@protocol PUEditingExtensionUndoButtonHost;
@class NSXPCListener, NSXPCConnection, NSXPCListenerEndpoint, NSString;

@interface PUEditingExtensionUndoProxyHostSide : NSObject <PUEditingExtensionUndoButtonHost, NSXPCListenerDelegate, PUEditingExtensionUndoTarget> {

	id<PUEditingExtensionUndoButtonHost> _target;
	NSXPCListener* _listener;
	NSXPCConnection* _connection;

}

@property (nonatomic,readonly) NSXPCListener * listener;                                      //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                                    //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) NSXPCListenerEndpoint * listenerEndpoint; 
@property (assign,nonatomic,__weak) id<PUEditingExtensionUndoButtonHost> target;              //@synthesize target=_target - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTarget:(id<PUEditingExtensionUndoButtonHost>)arg1 ;
-(id)init;
-(NSXPCListener *)listener;
-(NSXPCConnection *)connection;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)performUndo;
-(void)performRedo;
-(void)setUndoEnabled:(BOOL)arg1 redoEnabled:(BOOL)arg2 ;
-(void)setShowUndoRedo:(BOOL)arg1 ;
-(NSXPCListenerEndpoint *)listenerEndpoint;
-(id)remoteObject;
-(id<PUEditingExtensionUndoButtonHost>)target;
-(void)setConnection:(NSXPCConnection *)arg1 ;
@end


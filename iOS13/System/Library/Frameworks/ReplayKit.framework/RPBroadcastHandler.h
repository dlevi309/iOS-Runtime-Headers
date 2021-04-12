/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/NSExtensionRequestHandling.h>

@class NSDictionary, NSExtensionContext, NSXPCListenerEndpoint, NSXPCConnection, NSXPCListener, NSString;

@interface RPBroadcastHandler : NSObject <NSXPCListenerDelegate, NSExtensionRequestHandling> {

	NSDictionary* _serviceInfo;
	NSExtensionContext* _extensionContext;
	NSXPCListenerEndpoint* _listenerEndpoint;
	NSXPCConnection* _connection;
	NSXPCListener* _listener;

}

@property (nonatomic,retain) NSDictionary * serviceInfo;                            //@synthesize serviceInfo=_serviceInfo - In the implementation block
@property (nonatomic,retain) NSExtensionContext * extensionContext;                 //@synthesize extensionContext=_extensionContext - In the implementation block
@property (nonatomic,retain) NSXPCListenerEndpoint * listenerEndpoint;              //@synthesize listenerEndpoint=_listenerEndpoint - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                          //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSXPCListener * listener;                              //@synthesize listener=_listener - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSXPCListener *)listener;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setListener:(NSXPCListener *)arg1 ;
-(NSXPCListenerEndpoint *)listenerEndpoint;
-(NSExtensionContext *)extensionContext;
-(void)setListenerEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(void)setServiceInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)serviceInfo;
-(void)setExtensionContext:(NSExtensionContext *)arg1 ;
-(void)_completeRequestWithReturnItems:(id)arg1 ;
-(void)updateServiceInfo:(id)arg1 ;
-(void)updateBroadcastURL:(id)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FusionPluginServices.framework/FusionPluginServices
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol FusionPluginServerInterface;
@class NSXPCListener, NSXPCConnection, NSString;

@interface FusionPluginServer : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	Class _principalClass;
	NSXPCConnection* _connection;
	id<FusionPluginServerInterface> _exportedObject;

}

@property (nonatomic,retain) NSXPCListener * listener;                                      //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) Class principalClass;                                          //@synthesize principalClass=_principalClass - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                                  //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) id<FusionPluginServerInterface> exportedObject;              //@synthesize exportedObject=_exportedObject - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSXPCListener *)listener;
-(void)resume;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(Class)principalClass;
-(id)initWithServiceName:(id)arg1 ;
-(id<FusionPluginServerInterface>)exportedObject;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setListener:(NSXPCListener *)arg1 ;
-(id)initWithClass:(Class)arg1 ;
-(void)setPrincipalClass:(Class)arg1 ;
@end


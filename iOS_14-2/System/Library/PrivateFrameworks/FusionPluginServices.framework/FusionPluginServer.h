/*
* Generated on Thursday, January 14, 2021 at 2:27:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<FusionPluginServerInterface>)exportedObject;
-(void)setPrincipalClass:(Class)arg1 ;
-(id)initWithServiceName:(id)arg1 ;
-(id)initWithClass:(Class)arg1 ;
-(Class)principalClass;
-(NSXPCListener *)listener;
-(NSXPCConnection *)connection;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setListener:(NSXPCListener *)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)resume;
@end


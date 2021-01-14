/*
* Generated on Thursday, January 14, 2021 at 2:27:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FusionPluginKit.framework/FusionPluginKit
*/

#import <FusionPluginKit/FusionPluginClientInterface.h>

@class NSXPCConnection, NSString;

@interface FusionPluginClient : NSObject <FusionPluginClientInterface> {

	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)sendMessage:(id)arg1 response:(id*)arg2 ;
-(id)initClientConnection:(id)arg1 ;
@end


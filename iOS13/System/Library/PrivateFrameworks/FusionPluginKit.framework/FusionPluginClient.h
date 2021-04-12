/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)sendMessage:(id)arg1 response:(id*)arg2 ;
-(id)initClientConnection:(id)arg1 ;
@end


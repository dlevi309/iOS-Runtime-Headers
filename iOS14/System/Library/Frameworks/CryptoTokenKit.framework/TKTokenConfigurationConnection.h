/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/


@class NSXPCConnection, NSXPCListenerEndpoint;

@interface TKTokenConfigurationConnection : NSObject {

	NSXPCConnection* _connection;
	NSXPCListenerEndpoint* _endpoint;

}
-(id)initWithEndpoint:(id)arg1 ;
-(id)configurationProtocol;
-(void)dealloc;
@end


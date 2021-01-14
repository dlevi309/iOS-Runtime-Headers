/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthAppPlugin.bundle/HealthAppPlugin
*/


@class NSXPCConnection;

@interface HDHAHealthPluginHostFeedGenerator : NSObject {

	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
-(void)runBackgroundGenerationForAllPlugins;
-(id)init;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)runBackgroundGenerationForPluginIdentifiers:(id)arg1 ;
-(id)healthAppPluginHost;
-(void)dealloc;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <Foundation/NSXPCListener.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/RTEventAgentDaemonProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, RTPlatform, NSString;

@interface RTEventAgentManager : NSXPCListener <NSXPCListenerDelegate, RTEventAgentDaemonProtocol> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _pluginConnection;
	RTPlatform* _platform;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * pluginConnection;              //@synthesize pluginConnection=_pluginConnection - In the implementation block
@property (nonatomic,retain) RTPlatform * platform;                           //@synthesize platform=_platform - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPluginConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)pluginConnection;
-(void)setup;
-(void)checkin;
-(id)initWithPlatform:(id)arg1 ;
-(RTPlatform *)platform;
-(void)_setup;
-(id)init;
-(void)setPlatform:(RTPlatform *)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)launchDaemonWithRestorationIdentifier:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)_launchDaemonWithRestorationIdentifier:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)onLaunchDaemonWithRestorationIdentifierFromDefaults;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
@end


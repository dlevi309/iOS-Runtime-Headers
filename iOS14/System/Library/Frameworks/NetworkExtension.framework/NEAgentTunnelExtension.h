/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NEAgentExtension.h>
#import <libobjc.A.dylib/NEExtensionTunnelProviderHostDelegate.h>
#import <libobjc.A.dylib/NEVPNPluginDriver.h>

@class NSString;

@interface NEAgentTunnelExtension : NEAgentExtension <NEExtensionTunnelProviderHostDelegate, NEVPNPluginDriver> {

	BOOL _cancelCalled;

}

@property (assign) BOOL cancelCalled;                               //@synthesize cancelCalled=_cancelCalled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)managerInterface;
-(void)sendExtensionFailed;
-(void)extension:(id)arg1 didStartWithError:(id)arg2 ;
-(void)handleCancel;
-(id)driverInterface;
-(void)handleAppsUninstalled:(id)arg1 ;
-(void)handleAppsUpdateBegins:(id)arg1 ;
-(void)handleAppsUpdateEnding:(id)arg1 ;
-(void)handleAppsUpdateEnds:(id)arg1 ;
-(void)connectWithParameters:(id)arg1 ;
-(void)disconnectWithReason:(int)arg1 ;
-(void)attachIPCWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setAppUUIDMap:(id)arg1 ;
-(void)extension:(id)arg1 didRequestSocket:(BOOL)arg2 interface:(id)arg3 local:(id)arg4 remote:(id)arg5 effectivePID:(int)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)extension:(id)arg1 didSetStatus:(long long)arg2 ;
-(void)extension:(id)arg1 didSetTunnelConfiguration:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)extensionDidDetachIPC:(id)arg1 ;
-(void)setCancelCalled:(BOOL)arg1 ;
-(void)sendStatus:(long long)arg1 withDisconnectError:(id)arg2 ;
-(BOOL)cancelCalled;
-(void)handleExtensionStartedWithCompletionHandler:(/*^block*/id)arg1 ;
@end


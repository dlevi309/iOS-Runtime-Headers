/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)disconnectWithReason:(int)arg1 ;
-(void)connectWithParameters:(id)arg1 ;
-(void)attachIPCWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)driverInterface;
-(void)extension:(id)arg1 didRequestSocket:(BOOL)arg2 interface:(id)arg3 local:(id)arg4 remote:(id)arg5 effectivePID:(int)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)extension:(id)arg1 didStartWithError:(id)arg2 ;
-(void)extension:(id)arg1 didSetStatus:(long long)arg2 ;
-(void)extension:(id)arg1 didSetTunnelConfiguration:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)extensionDidDetachIPC:(id)arg1 ;
-(void)setCancelCalled:(BOOL)arg1 ;
-(void)sendStatus:(long long)arg1 withDisconnectError:(id)arg2 ;
-(BOOL)cancelCalled;
-(void)handleCancel;
-(void)handleAppsUninstalled:(id)arg1 ;
-(void)handleAppsUpdateBegins:(id)arg1 ;
-(void)handleAppsUpdateEnding:(id)arg1 ;
-(void)handleAppsUpdateEnds:(id)arg1 ;
-(id)managerInterface;
-(void)handleExtensionStartedWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)sendExtensionFailed;
@end


/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NEAgentTunnelExtension.h>
#import <libobjc.A.dylib/NEExtensionAppProxyProviderHostDelegate.h>
#import <libobjc.A.dylib/NEFlowDivertPluginDriver.h>

@class NSString;

@interface NEAgentAppProxyExtension : NEAgentTunnelExtension <NEExtensionAppProxyProviderHostDelegate, NEFlowDivertPluginDriver>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegateInterface:(unsigned)arg1 ;
-(void)extension:(id)arg1 didRequestFlowDivertControlSocketWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)connectWithParameters:(id)arg1 ;
-(id)driverInterface;
-(int)requiredEntitlement;
-(id)managerInterface;
@end


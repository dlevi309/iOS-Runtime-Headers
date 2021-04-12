/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)managerInterface;
-(void)setDelegateInterface:(unsigned)arg1 ;
-(id)driverInterface;
-(void)extension:(id)arg1 didRequestFlowDivertControlSocketWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)connectWithParameters:(id)arg1 ;
@end


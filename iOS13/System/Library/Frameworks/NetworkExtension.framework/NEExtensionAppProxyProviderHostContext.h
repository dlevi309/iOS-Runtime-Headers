/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NEExtensionTunnelProviderHostContext.h>
#import <libobjc.A.dylib/NEExtensionAppProxyProviderProtocol.h>
#import <libobjc.A.dylib/NEExtensionAppProxyProviderHostProtocol.h>

@class NSString;

@interface NEExtensionAppProxyProviderHostContext : NEExtensionTunnelProviderHostContext <NEExtensionAppProxyProviderProtocol, NEExtensionAppProxyProviderHostProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)setDelegateInterface:(unsigned)arg1 ;
-(void)setInitialFlowDivertControlSocket:(id)arg1 ;
-(void)openFlowDivertControlSocketWithCompletionHandler:(/*^block*/id)arg1 ;
@end


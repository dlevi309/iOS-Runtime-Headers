/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(int)requiredEntitlement;
-(void)setDelegateInterface:(unsigned)arg1 ;
-(void)openFlowDivertControlSocketWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setInitialFlowDivertControlSocket:(id)arg1 ;
@end


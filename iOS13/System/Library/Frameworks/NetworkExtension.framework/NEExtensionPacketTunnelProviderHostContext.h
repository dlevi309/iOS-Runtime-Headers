/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NEExtensionTunnelProviderHostContext.h>
#import <libobjc.A.dylib/NEExtensionPacketTunnelProviderProtocol.h>
#import <libobjc.A.dylib/NEExtensionPacketTunnelProviderHostProtocol.h>

@class NSString;

@interface NEExtensionPacketTunnelProviderHostContext : NEExtensionTunnelProviderHostContext <NEExtensionPacketTunnelProviderProtocol, NEExtensionPacketTunnelProviderHostProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)setVirtualInterfaceSocket:(id)arg1 ;
-(void)fetchVirtualInterfaceTypeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)requestSocket:(BOOL)arg1 interface:(id)arg2 local:(id)arg3 remote:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
@end


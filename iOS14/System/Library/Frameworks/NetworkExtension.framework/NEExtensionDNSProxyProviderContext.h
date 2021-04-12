/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NEExtensionAppProxyProviderContext.h>
#import <libobjc.A.dylib/NEExtensionDNSProxyProviderProtocol.h>

@class NSString;

@interface NEExtensionDNSProxyProviderContext : NEExtensionAppProxyProviderContext <NEExtensionDNSProxyProviderProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
-(void)setSystemDNSSettings:(id)arg1 ;
-(Class)requiredProviderSuperClass;
-(id)extensionPoint;
@end


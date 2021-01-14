/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NEFilterExtensionProviderHostContext.h>
#import <libobjc.A.dylib/NEFilterExtensionProviderProtocol.h>
#import <libobjc.A.dylib/NEFilterPacketExtensionProviderHostProtocol.h>

@class NSString;

@interface NEFilterPacketExtensionProviderHostContext : NEFilterExtensionProviderHostContext <NEFilterExtensionProviderProtocol, NEFilterPacketExtensionProviderHostProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
-(void)createPacketChannelWithCompletionHandler:(/*^block*/id)arg1 ;
@end


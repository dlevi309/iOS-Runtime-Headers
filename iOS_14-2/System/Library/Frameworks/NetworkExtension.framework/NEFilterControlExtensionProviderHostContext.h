/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NEFilterExtensionProviderHostContext.h>
#import <libobjc.A.dylib/NEFilterControlExtensionProviderProtocol.h>
#import <libobjc.A.dylib/NEFilterControlExtensionProviderHostProtocol.h>

@class NSString;

@interface NEFilterControlExtensionProviderHostContext : NEFilterExtensionProviderHostContext <NEFilterControlExtensionProviderProtocol, NEFilterControlExtensionProviderHostProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(void)handleNewFlow:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)handleReport:(id)arg1 ;
-(void)notifyRulesChanged;
-(void)provideRemediationMap:(id)arg1 ;
-(void)provideURLAppendStringMap:(id)arg1 ;
@end


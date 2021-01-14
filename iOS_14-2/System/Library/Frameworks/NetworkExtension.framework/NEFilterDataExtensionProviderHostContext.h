/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NEFilterExtensionProviderHostContext.h>
#import <libobjc.A.dylib/NEFilterDataExtensionProviderProtocol.h>
#import <libobjc.A.dylib/NEFilterDataExtensionProviderHostProtocol.h>

@class NSString;

@interface NEFilterDataExtensionProviderHostContext : NEFilterExtensionProviderHostContext <NEFilterDataExtensionProviderProtocol, NEFilterDataExtensionProviderHostProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(void)report:(id)arg1 ;
-(void)provideRemediationMap:(id)arg1 ;
-(void)provideURLAppendStringMap:(id)arg1 ;
-(void)fetchProviderConnectionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)providerControlSocketFileHandle:(id)arg1 ;
-(void)handleRulesChanged;
-(void)sendBrowserContentFilterServerRequest;
-(void)sendSocketContentFilterRequest;
-(void)fetchCurrentRulesForFlow:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)applySettings:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getSourceAppInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end


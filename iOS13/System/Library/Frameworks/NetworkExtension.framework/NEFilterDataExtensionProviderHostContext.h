/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)provideRemediationMap:(id)arg1 ;
-(void)provideURLAppendStringMap:(id)arg1 ;
-(void)fetchProviderConnectionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)providerControlSocketFileHandle:(id)arg1 ;
-(void)handleRulesChanged;
-(void)report:(id)arg1 ;
-(void)sendBrowserContentFilterServerRequest;
-(void)sendSocketContentFilterRequest;
-(void)fetchCurrentRulesForFlow:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getSourceAppInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)applySettings:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSExtensionRequestHandling.h>

@class NSString;

@interface PKIssuerProvisioningExtensionHandler : NSObject <NSExtensionRequestHandling>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(void)generateAddPaymentPassRequestForPassEntryWithIdentifier:(id)arg1 configuration:(id)arg2 certificateChain:(id)arg3 nonce:(id)arg4 nonceSignature:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)statusWithCompletion:(/*^block*/id)arg1 ;
-(void)passEntriesWithCompletion:(/*^block*/id)arg1 ;
-(void)remotePassEntriesWithCompletion:(/*^block*/id)arg1 ;
@end


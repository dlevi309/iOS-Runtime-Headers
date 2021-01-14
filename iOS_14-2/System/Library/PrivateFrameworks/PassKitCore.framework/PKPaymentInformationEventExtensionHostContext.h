/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentInformationEventExtensionBaseContext.h>
#import <libobjc.A.dylib/PKPaymentInformationEventExtensionHostContextProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface PKPaymentInformationEventExtensionHostContext : PKPaymentInformationEventExtensionBaseContext <PKPaymentInformationEventExtensionHostContextProtocol> {

	NSObject*<OS_dispatch_queue> _queue;

}
-(void)handleInformationRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)replyQueue;
-(void)handleSignatureRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleConfigurationRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)vendorContext;
-(id)vendorContextWithErrorHandler:(/*^block*/id)arg1 ;
@end


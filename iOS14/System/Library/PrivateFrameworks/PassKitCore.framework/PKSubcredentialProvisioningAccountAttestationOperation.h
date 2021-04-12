/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKSubcredentialProvisioningSharingSessionOperation.h>

@class PKAppletSubcredential, PKPaymentWebService, PKAppletSubcredentialSharingInvitationMetadata;

@interface PKSubcredentialProvisioningAccountAttestationOperation : PKSubcredentialProvisioningSharingSessionOperation {

	PKAppletSubcredential* _credential;
	PKPaymentWebService* _webService;
	PKAppletSubcredentialSharingInvitationMetadata* _metadata;
	BOOL _operationCompleted;

}
-(void)performOperation;
-(void)performOperationWithSession:(id)arg1 ;
-(void)accountAttesatationAnonymizationSaltWithCompletion:(/*^block*/id)arg1 ;
-(void)session:(id)arg1 didChangeState:(unsigned long long)arg2 ;
-(id)initWithConfiguration:(id)arg1 context:(id)arg2 delegate:(id)arg3 ;
@end


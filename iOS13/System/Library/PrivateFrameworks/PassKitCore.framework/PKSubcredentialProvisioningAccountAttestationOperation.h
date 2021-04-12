/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKSubcredentialProvisioningSessionOperation.h>

@class PKAppletSubcredential, PKPaymentWebService, PKAppletSubcredentialSharingInvitationMetadata;

@interface PKSubcredentialProvisioningAccountAttestationOperation : PKSubcredentialProvisioningSessionOperation {

	PKAppletSubcredential* _credential;
	PKPaymentWebService* _webService;
	PKAppletSubcredentialSharingInvitationMetadata* _metadata;
	BOOL _operationCompleted;

}
-(void)session:(id)arg1 didChangeState:(unsigned long long)arg2 ;
-(id)initWithConfiguration:(id)arg1 context:(id)arg2 delegate:(id)arg3 ;
-(void)performOperation;
-(void)performOperationWithSession:(id)arg1 ;
-(void)accountAttesatationAnonymizationSaltWithCompletion:(/*^block*/id)arg1 ;
@end


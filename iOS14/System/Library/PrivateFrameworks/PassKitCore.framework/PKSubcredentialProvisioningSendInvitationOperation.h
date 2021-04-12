/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKSubcredentialProvisioningSharingSessionOperation.h>

@class PKAppletSubcredentialSharingRequest, PKAppletSubcredentialSharingInvitation, PKAppletSubcredential, PKPaymentWebService, PKAppletSubcredentialSharingInvitationReceipt;

@interface PKSubcredentialProvisioningSendInvitationOperation : PKSubcredentialProvisioningSharingSessionOperation {

	PKAppletSubcredentialSharingRequest* _sharingRequest;
	PKAppletSubcredentialSharingInvitation* _invitation;
	PKAppletSubcredential* _credential;
	PKPaymentWebService* _localDeviceWebService;
	PKPaymentWebService* _remoteDeviceWebService;
	PKAppletSubcredentialSharingInvitationReceipt* _invitationReceipt;
	BOOL _hasFinished;

}
-(void)performOperation;
-(id)userAuthDelegate;
-(void)sendInvitationWithAuth:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)canAcceptInvitationWithCompletion:(/*^block*/id)arg1 ;
-(void)initializeAccountAttestationIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(void)session:(id)arg1 didChangeState:(unsigned long long)arg2 ;
-(id)initWithConfiguration:(id)arg1 context:(id)arg2 delegate:(id)arg3 ;
-(void)sendInvitation;
@end


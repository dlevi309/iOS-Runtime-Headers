/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKSubcredentialProvisioningSessionOperation.h>

@class PKAppletSubcredentialSharingRequest, PKAppletSubcredentialSharingInvitation, PKAppletSubcredential, PKPaymentWebService, PKAppletSubcredentialSharingInvitationReceipt;

@interface PKSubcredentialProvisioningSendInvitationOperation : PKSubcredentialProvisioningSessionOperation {

	PKAppletSubcredentialSharingRequest* _sharingRequest;
	PKAppletSubcredentialSharingInvitation* _invitation;
	PKAppletSubcredential* _credential;
	PKPaymentWebService* _localDeviceWebService;
	PKPaymentWebService* _remoteDeviceWebService;
	PKAppletSubcredentialSharingInvitationReceipt* _invitationReceipt;
	BOOL _hasFinished;

}
-(void)sendInvitation;
-(void)session:(id)arg1 didChangeState:(unsigned long long)arg2 ;
-(id)initWithConfiguration:(id)arg1 context:(id)arg2 delegate:(id)arg3 ;
-(void)performOperation;
-(id)sharingSession;
-(id)userAuthDelegate;
-(void)sendInvitationWithAuth:(id)arg1 completion:(/*^block*/id)arg2 ;
@end


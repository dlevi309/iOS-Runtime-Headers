/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKSubcredentialProvisioningOperation.h>

@protocol PKPaymentWebServiceTargetDeviceProtocol;
@class PKPaymentWebService, PKAppletSubcredentialSharingInvitation;

@interface PKSubcredentialProvisioningAcceptRemoteInvitationOperation : PKSubcredentialProvisioningOperation {

	PKPaymentWebService* _remoteDeviceWebService;
	PKPaymentWebService* _localDeviceWebService;
	id<PKPaymentWebServiceTargetDeviceProtocol> _remoteTargetDevice;
	id<PKPaymentWebServiceTargetDeviceProtocol> _localTargetDevice;
	PKAppletSubcredentialSharingInvitation* _invitation;

}
+(BOOL)canDeviceAcceptInvitation:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 context:(id)arg2 delegate:(id)arg3 ;
-(void)performOperation;
-(void)acceptInvitation:(id)arg1 withMetadata:(id)arg2 ;
-(void)getMatchingInvitation:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)metadataForInvitation:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end


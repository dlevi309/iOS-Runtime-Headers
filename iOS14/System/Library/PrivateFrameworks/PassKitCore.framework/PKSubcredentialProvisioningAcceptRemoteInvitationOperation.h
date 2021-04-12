/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)performOperation;
-(id)initWithConfiguration:(id)arg1 context:(id)arg2 delegate:(id)arg3 ;
-(void)acceptInvitation:(id)arg1 withMetadata:(id)arg2 ;
-(void)getMatchingInvitation:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)metadataForInvitation:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end


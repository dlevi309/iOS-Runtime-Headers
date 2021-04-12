/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKSubcredentialProvisioningOperation.h>

@protocol PKPaymentWebServiceTargetDeviceProtocol;
@class PKPaymentWebService, PKAppletSubcredentialSharingInvitation;

@interface PKSubcredentialProvisioningRequestRemoteInvitationOperation : PKSubcredentialProvisioningOperation {

	PKPaymentWebService* _remoteDeviceWebService;
	id<PKPaymentWebServiceTargetDeviceProtocol> _remoteTargetDevice;
	PKAppletSubcredentialSharingInvitation* _invitation;

}
+(BOOL)canRequestInvitation:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 context:(id)arg2 delegate:(id)arg3 ;
-(void)performOperation;
@end


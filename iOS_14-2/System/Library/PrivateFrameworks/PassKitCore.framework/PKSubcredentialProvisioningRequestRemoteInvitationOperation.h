/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)performOperation;
-(id)initWithConfiguration:(id)arg1 context:(id)arg2 delegate:(id)arg3 ;
@end


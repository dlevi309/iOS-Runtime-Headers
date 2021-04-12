/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKSubcredentialProvisioningConfiguration.h>

@class PKAppletSubcredentialSharingInvitation, PKPaymentWebService;

@interface PKSubcredentialProvisioningAcceptRemoteDeviceInvitationConfiguration : PKSubcredentialProvisioningConfiguration {

	BOOL _canRequestInvitation;
	PKAppletSubcredentialSharingInvitation* _invitation;
	PKPaymentWebService* _remoteDeviceWebService;
	PKPaymentWebService* _localDeviceWebService;

}

@property (nonatomic,readonly) PKAppletSubcredentialSharingInvitation * invitation;              //@synthesize invitation=_invitation - In the implementation block
@property (nonatomic,readonly) BOOL canRequestInvitation;                                        //@synthesize canRequestInvitation=_canRequestInvitation - In the implementation block
@property (nonatomic,readonly) PKPaymentWebService * remoteDeviceWebService;                     //@synthesize remoteDeviceWebService=_remoteDeviceWebService - In the implementation block
@property (nonatomic,readonly) PKPaymentWebService * localDeviceWebService;                      //@synthesize localDeviceWebService=_localDeviceWebService - In the implementation block
-(id)description;
-(PKPaymentWebService *)localDeviceWebService;
-(PKPaymentWebService *)remoteDeviceWebService;
-(PKAppletSubcredentialSharingInvitation *)invitation;
-(BOOL)canRequestInvitation;
-(id)transitionTable;
-(long long)startingState;
-(id)initWithInvitation:(id)arg1 canRequestInvitation:(BOOL)arg2 localDeviceWebService:(id)arg3 remoteDeviceWebService:(id)arg4 configurationType:(long long)arg5 ;
-(id)initWithInvitation:(id)arg1 canRequestInvitation:(BOOL)arg2 localDeviceWebService:(id)arg3 remoteDeviceWebService:(id)arg4 ;
@end


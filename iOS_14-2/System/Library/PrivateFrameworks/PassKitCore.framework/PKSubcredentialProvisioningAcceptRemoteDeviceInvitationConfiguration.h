/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKSubcredentialProvisioningConfiguration.h>

@class PKAppletSubcredentialSharingInvitation, PKPaymentWebService;

@interface PKSubcredentialProvisioningAcceptRemoteDeviceInvitationConfiguration : PKSubcredentialProvisioningConfiguration {

	BOOL _canRequestInvitation;
	BOOL _declineRelatedInvitations;
	PKAppletSubcredentialSharingInvitation* _invitation;
	PKPaymentWebService* _remoteDeviceWebService;
	PKPaymentWebService* _localDeviceWebService;

}

@property (nonatomic,readonly) PKAppletSubcredentialSharingInvitation * invitation;              //@synthesize invitation=_invitation - In the implementation block
@property (nonatomic,readonly) BOOL canRequestInvitation;                                        //@synthesize canRequestInvitation=_canRequestInvitation - In the implementation block
@property (nonatomic,readonly) BOOL declineRelatedInvitations;                                   //@synthesize declineRelatedInvitations=_declineRelatedInvitations - In the implementation block
@property (nonatomic,readonly) PKPaymentWebService * remoteDeviceWebService;                     //@synthesize remoteDeviceWebService=_remoteDeviceWebService - In the implementation block
@property (nonatomic,readonly) PKPaymentWebService * localDeviceWebService;                      //@synthesize localDeviceWebService=_localDeviceWebService - In the implementation block
-(id)transitionTable;
-(id)initWithInvitation:(id)arg1 canRequestInvitation:(BOOL)arg2 declineRelatedInvitations:(BOOL)arg3 localDeviceWebService:(id)arg4 remoteDeviceWebService:(id)arg5 configurationType:(long long)arg6 ;
-(long long)startingState;
-(BOOL)declineRelatedInvitations;
-(id)initWithInvitation:(id)arg1 canRequestInvitation:(BOOL)arg2 declineRelatedInvitations:(BOOL)arg3 localDeviceWebService:(id)arg4 remoteDeviceWebService:(id)arg5 ;
-(id)description;
-(PKPaymentWebService *)localDeviceWebService;
-(PKPaymentWebService *)remoteDeviceWebService;
-(BOOL)canRequestInvitation;
-(PKAppletSubcredentialSharingInvitation *)invitation;
@end


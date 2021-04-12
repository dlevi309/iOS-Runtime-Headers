/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKSubcredentialProvisioningLocalDeviceConfiguration.h>

@class PKAppletSubcredentialSharingSession, PKAppletSubcredentialSharingInvitation, PKAppletSubcredentialSharingInvitationMetadata, PKPaymentWebService;

@interface PKSubcredentialProvisioningAcceptInvitationConfiguration : PKSubcredentialProvisioningLocalDeviceConfiguration {

	BOOL _declineRelatedInvitations;
	PKAppletSubcredentialSharingSession* _session;
	PKAppletSubcredentialSharingInvitation* _invitation;
	PKAppletSubcredentialSharingInvitationMetadata* _metadata;
	PKPaymentWebService* _remoteDeviceWebService;

}

@property (nonatomic,__weak,readonly) PKAppletSubcredentialSharingSession * session;                   //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) PKAppletSubcredentialSharingInvitation * invitation;                    //@synthesize invitation=_invitation - In the implementation block
@property (nonatomic,readonly) PKAppletSubcredentialSharingInvitationMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) BOOL declineRelatedInvitations;                                         //@synthesize declineRelatedInvitations=_declineRelatedInvitations - In the implementation block
@property (nonatomic,readonly) PKPaymentWebService * remoteDeviceWebService;                           //@synthesize remoteDeviceWebService=_remoteDeviceWebService - In the implementation block
-(id)transitionTable;
-(long long)startingState;
-(id)initWithSession:(id)arg1 invitation:(id)arg2 metadata:(id)arg3 declineRelatedInvitations:(BOOL)arg4 localDeviceWebService:(id)arg5 remoteDeviceWebService:(id)arg6 ;
-(id)initWithSession:(id)arg1 invitation:(id)arg2 metadata:(id)arg3 webService:(id)arg4 ;
-(BOOL)declineRelatedInvitations;
-(PKAppletSubcredentialSharingSession *)session;
-(id)description;
-(PKPaymentWebService *)remoteDeviceWebService;
-(PKAppletSubcredentialSharingInvitationMetadata *)metadata;
-(PKAppletSubcredentialSharingInvitation *)invitation;
@end


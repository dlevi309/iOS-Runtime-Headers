/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKSubcredentialProvisioningLocalDeviceConfiguration.h>

@class PKAppletSubcredentialSharingSession, PKAppletSubcredentialSharingInvitation, PKAppletSubcredentialSharingInvitationMetadata;

@interface PKSubcredentialProvisioningAcceptInvitationConfiguration : PKSubcredentialProvisioningLocalDeviceConfiguration {

	PKAppletSubcredentialSharingSession* _session;
	PKAppletSubcredentialSharingInvitation* _invitation;
	PKAppletSubcredentialSharingInvitationMetadata* _metadata;

}

@property (nonatomic,__weak,readonly) PKAppletSubcredentialSharingSession * session;                   //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) PKAppletSubcredentialSharingInvitation * invitation;                    //@synthesize invitation=_invitation - In the implementation block
@property (nonatomic,readonly) PKAppletSubcredentialSharingInvitationMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
-(id)description;
-(PKAppletSubcredentialSharingInvitationMetadata *)metadata;
-(PKAppletSubcredentialSharingSession *)session;
-(PKAppletSubcredentialSharingInvitation *)invitation;
-(id)transitionTable;
-(long long)startingState;
-(id)initWithSession:(id)arg1 invitation:(id)arg2 metadata:(id)arg3 webService:(id)arg4 ;
-(id)initWithSession:(id)arg1 invitation:(id)arg2 webService:(id)arg3 ;
@end


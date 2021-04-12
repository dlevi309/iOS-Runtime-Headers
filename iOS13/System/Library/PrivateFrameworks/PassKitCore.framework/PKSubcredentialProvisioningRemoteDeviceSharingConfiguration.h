/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKSubcredentialProvisioningAcceptRemoteDeviceInvitationConfiguration.h>

@protocol PKSubcredentialProvisioningUserAuthDelegate;
@class PKAppletSubcredentialSharingRequest, PKAppletSubcredentialSharingSession;

@interface PKSubcredentialProvisioningRemoteDeviceSharingConfiguration : PKSubcredentialProvisioningAcceptRemoteDeviceInvitationConfiguration {

	PKAppletSubcredentialSharingRequest* _sharingRequest;
	PKAppletSubcredentialSharingSession* _sharingSession;
	id<PKSubcredentialProvisioningUserAuthDelegate> _userAuthDelegate;

}

@property (nonatomic,readonly) PKAppletSubcredentialSharingRequest * sharingRequest;                                 //@synthesize sharingRequest=_sharingRequest - In the implementation block
@property (nonatomic,readonly) PKAppletSubcredentialSharingSession * sharingSession;                                 //@synthesize sharingSession=_sharingSession - In the implementation block
@property (nonatomic,__weak,readonly) id<PKSubcredentialProvisioningUserAuthDelegate> userAuthDelegate;              //@synthesize userAuthDelegate=_userAuthDelegate - In the implementation block
-(id)description;
-(id)transitionTable;
-(long long)startingState;
-(id)initWithSharingRequest:(id)arg1 sharingSession:(id)arg2 localDeviceWebService:(id)arg3 remoteDeviceWebService:(id)arg4 userAuthDelegate:(id)arg5 ;
-(PKAppletSubcredentialSharingRequest *)sharingRequest;
-(PKAppletSubcredentialSharingSession *)sharingSession;
-(id<PKSubcredentialProvisioningUserAuthDelegate>)userAuthDelegate;
@end


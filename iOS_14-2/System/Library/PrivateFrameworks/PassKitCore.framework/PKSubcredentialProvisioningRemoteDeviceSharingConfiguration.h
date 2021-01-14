/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)transitionTable;
-(long long)startingState;
-(PKAppletSubcredentialSharingRequest *)sharingRequest;
-(id<PKSubcredentialProvisioningUserAuthDelegate>)userAuthDelegate;
-(id)initWithSharingRequest:(id)arg1 sharingSession:(id)arg2 localDeviceWebService:(id)arg3 remoteDeviceWebService:(id)arg4 userAuthDelegate:(id)arg5 ;
-(id)description;
-(PKAppletSubcredentialSharingSession *)sharingSession;
@end


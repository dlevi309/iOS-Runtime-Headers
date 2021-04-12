/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKSubcredentialProvisioningFlowControllerContext.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PKAppletSubcredentialSharingInvitation;

@interface PKSubcredentialInvitationFlowControllerContext : PKSubcredentialProvisioningFlowControllerContext <NSCopying> {

	PKAppletSubcredentialSharingInvitation* _localDeviceInvitation;
	PKAppletSubcredentialSharingInvitation* _remoteDeviceInvitation;

}

@property (nonatomic,retain) PKAppletSubcredentialSharingInvitation * localDeviceInvitation;               //@synthesize localDeviceInvitation=_localDeviceInvitation - In the implementation block
@property (nonatomic,retain) PKAppletSubcredentialSharingInvitation * remoteDeviceInvitation;              //@synthesize remoteDeviceInvitation=_remoteDeviceInvitation - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(PKAppletSubcredentialSharingInvitation *)remoteDeviceInvitation;
-(void)setRemoteDeviceInvitation:(PKAppletSubcredentialSharingInvitation *)arg1 ;
-(PKAppletSubcredentialSharingInvitation *)localDeviceInvitation;
-(id)initWithInvitation:(id)arg1 localDeviceWebService:(id)arg2 remoteDeviceWebService:(id)arg3 ;
-(void)setLocalDeviceInvitation:(PKAppletSubcredentialSharingInvitation *)arg1 ;
@end


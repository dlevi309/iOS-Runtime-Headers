/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKSubcredentialProvisioningFlowControllerContext.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PKAppletSubcredentialSharingInvitation;

@interface PKSubcredentialInvitationFlowControllerContext : PKSubcredentialProvisioningFlowControllerContext <NSCopying> {

	BOOL _acceptLocalDeviceInvitation;
	BOOL _acceptRemoteDeviceInvitation;
	PKAppletSubcredentialSharingInvitation* _localDeviceInvitation;
	PKAppletSubcredentialSharingInvitation* _remoteDeviceInvitation;

}

@property (nonatomic,retain) PKAppletSubcredentialSharingInvitation * localDeviceInvitation;               //@synthesize localDeviceInvitation=_localDeviceInvitation - In the implementation block
@property (nonatomic,retain) PKAppletSubcredentialSharingInvitation * remoteDeviceInvitation;              //@synthesize remoteDeviceInvitation=_remoteDeviceInvitation - In the implementation block
@property (assign,nonatomic) BOOL acceptLocalDeviceInvitation;                                             //@synthesize acceptLocalDeviceInvitation=_acceptLocalDeviceInvitation - In the implementation block
@property (assign,nonatomic) BOOL acceptRemoteDeviceInvitation;                                            //@synthesize acceptRemoteDeviceInvitation=_acceptRemoteDeviceInvitation - In the implementation block
-(void)setLocalDeviceInvitation:(PKAppletSubcredentialSharingInvitation *)arg1 ;
-(void)setRemoteDeviceInvitation:(PKAppletSubcredentialSharingInvitation *)arg1 ;
-(PKAppletSubcredentialSharingInvitation *)remoteDeviceInvitation;
-(PKAppletSubcredentialSharingInvitation *)localDeviceInvitation;
-(BOOL)acceptRemoteDeviceInvitation;
-(BOOL)acceptLocalDeviceInvitation;
-(void)setAcceptLocalDeviceInvitation:(BOOL)arg1 ;
-(void)setAcceptRemoteDeviceInvitation:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithInvitation:(id)arg1 localDeviceWebService:(id)arg2 remoteDeviceWebService:(id)arg3 ;
@end


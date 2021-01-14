/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKSubcredentialProvisioningFlowControllerContext.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PKAddCarKeyPassConfiguration, PKEntitlementWhitelist, PKAppletSubcredential, PKAppletSubcredentialSharingRequest, PKAppletSubcredentialSharingInvitation, PKPaymentProvisioningController;

@interface PKSubcredentialPairingFlowControllerContext : PKSubcredentialProvisioningFlowControllerContext <NSCopying> {

	BOOL _passwordManuallyEntered;
	BOOL _shouldRequestInvitation;
	BOOL _declineRelatedInvitations;
	PKAddCarKeyPassConfiguration* _configuration;
	PKEntitlementWhitelist* _appEntitlementWhitelist;
	PKAppletSubcredential* _credentialToShare;
	PKAppletSubcredentialSharingRequest* _remoteDeviceSharingRequest;
	PKAppletSubcredentialSharingInvitation* _remoteDeviceInvitation;
	PKPaymentProvisioningController* _provisioningController;

}

@property (nonatomic,retain) PKAddCarKeyPassConfiguration * configuration;                                  //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) PKEntitlementWhitelist * appEntitlementWhitelist;                              //@synthesize appEntitlementWhitelist=_appEntitlementWhitelist - In the implementation block
@property (assign,nonatomic) BOOL passwordManuallyEntered;                                                  //@synthesize passwordManuallyEntered=_passwordManuallyEntered - In the implementation block
@property (nonatomic,retain) PKAppletSubcredential * credentialToShare;                                     //@synthesize credentialToShare=_credentialToShare - In the implementation block
@property (nonatomic,retain) PKAppletSubcredentialSharingRequest * remoteDeviceSharingRequest;              //@synthesize remoteDeviceSharingRequest=_remoteDeviceSharingRequest - In the implementation block
@property (nonatomic,retain) PKAppletSubcredentialSharingInvitation * remoteDeviceInvitation;               //@synthesize remoteDeviceInvitation=_remoteDeviceInvitation - In the implementation block
@property (assign,nonatomic) BOOL shouldRequestInvitation;                                                  //@synthesize shouldRequestInvitation=_shouldRequestInvitation - In the implementation block
@property (assign,nonatomic) BOOL declineRelatedInvitations;                                                //@synthesize declineRelatedInvitations=_declineRelatedInvitations - In the implementation block
@property (nonatomic,retain) PKPaymentProvisioningController * provisioningController;                      //@synthesize provisioningController=_provisioningController - In the implementation block
-(PKAppletSubcredential *)credentialToShare;
-(BOOL)declineRelatedInvitations;
-(BOOL)shouldRequestInvitation;
-(PKAddCarKeyPassConfiguration *)configuration;
-(void)setCredentialToShare:(PKAppletSubcredential *)arg1 ;
-(void)setRemoteDeviceSharingRequest:(PKAppletSubcredentialSharingRequest *)arg1 ;
-(BOOL)passwordManuallyEntered;
-(id)initWithFlowType:(long long)arg1 ;
-(PKEntitlementWhitelist *)appEntitlementWhitelist;
-(PKAppletSubcredentialSharingRequest *)remoteDeviceSharingRequest;
-(PKPaymentProvisioningController *)provisioningController;
-(void)setRemoteDeviceInvitation:(PKAppletSubcredentialSharingInvitation *)arg1 ;
-(void)setDeclineRelatedInvitations:(BOOL)arg1 ;
-(void)setProvisioningController:(PKPaymentProvisioningController *)arg1 ;
-(PKAppletSubcredentialSharingInvitation *)remoteDeviceInvitation;
-(void)setAppEntitlementWhitelist:(PKEntitlementWhitelist *)arg1 ;
-(void)setPasswordManuallyEntered:(BOOL)arg1 ;
-(void)setShouldRequestInvitation:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setConfiguration:(PKAddCarKeyPassConfiguration *)arg1 ;
@end


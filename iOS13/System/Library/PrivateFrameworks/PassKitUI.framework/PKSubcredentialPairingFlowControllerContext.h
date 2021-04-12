/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKSubcredentialProvisioningFlowControllerContext.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PKAddCarKeyPassConfiguration, PKEntitlementWhitelist, PKAppletSubcredential, PKAppletSubcredentialSharingRequest, PKAppletSubcredentialSharingInvitation, PKPaymentProvisioningController;

@interface PKSubcredentialPairingFlowControllerContext : PKSubcredentialProvisioningFlowControllerContext <NSCopying> {

	BOOL _shouldRequestInvitation;
	PKAddCarKeyPassConfiguration* _configuration;
	PKEntitlementWhitelist* _appEntitlementWhitelist;
	PKAppletSubcredential* _credentialToShare;
	PKAppletSubcredentialSharingRequest* _remoteDeviceSharingRequest;
	PKAppletSubcredentialSharingInvitation* _remoteDeviceInvitation;
	PKPaymentProvisioningController* _provisioningController;

}

@property (nonatomic,retain) PKAddCarKeyPassConfiguration * configuration;                                  //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) PKEntitlementWhitelist * appEntitlementWhitelist;                              //@synthesize appEntitlementWhitelist=_appEntitlementWhitelist - In the implementation block
@property (nonatomic,retain) PKAppletSubcredential * credentialToShare;                                     //@synthesize credentialToShare=_credentialToShare - In the implementation block
@property (nonatomic,retain) PKAppletSubcredentialSharingRequest * remoteDeviceSharingRequest;              //@synthesize remoteDeviceSharingRequest=_remoteDeviceSharingRequest - In the implementation block
@property (nonatomic,retain) PKAppletSubcredentialSharingInvitation * remoteDeviceInvitation;               //@synthesize remoteDeviceInvitation=_remoteDeviceInvitation - In the implementation block
@property (assign,nonatomic) BOOL shouldRequestInvitation;                                                  //@synthesize shouldRequestInvitation=_shouldRequestInvitation - In the implementation block
@property (nonatomic,retain) PKPaymentProvisioningController * provisioningController;                      //@synthesize provisioningController=_provisioningController - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setConfiguration:(PKAddCarKeyPassConfiguration *)arg1 ;
-(PKAddCarKeyPassConfiguration *)configuration;
-(PKAppletSubcredentialSharingInvitation *)remoteDeviceInvitation;
-(void)setShouldRequestInvitation:(BOOL)arg1 ;
-(PKAppletSubcredential *)credentialToShare;
-(BOOL)shouldRequestInvitation;
-(PKPaymentProvisioningController *)provisioningController;
-(void)setProvisioningController:(PKPaymentProvisioningController *)arg1 ;
-(id)initWithFlowType:(long long)arg1 ;
-(void)setCredentialToShare:(PKAppletSubcredential *)arg1 ;
-(void)setRemoteDeviceSharingRequest:(PKAppletSubcredentialSharingRequest *)arg1 ;
-(PKEntitlementWhitelist *)appEntitlementWhitelist;
-(PKAppletSubcredentialSharingRequest *)remoteDeviceSharingRequest;
-(void)setRemoteDeviceInvitation:(PKAppletSubcredentialSharingInvitation *)arg1 ;
-(void)setAppEntitlementWhitelist:(PKEntitlementWhitelist *)arg1 ;
@end


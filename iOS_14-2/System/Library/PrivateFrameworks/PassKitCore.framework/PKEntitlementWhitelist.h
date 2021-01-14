/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


#import <PassKitCore/PassKitCore-Structs.h>
@class NSString, NSArray;

@interface PKEntitlementWhitelist : NSObject {

	int _processIdentifier;
	BOOL _isiOSOnMac;
	BOOL _shareableCredentialProvisioning;
	BOOL _passesAllAccess;
	BOOL _passesOverviewAccess;
	BOOL _passesAddSilently;
	BOOL _passPresentationSuppression;
	BOOL _paymentAllAccess;
	BOOL _paymentConfiguration;
	BOOL _paymentPresentation;
	BOOL _applePayTrustAllAccess;
	BOOL _inAppPayments;
	BOOL _inAppPaymentsPrivate;
	BOOL _manualPaymentPassProvisioning;
	BOOL _webPayments;
	BOOL _winterpegPayments;
	BOOL _cardOnFilePayments;
	BOOL _AMPCardEnrollment;
	BOOL _externalizedContextPayments;
	BOOL _trustedDeviceEnrollmentInfo;
	BOOL _peerPaymentAllAccess;
	BOOL _featuresAllAccess;
	BOOL _supportsDisbursements;
	BOOL _searchAllAccess;
	BOOL _secureElementPassProvisioning;
	BOOL _credentialStateAccess;
	NSString* _applicationID;
	NSString* _developerTeamID;
	NSArray* _merchantIdentifiers;
	NSArray* _teamIDs;
	NSArray* _passTypeIDs;
	NSArray* _passTypeIDPrefixes;

}

@property (readonly) BOOL passesAllAccess;                              //@synthesize passesAllAccess=_passesAllAccess - In the implementation block
@property (readonly) BOOL passesOverviewAccess;                         //@synthesize passesOverviewAccess=_passesOverviewAccess - In the implementation block
@property (readonly) BOOL passesAddSilently;                            //@synthesize passesAddSilently=_passesAddSilently - In the implementation block
@property (readonly) BOOL passPresentationSuppression;                  //@synthesize passPresentationSuppression=_passPresentationSuppression - In the implementation block
@property (readonly) BOOL paymentAllAccess;                             //@synthesize paymentAllAccess=_paymentAllAccess - In the implementation block
@property (readonly) BOOL paymentConfiguration;                         //@synthesize paymentConfiguration=_paymentConfiguration - In the implementation block
@property (readonly) BOOL paymentPresentation;                          //@synthesize paymentPresentation=_paymentPresentation - In the implementation block
@property (readonly) BOOL applePayTrustAllAccess;                       //@synthesize applePayTrustAllAccess=_applePayTrustAllAccess - In the implementation block
@property (readonly) BOOL inAppPayments;                                //@synthesize inAppPayments=_inAppPayments - In the implementation block
@property (readonly) BOOL inAppPaymentsPrivate;                         //@synthesize inAppPaymentsPrivate=_inAppPaymentsPrivate - In the implementation block
@property (readonly) BOOL manualPaymentPassProvisioning;                //@synthesize manualPaymentPassProvisioning=_manualPaymentPassProvisioning - In the implementation block
@property (readonly) BOOL webPayments;                                  //@synthesize webPayments=_webPayments - In the implementation block
@property (readonly) BOOL winterpegPayments;                            //@synthesize winterpegPayments=_winterpegPayments - In the implementation block
@property (readonly) BOOL cardOnFilePayments;                           //@synthesize cardOnFilePayments=_cardOnFilePayments - In the implementation block
@property (readonly) BOOL AMPCardEnrollment;                            //@synthesize AMPCardEnrollment=_AMPCardEnrollment - In the implementation block
@property (readonly) BOOL externalizedContextPayments;                  //@synthesize externalizedContextPayments=_externalizedContextPayments - In the implementation block
@property (readonly) BOOL trustedDeviceEnrollmentInfo;                  //@synthesize trustedDeviceEnrollmentInfo=_trustedDeviceEnrollmentInfo - In the implementation block
@property (readonly) BOOL peerPaymentAllAccess;                         //@synthesize peerPaymentAllAccess=_peerPaymentAllAccess - In the implementation block
@property (readonly) BOOL featuresAllAccess;                            //@synthesize featuresAllAccess=_featuresAllAccess - In the implementation block
@property (readonly) BOOL supportsDisbursements;                        //@synthesize supportsDisbursements=_supportsDisbursements - In the implementation block
@property (readonly) BOOL searchAllAccess;                              //@synthesize searchAllAccess=_searchAllAccess - In the implementation block
@property (readonly) BOOL secureElementPassProvisioning;                //@synthesize secureElementPassProvisioning=_secureElementPassProvisioning - In the implementation block
@property (readonly) BOOL accessPassProvisioning; 
@property (readonly) BOOL credentialStateAccess;                        //@synthesize credentialStateAccess=_credentialStateAccess - In the implementation block
@property (readonly) BOOL shareableCredentialProvisioning;              //@synthesize shareableCredentialProvisioning=_shareableCredentialProvisioning - In the implementation block
@property (copy,readonly) NSString * applicationID;                     //@synthesize applicationID=_applicationID - In the implementation block
@property (copy,readonly) NSString * developerTeamID;                   //@synthesize developerTeamID=_developerTeamID - In the implementation block
@property (copy,readonly) NSArray * merchantIdentifiers;                //@synthesize merchantIdentifiers=_merchantIdentifiers - In the implementation block
@property (copy,readonly) NSArray * teamIDs;                            //@synthesize teamIDs=_teamIDs - In the implementation block
@property (copy,readonly) NSArray * passTypeIDs;                        //@synthesize passTypeIDs=_passTypeIDs - In the implementation block
@property (copy,readonly) NSArray * passTypeIDPrefixes;                 //@synthesize passTypeIDPrefixes=_passTypeIDPrefixes - In the implementation block
@property (readonly) BOOL supportsWebPayments; 
@property (readonly) BOOL allAccess; 
+(BOOL)supportsSecureCoding;
-(NSString *)applicationID;
-(BOOL)secureElementPassProvisioning;
-(BOOL)winterpegPayments;
-(BOOL)passesAddSilently;
-(id)initWithConnection:(id)arg1 ;
-(NSArray *)passTypeIDs;
-(NSArray *)teamIDs;
-(BOOL)applePayTrustAllAccess;
-(BOOL)manualPaymentPassProvisioning;
-(BOOL)paymentConfiguration;
-(id)_stringValueOfEntitlement:(id)arg1 fromSecTask:(SecTaskRef)arg2 ;
-(BOOL)accessPassProvisioning;
-(BOOL)inAppPaymentsPrivate;
-(BOOL)_boolValueOfEntitlement:(id)arg1 fromSecTask:(SecTaskRef)arg2 ;
-(BOOL)peerPaymentAllAccess;
-(BOOL)credentialStateAccess;
-(BOOL)paymentAllAccess;
-(BOOL)webPayments;
-(BOOL)searchAllAccess;
-(BOOL)passesAllAccess;
-(BOOL)isEntitledForMerchantSession:(id)arg1 ;
-(BOOL)allAccess;
-(BOOL)shareableCredentialProvisioning;
-(NSArray *)merchantIdentifiers;
-(BOOL)AMPCardEnrollment;
-(BOOL)trustedDeviceEnrollmentInfo;
-(BOOL)isEntitledForPaymentRequest:(id)arg1 ;
-(NSArray *)passTypeIDPrefixes;
-(NSString *)developerTeamID;
-(BOOL)isEntitledForAnyFromUniquePassTypeIDs:(id)arg1 ;
-(id)_arrayValueOfEntitlement:(id)arg1 fromSecTask:(SecTaskRef)arg2 ;
-(BOOL)passPresentationSuppression;
-(BOOL)featuresAllAccess;
-(BOOL)supportsWebPayments;
-(BOOL)isEntitledForPassTypeID:(id)arg1 ;
-(BOOL)cardOnFilePayments;
-(BOOL)paymentPresentation;
-(void*)_copyValueOfEntitlement:(id)arg1 fromSecTask:(SecTaskRef)arg2 ;
-(BOOL)_probeEntitlementsWithAuditToken:(SCD_Struct_PK6)arg1 ;
-(BOOL)supportsDisbursements;
-(BOOL)inAppPayments;
-(BOOL)passesOverviewAccess;
-(BOOL)externalizedContextPayments;
@end


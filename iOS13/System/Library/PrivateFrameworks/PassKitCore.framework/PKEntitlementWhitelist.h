/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


#import <PassKitCore/PassKitCore-Structs.h>
@class NSString, NSArray;

@interface PKEntitlementWhitelist : NSObject {

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
	BOOL _secureElementPassProvisioning;
	BOOL _credentialStateAccess;
	BOOL _addSilently;
	int _processIdentifier;
	NSString* _applicationID;
	NSString* _developerTeamID;
	NSArray* _merchantIdentifiers;
	NSArray* _teamIDs;
	NSArray* _passTypeIDs;

}

@property (copy) NSArray * teamIDs;                                   //@synthesize teamIDs=_teamIDs - In the implementation block
@property (copy) NSArray * passTypeIDs;                               //@synthesize passTypeIDs=_passTypeIDs - In the implementation block
@property (assign) BOOL addSilently;                                  //@synthesize addSilently=_addSilently - In the implementation block
@property (readonly) int processIdentifier;                           //@synthesize processIdentifier=_processIdentifier - In the implementation block
@property (readonly) BOOL passesAllAccess;                            //@synthesize passesAllAccess=_passesAllAccess - In the implementation block
@property (readonly) BOOL passesOverviewAccess;                       //@synthesize passesOverviewAccess=_passesOverviewAccess - In the implementation block
@property (readonly) BOOL passesAddSilently;                          //@synthesize passesAddSilently=_passesAddSilently - In the implementation block
@property (readonly) BOOL passPresentationSuppression;                //@synthesize passPresentationSuppression=_passPresentationSuppression - In the implementation block
@property (readonly) BOOL paymentAllAccess;                           //@synthesize paymentAllAccess=_paymentAllAccess - In the implementation block
@property (readonly) BOOL paymentConfiguration;                       //@synthesize paymentConfiguration=_paymentConfiguration - In the implementation block
@property (readonly) BOOL paymentPresentation;                        //@synthesize paymentPresentation=_paymentPresentation - In the implementation block
@property (readonly) BOOL applePayTrustAllAccess;                     //@synthesize applePayTrustAllAccess=_applePayTrustAllAccess - In the implementation block
@property (readonly) BOOL inAppPayments;                              //@synthesize inAppPayments=_inAppPayments - In the implementation block
@property (readonly) BOOL inAppPaymentsPrivate;                       //@synthesize inAppPaymentsPrivate=_inAppPaymentsPrivate - In the implementation block
@property (readonly) BOOL manualPaymentPassProvisioning;              //@synthesize manualPaymentPassProvisioning=_manualPaymentPassProvisioning - In the implementation block
@property (readonly) BOOL webPayments;                                //@synthesize webPayments=_webPayments - In the implementation block
@property (readonly) BOOL winterpegPayments;                          //@synthesize winterpegPayments=_winterpegPayments - In the implementation block
@property (readonly) BOOL cardOnFilePayments;                         //@synthesize cardOnFilePayments=_cardOnFilePayments - In the implementation block
@property (readonly) BOOL AMPCardEnrollment;                          //@synthesize AMPCardEnrollment=_AMPCardEnrollment - In the implementation block
@property (readonly) BOOL externalizedContextPayments;                //@synthesize externalizedContextPayments=_externalizedContextPayments - In the implementation block
@property (readonly) BOOL trustedDeviceEnrollmentInfo;                //@synthesize trustedDeviceEnrollmentInfo=_trustedDeviceEnrollmentInfo - In the implementation block
@property (readonly) BOOL peerPaymentAllAccess;                       //@synthesize peerPaymentAllAccess=_peerPaymentAllAccess - In the implementation block
@property (readonly) BOOL featuresAllAccess;                          //@synthesize featuresAllAccess=_featuresAllAccess - In the implementation block
@property (readonly) BOOL supportsDisbursements;                      //@synthesize supportsDisbursements=_supportsDisbursements - In the implementation block
@property (readonly) BOOL secureElementPassProvisioning;              //@synthesize secureElementPassProvisioning=_secureElementPassProvisioning - In the implementation block
@property (readonly) BOOL accessPassProvisioning; 
@property (readonly) BOOL credentialStateAccess;                      //@synthesize credentialStateAccess=_credentialStateAccess - In the implementation block
@property (copy,readonly) NSString * applicationID;                   //@synthesize applicationID=_applicationID - In the implementation block
@property (copy,readonly) NSString * developerTeamID;                 //@synthesize developerTeamID=_developerTeamID - In the implementation block
@property (copy,readonly) NSArray * merchantIdentifiers;              //@synthesize merchantIdentifiers=_merchantIdentifiers - In the implementation block
@property (readonly) BOOL allAccess; 
+(BOOL)supportsSecureCoding;
-(int)processIdentifier;
-(id)initWithConnection:(id)arg1 ;
-(NSString *)applicationID;
-(BOOL)paymentAllAccess;
-(BOOL)peerPaymentAllAccess;
-(BOOL)trustedDeviceEnrollmentInfo;
-(BOOL)supportsDisbursements;
-(NSArray *)merchantIdentifiers;
-(BOOL)paymentPresentation;
-(BOOL)passPresentationSuppression;
-(void)_probeEntitlementsWithConnection:(id)arg1 ;
-(BOOL)isEntitledForMerchantSession:(id)arg1 ;
-(void*)_copyValueOfEntitlement:(id)arg1 fromSecTask:(SecTaskRef)arg2 ;
-(BOOL)_boolValueOfEntitlement:(id)arg1 fromSecTask:(SecTaskRef)arg2 ;
-(id)_stringValueOfEntitlement:(id)arg1 fromSecTask:(SecTaskRef)arg2 ;
-(id)_arrayValueOfEntitlement:(id)arg1 fromSecTask:(SecTaskRef)arg2 ;
-(BOOL)allAccess;
-(BOOL)supportsWebPayments;
-(BOOL)isEntitledForPaymentRequest:(id)arg1 ;
-(BOOL)accessPassProvisioning;
-(BOOL)passesAllAccess;
-(BOOL)passesOverviewAccess;
-(BOOL)passesAddSilently;
-(BOOL)paymentConfiguration;
-(BOOL)applePayTrustAllAccess;
-(BOOL)inAppPayments;
-(BOOL)inAppPaymentsPrivate;
-(BOOL)manualPaymentPassProvisioning;
-(BOOL)webPayments;
-(BOOL)winterpegPayments;
-(BOOL)cardOnFilePayments;
-(BOOL)AMPCardEnrollment;
-(BOOL)externalizedContextPayments;
-(BOOL)featuresAllAccess;
-(BOOL)secureElementPassProvisioning;
-(BOOL)credentialStateAccess;
-(NSString *)developerTeamID;
-(NSArray *)teamIDs;
-(void)setTeamIDs:(NSArray *)arg1 ;
-(NSArray *)passTypeIDs;
-(void)setPassTypeIDs:(NSArray *)arg1 ;
-(BOOL)addSilently;
-(void)setAddSilently:(BOOL)arg1 ;
@end


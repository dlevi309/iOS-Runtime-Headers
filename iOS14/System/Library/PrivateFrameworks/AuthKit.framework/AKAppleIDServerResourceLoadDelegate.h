/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol AKAnisetteServiceProtocol;
@class NSString, AKAnisetteProvisioningController, NSMutableDictionary, AKAppleIDAuthenticationContext, NSArray, NSNumber, AKDevice, AKAnisetteData, AKAttestationData;

@interface AKAppleIDServerResourceLoadDelegate : NSObject <NSSecureCoding> {

	NSString* _altDSID;
	AKAnisetteProvisioningController* _proxiedProvisioningController;
	NSMutableDictionary* _continuationHeaders;
	AKAppleIDAuthenticationContext* _context;
	BOOL _shouldSendEphemeralAuthHeader;
	BOOL _shouldSendICSCIntentHeader;
	BOOL _shouldSendLocalUserHasAppleIDLoginHeader;
	BOOL _shouldSendPhoneNumber;
	BOOL _shouldOfferSecurityUpgrade;
	BOOL _shouldSendSigningHeaders;
	NSString* _serviceToken;
	NSString* _phoneNumberCertificate;
	NSArray* _phoneInformation;
	long long _serviceType;
	NSArray* _loggedInServices;
	NSString* _passwordResetToken;
	NSString* _continuationToken;
	NSString* _heartbeatToken;
	NSString* _identityToken;
	NSString* _initialURLRequestKey;
	NSString* _proxyAppName;
	NSString* _clientAppName;
	NSString* _appProvidedContext;
	NSNumber* _hasEmptyPasswordOverride;
	NSString* _securityUpgradeContext;
	NSString* _followupItems;
	NSString* _dataCenterIdentifier;
	AKDevice* _proxiedDevice;
	NSString* _proxiedAltDSID;
	NSString* _proxiedIdentityToken;
	id<AKAnisetteServiceProtocol> _anisetteDataProvider;
	AKAnisetteData* _proxiedDeviceAnisetteData;
	AKAttestationData* _proxiedDeviceAttestationData;

}

@property (assign,nonatomic) BOOL shouldSendEphemeralAuthHeader;                              //@synthesize shouldSendEphemeralAuthHeader=_shouldSendEphemeralAuthHeader - In the implementation block
@property (assign,nonatomic) BOOL shouldSendICSCIntentHeader;                                 //@synthesize shouldSendICSCIntentHeader=_shouldSendICSCIntentHeader - In the implementation block
@property (assign,nonatomic) BOOL shouldSendLocalUserHasAppleIDLoginHeader;                   //@synthesize shouldSendLocalUserHasAppleIDLoginHeader=_shouldSendLocalUserHasAppleIDLoginHeader - In the implementation block
@property (assign,nonatomic) BOOL shouldSendPhoneNumber;                                      //@synthesize shouldSendPhoneNumber=_shouldSendPhoneNumber - In the implementation block
@property (assign,nonatomic) BOOL shouldOfferSecurityUpgrade;                                 //@synthesize shouldOfferSecurityUpgrade=_shouldOfferSecurityUpgrade - In the implementation block
@property (nonatomic,copy) NSString * phoneNumberCertificate;                                 //@synthesize phoneNumberCertificate=_phoneNumberCertificate - In the implementation block
@property (nonatomic,copy) NSArray * phoneInformation;                                        //@synthesize phoneInformation=_phoneInformation - In the implementation block
@property (assign,nonatomic) long long serviceType;                                           //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy) NSArray * loggedInServices;                                        //@synthesize loggedInServices=_loggedInServices - In the implementation block
@property (nonatomic,copy) NSString * passwordResetToken;                                     //@synthesize passwordResetToken=_passwordResetToken - In the implementation block
@property (nonatomic,copy) NSString * continuationToken;                                      //@synthesize continuationToken=_continuationToken - In the implementation block
@property (nonatomic,copy) NSString * heartbeatToken;                                         //@synthesize heartbeatToken=_heartbeatToken - In the implementation block
@property (nonatomic,copy) NSString * identityToken;                                          //@synthesize identityToken=_identityToken - In the implementation block
@property (nonatomic,copy) NSString * altDSID;                                                //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,copy) NSString * initialURLRequestKey;                                   //@synthesize initialURLRequestKey=_initialURLRequestKey - In the implementation block
@property (nonatomic,copy) NSString * proxyAppName;                                           //@synthesize proxyAppName=_proxyAppName - In the implementation block
@property (nonatomic,copy) NSString * clientAppName;                                          //@synthesize clientAppName=_clientAppName - In the implementation block
@property (nonatomic,copy) NSString * appProvidedContext;                                     //@synthesize appProvidedContext=_appProvidedContext - In the implementation block
@property (nonatomic,retain) NSNumber * hasEmptyPasswordOverride;                             //@synthesize hasEmptyPasswordOverride=_hasEmptyPasswordOverride - In the implementation block
@property (nonatomic,copy) NSString * securityUpgradeContext;                                 //@synthesize securityUpgradeContext=_securityUpgradeContext - In the implementation block
@property (nonatomic,copy) NSString * followupItems;                                          //@synthesize followupItems=_followupItems - In the implementation block
@property (nonatomic,copy) NSString * dataCenterIdentifier;                                   //@synthesize dataCenterIdentifier=_dataCenterIdentifier - In the implementation block
@property (nonatomic,retain) AKDevice * proxiedDevice;                                        //@synthesize proxiedDevice=_proxiedDevice - In the implementation block
@property (nonatomic,retain) NSString * proxiedAltDSID;                                       //@synthesize proxiedAltDSID=_proxiedAltDSID - In the implementation block
@property (nonatomic,retain) NSString * proxiedIdentityToken;                                 //@synthesize proxiedIdentityToken=_proxiedIdentityToken - In the implementation block
@property (nonatomic,retain) id<AKAnisetteServiceProtocol> anisetteDataProvider;              //@synthesize anisetteDataProvider=_anisetteDataProvider - In the implementation block
@property (nonatomic,retain) AKAnisetteData * proxiedDeviceAnisetteData;                      //@synthesize proxiedDeviceAnisetteData=_proxiedDeviceAnisetteData - In the implementation block
@property (nonatomic,retain) AKAttestationData * proxiedDeviceAttestationData;                //@synthesize proxiedDeviceAttestationData=_proxiedDeviceAttestationData - In the implementation block
@property (assign,nonatomic) BOOL shouldSendAbsintheHeader; 
@property (assign,nonatomic) BOOL shouldSendSigningHeaders;                                   //@synthesize shouldSendSigningHeaders=_shouldSendSigningHeaders - In the implementation block
@property (nonatomic,copy) NSString * serviceToken;                                           //@synthesize serviceToken=_serviceToken - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)sharedController;
+(unsigned long long)signalFromServerResponse:(id)arg1 ;
-(void)setAnisetteDataProvider:(id<AKAnisetteServiceProtocol>)arg1 ;
-(id)init;
-(AKAnisetteData *)proxiedDeviceAnisetteData;
-(id<AKAnisetteServiceProtocol>)anisetteDataProvider;
-(id)initWithAltDSID:(id)arg1 identityToken:(id)arg2 ;
-(BOOL)shouldSendSigningHeaders;
-(void)_signRequest:(id)arg1 ;
-(id)signingController;
-(id)_proxiedProvisioningController;
-(void)signRequestWithCommonHeaders:(id)arg1 ;
-(void)setProxiedDeviceAnisetteData:(AKAnisetteData *)arg1 ;
-(void)setProxiedDevice:(AKDevice *)arg1 ;
-(void)_signWithProxiedDeviceHeaders:(id)arg1 ;
-(id)_retrieveContinuationHeaders;
-(void)_signWithFeatureOptInHeaders:(id)arg1 ;
-(void)_harvestContinuationHeadersFromHeaders:(id)arg1 ;
-(BOOL)isResponseActionable:(id)arg1 ;
-(void)setShouldSendPhoneNumber:(BOOL)arg1 ;
-(void)setShouldSendEphemeralAuthHeader:(BOOL)arg1 ;
-(void)setShouldSendLocalUserHasAppleIDLoginHeader:(BOOL)arg1 ;
-(void)setHasEmptyPasswordOverride:(NSNumber *)arg1 ;
-(void)setShouldSendICSCIntentHeader:(BOOL)arg1 ;
-(void)setFollowupItems:(NSString *)arg1 ;
-(void)setIdentityToken:(NSString *)arg1 ;
-(BOOL)shouldSendAbsintheHeader;
-(void)setShouldSendAbsintheHeader:(BOOL)arg1 ;
-(void)signRequest:(id)arg1 ;
-(BOOL)isResponseFinal:(id)arg1 ;
-(BOOL)isAuthenticationRequired:(id)arg1 ;
-(void)decorateWithContext:(id)arg1 ;
-(BOOL)isResponseFinalForHSA2ServerFlow:(id)arg1 ;
-(void)updateWithAuthResults:(id)arg1 ;
-(NSString *)serviceToken;
-(void)setServiceToken:(NSString *)arg1 ;
-(BOOL)shouldSendEphemeralAuthHeader;
-(BOOL)shouldSendICSCIntentHeader;
-(BOOL)shouldSendPhoneNumber;
-(BOOL)shouldSendLocalUserHasAppleIDLoginHeader;
-(NSString *)phoneNumberCertificate;
-(void)setPhoneNumberCertificate:(NSString *)arg1 ;
-(NSArray *)phoneInformation;
-(void)setPhoneInformation:(NSArray *)arg1 ;
-(NSArray *)loggedInServices;
-(void)setLoggedInServices:(NSArray *)arg1 ;
-(NSString *)passwordResetToken;
-(void)setPasswordResetToken:(NSString *)arg1 ;
-(NSString *)continuationToken;
-(void)setContinuationToken:(NSString *)arg1 ;
-(NSString *)heartbeatToken;
-(void)setHeartbeatToken:(NSString *)arg1 ;
-(NSString *)initialURLRequestKey;
-(void)setInitialURLRequestKey:(NSString *)arg1 ;
-(NSString *)clientAppName;
-(void)setClientAppName:(NSString *)arg1 ;
-(NSNumber *)hasEmptyPasswordOverride;
-(NSString *)followupItems;
-(NSString *)dataCenterIdentifier;
-(void)setDataCenterIdentifier:(NSString *)arg1 ;
-(NSString *)proxiedAltDSID;
-(void)setProxiedAltDSID:(NSString *)arg1 ;
-(NSString *)proxiedIdentityToken;
-(void)setProxiedIdentityToken:(NSString *)arg1 ;
-(AKAttestationData *)proxiedDeviceAttestationData;
-(void)setProxiedDeviceAttestationData:(AKAttestationData *)arg1 ;
-(NSString *)securityUpgradeContext;
-(NSString *)appProvidedContext;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAppProvidedContext:(NSString *)arg1 ;
-(void)setSecurityUpgradeContext:(NSString *)arg1 ;
-(void)setShouldOfferSecurityUpgrade:(BOOL)arg1 ;
-(void)setServiceType:(long long)arg1 ;
-(BOOL)shouldOfferSecurityUpgrade;
-(void)setProxyAppName:(NSString *)arg1 ;
-(NSString *)altDSID;
-(AKDevice *)proxiedDevice;
-(void)setAltDSID:(NSString *)arg1 ;
-(NSString *)identityToken;
-(void)processResponse:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)signRequest:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(long long)serviceType;
-(void)setShouldSendSigningHeaders:(BOOL)arg1 ;
-(NSString *)proxyAppName;
@end


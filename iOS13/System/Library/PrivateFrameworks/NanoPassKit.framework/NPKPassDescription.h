/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PKImage, NSData, NSString, NSNumber, NSDate, PKNFCPayload, PKColor, NSSet, PKPaymentApplication, NSArray, PKTransitAppletState, NSDecimalNumber;

@interface NPKPassDescription : NSObject <NSSecureCoding, NSCopying> {

	BOOL _hasStoredValue;
	BOOL _privateLabel;
	BOOL _cobranded;
	BOOL _deletePending;
	BOOL _hasUserSelectableContactlessPaymentApplications;
	BOOL _hasAssociatedPeerPaymentAccount;
	BOOL _lazyLoadEncodedImages;
	PKImage* _logoImage;
	PKImage* _backgroundImage;
	unsigned long long _expressPassTypesMask;
	NSData* _backgroundImageEncoded;
	NSData* _logoImageEncoded;
	NSString* _uniqueID;
	NSNumber* _groupID;
	NSString* _passTypeIdentifier;
	NSData* _manifestHash;
	long long _style;
	NSDate* _relevantDate;
	NSDate* _ingestionDate;
	PKNFCPayload* _nfcPayload;
	NSData* _completeHash;
	unsigned long long _settings;
	NSString* _logoText;
	PKColor* _backgroundColor;
	PKColor* _foregroundColor;
	PKColor* _labelColor;
	NSString* _localizedDescription;
	NSSet* _devicePaymentApplications;
	PKPaymentApplication* _devicePrimaryPaymentApplication;
	PKPaymentApplication* _devicePrimaryContactlessPaymentApplication;
	PKPaymentApplication* _devicePrimaryInAppPaymentApplication;
	PKPaymentApplication* _preferredPaymentApplication;
	long long _effectivePaymentApplicationState;
	NSString* _issuerCountryCode;
	NSArray* _availableActions;
	NSString* _organizationName;
	PKTransitAppletState* _transitAppletState;
	NSArray* _frontFieldBuckets;
	NSArray* _backFieldBuckets;
	NSDecimalNumber* _lastAddValueAmount;
	NSDate* _pendingAddValueDate;

}

@property (nonatomic,retain) NSData * logoImageEncoded;                                                      //@synthesize logoImageEncoded=_logoImageEncoded - In the implementation block
@property (nonatomic,retain) NSData * backgroundImageEncoded;                                                //@synthesize backgroundImageEncoded=_backgroundImageEncoded - In the implementation block
@property (assign,nonatomic) BOOL lazyLoadEncodedImages;                                                     //@synthesize lazyLoadEncodedImages=_lazyLoadEncodedImages - In the implementation block
@property (nonatomic,retain) NSString * uniqueID;                                                            //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,retain) NSNumber * groupID;                                                             //@synthesize groupID=_groupID - In the implementation block
@property (nonatomic,retain) NSString * passTypeIdentifier;                                                  //@synthesize passTypeIdentifier=_passTypeIdentifier - In the implementation block
@property (nonatomic,retain) NSData * manifestHash;                                                          //@synthesize manifestHash=_manifestHash - In the implementation block
@property (assign,nonatomic) long long style;                                                                //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) NSDate * relevantDate;                                                          //@synthesize relevantDate=_relevantDate - In the implementation block
@property (nonatomic,retain) NSDate * ingestionDate;                                                         //@synthesize ingestionDate=_ingestionDate - In the implementation block
@property (nonatomic,retain) PKNFCPayload * nfcPayload;                                                      //@synthesize nfcPayload=_nfcPayload - In the implementation block
@property (assign,nonatomic) BOOL hasStoredValue;                                                            //@synthesize hasStoredValue=_hasStoredValue - In the implementation block
@property (nonatomic,retain) NSData * completeHash;                                                          //@synthesize completeHash=_completeHash - In the implementation block
@property (assign,nonatomic) unsigned long long settings;                                                    //@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain) NSString * logoText;                                                            //@synthesize logoText=_logoText - In the implementation block
@property (nonatomic,retain) PKImage * logoImage;                                                            //@synthesize logoImage=_logoImage - In the implementation block
@property (nonatomic,retain) PKColor * backgroundColor;                                                      //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) PKColor * foregroundColor;                                                      //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (nonatomic,retain) PKColor * labelColor;                                                           //@synthesize labelColor=_labelColor - In the implementation block
@property (nonatomic,retain) PKImage * backgroundImage;                                                      //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (nonatomic,retain) NSString * localizedDescription;                                                //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (nonatomic,retain) NSSet * devicePaymentApplications;                                              //@synthesize devicePaymentApplications=_devicePaymentApplications - In the implementation block
@property (nonatomic,retain) PKPaymentApplication * devicePrimaryPaymentApplication;                         //@synthesize devicePrimaryPaymentApplication=_devicePrimaryPaymentApplication - In the implementation block
@property (nonatomic,retain) PKPaymentApplication * devicePrimaryContactlessPaymentApplication;              //@synthesize devicePrimaryContactlessPaymentApplication=_devicePrimaryContactlessPaymentApplication - In the implementation block
@property (nonatomic,retain) PKPaymentApplication * devicePrimaryInAppPaymentApplication;                    //@synthesize devicePrimaryInAppPaymentApplication=_devicePrimaryInAppPaymentApplication - In the implementation block
@property (nonatomic,retain) PKPaymentApplication * preferredPaymentApplication;                             //@synthesize preferredPaymentApplication=_preferredPaymentApplication - In the implementation block
@property (assign,nonatomic) long long effectivePaymentApplicationState;                                     //@synthesize effectivePaymentApplicationState=_effectivePaymentApplicationState - In the implementation block
@property (assign,getter=isPrivateLabel,nonatomic) BOOL privateLabel;                                        //@synthesize privateLabel=_privateLabel - In the implementation block
@property (assign,getter=isCobranded,nonatomic) BOOL cobranded;                                              //@synthesize cobranded=_cobranded - In the implementation block
@property (assign,nonatomic) BOOL deletePending;                                                             //@synthesize deletePending=_deletePending - In the implementation block
@property (assign,nonatomic) BOOL hasUserSelectableContactlessPaymentApplications;                           //@synthesize hasUserSelectableContactlessPaymentApplications=_hasUserSelectableContactlessPaymentApplications - In the implementation block
@property (nonatomic,retain) NSString * issuerCountryCode;                                                   //@synthesize issuerCountryCode=_issuerCountryCode - In the implementation block
@property (nonatomic,readonly) long long effectiveContactlessPaymentApplicationState; 
@property (nonatomic,retain) NSArray * availableActions;                                                     //@synthesize availableActions=_availableActions - In the implementation block
@property (nonatomic,retain) NSString * organizationName;                                                    //@synthesize organizationName=_organizationName - In the implementation block
@property (nonatomic,retain) PKTransitAppletState * transitAppletState;                                      //@synthesize transitAppletState=_transitAppletState - In the implementation block
@property (nonatomic,retain) NSArray * frontFieldBuckets;                                                    //@synthesize frontFieldBuckets=_frontFieldBuckets - In the implementation block
@property (nonatomic,retain) NSArray * backFieldBuckets;                                                     //@synthesize backFieldBuckets=_backFieldBuckets - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * lastAddValueAmount;                                           //@synthesize lastAddValueAmount=_lastAddValueAmount - In the implementation block
@property (nonatomic,retain) NSDate * pendingAddValueDate;                                                   //@synthesize pendingAddValueDate=_pendingAddValueDate - In the implementation block
@property (assign,nonatomic) BOOL hasAssociatedPeerPaymentAccount;                                           //@synthesize hasAssociatedPeerPaymentAccount=_hasAssociatedPeerPaymentAccount - In the implementation block
@property (assign,nonatomic) unsigned long long expressPassTypesMask;                                        //@synthesize expressPassTypesMask=_expressPassTypesMask - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isCachingEnabled;
+(void)setCachingEnabled:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)localizedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)uniqueID;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(PKImage *)backgroundImage;
-(void)setBackgroundImage:(PKImage *)arg1 ;
-(NSNumber *)groupID;
-(unsigned long long)settings;
-(void)setSettings:(unsigned long long)arg1 ;
-(void)setGroupID:(NSNumber *)arg1 ;
-(NSString *)organizationName;
-(PKColor *)backgroundColor;
-(void)setBackgroundColor:(PKColor *)arg1 ;
-(PKColor *)labelColor;
-(void)setForegroundColor:(PKColor *)arg1 ;
-(PKColor *)foregroundColor;
-(void)setUniqueID:(NSString *)arg1 ;
-(void)setOrganizationName:(NSString *)arg1 ;
-(NSString *)passTypeIdentifier;
-(void)setPassTypeIdentifier:(NSString *)arg1 ;
-(BOOL)hasAssociatedPeerPaymentAccount;
-(void)setLabelColor:(PKColor *)arg1 ;
-(id)initWithPass:(id)arg1 ;
-(NSSet *)devicePaymentApplications;
-(PKPaymentApplication *)devicePrimaryContactlessPaymentApplication;
-(PKNFCPayload *)nfcPayload;
-(PKTransitAppletState *)transitAppletState;
-(NSData *)manifestHash;
-(PKPaymentApplication *)devicePrimaryPaymentApplication;
-(BOOL)hasValidNFCPayload;
-(BOOL)hasStoredValue;
-(id)fieldForKey:(id)arg1 ;
-(PKPaymentApplication *)devicePrimaryInAppPaymentApplication;
-(id)transitProperties;
-(void)setCobranded:(BOOL)arg1 ;
-(void)setIssuerCountryCode:(NSString *)arg1 ;
-(void)setHasAssociatedPeerPaymentAccount:(BOOL)arg1 ;
-(void)setDevicePaymentApplications:(NSSet *)arg1 ;
-(void)setDevicePrimaryPaymentApplication:(PKPaymentApplication *)arg1 ;
-(void)setDevicePrimaryContactlessPaymentApplication:(PKPaymentApplication *)arg1 ;
-(void)setDevicePrimaryInAppPaymentApplication:(PKPaymentApplication *)arg1 ;
-(BOOL)isPrivateLabel;
-(BOOL)isCobranded;
-(long long)effectiveContactlessPaymentApplicationState;
-(NSArray *)availableActions;
-(NSString *)issuerCountryCode;
-(void)setAvailableActions:(NSArray *)arg1 ;
-(void)setManifestHash:(NSData *)arg1 ;
-(NSDate *)relevantDate;
-(void)setRelevantDate:(NSDate *)arg1 ;
-(void)setHasStoredValue:(BOOL)arg1 ;
-(NSArray *)frontFieldBuckets;
-(NSArray *)backFieldBuckets;
-(NSString *)logoText;
-(PKImage *)logoImage;
-(void)setLogoImage:(PKImage *)arg1 ;
-(void)setLogoText:(NSString *)arg1 ;
-(void)setFrontFieldBuckets:(NSArray *)arg1 ;
-(void)setBackFieldBuckets:(NSArray *)arg1 ;
-(id)initWithPass:(id)arg1 lazyLoadEncodedImages:(BOOL)arg2 ;
-(void)setLazyLoadEncodedImages:(BOOL)arg1 ;
-(void)setIngestionDate:(NSDate *)arg1 ;
-(void)setPrivateLabel:(BOOL)arg1 ;
-(void)setDeletePending:(BOOL)arg1 ;
-(void)setNfcPayload:(PKNFCPayload *)arg1 ;
-(void)setCompleteHash:(NSData *)arg1 ;
-(void)setExpressPassTypesMask:(unsigned long long)arg1 ;
-(void)setPreferredPaymentApplication:(PKPaymentApplication *)arg1 ;
-(void)setEffectivePaymentApplicationState:(long long)arg1 ;
-(void)setHasUserSelectableContactlessPaymentApplications:(BOOL)arg1 ;
-(void)setLogoImageEncoded:(NSData *)arg1 ;
-(void)setBackgroundImageEncoded:(NSData *)arg1 ;
-(void)setTransitAppletState:(PKTransitAppletState *)arg1 ;
-(void)setLastAddValueAmount:(NSDecimalNumber *)arg1 ;
-(void)setPendingAddValueDate:(NSDate *)arg1 ;
-(NSDate *)ingestionDate;
-(PKPaymentApplication *)preferredPaymentApplication;
-(long long)effectivePaymentApplicationState;
-(BOOL)deletePending;
-(BOOL)hasUserSelectableContactlessPaymentApplications;
-(NSData *)logoImageEncoded;
-(NSData *)backgroundImageEncoded;
-(NSData *)completeHash;
-(NSDecimalNumber *)lastAddValueAmount;
-(NSDate *)pendingAddValueDate;
-(unsigned long long)expressPassTypesMask;
-(id)encodeAsData:(id)arg1 ;
-(BOOL)lazyLoadEncodedImages;
-(BOOL)supportsInAppPaymentOnNetworks:(id)arg1 capabilities:(unsigned long long)arg2 issuerCountryCodes:(id)arg3 paymentApplicationStates:(id)arg4 ;
-(void)encodeObject:(id)arg1 asDataInCoder:(id)arg2 withKey:(id)arg3 ;
-(BOOL)supportsInAppPaymentOnNetworks:(id)arg1 issuerCountryCodes:(id)arg2 ;
-(BOOL)isAddValuePending;
-(BOOL)isEnroute;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <PassKitCore/PKObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKLiveRenderedShaderSet, NSArray, NSString, NSDate, NSDictionary, NSNumber, NSURL, NSSet, PKNFCPayload, PKImage, PKPassDisplayProfile, PKBarcode, PKPassLiveRenderedImageSet, PKPassFrontFaceImageSet, PKPassPersonalization, PKPassBarcodeSettings, PKPaymentPass, PKSecureElementPass, UIImage;

@interface PKPass : PKObject <NSCopying, NSSecureCoding> {

	PKLiveRenderedShaderSet* _liveRenderedShaderSet;
	BOOL _remotePass;
	BOOL _isCloudKitArchived;
	BOOL _voided;
	BOOL _hasStoredValue;
	BOOL _liveRenderedBackground;
	BOOL _supportsCategoryVisualization;
	BOOL _revoked;
	NSArray* _embeddedLocations;
	unsigned long long _passType;
	NSString* _serialNumber;
	NSString* _passTypeIdentifier;
	NSString* _organizationName;
	NSDate* _relevantDate;
	NSDictionary* _userInfo;
	NSString* _deviceName;
	NSString* _passLibraryMachServiceName;
	NSNumber* _sequenceCounter;
	NSURL* _passURL;
	NSString* _teamID;
	NSDate* _expirationDate;
	NSString* _groupingID;
	NSSet* _embeddedBeacons;
	NSURL* _webLocationsURL;
	NSURL* _localLocationsURL;
	long long _sharingMethod;
	NSURL* _sharingURL;
	NSString* _sharingText;
	NSSet* _associatedPassTypeIdentifiers;
	PKNFCPayload* _nfcPayload;
	PKImage* _partialFrontFaceImagePlaceholder;
	NSString* _provisioningCredentialHash;
	NSString* _cardholderInfoSectionTitle;
	NSDate* _ingestedDate;
	NSDate* _modifiedDate;

}

@property (nonatomic,readonly) BOOL silenceRequested; 
@property (nonatomic,readonly) long long eventType; 
@property (nonatomic,readonly) BOOL hasFlightDetails; 
@property (nonatomic,readonly) NSString * airlineCode; 
@property (nonatomic,readonly) unsigned long long flightNumber; 
@property (nonatomic,readonly) NSString * flightCode; 
@property (nonatomic,copy) NSString * passLibraryMachServiceName;                              //@synthesize passLibraryMachServiceName=_passLibraryMachServiceName - In the implementation block
@property (nonatomic,copy) NSString * deviceName;                                              //@synthesize deviceName=_deviceName - In the implementation block
@property (assign,getter=isRemotePass,nonatomic) BOOL remotePass;                              //@synthesize remotePass=_remotePass - In the implementation block
@property (nonatomic,copy) NSString * serialNumber;                                            //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,copy) NSString * passTypeIdentifier;                                      //@synthesize passTypeIdentifier=_passTypeIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * sequenceCounter;                                         //@synthesize sequenceCounter=_sequenceCounter - In the implementation block
@property (nonatomic,copy) NSString * organizationName;                                        //@synthesize organizationName=_organizationName - In the implementation block
@property (nonatomic,copy) NSDate * relevantDate;                                              //@synthesize relevantDate=_relevantDate - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                                            //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,copy) NSURL * passURL;                                                    //@synthesize passURL=_passURL - In the implementation block
@property (assign,nonatomic) BOOL isCloudKitArchived;                                          //@synthesize isCloudKitArchived=_isCloudKitArchived - In the implementation block
@property (assign,nonatomic) unsigned long long passType;                                      //@synthesize passType=_passType - In the implementation block
@property (nonatomic,copy) NSString * teamID;                                                  //@synthesize teamID=_teamID - In the implementation block
@property (nonatomic,copy) NSDate * expirationDate;                                            //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign,getter=isVoided,nonatomic) BOOL voided;                                      //@synthesize voided=_voided - In the implementation block
@property (nonatomic,copy) NSString * groupingID;                                              //@synthesize groupingID=_groupingID - In the implementation block
@property (nonatomic,copy) NSSet * embeddedLocations; 
@property (nonatomic,copy) NSArray * embeddedLocationsArray;                                   //@synthesize embeddedLocations=_embeddedLocations - In the implementation block
@property (nonatomic,copy) NSSet * embeddedBeacons;                                            //@synthesize embeddedBeacons=_embeddedBeacons - In the implementation block
@property (nonatomic,copy) NSURL * webLocationsURL;                                            //@synthesize webLocationsURL=_webLocationsURL - In the implementation block
@property (nonatomic,copy) NSURL * localLocationsURL;                                          //@synthesize localLocationsURL=_localLocationsURL - In the implementation block
@property (nonatomic,copy) PKPassDisplayProfile * displayProfile; 
@property (nonatomic,copy) NSURL * webServiceURL; 
@property (nonatomic,copy) NSString * authenticationToken; 
@property (nonatomic,readonly) long long style; 
@property (nonatomic,readonly) NSString * pluralLocalizedName; 
@property (nonatomic,readonly) NSString * lowercaseLocalizedName; 
@property (assign,nonatomic) long long sharingMethod;                                          //@synthesize sharingMethod=_sharingMethod - In the implementation block
@property (nonatomic,copy) NSURL * sharingURL;                                                 //@synthesize sharingURL=_sharingURL - In the implementation block
@property (nonatomic,copy) NSString * sharingText;                                             //@synthesize sharingText=_sharingText - In the implementation block
@property (nonatomic,copy) NSSet * associatedPassTypeIdentifiers;                              //@synthesize associatedPassTypeIdentifiers=_associatedPassTypeIdentifiers - In the implementation block
@property (setter=setNFCPayload:,nonatomic,copy) PKNFCPayload * nfcPayload;                    //@synthesize nfcPayload=_nfcPayload - In the implementation block
@property (readonly) NSString * notificationCenterTitle; 
@property (assign,nonatomic) BOOL hasStoredValue;                                              //@synthesize hasStoredValue=_hasStoredValue - In the implementation block
@property (nonatomic,readonly) PKBarcode * barcode; 
@property (nonatomic,readonly) PKImage * footerImage; 
@property (nonatomic,readonly) NSString * logoText; 
@property (nonatomic,readonly) long long transitType; 
@property (nonatomic,readonly) NSArray * frontFieldBuckets; 
@property (nonatomic,readonly) NSArray * backFieldBuckets; 
@property (nonatomic,readonly) PKImage * iconImage; 
@property (nonatomic,readonly) PKImage * rawIcon; 
@property (nonatomic,readonly) PKImage * notificationIconImage; 
@property (nonatomic,readonly) PKImage * frontFaceImage; 
@property (nonatomic,readonly) PKImage * frontFaceShadowImage; 
@property (nonatomic,readonly) PKImage * partialFrontFaceImage; 
@property (nonatomic,readonly) PKImage * partialFrontFaceImagePlaceholder;                     //@synthesize partialFrontFaceImagePlaceholder=_partialFrontFaceImagePlaceholder - In the implementation block
@property (nonatomic,readonly) PKImage * cardHolderPicture; 
@property (nonatomic,readonly) PKImage * personalizationLogoImage; 
@property (nonatomic,readonly) PKImage * compactBankLogoDarkImage; 
@property (nonatomic,readonly) PKImage * compactBankLogoLightImage; 
@property (assign,nonatomic) BOOL liveRenderedBackground;                                      //@synthesize liveRenderedBackground=_liveRenderedBackground - In the implementation block
@property (assign,nonatomic) BOOL supportsCategoryVisualization;                               //@synthesize supportsCategoryVisualization=_supportsCategoryVisualization - In the implementation block
@property (nonatomic,readonly) PKLiveRenderedShaderSet * liveRenderedShaderSet; 
@property (nonatomic,readonly) PKPassLiveRenderedImageSet * liveRenderedImageSet; 
@property (nonatomic,copy) NSString * provisioningCredentialHash;                              //@synthesize provisioningCredentialHash=_provisioningCredentialHash - In the implementation block
@property (nonatomic,copy) NSString * cardholderInfoSectionTitle;                              //@synthesize cardholderInfoSectionTitle=_cardholderInfoSectionTitle - In the implementation block
@property (nonatomic,readonly) PKPassFrontFaceImageSet * frontFaceImageSet; 
@property (nonatomic,readonly) CGRect logoRect; 
@property (nonatomic,readonly) CGRect thumbnailRect; 
@property (nonatomic,readonly) CGRect stripRect; 
@property (nonatomic,readonly) NSArray * storeIdentifiers; 
@property (nonatomic,readonly) NSURL * appLaunchURL; 
@property (nonatomic,readonly) PKPassPersonalization * personalization; 
@property (nonatomic,readonly) BOOL isPersonalizable; 
@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,readonly) NSString * businessChatIdentifier; 
@property (nonatomic,readonly) PKPassBarcodeSettings * barcodeSettings; 
@property (nonatomic,retain) NSDate * ingestedDate;                                            //@synthesize ingestedDate=_ingestedDate - In the implementation block
@property (nonatomic,retain) NSDate * modifiedDate;                                            //@synthesize modifiedDate=_modifiedDate - In the implementation block
@property (assign,getter=isRevoked,nonatomic) BOOL revoked;                                    //@synthesize revoked=_revoked - In the implementation block
@property (nonatomic,readonly) PKPaymentPass * paymentPass; 
@property (nonatomic,readonly) PKSecureElementPass * secureElementPass; 
@property (nonatomic,copy,readonly) UIImage * icon; 
@property (nonatomic,copy,readonly) NSString * localizedName; 
@property (nonatomic,copy,readonly) NSString * localizedDescription; 
+(unsigned long long)defaultSettings;
+(BOOL)supportsSecureCoding;
+(Class)resolvingClass;
+(Class)classForPassType:(unsigned long long)arg1 ;
+(BOOL)isValidObjectWithFileDataAccessor:(id)arg1 warnings:(id*)arg2 error:(id*)arg3 ;
+(id)recordNamePrefix;
+(Class)classForDictionary:(id)arg1 bundle:(id)arg2 ;
-(NSString *)teamID;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSString *)localizedName;
-(NSString *)deviceName;
-(NSString *)serialNumber;
-(long long)eventType;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(unsigned long long)passType;
-(NSDictionary *)userInfo;
-(unsigned long long)flightNumber;
-(NSString *)organizationName;
-(id)diff:(id)arg1 ;
-(PKImage *)iconImage;
-(NSURL *)passURL;
-(BOOL)isUpdatable;
-(PKBarcode *)barcode;
-(void)encodeWithCoder:(id)arg1 ;
-(PKImage *)rawIcon;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(NSString *)logoText;
-(PKImage *)frontFaceImage;
-(NSString *)localizedDescription;
-(BOOL)isValid;
-(NSNumber *)sequenceCounter;
-(unsigned long long)itemType;
-(NSString *)flightCode;
-(void)encodeWithCloudStoreCoder:(id)arg1 ;
-(id)initWithCloudStoreCoder:(id)arg1 ;
-(id)recordTypesAndNamesIncludingServerData:(BOOL)arg1 ;
-(NSString *)airlineCode;
-(void)applyPropertiesFromCloudStoreRecord:(id)arg1 ;
-(BOOL)isVoided;
-(NSDate *)expirationDate;
-(CGRect)logoRect;
-(BOOL)hasFlightDetails;
-(void)loadFlightsWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSArray *)storeIdentifiers;
-(BOOL)silenceRequested;
-(BOOL)isExpired;
-(id)thumbnailImage;
-(id)numberForSemanticKey:(id)arg1 ;
-(id)stringForSemanticKey:(id)arg1 ;
-(void)setOrganizationName:(NSString *)arg1 ;
-(id)balanceFields;
-(NSString *)passLibraryMachServiceName;
-(NSDate *)ingestedDate;
-(BOOL)isRemotePass;
-(NSSet *)associatedPassTypeIdentifiers;
-(BOOL)availableForAutomaticPresentationUsingBeaconContext;
-(NSString *)notificationCenterTitle;
-(id)primaryIdentifier;
-(BOOL)availableForAutomaticPresentationUsingVASContext;
-(void)setPassURL:(NSURL *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)semantics;
-(void)setTeamID:(NSString *)arg1 ;
-(CGRect)stripRect;
-(void)setVoided:(BOOL)arg1 ;
-(NSString *)passTypeIdentifier;
-(void)setPassTypeIdentifier:(NSString *)arg1 ;
-(NSString *)provisioningCredentialHash;
-(void)setProvisioningCredentialHash:(NSString *)arg1 ;
-(PKPaymentPass *)paymentPass;
-(void)setDeviceName:(NSString *)arg1 ;
-(id)stripImage;
-(void)downloadRemoteAssetsWithCompletion:(/*^block*/id)arg1 ;
-(void)setRelevantDate:(NSDate *)arg1 ;
-(id)logoImage;
-(id)backgroundImage;
-(void)setNFCPayload:(id)arg1 ;
-(void)setIngestedDate:(NSDate *)arg1 ;
-(void)setPassType:(unsigned long long)arg1 ;
-(void)setSequenceCounter:(NSNumber *)arg1 ;
-(PKImage *)footerImage;
-(void)setAssociatedPassTypeIdentifiers:(NSSet *)arg1 ;
-(void)setHasStoredValue:(BOOL)arg1 ;
-(void)setLiveRenderedBackground:(BOOL)arg1 ;
-(void)setSupportsCategoryVisualization:(BOOL)arg1 ;
-(void)setEmbeddedLocationsArray:(NSArray *)arg1 ;
-(void)setEmbeddedBeacons:(NSSet *)arg1 ;
-(void)setGroupingID:(NSString *)arg1 ;
-(void)setSharingMethod:(long long)arg1 ;
-(long long)sharingMethod;
-(void)setSharingURL:(NSURL *)arg1 ;
-(void)setSharingText:(NSString *)arg1 ;
-(BOOL)hasLocationRelevancyInfo;
-(NSArray *)frontFieldBuckets;
-(NSArray *)backFieldBuckets;
-(id)_changeMessageForFieldKey:(id)arg1 ;
-(id)primaryFields;
-(id)_localizationKeyForMultipleDiff;
-(NSURL *)appLaunchURL;
-(PKPassPersonalization *)personalization;
-(id)allSemantics;
-(PKImage *)notificationIconImage;
-(CGRect)thumbnailRect;
-(PKImage *)cardHolderPicture;
-(PKImage *)compactBankLogoDarkImage;
-(PKImage *)compactBankLogoLightImage;
-(PKPassBarcodeSettings *)barcodeSettings;
-(NSSet *)embeddedBeacons;
-(BOOL)isRevoked;
-(NSString *)cardholderInfoSectionTitle;
-(NSSet *)embeddedLocations;
-(void)setEmbeddedLocations:(NSSet *)arg1 ;
-(NSString *)pluralLocalizedName;
-(NSString *)lowercaseLocalizedName;
-(BOOL)hasTimeOrLocationRelevancyInfo;
-(BOOL)isRelevantDateOld;
-(BOOL)supportsSharing;
-(id)localizedValueForFieldKey:(id)arg1 ;
-(id)localizedDescriptionForDiff:(id)arg1 ;
-(NSURL *)localLocationsURL;
-(BOOL)isPersonalizable;
-(PKImage *)frontFaceShadowImage;
-(PKImage *)partialFrontFaceImage;
-(NSURL *)sharingURL;
-(PKImage *)personalizationLogoImage;
-(PKPassLiveRenderedImageSet *)liveRenderedImageSet;
-(PKPassFrontFaceImageSet *)frontFaceImageSet;
-(PKLiveRenderedShaderSet *)liveRenderedShaderSet;
-(BOOL)isEqualToPassIncludingMetadata:(id)arg1 ;
-(id)dateForSemanticKey:(id)arg1 ;
-(id)locationForSemanticKey:(id)arg1 ;
-(id)currencyAmountForSemanticKey:(id)arg1 ;
-(id)personNameComponentsForSemanticKey:(id)arg1 ;
-(id)stringsForSemanticKey:(id)arg1 ;
-(id)dictionariesForSemanticKey:(id)arg1 ;
-(void)setRemotePass:(BOOL)arg1 ;
-(void)setPassLibraryMachServiceName:(NSString *)arg1 ;
-(BOOL)isCloudKitArchived;
-(void)setIsCloudKitArchived:(BOOL)arg1 ;
-(NSURL *)webLocationsURL;
-(void)setWebLocationsURL:(NSURL *)arg1 ;
-(void)setLocalLocationsURL:(NSURL *)arg1 ;
-(NSString *)sharingText;
-(BOOL)liveRenderedBackground;
-(PKImage *)partialFrontFaceImagePlaceholder;
-(BOOL)supportsCategoryVisualization;
-(void)setCardholderInfoSectionTitle:(NSString *)arg1 ;
-(void)setModifiedDate:(NSDate *)arg1 ;
-(id)passLocalizedStringForKey:(id)arg1 ;
-(void)setRevoked:(BOOL)arg1 ;
-(void)setSerialNumber:(NSString *)arg1 ;
-(PKSecureElementPass *)secureElementPass;
-(NSDate *)modifiedDate;
-(long long)transitType;
-(NSString *)businessChatIdentifier;
-(PKNFCPayload *)nfcPayload;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)groupingID;
-(NSDate *)relevantDate;
-(NSArray *)embeddedLocationsArray;
-(long long)style;
-(id)initWithDictionary:(id)arg1 bundle:(id)arg2 ;
-(BOOL)hasStoredValue;
-(BOOL)hasValidNFCPayload;
-(id)fieldForKey:(id)arg1 ;
@end


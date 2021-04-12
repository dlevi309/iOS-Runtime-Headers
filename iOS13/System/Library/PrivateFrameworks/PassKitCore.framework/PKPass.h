/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <PassKitCore/PKObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKLiveRenderedShaderSet, NSString, NSDate, NSDictionary, NSNumber, NSURL, NSSet, PKNFCPayload, PKImage, PKPassDisplayProfile, PKBarcode, NSArray, PKPassLiveRenderedImageSet, PKPassPersonalization, PKPaymentPass, PKSecureElementPass, UIImage;

@interface PKPass : PKObject <NSCopying, NSSecureCoding> {

	PKLiveRenderedShaderSet* _liveRenderedShaderSet;
	BOOL _remotePass;
	BOOL _isCloudKitArchived;
	BOOL _voided;
	BOOL _hasStoredValue;
	BOOL _liveRenderedBackground;
	BOOL _supportsCategoryVisualization;
	BOOL _revoked;
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
	NSSet* _embeddedLocations;
	NSSet* _embeddedBeacons;
	NSURL* _webLocationsURL;
	NSURL* _localLocationsURL;
	long long _sharingMethod;
	NSURL* _sharingURL;
	NSString* _sharingText;
	NSSet* _associatedPassTypeIdentifiers;
	PKNFCPayload* _nfcPayload;
	PKImage* _partialFrontFaceImagePlaceholder;
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
@property (nonatomic,copy) NSSet * embeddedLocations;                                          //@synthesize embeddedLocations=_embeddedLocations - In the implementation block
@property (nonatomic,copy) NSSet * embeddedBeacons;                                            //@synthesize embeddedBeacons=_embeddedBeacons - In the implementation block
@property (nonatomic,copy) NSURL * webLocationsURL;                                            //@synthesize webLocationsURL=_webLocationsURL - In the implementation block
@property (nonatomic,copy) NSURL * localLocationsURL;                                          //@synthesize localLocationsURL=_localLocationsURL - In the implementation block
@property (nonatomic,copy) PKPassDisplayProfile * displayProfile; 
@property (nonatomic,copy) NSURL * webServiceURL; 
@property (nonatomic,copy) NSString * authenticationToken; 
@property (nonatomic,readonly) long long style; 
@property (nonatomic,readonly) NSString * pluralLocalizedName; 
@property (nonatomic,readonly) NSString * lowercaseLocalizedName; 
@property (nonatomic,readonly) NSString * uniqueID; 
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
@property (assign,nonatomic) BOOL liveRenderedBackground;                                      //@synthesize liveRenderedBackground=_liveRenderedBackground - In the implementation block
@property (assign,nonatomic) BOOL supportsCategoryVisualization;                               //@synthesize supportsCategoryVisualization=_supportsCategoryVisualization - In the implementation block
@property (nonatomic,readonly) PKLiveRenderedShaderSet * liveRenderedShaderSet; 
@property (nonatomic,readonly) PKPassLiveRenderedImageSet * liveRenderedImageSet; 
@property (nonatomic,readonly) CGRect logoRect; 
@property (nonatomic,readonly) CGRect thumbnailRect; 
@property (nonatomic,readonly) CGRect stripRect; 
@property (nonatomic,readonly) NSArray * storeIdentifiers; 
@property (nonatomic,readonly) NSURL * appLaunchURL; 
@property (nonatomic,readonly) PKPassPersonalization * personalization; 
@property (nonatomic,readonly) BOOL isPersonalizable; 
@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,readonly) NSString * businessChatIdentifier; 
@property (nonatomic,retain) NSDate * ingestedDate;                                            //@synthesize ingestedDate=_ingestedDate - In the implementation block
@property (nonatomic,retain) NSDate * modifiedDate;                                            //@synthesize modifiedDate=_modifiedDate - In the implementation block
@property (assign,getter=isRevoked,nonatomic) BOOL revoked;                                    //@synthesize revoked=_revoked - In the implementation block
@property (nonatomic,readonly) PKPaymentPass * paymentPass; 
@property (nonatomic,readonly) PKSecureElementPass * secureElementPass; 
@property (nonatomic,copy,readonly) UIImage * icon; 
@property (nonatomic,copy,readonly) NSString * localizedName; 
@property (nonatomic,copy,readonly) NSString * localizedDescription; 
+(BOOL)supportsSecureCoding;
+(unsigned long long)defaultSettings;
+(BOOL)isValidObjectWithFileURL:(id)arg1 warnings:(id*)arg2 orError:(id*)arg3 ;
+(Class)classForPassType:(unsigned long long)arg1 ;
+(id)cloudStorePassRecordNamePrefix;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)localizedDescription;
-(NSDictionary *)userInfo;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSString *)localizedName;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSString *)teamID;
-(BOOL)isRevoked;
-(long long)style;
-(id)backgroundImage;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(NSNumber *)sequenceCounter;
-(long long)eventType;
-(void)setDeviceName:(NSString *)arg1 ;
-(NSString *)deviceName;
-(NSString *)serialNumber;
-(NSString *)organizationName;
-(BOOL)isUpdatable;
-(BOOL)isExpired;
-(PKImage *)iconImage;
-(unsigned long long)itemType;
-(long long)transitType;
-(void)setOrganizationName:(NSString *)arg1 ;
-(void)setSerialNumber:(NSString *)arg1 ;
-(PKPaymentPass *)paymentPass;
-(unsigned long long)flightNumber;
-(NSArray *)storeIdentifiers;
-(id)thumbnailImage;
-(void)setTeamID:(NSString *)arg1 ;
-(unsigned long long)passType;
-(NSString *)passTypeIdentifier;
-(void)setPassTypeIdentifier:(NSString *)arg1 ;
-(NSURL *)sharingURL;
-(void)setSharingURL:(NSURL *)arg1 ;
-(void)downloadRemoteAssetsWithCompletion:(/*^block*/id)arg1 ;
-(PKNFCPayload *)nfcPayload;
-(NSString *)businessChatIdentifier;
-(id)initWithDictionary:(id)arg1 bundle:(id)arg2 ;
-(BOOL)hasValidNFCPayload;
-(BOOL)hasStoredValue;
-(id)fieldForKey:(id)arg1 ;
-(void)encodeWithCloudStoreCoder:(id)arg1 ;
-(id)initWithCloudStoreCoder:(id)arg1 ;
-(id)recordTypesAndNamesIncludingServerData:(BOOL)arg1 ;
-(NSString *)passLibraryMachServiceName;
-(BOOL)isRemotePass;
-(NSDate *)ingestedDate;
-(BOOL)isCloudKitArchived;
-(void)setIsCloudKitArchived:(BOOL)arg1 ;
-(PKImage *)frontFaceImage;
-(id)numberForSemanticKey:(id)arg1 ;
-(id)stringForSemanticKey:(id)arg1 ;
-(BOOL)silenceRequested;
-(NSSet *)associatedPassTypeIdentifiers;
-(BOOL)availableForAutomaticPresentationUsingBeaconContext;
-(NSString *)notificationCenterTitle;
-(BOOL)availableForAutomaticPresentationUsingVASContext;
-(void)setIngestedDate:(NSDate *)arg1 ;
-(NSURL *)passURL;
-(void)setPassURL:(NSURL *)arg1 ;
-(NSDate *)modifiedDate;
-(NSDate *)relevantDate;
-(NSSet *)embeddedLocations;
-(NSString *)groupingID;
-(id)semantics;
-(id)balanceFields;
-(void)setSequenceCounter:(NSNumber *)arg1 ;
-(void)setVoided:(BOOL)arg1 ;
-(void)setRelevantDate:(NSDate *)arg1 ;
-(void)setAssociatedPassTypeIdentifiers:(NSSet *)arg1 ;
-(void)setHasStoredValue:(BOOL)arg1 ;
-(void)setLiveRenderedBackground:(BOOL)arg1 ;
-(void)setSupportsCategoryVisualization:(BOOL)arg1 ;
-(void)setEmbeddedLocations:(NSSet *)arg1 ;
-(void)setEmbeddedBeacons:(NSSet *)arg1 ;
-(void)setNFCPayload:(id)arg1 ;
-(void)setGroupingID:(NSString *)arg1 ;
-(void)setPassType:(unsigned long long)arg1 ;
-(void)setSharingMethod:(long long)arg1 ;
-(long long)sharingMethod;
-(void)setSharingText:(NSString *)arg1 ;
-(BOOL)hasLocationRelevancyInfo;
-(NSSet *)embeddedBeacons;
-(NSArray *)frontFieldBuckets;
-(NSArray *)backFieldBuckets;
-(id)_changeMessageForFieldKey:(id)arg1 ;
-(id)_localizationKeyForMultipleDiff;
-(PKBarcode *)barcode;
-(PKImage *)footerImage;
-(NSString *)logoText;
-(id)primaryFields;
-(NSURL *)appLaunchURL;
-(PKPassPersonalization *)personalization;
-(id)allSemantics;
-(PKImage *)rawIcon;
-(PKImage *)notificationIconImage;
-(CGRect)thumbnailRect;
-(CGRect)stripRect;
-(PKImage *)cardHolderPicture;
-(id)logoImage;
-(id)stripImage;
-(BOOL)isVoided;
-(CGRect)logoRect;
-(void)setPassLibraryMachServiceName:(NSString *)arg1 ;
-(void)setRemotePass:(BOOL)arg1 ;
-(void)setModifiedDate:(NSDate *)arg1 ;
-(void)setRevoked:(BOOL)arg1 ;
-(NSString *)sharingText;
-(BOOL)liveRenderedBackground;
-(BOOL)supportsCategoryVisualization;
-(NSString *)lowercaseLocalizedName;
-(NSString *)pluralLocalizedName;
-(PKSecureElementPass *)secureElementPass;
-(BOOL)hasTimeOrLocationRelevancyInfo;
-(BOOL)isRelevantDateOld;
-(BOOL)supportsSharing;
-(id)localizedValueForFieldKey:(id)arg1 ;
-(id)localizedDescriptionForDiff:(id)arg1 ;
-(NSURL *)localLocationsURL;
-(id)diff:(id)arg1 ;
-(BOOL)isPersonalizable;
-(PKImage *)frontFaceShadowImage;
-(PKImage *)partialFrontFaceImage;
-(PKImage *)personalizationLogoImage;
-(PKPassLiveRenderedImageSet *)liveRenderedImageSet;
-(PKLiveRenderedShaderSet *)liveRenderedShaderSet;
-(BOOL)isEqualToPassIncludingMetadata:(id)arg1 ;
-(id)dateForSemanticKey:(id)arg1 ;
-(id)locationForSemanticKey:(id)arg1 ;
-(id)currencyAmountForSemanticKey:(id)arg1 ;
-(id)personNameComponentsForSemanticKey:(id)arg1 ;
-(id)stringsForSemanticKey:(id)arg1 ;
-(id)dictionariesForSemanticKey:(id)arg1 ;
-(NSURL *)webLocationsURL;
-(void)setWebLocationsURL:(NSURL *)arg1 ;
-(void)setLocalLocationsURL:(NSURL *)arg1 ;
-(PKImage *)partialFrontFaceImagePlaceholder;
-(NSString *)flightCode;
-(NSString *)airlineCode;
-(BOOL)hasFlightDetails;
-(void)loadFlightsWithCompletionHandler:(/*^block*/id)arg1 ;
@end


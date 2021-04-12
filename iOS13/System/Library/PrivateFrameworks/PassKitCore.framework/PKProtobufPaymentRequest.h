/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString, PKProtobufPaymentMerchantSession, NSMutableArray;

@interface PKProtobufPaymentRequest : PBRequest <NSCopying> {

	unsigned _apiType;
	NSData* _applicationData;
	NSData* _billingContact;
	NSString* _countryCode;
	NSString* _currencyCode;
	unsigned _merchantCapabilities;
	NSString* _merchantIdentifier;
	PKProtobufPaymentMerchantSession* _merchantSession;
	NSString* _originatingURL;
	unsigned _requiredBillingAddressFields;
	NSMutableArray* _requiredBillingContactFields;
	unsigned _requiredShippingAddressFields;
	NSMutableArray* _requiredShippingContactFields;
	NSData* _shippingContact;
	NSMutableArray* _shippingMethods;
	NSMutableArray* _summaryItems;
	NSMutableArray* _supportedCountries;
	NSMutableArray* _supportedNetworks;
	NSMutableArray* _thumbnailURLs;
	BOOL _expectsMerchantSession;
	SCD_Struct_PK17 _has;

}

@property (nonatomic,readonly) BOOL hasMerchantIdentifier; 
@property (nonatomic,retain) NSString * merchantIdentifier;                                   //@synthesize merchantIdentifier=_merchantIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasCountryCode; 
@property (nonatomic,retain) NSString * countryCode;                                          //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,readonly) BOOL hasCurrencyCode; 
@property (nonatomic,retain) NSString * currencyCode;                                         //@synthesize currencyCode=_currencyCode - In the implementation block
@property (nonatomic,retain) NSMutableArray * supportedNetworks;                              //@synthesize supportedNetworks=_supportedNetworks - In the implementation block
@property (assign,nonatomic) BOOL hasMerchantCapabilities; 
@property (assign,nonatomic) unsigned merchantCapabilities;                                   //@synthesize merchantCapabilities=_merchantCapabilities - In the implementation block
@property (assign,nonatomic) BOOL hasRequiredBillingAddressFields; 
@property (assign,nonatomic) unsigned requiredBillingAddressFields;                           //@synthesize requiredBillingAddressFields=_requiredBillingAddressFields - In the implementation block
@property (assign,nonatomic) BOOL hasRequiredShippingAddressFields; 
@property (assign,nonatomic) unsigned requiredShippingAddressFields;                          //@synthesize requiredShippingAddressFields=_requiredShippingAddressFields - In the implementation block
@property (nonatomic,readonly) BOOL hasBillingContact; 
@property (nonatomic,retain) NSData * billingContact;                                         //@synthesize billingContact=_billingContact - In the implementation block
@property (nonatomic,readonly) BOOL hasShippingContact; 
@property (nonatomic,retain) NSData * shippingContact;                                        //@synthesize shippingContact=_shippingContact - In the implementation block
@property (nonatomic,retain) NSMutableArray * summaryItems;                                   //@synthesize summaryItems=_summaryItems - In the implementation block
@property (nonatomic,retain) NSMutableArray * shippingMethods;                                //@synthesize shippingMethods=_shippingMethods - In the implementation block
@property (nonatomic,readonly) BOOL hasApplicationData; 
@property (nonatomic,retain) NSData * applicationData;                                        //@synthesize applicationData=_applicationData - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginatingURL; 
@property (nonatomic,retain) NSString * originatingURL;                                       //@synthesize originatingURL=_originatingURL - In the implementation block
@property (nonatomic,readonly) BOOL hasMerchantSession; 
@property (nonatomic,retain) PKProtobufPaymentMerchantSession * merchantSession;              //@synthesize merchantSession=_merchantSession - In the implementation block
@property (nonatomic,retain) NSMutableArray * thumbnailURLs;                                  //@synthesize thumbnailURLs=_thumbnailURLs - In the implementation block
@property (assign,nonatomic) BOOL hasExpectsMerchantSession; 
@property (assign,nonatomic) BOOL expectsMerchantSession;                                     //@synthesize expectsMerchantSession=_expectsMerchantSession - In the implementation block
@property (nonatomic,retain) NSMutableArray * requiredShippingContactFields;                  //@synthesize requiredShippingContactFields=_requiredShippingContactFields - In the implementation block
@property (nonatomic,retain) NSMutableArray * requiredBillingContactFields;                   //@synthesize requiredBillingContactFields=_requiredBillingContactFields - In the implementation block
@property (nonatomic,retain) NSMutableArray * supportedCountries;                             //@synthesize supportedCountries=_supportedCountries - In the implementation block
@property (assign,nonatomic) BOOL hasApiType; 
@property (assign,nonatomic) unsigned apiType;                                                //@synthesize apiType=_apiType - In the implementation block
+(Class)shippingMethodsType;
+(Class)supportedNetworksType;
+(Class)summaryItemsType;
+(Class)thumbnailURLsType;
+(Class)requiredShippingContactFieldsType;
+(Class)requiredBillingContactFieldsType;
+(Class)supportedCountriesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)countryCode;
-(NSString *)currencyCode;
-(id)dictionaryRepresentation;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(BOOL)hasCountryCode;
-(BOOL)hasCurrencyCode;
-(NSData *)applicationData;
-(NSMutableArray *)supportedCountries;
-(NSMutableArray *)shippingMethods;
-(NSMutableArray *)summaryItems;
-(void)setOriginatingURL:(NSString *)arg1 ;
-(void)setThumbnailURLs:(NSMutableArray *)arg1 ;
-(void)setBillingContact:(NSData *)arg1 ;
-(void)setShippingContact:(NSData *)arg1 ;
-(void)setRequiredBillingContactFields:(NSMutableArray *)arg1 ;
-(void)setRequiredShippingContactFields:(NSMutableArray *)arg1 ;
-(void)setSupportedNetworks:(NSMutableArray *)arg1 ;
-(void)setMerchantCapabilities:(unsigned)arg1 ;
-(void)setShippingMethods:(NSMutableArray *)arg1 ;
-(void)setExpectsMerchantSession:(BOOL)arg1 ;
-(void)setApplicationData:(NSData *)arg1 ;
-(void)setSupportedCountries:(NSMutableArray *)arg1 ;
-(void)setMerchantIdentifier:(NSString *)arg1 ;
-(NSData *)billingContact;
-(NSData *)shippingContact;
-(void)setMerchantSession:(PKProtobufPaymentMerchantSession *)arg1 ;
-(NSString *)merchantIdentifier;
-(PKProtobufPaymentMerchantSession *)merchantSession;
-(NSString *)originatingURL;
-(BOOL)hasBillingContact;
-(BOOL)hasShippingContact;
-(NSMutableArray *)supportedNetworks;
-(unsigned)merchantCapabilities;
-(NSMutableArray *)requiredShippingContactFields;
-(NSMutableArray *)requiredBillingContactFields;
-(void)setSummaryItems:(NSMutableArray *)arg1 ;
-(NSMutableArray *)thumbnailURLs;
-(BOOL)expectsMerchantSession;
-(unsigned)apiType;
-(unsigned)requiredBillingAddressFields;
-(void)setRequiredBillingAddressFields:(unsigned)arg1 ;
-(unsigned)requiredShippingAddressFields;
-(void)setRequiredShippingAddressFields:(unsigned)arg1 ;
-(BOOL)hasMerchantSession;
-(void)setApiType:(unsigned)arg1 ;
-(void)addThumbnailURLs:(id)arg1 ;
-(void)addSummaryItems:(id)arg1 ;
-(void)addShippingMethods:(id)arg1 ;
-(unsigned long long)shippingMethodsCount;
-(void)clearShippingMethods;
-(id)shippingMethodsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasMerchantIdentifier;
-(void)addSupportedNetworks:(id)arg1 ;
-(void)addRequiredShippingContactFields:(id)arg1 ;
-(void)addRequiredBillingContactFields:(id)arg1 ;
-(void)addSupportedCountries:(id)arg1 ;
-(unsigned long long)supportedNetworksCount;
-(void)clearSupportedNetworks;
-(id)supportedNetworksAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)summaryItemsCount;
-(void)clearSummaryItems;
-(id)summaryItemsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)thumbnailURLsCount;
-(void)clearThumbnailURLs;
-(id)thumbnailURLsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)requiredShippingContactFieldsCount;
-(void)clearRequiredShippingContactFields;
-(id)requiredShippingContactFieldsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)requiredBillingContactFieldsCount;
-(void)clearRequiredBillingContactFields;
-(id)requiredBillingContactFieldsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)supportedCountriesCount;
-(void)clearSupportedCountries;
-(id)supportedCountriesAtIndex:(unsigned long long)arg1 ;
-(void)setHasMerchantCapabilities:(BOOL)arg1 ;
-(BOOL)hasMerchantCapabilities;
-(void)setHasRequiredBillingAddressFields:(BOOL)arg1 ;
-(BOOL)hasRequiredBillingAddressFields;
-(void)setHasRequiredShippingAddressFields:(BOOL)arg1 ;
-(BOOL)hasRequiredShippingAddressFields;
-(BOOL)hasApplicationData;
-(BOOL)hasOriginatingURL;
-(void)setHasExpectsMerchantSession:(BOOL)arg1 ;
-(BOOL)hasExpectsMerchantSession;
-(void)setHasApiType:(BOOL)arg1 ;
-(BOOL)hasApiType;
@end


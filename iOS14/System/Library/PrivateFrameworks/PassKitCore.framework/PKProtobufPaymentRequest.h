/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_PK16 _has;

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
+(Class)summaryItemsType;
+(Class)supportedNetworksType;
+(Class)thumbnailURLsType;
+(Class)requiredShippingContactFieldsType;
+(Class)requiredBillingContactFieldsType;
+(Class)supportedCountriesType;
-(void)setCountryCode:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)currencyCode;
-(NSString *)countryCode;
-(BOOL)hasCountryCode;
-(void)setHasRequiredShippingAddressFields:(BOOL)arg1 ;
-(BOOL)hasRequiredShippingAddressFields;
-(void)setHasExpectsMerchantSession:(BOOL)arg1 ;
-(BOOL)hasExpectsMerchantSession;
-(BOOL)expectsMerchantSession;
-(NSMutableArray *)thumbnailURLs;
-(BOOL)hasApplicationData;
-(unsigned)apiType;
-(void)setShippingMethods:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setApplicationData:(NSData *)arg1 ;
-(PKProtobufPaymentMerchantSession *)merchantSession;
-(id)description;
-(NSData *)applicationData;
-(void)setSupportedCountries:(NSMutableArray *)arg1 ;
-(void)setSupportedNetworks:(NSMutableArray *)arg1 ;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(void)setBillingContact:(NSData *)arg1 ;
-(void)setShippingContact:(NSData *)arg1 ;
-(BOOL)hasBillingContact;
-(BOOL)hasShippingContact;
-(NSData *)billingContact;
-(void)setRequiredShippingContactFields:(NSMutableArray *)arg1 ;
-(void)setRequiredBillingContactFields:(NSMutableArray *)arg1 ;
-(NSMutableArray *)supportedNetworks;
-(unsigned)merchantCapabilities;
-(unsigned long long)shippingMethodsCount;
-(void)clearShippingMethods;
-(id)shippingMethodsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)supportedCountries;
-(BOOL)hasMerchantIdentifier;
-(NSData *)shippingContact;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setMerchantSession:(PKProtobufPaymentMerchantSession *)arg1 ;
-(void)setExpectsMerchantSession:(BOOL)arg1 ;
-(void)setMerchantCapabilities:(unsigned)arg1 ;
-(void)setApiType:(unsigned)arg1 ;
-(unsigned)requiredBillingAddressFields;
-(unsigned)requiredShippingAddressFields;
-(void)setRequiredBillingAddressFields:(unsigned)arg1 ;
-(void)setRequiredShippingAddressFields:(unsigned)arg1 ;
-(void)setThumbnailURLs:(NSMutableArray *)arg1 ;
-(BOOL)hasMerchantSession;
-(void)addThumbnailURLs:(id)arg1 ;
-(void)addSummaryItems:(id)arg1 ;
-(void)addShippingMethods:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)requiredShippingContactFields;
-(NSMutableArray *)requiredBillingContactFields;
-(NSString *)merchantIdentifier;
-(void)setMerchantIdentifier:(NSString *)arg1 ;
-(BOOL)hasApiType;
-(NSMutableArray *)shippingMethods;
-(NSString *)originatingURL;
-(void)setOriginatingURL:(NSString *)arg1 ;
-(unsigned long long)summaryItemsCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasCurrencyCode;
-(void)addSupportedNetworks:(id)arg1 ;
-(void)addRequiredShippingContactFields:(id)arg1 ;
-(void)addSupportedCountries:(id)arg1 ;
-(NSMutableArray *)summaryItems;
-(void)addRequiredBillingContactFields:(id)arg1 ;
-(unsigned long long)supportedNetworksCount;
-(void)clearSupportedNetworks;
-(id)supportedNetworksAtIndex:(unsigned long long)arg1 ;
-(void)setHasApiType:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
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
-(BOOL)hasOriginatingURL;
-(void)setSummaryItems:(NSMutableArray *)arg1 ;
@end


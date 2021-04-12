/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDAdamAppIdentifier, NSString, GEOPDMerchantInformation, GEOLocation, GEOPDWarsawMerchantIdentifier;

@interface GEOPDMerchantLookupParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDAdamAppIdentifier* _appIdentifier;
	NSString* _industryCategory;
	long long _industryCode;
	NSString* _merchantCode;
	GEOPDMerchantInformation* _merchantInformation;
	NSString* _paymentNetwork;
	NSString* _rawMerchantCode;
	NSString* _terminalId;
	NSString* _transactionCurrencyCode;
	NSString* _transactionId;
	double _transactionLocationAge;
	GEOLocation* _transactionLocation;
	double _transactionTimestamp;
	GEOPDWarsawMerchantIdentifier* _warsawMerchantIdentifier;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _transactionStatus;
	int _transactionType;
	BOOL _coarseLocationUsed;
	BOOL _enableBrandMuidFallback;
	BOOL _fuzzyMatched;
	struct {
		unsigned has_industryCode : 1;
		unsigned has_transactionLocationAge : 1;
		unsigned has_transactionTimestamp : 1;
		unsigned has_transactionStatus : 1;
		unsigned has_transactionType : 1;
		unsigned has_coarseLocationUsed : 1;
		unsigned has_enableBrandMuidFallback : 1;
		unsigned has_fuzzyMatched : 1;
		unsigned read_unknownFields : 1;
		unsigned read_appIdentifier : 1;
		unsigned read_industryCategory : 1;
		unsigned read_merchantCode : 1;
		unsigned read_merchantInformation : 1;
		unsigned read_paymentNetwork : 1;
		unsigned read_rawMerchantCode : 1;
		unsigned read_terminalId : 1;
		unsigned read_transactionCurrencyCode : 1;
		unsigned read_transactionId : 1;
		unsigned read_transactionLocation : 1;
		unsigned read_warsawMerchantIdentifier : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasPaymentNetwork; 
@property (nonatomic,retain) NSString * paymentNetwork; 
@property (nonatomic,readonly) BOOL hasMerchantCode; 
@property (nonatomic,retain) NSString * merchantCode; 
@property (assign,nonatomic) BOOL hasTransactionTimestamp; 
@property (assign,nonatomic) double transactionTimestamp; 
@property (nonatomic,readonly) BOOL hasTransactionLocation; 
@property (nonatomic,retain) GEOLocation * transactionLocation; 
@property (assign,nonatomic) BOOL hasTransactionLocationAge; 
@property (assign,nonatomic) double transactionLocationAge; 
@property (nonatomic,readonly) BOOL hasRawMerchantCode; 
@property (nonatomic,retain) NSString * rawMerchantCode; 
@property (nonatomic,readonly) BOOL hasIndustryCategory; 
@property (nonatomic,retain) NSString * industryCategory; 
@property (assign,nonatomic) BOOL hasIndustryCode; 
@property (assign,nonatomic) long long industryCode; 
@property (assign,nonatomic) BOOL hasEnableBrandMuidFallback; 
@property (assign,nonatomic) BOOL enableBrandMuidFallback; 
@property (nonatomic,readonly) BOOL hasTerminalId; 
@property (nonatomic,retain) NSString * terminalId; 
@property (nonatomic,readonly) BOOL hasTransactionCurrencyCode; 
@property (nonatomic,retain) NSString * transactionCurrencyCode; 
@property (assign,nonatomic) BOOL hasTransactionType; 
@property (assign,nonatomic) int transactionType; 
@property (nonatomic,readonly) BOOL hasWarsawMerchantIdentifier; 
@property (nonatomic,retain) GEOPDWarsawMerchantIdentifier * warsawMerchantIdentifier; 
@property (nonatomic,readonly) BOOL hasAppIdentifier; 
@property (nonatomic,retain) GEOPDAdamAppIdentifier * appIdentifier; 
@property (nonatomic,readonly) BOOL hasMerchantInformation; 
@property (nonatomic,retain) GEOPDMerchantInformation * merchantInformation; 
@property (assign,nonatomic) BOOL hasTransactionStatus; 
@property (assign,nonatomic) int transactionStatus; 
@property (nonatomic,readonly) BOOL hasTransactionId; 
@property (nonatomic,retain) NSString * transactionId; 
@property (assign,nonatomic) BOOL hasFuzzyMatched; 
@property (assign,nonatomic) BOOL fuzzyMatched; 
@property (assign,nonatomic) BOOL hasCoarseLocationUsed; 
@property (assign,nonatomic) BOOL coarseLocationUsed; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)hasAppIdentifier;
-(id)dictionaryRepresentation;
-(void)setAppIdentifier:(GEOPDAdamAppIdentifier *)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOPDAdamAppIdentifier *)appIdentifier;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)clearSensitiveFields;
-(void)setTransactionType:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(GEOLocation *)transactionLocation;
-(void)setTransactionLocation:(GEOLocation *)arg1 ;
-(void)setTransactionTimestamp:(double)arg1 ;
-(BOOL)hasTransactionLocation;
-(double)transactionTimestamp;
-(void)setHasTransactionTimestamp:(BOOL)arg1 ;
-(BOOL)hasTransactionTimestamp;
-(NSString *)terminalId;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)merchantCode;
-(NSString *)rawMerchantCode;
-(void)setMerchantCode:(NSString *)arg1 ;
-(void)setRawMerchantCode:(NSString *)arg1 ;
-(BOOL)hasMerchantCode;
-(BOOL)hasRawMerchantCode;
-(NSString *)transactionId;
-(GEOPDMerchantInformation *)merchantInformation;
-(NSString *)industryCategory;
-(GEOPDWarsawMerchantIdentifier *)warsawMerchantIdentifier;
-(NSString *)transactionCurrencyCode;
-(void)setTransactionLocationAge:(double)arg1 ;
-(void)setIndustryCategory:(NSString *)arg1 ;
-(void)setIndustryCode:(long long)arg1 ;
-(void)setTerminalId:(NSString *)arg1 ;
-(void)setEnableBrandMuidFallback:(BOOL)arg1 ;
-(void)setTransactionCurrencyCode:(NSString *)arg1 ;
-(void)setWarsawMerchantIdentifier:(GEOPDWarsawMerchantIdentifier *)arg1 ;
-(void)setMerchantInformation:(GEOPDMerchantInformation *)arg1 ;
-(void)setTransactionStatus:(int)arg1 ;
-(void)setTransactionId:(NSString *)arg1 ;
-(void)setFuzzyMatched:(BOOL)arg1 ;
-(void)setCoarseLocationUsed:(BOOL)arg1 ;
-(BOOL)hasPaymentNetwork;
-(double)transactionLocationAge;
-(BOOL)hasIndustryCategory;
-(void)setHasTransactionLocationAge:(BOOL)arg1 ;
-(BOOL)hasTransactionLocationAge;
-(long long)industryCode;
-(BOOL)hasIndustryCode;
-(void)setHasIndustryCode:(BOOL)arg1 ;
-(BOOL)enableBrandMuidFallback;
-(void)setHasEnableBrandMuidFallback:(BOOL)arg1 ;
-(BOOL)fuzzyMatched;
-(BOOL)hasEnableBrandMuidFallback;
-(BOOL)hasTerminalId;
-(BOOL)hasTransactionCurrencyCode;
-(BOOL)hasTransactionType;
-(void)setHasTransactionType:(BOOL)arg1 ;
-(id)transactionTypeAsString:(int)arg1 ;
-(int)StringAsTransactionType:(id)arg1 ;
-(BOOL)hasWarsawMerchantIdentifier;
-(BOOL)hasMerchantInformation;
-(int)transactionStatus;
-(BOOL)hasTransactionId;
-(void)setHasTransactionStatus:(BOOL)arg1 ;
-(BOOL)hasTransactionStatus;
-(id)transactionStatusAsString:(int)arg1 ;
-(int)StringAsTransactionStatus:(id)arg1 ;
-(void)setHasFuzzyMatched:(BOOL)arg1 ;
-(BOOL)hasFuzzyMatched;
-(BOOL)coarseLocationUsed;
-(void)setHasCoarseLocationUsed:(BOOL)arg1 ;
-(BOOL)hasCoarseLocationUsed;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setPaymentNetwork:(NSString *)arg1 ;
-(NSString *)paymentNetwork;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(int)transactionType;
-(BOOL)isEqual:(id)arg1 ;
@end


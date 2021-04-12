/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, GEOPDMapsIdentifier, GEOLocation;

@interface GEORPMerchantLookupContext : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _correlationId;
	NSString* _merchantAdamId;
	NSString* _merchantFormattedAddress;
	GEOPDMapsIdentifier* _merchantId;
	NSString* _merchantIndustryCategory;
	long long _merchantIndustryCode;
	NSString* _merchantName;
	NSString* _merchantRawName;
	NSString* _merchantUrl;
	GEOLocation* _transactionLocation;
	double _transactionTime;
	NSString* _transactionType;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_merchantIndustryCode : 1;
		unsigned has_transactionTime : 1;
		unsigned read_correlationId : 1;
		unsigned read_merchantAdamId : 1;
		unsigned read_merchantFormattedAddress : 1;
		unsigned read_merchantId : 1;
		unsigned read_merchantIndustryCategory : 1;
		unsigned read_merchantName : 1;
		unsigned read_merchantRawName : 1;
		unsigned read_merchantUrl : 1;
		unsigned read_transactionLocation : 1;
		unsigned read_transactionType : 1;
		unsigned wrote_correlationId : 1;
		unsigned wrote_merchantAdamId : 1;
		unsigned wrote_merchantFormattedAddress : 1;
		unsigned wrote_merchantId : 1;
		unsigned wrote_merchantIndustryCategory : 1;
		unsigned wrote_merchantIndustryCode : 1;
		unsigned wrote_merchantName : 1;
		unsigned wrote_merchantRawName : 1;
		unsigned wrote_merchantUrl : 1;
		unsigned wrote_transactionLocation : 1;
		unsigned wrote_transactionTime : 1;
		unsigned wrote_transactionType : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasMerchantIndustryCode; 
@property (assign,nonatomic) long long merchantIndustryCode; 
@property (nonatomic,readonly) BOOL hasMerchantId; 
@property (nonatomic,retain) GEOPDMapsIdentifier * merchantId; 
@property (nonatomic,readonly) BOOL hasMerchantName; 
@property (nonatomic,retain) NSString * merchantName; 
@property (nonatomic,readonly) BOOL hasMerchantRawName; 
@property (nonatomic,retain) NSString * merchantRawName; 
@property (nonatomic,readonly) BOOL hasMerchantIndustryCategory; 
@property (nonatomic,retain) NSString * merchantIndustryCategory; 
@property (nonatomic,readonly) BOOL hasMerchantUrl; 
@property (nonatomic,retain) NSString * merchantUrl; 
@property (nonatomic,readonly) BOOL hasMerchantFormattedAddress; 
@property (nonatomic,retain) NSString * merchantFormattedAddress; 
@property (nonatomic,readonly) BOOL hasMerchantAdamId; 
@property (nonatomic,retain) NSString * merchantAdamId; 
@property (assign,nonatomic) BOOL hasTransactionTime; 
@property (assign,nonatomic) double transactionTime; 
@property (nonatomic,readonly) BOOL hasTransactionType; 
@property (nonatomic,retain) NSString * transactionType; 
@property (nonatomic,readonly) BOOL hasTransactionLocation; 
@property (nonatomic,retain) GEOLocation * transactionLocation; 
@property (nonatomic,readonly) BOOL hasCorrelationId; 
@property (nonatomic,retain) NSString * correlationId; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTransactionType:(NSString *)arg1 ;
-(NSString *)transactionType;
-(void)readAll:(BOOL)arg1 ;
-(void)_readMerchantId;
-(GEOPDMapsIdentifier *)merchantId;
-(void)setMerchantId:(GEOPDMapsIdentifier *)arg1 ;
-(BOOL)hasMerchantId;
-(void)_readMerchantName;
-(void)_readMerchantRawName;
-(void)_readMerchantIndustryCategory;
-(void)_readMerchantUrl;
-(void)_readMerchantFormattedAddress;
-(void)_readMerchantAdamId;
-(void)_readTransactionType;
-(void)_readTransactionLocation;
-(void)_readCorrelationId;
-(NSString *)merchantName;
-(NSString *)merchantRawName;
-(NSString *)merchantIndustryCategory;
-(NSString *)merchantUrl;
-(NSString *)merchantFormattedAddress;
-(NSString *)merchantAdamId;
-(GEOLocation *)transactionLocation;
-(NSString *)correlationId;
-(void)setMerchantName:(NSString *)arg1 ;
-(void)setMerchantRawName:(NSString *)arg1 ;
-(void)setMerchantIndustryCategory:(NSString *)arg1 ;
-(void)setMerchantUrl:(NSString *)arg1 ;
-(void)setMerchantFormattedAddress:(NSString *)arg1 ;
-(void)setMerchantAdamId:(NSString *)arg1 ;
-(void)setTransactionLocation:(GEOLocation *)arg1 ;
-(void)setCorrelationId:(NSString *)arg1 ;
-(long long)merchantIndustryCode;
-(void)setMerchantIndustryCode:(long long)arg1 ;
-(void)setHasMerchantIndustryCode:(BOOL)arg1 ;
-(BOOL)hasMerchantIndustryCode;
-(BOOL)hasMerchantName;
-(BOOL)hasMerchantRawName;
-(BOOL)hasMerchantIndustryCategory;
-(BOOL)hasMerchantUrl;
-(BOOL)hasMerchantFormattedAddress;
-(BOOL)hasMerchantAdamId;
-(double)transactionTime;
-(void)setTransactionTime:(double)arg1 ;
-(void)setHasTransactionTime:(BOOL)arg1 ;
-(BOOL)hasTransactionTime;
-(BOOL)hasTransactionType;
-(BOOL)hasTransactionLocation;
-(BOOL)hasCorrelationId;
@end


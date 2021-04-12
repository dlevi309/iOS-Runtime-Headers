/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AWDNFCSECRSAuthorizeECommerce : PBCodable <NSCopying> {

	unsigned long long _otherAmount;
	unsigned long long _timeDeltaFromReference;
	unsigned long long _timestamp;
	unsigned long long _transactionTotal;
	NSData* _aid;
	unsigned _countryCode;
	unsigned _currencyCode;
	unsigned _merchantCapabilities;
	NSData* _merchantId;
	unsigned _method;
	unsigned _status;
	NSData* _transactionId;
	unsigned _transactionType;
	NSData* _uuidReference;
	SCD_Struct_AW9 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) unsigned status;                                        //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL hasMethod; 
@property (assign,nonatomic) unsigned method;                                        //@synthesize method=_method - In the implementation block
@property (nonatomic,readonly) BOOL hasAid; 
@property (nonatomic,retain) NSData * aid;                                           //@synthesize aid=_aid - In the implementation block
@property (nonatomic,readonly) BOOL hasMerchantId; 
@property (nonatomic,retain) NSData * merchantId;                                    //@synthesize merchantId=_merchantId - In the implementation block
@property (assign,nonatomic) BOOL hasCurrencyCode; 
@property (assign,nonatomic) unsigned currencyCode;                                  //@synthesize currencyCode=_currencyCode - In the implementation block
@property (assign,nonatomic) BOOL hasTransactionTotal; 
@property (assign,nonatomic) unsigned long long transactionTotal;                    //@synthesize transactionTotal=_transactionTotal - In the implementation block
@property (assign,nonatomic) BOOL hasOtherAmount; 
@property (assign,nonatomic) unsigned long long otherAmount;                         //@synthesize otherAmount=_otherAmount - In the implementation block
@property (assign,nonatomic) BOOL hasMerchantCapabilities; 
@property (assign,nonatomic) unsigned merchantCapabilities;                          //@synthesize merchantCapabilities=_merchantCapabilities - In the implementation block
@property (assign,nonatomic) BOOL hasTransactionType; 
@property (assign,nonatomic) unsigned transactionType;                               //@synthesize transactionType=_transactionType - In the implementation block
@property (assign,nonatomic) BOOL hasCountryCode; 
@property (assign,nonatomic) unsigned countryCode;                                   //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,readonly) BOOL hasUuidReference; 
@property (nonatomic,retain) NSData * uuidReference;                                 //@synthesize uuidReference=_uuidReference - In the implementation block
@property (assign,nonatomic) BOOL hasTimeDeltaFromReference; 
@property (assign,nonatomic) unsigned long long timeDeltaFromReference;              //@synthesize timeDeltaFromReference=_timeDeltaFromReference - In the implementation block
@property (nonatomic,readonly) BOOL hasTransactionId; 
@property (nonatomic,retain) NSData * transactionId;                                 //@synthesize transactionId=_transactionId - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)countryCode;
-(unsigned)currencyCode;
-(unsigned)method;
-(id)dictionaryRepresentation;
-(unsigned)status;
-(unsigned long long)timestamp;
-(void)setCurrencyCode:(unsigned)arg1 ;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setMethod:(unsigned)arg1 ;
-(void)setStatus:(unsigned)arg1 ;
-(void)setCountryCode:(unsigned)arg1 ;
-(void)setTransactionType:(unsigned)arg1 ;
-(unsigned)transactionType;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(BOOL)hasCountryCode;
-(NSData *)merchantId;
-(void)setMerchantId:(NSData *)arg1 ;
-(BOOL)hasMerchantId;
-(BOOL)hasCurrencyCode;
-(BOOL)hasTransactionType;
-(NSData *)transactionId;
-(void)setTransactionId:(NSData *)arg1 ;
-(void)setHasTransactionType:(BOOL)arg1 ;
-(BOOL)hasTransactionId;
-(void)setMerchantCapabilities:(unsigned)arg1 ;
-(unsigned)merchantCapabilities;
-(void)setHasMerchantCapabilities:(BOOL)arg1 ;
-(BOOL)hasMerchantCapabilities;
-(void)setUuidReference:(NSData *)arg1 ;
-(BOOL)hasUuidReference;
-(void)setTimeDeltaFromReference:(unsigned long long)arg1 ;
-(void)setHasTimeDeltaFromReference:(BOOL)arg1 ;
-(BOOL)hasTimeDeltaFromReference;
-(NSData *)uuidReference;
-(unsigned long long)timeDeltaFromReference;
-(void)setAid:(NSData *)arg1 ;
-(BOOL)hasAid;
-(void)setHasCurrencyCode:(BOOL)arg1 ;
-(NSData *)aid;
-(void)setHasMethod:(BOOL)arg1 ;
-(BOOL)hasMethod;
-(void)setTransactionTotal:(unsigned long long)arg1 ;
-(void)setHasTransactionTotal:(BOOL)arg1 ;
-(BOOL)hasTransactionTotal;
-(void)setOtherAmount:(unsigned long long)arg1 ;
-(void)setHasOtherAmount:(BOOL)arg1 ;
-(BOOL)hasOtherAmount;
-(void)setHasCountryCode:(BOOL)arg1 ;
-(unsigned long long)transactionTotal;
-(unsigned long long)otherAmount;
@end


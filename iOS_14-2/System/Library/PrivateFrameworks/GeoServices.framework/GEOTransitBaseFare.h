/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitFare.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDecimalNumber, NSString, NSArray, PBDataReader, PBUnknownFields, GEOTransitPrice, NSMutableArray;

@interface GEOTransitBaseFare : PBCodable <GEOTransitFare, NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOTransitPrice* _price;
	NSMutableArray* _supportedPaymentMethods;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _numberOfLegs;
	int _paymentType;
	BOOL _cashOnly;
	struct {
		unsigned has_numberOfLegs : 1;
		unsigned has_paymentType : 1;
		unsigned has_cashOnly : 1;
		unsigned read_unknownFields : 1;
		unsigned read_price : 1;
		unsigned read_supportedPaymentMethods : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) NSDecimalNumber * value; 
@property (nonatomic,copy,readonly) NSString * currencyCode; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) NSArray * supportedICCardProviders; 
@property (nonatomic,readonly) BOOL cashOnly; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasPrice; 
@property (nonatomic,retain) GEOTransitPrice * price; 
@property (assign,nonatomic) BOOL hasPaymentType; 
@property (assign,nonatomic) int paymentType; 
@property (assign,nonatomic) BOOL hasNumberOfLegs; 
@property (assign,nonatomic) unsigned numberOfLegs; 
@property (nonatomic,retain) NSMutableArray * supportedPaymentMethods; 
@property (assign,nonatomic) BOOL hasCashOnly; 
@property (assign,nonatomic) BOOL cashOnly; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)supportedPaymentMethodType;
-(GEOTransitPrice *)price;
-(id)dictionaryRepresentation;
-(NSString *)currencyCode;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasPaymentType;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(void)setHasPaymentType:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)paymentTypeAsString:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(int)StringAsPaymentType:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)description;
-(BOOL)hasPrice;
-(BOOL)cashOnly;
-(long long)type;
-(unsigned long long)hash;
-(void)setPrice:(GEOTransitPrice *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSArray *)supportedICCardProviders;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasCashOnly;
-(void)setNumberOfLegs:(unsigned)arg1 ;
-(void)addSupportedPaymentMethod:(id)arg1 ;
-(void)setCashOnly:(BOOL)arg1 ;
-(unsigned long long)supportedPaymentMethodsCount;
-(unsigned)numberOfLegs;
-(void)clearSupportedPaymentMethods;
-(id)supportedPaymentMethodAtIndex:(unsigned long long)arg1 ;
-(void)setHasNumberOfLegs:(BOOL)arg1 ;
-(BOOL)hasNumberOfLegs;
-(NSMutableArray *)supportedPaymentMethods;
-(void)setHasCashOnly:(BOOL)arg1 ;
-(void)setSupportedPaymentMethods:(NSMutableArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPaymentType:(int)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(int)paymentType;
-(NSDecimalNumber *)value;
-(BOOL)isEqual:(id)arg1 ;
@end


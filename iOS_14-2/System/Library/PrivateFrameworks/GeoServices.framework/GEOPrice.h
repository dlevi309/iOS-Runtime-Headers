/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOServerFormatTokenPriceValue.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, PBUnknownFields;

@interface GEOPrice : PBCodable <GEOServerFormatTokenPriceValue, NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _currencyCode;
	float _amount;
	struct {
		unsigned has_amount : 1;
	}  _flags;

}

@property (nonatomic,readonly) double value; 
@property (nonatomic,readonly) NSString * currencyCode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasAmount; 
@property (assign,nonatomic) float amount; 
@property (nonatomic,readonly) BOOL hasCurrencyCode; 
@property (nonatomic,retain) NSString * currencyCode; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)currencyCode;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setHasAmount:(BOOL)arg1 ;
-(NSString *)description;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(void)setAmount:(float)arg1 ;
-(unsigned long long)hash;
-(float)amount;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasAmount;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasCurrencyCode;
-(id)initWithJSON:(id)arg1 ;
-(double)value;
-(BOOL)isEqual:(id)arg1 ;
@end


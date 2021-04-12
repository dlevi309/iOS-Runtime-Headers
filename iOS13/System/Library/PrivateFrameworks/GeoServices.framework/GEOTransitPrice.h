/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString;

@interface GEOTransitPrice : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _currencyCode;
	int _amountInCents;
	unsigned _subunit;
	SCD_Struct_GE33 _flags;

}

@property (assign,nonatomic) BOOL hasAmountInCents; 
@property (assign,nonatomic) int amountInCents; 
@property (nonatomic,readonly) BOOL hasCurrencyCode; 
@property (nonatomic,retain) NSString * currencyCode; 
@property (assign,nonatomic) BOOL hasSubunit; 
@property (assign,nonatomic) unsigned subunit; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)currencyCode;
-(id)dictionaryRepresentation;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasCurrencyCode;
-(int)amountInCents;
-(unsigned)subunit;
-(void)setAmountInCents:(int)arg1 ;
-(void)setHasAmountInCents:(BOOL)arg1 ;
-(BOOL)hasAmountInCents;
-(void)setSubunit:(unsigned)arg1 ;
-(void)setHasSubunit:(BOOL)arg1 ;
-(BOOL)hasSubunit;
@end


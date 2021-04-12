/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOPDPlaceRequestParameters;

@interface GEOMapItemInitialRequestData : PBCodable <NSCopying> {

	GEOPDPlaceRequestParameters* _placeRequestParameters;
	int _requestType;
	SCD_Struct_GE127 _flags;

}

@property (assign,nonatomic) BOOL hasRequestType; 
@property (assign,nonatomic) int requestType; 
@property (nonatomic,readonly) BOOL hasPlaceRequestParameters; 
@property (nonatomic,retain) GEOPDPlaceRequestParameters * placeRequestParameters; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)hasRequestType;
-(id)dictionaryRepresentation;
-(GEOPDPlaceRequestParameters *)placeRequestParameters;
-(void)setRequestType:(int)arg1 ;
-(void)setPlaceRequestParameters:(GEOPDPlaceRequestParameters *)arg1 ;
-(BOOL)hasPlaceRequestParameters;
-(void)setHasRequestType:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)requestTypeAsString:(int)arg1 ;
-(int)requestType;
-(id)jsonRepresentation;
-(int)StringAsRequestType:(id)arg1 ;
-(void)clearSensitiveFields;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


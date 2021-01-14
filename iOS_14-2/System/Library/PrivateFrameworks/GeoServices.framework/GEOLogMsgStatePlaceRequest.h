/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOPDPlaceRequest;

@interface GEOLogMsgStatePlaceRequest : PBCodable <NSCopying> {

	GEOPDPlaceRequest* _placeDataRequest;
	int _placeRequestType;
	SCD_Struct_GE127 _flags;

}

@property (assign,nonatomic) BOOL hasPlaceRequestType; 
@property (assign,nonatomic) int placeRequestType; 
@property (nonatomic,readonly) BOOL hasPlaceDataRequest; 
@property (nonatomic,retain) GEOPDPlaceRequest * placeDataRequest; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(void)setPlaceRequestType:(int)arg1 ;
-(id)jsonRepresentation;
-(BOOL)hasPlaceRequestType;
-(BOOL)hasPlaceDataRequest;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(GEOPDPlaceRequest *)placeDataRequest;
-(void)setHasPlaceRequestType:(BOOL)arg1 ;
-(int)placeRequestType;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)placeRequestTypeAsString:(int)arg1 ;
-(void)setPlaceDataRequest:(GEOPDPlaceRequest *)arg1 ;
-(int)StringAsPlaceRequestType:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


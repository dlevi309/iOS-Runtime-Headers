/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOPDPlaceRequest;

@interface GEOLogMsgStatePlaceRequest : PBCodable <NSCopying> {

	GEOPDPlaceRequest* _placeDataRequest;
	int _placeRequestType;
	SCD_Struct_GE99 _flags;

}

@property (assign,nonatomic) BOOL hasPlaceRequestType; 
@property (assign,nonatomic) int placeRequestType; 
@property (nonatomic,readonly) BOOL hasPlaceDataRequest; 
@property (nonatomic,retain) GEOPDPlaceRequest * placeDataRequest; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(int)placeRequestType;
-(void)setPlaceRequestType:(int)arg1 ;
-(void)setHasPlaceRequestType:(BOOL)arg1 ;
-(BOOL)hasPlaceRequestType;
-(id)placeRequestTypeAsString:(int)arg1 ;
-(int)StringAsPlaceRequestType:(id)arg1 ;
-(GEOPDPlaceRequest *)placeDataRequest;
-(void)setPlaceDataRequest:(GEOPDPlaceRequest *)arg1 ;
-(BOOL)hasPlaceDataRequest;
@end


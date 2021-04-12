/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPlaceFormattedString, GEOFormattedString;

@interface GEOAlertNonRecommendedRouteText : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPlaceFormattedString* _body;
	GEOFormattedString* _responseAlertPrimary;
	GEOFormattedString* _responseAlertSecondary;
	GEOPlaceFormattedString* _title;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_body : 1;
		unsigned read_responseAlertPrimary : 1;
		unsigned read_responseAlertSecondary : 1;
		unsigned read_title : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasResponseAlertPrimary; 
@property (nonatomic,retain) GEOFormattedString * responseAlertPrimary; 
@property (nonatomic,readonly) BOOL hasResponseAlertSecondary; 
@property (nonatomic,retain) GEOFormattedString * responseAlertSecondary; 
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) GEOPlaceFormattedString * title; 
@property (nonatomic,readonly) BOOL hasBody; 
@property (nonatomic,retain) GEOPlaceFormattedString * body; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(void)setBody:(GEOPlaceFormattedString *)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOPlaceFormattedString *)body;
-(BOOL)hasBody;
-(void)readAll:(BOOL)arg1 ;
-(GEOFormattedString *)responseAlertPrimary;
-(GEOFormattedString *)responseAlertSecondary;
-(void)setResponseAlertPrimary:(GEOFormattedString *)arg1 ;
-(void)setResponseAlertSecondary:(GEOFormattedString *)arg1 ;
-(BOOL)hasResponseAlertPrimary;
-(BOOL)hasResponseAlertSecondary;
-(id)init;
-(id)jsonRepresentation;
-(BOOL)hasTitle;
-(void)setTitle:(GEOPlaceFormattedString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(GEOPlaceFormattedString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end


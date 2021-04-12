/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPlaceFormattedString, GEOFormattedString;

@interface GEOLaunchAndGoCardText : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPlaceFormattedString* _body;
	GEOFormattedString* _cardTitle;
	GEOPlaceFormattedString* _commuteTitle;
	GEOFormattedString* _routeDescription;
	GEOFormattedString* _routeTitle;
	GEOPlaceFormattedString* _title;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_body : 1;
		unsigned read_cardTitle : 1;
		unsigned read_commuteTitle : 1;
		unsigned read_routeDescription : 1;
		unsigned read_routeTitle : 1;
		unsigned read_title : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasCardTitle; 
@property (nonatomic,retain) GEOFormattedString * cardTitle; 
@property (nonatomic,readonly) BOOL hasRouteTitle; 
@property (nonatomic,retain) GEOFormattedString * routeTitle; 
@property (nonatomic,readonly) BOOL hasRouteDescription; 
@property (nonatomic,retain) GEOFormattedString * routeDescription; 
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) GEOPlaceFormattedString * title; 
@property (nonatomic,readonly) BOOL hasCommuteTitle; 
@property (nonatomic,retain) GEOPlaceFormattedString * commuteTitle; 
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
-(id)init;
-(id)jsonRepresentation;
-(BOOL)hasTitle;
-(GEOFormattedString *)routeDescription;
-(GEOFormattedString *)cardTitle;
-(void)setTitle:(GEOPlaceFormattedString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(GEOPlaceFormattedString *)commuteTitle;
-(void)setCardTitle:(GEOFormattedString *)arg1 ;
-(void)setRouteTitle:(GEOFormattedString *)arg1 ;
-(void)setCommuteTitle:(GEOPlaceFormattedString *)arg1 ;
-(void)setRouteDescription:(GEOFormattedString *)arg1 ;
-(BOOL)hasCardTitle;
-(BOOL)hasRouteTitle;
-(BOOL)hasRouteDescription;
-(BOOL)hasCommuteTitle;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEOFormattedString *)routeTitle;
-(id)initWithJSON:(id)arg1 ;
-(GEOPlaceFormattedString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end


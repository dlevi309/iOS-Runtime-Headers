/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_body : 1;
		unsigned wrote_cardTitle : 1;
		unsigned wrote_commuteTitle : 1;
		unsigned wrote_routeDescription : 1;
		unsigned wrote_routeTitle : 1;
		unsigned wrote_title : 1;
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(GEOPlaceFormattedString *)title;
-(void)setTitle:(GEOPlaceFormattedString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasTitle;
-(void)setBody:(GEOPlaceFormattedString *)arg1 ;
-(GEOPlaceFormattedString *)body;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readTitle;
-(GEOFormattedString *)cardTitle;
-(GEOFormattedString *)routeTitle;
-(GEOFormattedString *)routeDescription;
-(void)_readBody;
-(BOOL)hasBody;
-(void)_readCardTitle;
-(void)_readRouteTitle;
-(void)_readRouteDescription;
-(void)_readCommuteTitle;
-(GEOPlaceFormattedString *)commuteTitle;
-(void)setCardTitle:(GEOFormattedString *)arg1 ;
-(void)setRouteTitle:(GEOFormattedString *)arg1 ;
-(void)setRouteDescription:(GEOFormattedString *)arg1 ;
-(void)setCommuteTitle:(GEOPlaceFormattedString *)arg1 ;
-(BOOL)hasCardTitle;
-(BOOL)hasRouteTitle;
-(BOOL)hasRouteDescription;
-(BOOL)hasCommuteTitle;
@end


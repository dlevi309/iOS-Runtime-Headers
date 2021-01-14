/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, NSString, GEOLatLng, GEOStyleAttributes, GEOTimezone;

@interface GEOPDTransitInfoSnippet : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _artworks;
	NSMutableArray* _labels;
	NSString* _searchDisplayName;
	GEOLatLng* _stopLocationForTrip;
	GEOStyleAttributes* _styleAttributesForTrip;
	NSMutableArray* _systemNames;
	GEOTimezone* _timezone;
	unsigned long long _transitId;
	NSString* _transitName;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_transitId : 1;
		unsigned read_unknownFields : 1;
		unsigned read_artworks : 1;
		unsigned read_labels : 1;
		unsigned read_searchDisplayName : 1;
		unsigned read_stopLocationForTrip : 1;
		unsigned read_styleAttributesForTrip : 1;
		unsigned read_systemNames : 1;
		unsigned read_timezone : 1;
		unsigned read_transitName : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * systemNames; 
@property (nonatomic,retain) NSMutableArray * artworks; 
@property (nonatomic,readonly) BOOL hasSearchDisplayName; 
@property (nonatomic,retain) NSString * searchDisplayName; 
@property (nonatomic,retain) NSMutableArray * labels; 
@property (assign,nonatomic) BOOL hasTransitId; 
@property (assign,nonatomic) unsigned long long transitId; 
@property (nonatomic,readonly) BOOL hasTimezone; 
@property (nonatomic,retain) GEOTimezone * timezone; 
@property (nonatomic,readonly) BOOL hasTransitName; 
@property (nonatomic,retain) NSString * transitName; 
@property (nonatomic,readonly) BOOL hasStopLocationForTrip; 
@property (nonatomic,retain) GEOLatLng * stopLocationForTrip; 
@property (nonatomic,readonly) BOOL hasStyleAttributesForTrip; 
@property (nonatomic,retain) GEOStyleAttributes * styleAttributesForTrip; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)artworkType;
+(Class)systemNameType;
+(id)transitInfoSnippetForPlaceData:(id)arg1 ;
+(BOOL)isValid:(id)arg1 ;
+(Class)labelType;
-(id)dictionaryRepresentation;
-(GEOTimezone *)timezone;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setLabels:(NSMutableArray *)arg1 ;
-(void)clearLabels;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(NSMutableArray *)labels;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)labelsCount;
-(id)description;
-(NSString *)searchDisplayName;
-(void)setSearchDisplayName:(NSString *)arg1 ;
-(void)setTransitId:(unsigned long long)arg1 ;
-(BOOL)hasSearchDisplayName;
-(void)setHasTransitId:(BOOL)arg1 ;
-(BOOL)hasTransitId;
-(NSMutableArray *)systemNames;
-(NSString *)transitName;
-(GEOLatLng *)stopLocationForTrip;
-(GEOStyleAttributes *)styleAttributesForTrip;
-(void)addSystemName:(id)arg1 ;
-(void)setTransitName:(NSString *)arg1 ;
-(void)setStopLocationForTrip:(GEOLatLng *)arg1 ;
-(void)setStyleAttributesForTrip:(GEOStyleAttributes *)arg1 ;
-(unsigned long long)systemNamesCount;
-(void)clearSystemNames;
-(id)systemNameAtIndex:(unsigned long long)arg1 ;
-(void)setSystemNames:(NSMutableArray *)arg1 ;
-(BOOL)hasTransitName;
-(BOOL)hasStopLocationForTrip;
-(BOOL)hasStyleAttributesForTrip;
-(NSMutableArray *)artworks;
-(BOOL)hasTimezone;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)addLabel:(id)arg1 ;
-(unsigned long long)transitId;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)labelAtIndex:(unsigned long long)arg1 ;
-(void)addArtwork:(id)arg1 ;
-(unsigned long long)artworksCount;
-(void)clearArtworks;
-(id)artworkAtIndex:(unsigned long long)arg1 ;
-(void)setArtworks:(NSMutableArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTimezone:(GEOTimezone *)arg1 ;
@end


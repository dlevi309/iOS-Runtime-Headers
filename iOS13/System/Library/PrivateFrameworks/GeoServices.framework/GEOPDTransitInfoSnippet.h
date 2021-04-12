/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_artworks : 1;
		unsigned wrote_labels : 1;
		unsigned wrote_searchDisplayName : 1;
		unsigned wrote_stopLocationForTrip : 1;
		unsigned wrote_styleAttributesForTrip : 1;
		unsigned wrote_systemNames : 1;
		unsigned wrote_timezone : 1;
		unsigned wrote_transitId : 1;
		unsigned wrote_transitName : 1;
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
+(Class)labelType;
+(BOOL)isValid:(id)arg1 ;
+(Class)artworkType;
+(id)transitInfoSnippetForPlaceData:(id)arg1 ;
+(Class)systemNameType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)labels;
-(unsigned long long)labelsCount;
-(void)setLabels:(NSMutableArray *)arg1 ;
-(GEOTimezone *)timezone;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readTimezone;
-(void)setTimezone:(GEOTimezone *)arg1 ;
-(BOOL)hasTimezone;
-(unsigned long long)transitId;
-(void)setTransitId:(unsigned long long)arg1 ;
-(void)setHasTransitId:(BOOL)arg1 ;
-(BOOL)hasTransitId;
-(unsigned long long)artworksCount;
-(NSMutableArray *)artworks;
-(void)_readLabels;
-(void)_addNoFlagsLabel:(id)arg1 ;
-(void)_readSearchDisplayName;
-(NSString *)searchDisplayName;
-(void)clearLabels;
-(id)labelAtIndex:(unsigned long long)arg1 ;
-(void)addLabel:(id)arg1 ;
-(void)setSearchDisplayName:(NSString *)arg1 ;
-(BOOL)hasSearchDisplayName;
-(id)artworkAtIndex:(unsigned long long)arg1 ;
-(NSString *)transitName;
-(GEOLatLng *)stopLocationForTrip;
-(GEOStyleAttributes *)styleAttributesForTrip;
-(unsigned long long)systemNamesCount;
-(NSMutableArray *)systemNames;
-(void)_readSystemNames;
-(void)_addNoFlagsSystemName:(id)arg1 ;
-(void)_readArtworks;
-(void)_addNoFlagsArtwork:(id)arg1 ;
-(void)_readTransitName;
-(void)_readStopLocationForTrip;
-(void)_readStyleAttributesForTrip;
-(void)clearSystemNames;
-(id)systemNameAtIndex:(unsigned long long)arg1 ;
-(void)addSystemName:(id)arg1 ;
-(void)clearArtworks;
-(void)addArtwork:(id)arg1 ;
-(void)setTransitName:(NSString *)arg1 ;
-(void)setStopLocationForTrip:(GEOLatLng *)arg1 ;
-(void)setStyleAttributesForTrip:(GEOStyleAttributes *)arg1 ;
-(void)setSystemNames:(NSMutableArray *)arg1 ;
-(void)setArtworks:(NSMutableArray *)arg1 ;
-(BOOL)hasTransitName;
-(BOOL)hasStopLocationForTrip;
-(BOOL)hasStyleAttributesForTrip;
@end


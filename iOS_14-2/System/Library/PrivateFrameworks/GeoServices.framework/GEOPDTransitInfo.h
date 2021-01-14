/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, NSString, GEOPDMapsIdentifier;

@interface GEOPDTransitInfo : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _labels;
	NSMutableArray* _lines;
	NSString* _searchDisplayName;
	NSString* _subTitle;
	NSMutableArray* _systems;
	NSString* _title;
	NSMutableArray* _transitConnections;
	unsigned long long _transitId;
	GEOPDMapsIdentifier* _transitMarketId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_transitId : 1;
		unsigned read_unknownFields : 1;
		unsigned read_labels : 1;
		unsigned read_lines : 1;
		unsigned read_searchDisplayName : 1;
		unsigned read_subTitle : 1;
		unsigned read_systems : 1;
		unsigned read_title : 1;
		unsigned read_transitConnections : 1;
		unsigned read_transitMarketId : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * lines; 
@property (nonatomic,retain) NSMutableArray * systems; 
@property (nonatomic,retain) NSMutableArray * labels; 
@property (nonatomic,retain) NSMutableArray * transitConnections; 
@property (nonatomic,readonly) BOOL hasSearchDisplayName; 
@property (nonatomic,retain) NSString * searchDisplayName; 
@property (nonatomic,readonly) BOOL hasTransitMarketId; 
@property (nonatomic,retain) GEOPDMapsIdentifier * transitMarketId; 
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,readonly) BOOL hasSubTitle; 
@property (nonatomic,retain) NSString * subTitle; 
@property (assign,nonatomic) BOOL hasTransitId; 
@property (assign,nonatomic) unsigned long long transitId; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)systemType;
+(Class)transitConnectionType;
+(id)transitInfoForPlaceData:(id)arg1 ;
+(Class)lineType;
+(BOOL)isValid:(id)arg1 ;
+(Class)labelType;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSMutableArray *)lines;
-(void)setLabels:(NSMutableArray *)arg1 ;
-(void)setLines:(NSMutableArray *)arg1 ;
-(void)clearLabels;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(BOOL)hasTitle;
-(NSMutableArray *)labels;
-(void)setTitle:(NSString *)arg1 ;
-(NSMutableArray *)systems;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)subTitle;
-(BOOL)hasSubTitle;
-(void)setSubTitle:(NSString *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)labelsCount;
-(id)description;
-(NSString *)searchDisplayName;
-(GEOPDMapsIdentifier *)transitMarketId;
-(void)addTransitConnection:(id)arg1 ;
-(void)setSearchDisplayName:(NSString *)arg1 ;
-(void)setTransitMarketId:(GEOPDMapsIdentifier *)arg1 ;
-(void)setTransitId:(unsigned long long)arg1 ;
-(unsigned long long)transitConnectionsCount;
-(void)clearTransitConnections;
-(id)transitConnectionAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)transitConnections;
-(void)setTransitConnections:(NSMutableArray *)arg1 ;
-(BOOL)hasSearchDisplayName;
-(BOOL)hasTransitMarketId;
-(void)setHasTransitId:(BOOL)arg1 ;
-(BOOL)hasTransitId;
-(void)addLine:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)addLabel:(id)arg1 ;
-(unsigned long long)transitId;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)labelAtIndex:(unsigned long long)arg1 ;
-(void)addSystem:(id)arg1 ;
-(id)lineAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)systemsCount;
-(void)clearSystems;
-(id)systemAtIndex:(unsigned long long)arg1 ;
-(void)setSystems:(NSMutableArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)clearLines;
-(unsigned long long)linesCount;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end


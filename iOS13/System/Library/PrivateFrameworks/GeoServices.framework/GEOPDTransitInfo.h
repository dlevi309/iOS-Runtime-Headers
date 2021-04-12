/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_labels : 1;
		unsigned wrote_lines : 1;
		unsigned wrote_searchDisplayName : 1;
		unsigned wrote_subTitle : 1;
		unsigned wrote_systems : 1;
		unsigned wrote_title : 1;
		unsigned wrote_transitConnections : 1;
		unsigned wrote_transitId : 1;
		unsigned wrote_transitMarketId : 1;
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
+(Class)labelType;
+(Class)systemType;
+(BOOL)isValid:(id)arg1 ;
+(id)transitInfoForPlaceData:(id)arg1 ;
+(Class)lineType;
+(Class)transitConnectionType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)labels;
-(unsigned long long)labelsCount;
-(void)setLabels:(NSMutableArray *)arg1 ;
-(BOOL)hasTitle;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSMutableArray *)lines;
-(void)_readTitle;
-(unsigned long long)transitId;
-(void)setTransitId:(unsigned long long)arg1 ;
-(void)setHasTransitId:(BOOL)arg1 ;
-(BOOL)hasTransitId;
-(void)_readLines;
-(void)_addNoFlagsLine:(id)arg1 ;
-(void)_readSystems;
-(void)_addNoFlagsSystem:(id)arg1 ;
-(void)_readLabels;
-(void)_addNoFlagsLabel:(id)arg1 ;
-(void)_readTransitConnections;
-(void)_addNoFlagsTransitConnection:(id)arg1 ;
-(void)_readSearchDisplayName;
-(void)_readTransitMarketId;
-(void)_readSubTitle;
-(NSString *)searchDisplayName;
-(GEOPDMapsIdentifier *)transitMarketId;
-(NSString *)subTitle;
-(unsigned long long)linesCount;
-(void)clearLines;
-(id)lineAtIndex:(unsigned long long)arg1 ;
-(void)addLine:(id)arg1 ;
-(unsigned long long)systemsCount;
-(void)clearSystems;
-(id)systemAtIndex:(unsigned long long)arg1 ;
-(void)addSystem:(id)arg1 ;
-(void)clearLabels;
-(id)labelAtIndex:(unsigned long long)arg1 ;
-(void)addLabel:(id)arg1 ;
-(unsigned long long)transitConnectionsCount;
-(void)clearTransitConnections;
-(id)transitConnectionAtIndex:(unsigned long long)arg1 ;
-(void)addTransitConnection:(id)arg1 ;
-(void)setSearchDisplayName:(NSString *)arg1 ;
-(void)setTransitMarketId:(GEOPDMapsIdentifier *)arg1 ;
-(void)setSubTitle:(NSString *)arg1 ;
-(NSMutableArray *)systems;
-(NSMutableArray *)transitConnections;
-(void)setLines:(NSMutableArray *)arg1 ;
-(void)setSystems:(NSMutableArray *)arg1 ;
-(void)setTransitConnections:(NSMutableArray *)arg1 ;
-(BOOL)hasSearchDisplayName;
-(BOOL)hasTransitMarketId;
-(BOOL)hasSubTitle;
@end


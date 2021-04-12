/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString;

@interface GEOPDPopularNearbyResult : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDLitePlaceResult* _litePlaceResults;
	unsigned long long _litePlaceResultsCount;
	unsigned long long _litePlaceResultsSpace;
	NSString* _sectionHeader;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_litePlaceResults : 1;
		unsigned read_sectionHeader : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_litePlaceResults : 1;
		unsigned wrote_sectionHeader : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasSectionHeader; 
@property (nonatomic,retain) NSString * sectionHeader; 
@property (nonatomic,readonly) unsigned long long litePlaceResultsCount; 
@property (nonatomic,readonly) GEOPDLitePlaceResult* litePlaceResults; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(void)dealloc;
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
-(void)setSectionHeader:(NSString *)arg1 ;
-(NSString *)sectionHeader;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned long long)litePlaceResultsCount;
-(GEOPDLitePlaceResult)litePlaceResultAtIndex:(unsigned long long)arg1 ;
-(void)clearLitePlaceResults;
-(void)_readSectionHeader;
-(void)_readLitePlaceResults;
-(void)_addNoFlagsLitePlaceResult:(GEOPDLitePlaceResult)arg1 ;
-(void)addLitePlaceResult:(GEOPDLitePlaceResult)arg1 ;
-(BOOL)hasSectionHeader;
-(GEOPDLitePlaceResult*)litePlaceResults;
-(void)setLitePlaceResults:(GEOPDLitePlaceResult*)arg1 count:(unsigned long long)arg2 ;
@end


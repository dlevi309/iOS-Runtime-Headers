/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOFormattedString, NSMutableArray;

@interface GEOShortTrafficSummary : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOFormattedString* _detail;
	NSMutableArray* _titles;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_detail : 1;
		unsigned read_titles : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * titles; 
@property (nonatomic,readonly) BOOL hasDetail; 
@property (nonatomic,retain) GEOFormattedString * detail; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)titleType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)titleAtIndex:(unsigned long long)arg1 ;
-(GEOFormattedString *)detail;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(BOOL)hasDetail;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setTitles:(NSMutableArray *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)addTitle:(id)arg1 ;
-(unsigned long long)titlesCount;
-(void)clearTitles;
-(unsigned long long)hash;
-(NSMutableArray *)titles;
-(BOOL)readFrom:(id)arg1 ;
-(void)setDetail:(GEOFormattedString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


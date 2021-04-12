/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_detail : 1;
		unsigned wrote_titles : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * titles; 
@property (nonatomic,readonly) BOOL hasDetail; 
@property (nonatomic,retain) GEOFormattedString * detail; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)titleType;
+(BOOL)isValid:(id)arg1 ;
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
-(void)setDetail:(GEOFormattedString *)arg1 ;
-(void)setTitles:(NSMutableArray *)arg1 ;
-(NSMutableArray *)titles;
-(GEOFormattedString *)detail;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readDetail;
-(BOOL)hasDetail;
-(void)_readTitles;
-(void)_addNoFlagsTitle:(id)arg1 ;
-(unsigned long long)titlesCount;
-(void)clearTitles;
-(id)titleAtIndex:(unsigned long long)arg1 ;
-(void)addTitle:(id)arg1 ;
@end


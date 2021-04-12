/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDAllCollectionsViewResultFilterTypeAddress, GEOPDAllCollectionsViewResultFilterTypeKeyword;

@interface GEOPDAllCollectionsViewResultFilter : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDAllCollectionsViewResultFilterTypeAddress* _filterAddress;
	GEOPDAllCollectionsViewResultFilterTypeKeyword* _filterKeyword;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _filterType;
	struct {
		unsigned has_filterType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_filterAddress : 1;
		unsigned read_filterKeyword : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasFilterType; 
@property (assign,nonatomic) int filterType; 
@property (nonatomic,readonly) BOOL hasFilterAddress; 
@property (nonatomic,retain) GEOPDAllCollectionsViewResultFilterTypeAddress * filterAddress; 
@property (nonatomic,readonly) BOOL hasFilterKeyword; 
@property (nonatomic,retain) GEOPDAllCollectionsViewResultFilterTypeKeyword * filterKeyword; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(int)filterType;
-(void)setFilterType:(int)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(GEOPDAllCollectionsViewResultFilterTypeAddress *)filterAddress;
-(GEOPDAllCollectionsViewResultFilterTypeKeyword *)filterKeyword;
-(void)setFilterAddress:(GEOPDAllCollectionsViewResultFilterTypeAddress *)arg1 ;
-(void)setFilterKeyword:(GEOPDAllCollectionsViewResultFilterTypeKeyword *)arg1 ;
-(void)setHasFilterType:(BOOL)arg1 ;
-(BOOL)hasFilterType;
-(id)filterTypeAsString:(int)arg1 ;
-(BOOL)hasFilterAddress;
-(int)StringAsFilterType:(id)arg1 ;
-(BOOL)hasFilterKeyword;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEORPCuratedCollectionContext, GEORPCuratedCollectionCorrections;

@interface GEORPCuratedCollectionFeedback : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEORPCuratedCollectionContext* _curatedCollectionContext;
	GEORPCuratedCollectionCorrections* _curatedCollectionCorrections;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_curatedCollectionContext : 1;
		unsigned read_curatedCollectionCorrections : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasCuratedCollectionContext; 
@property (nonatomic,retain) GEORPCuratedCollectionContext * curatedCollectionContext; 
@property (nonatomic,readonly) BOOL hasCuratedCollectionCorrections; 
@property (nonatomic,retain) GEORPCuratedCollectionCorrections * curatedCollectionCorrections; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(GEORPCuratedCollectionContext *)curatedCollectionContext;
-(GEORPCuratedCollectionCorrections *)curatedCollectionCorrections;
-(void)setCuratedCollectionContext:(GEORPCuratedCollectionContext *)arg1 ;
-(BOOL)hasCuratedCollectionContext;
-(void)setCuratedCollectionCorrections:(GEORPCuratedCollectionCorrections *)arg1 ;
-(BOOL)hasCuratedCollectionCorrections;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


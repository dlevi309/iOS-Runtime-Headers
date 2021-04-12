/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, GEOLatLng;

@interface GEOSnapScorePoint : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _candidates;
	GEOLatLng* _point;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_candidates : 1;
		unsigned read_point : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_candidates : 1;
		unsigned wrote_point : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasPoint; 
@property (nonatomic,retain) GEOLatLng * point; 
@property (nonatomic,retain) NSMutableArray * candidates; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)candidateType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(GEOLatLng *)point;
-(void)setPoint:(GEOLatLng *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)candidates;
-(id)candidateAtIndex:(unsigned long long)arg1 ;
-(void)setCandidates:(NSMutableArray *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readPoint;
-(void)_readCandidates;
-(void)_addNoFlagsCandidate:(id)arg1 ;
-(unsigned long long)candidatesCount;
-(void)clearCandidates;
-(void)addCandidate:(id)arg1 ;
-(BOOL)hasPoint;
@end


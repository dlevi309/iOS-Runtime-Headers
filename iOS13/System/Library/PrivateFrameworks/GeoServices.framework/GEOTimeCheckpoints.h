/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields;

@interface GEOTimeCheckpoints : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE19* _distToNextCheckpoints;
	SCD_Struct_GE19* _timeToNextCheckpoints;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_distToNextCheckpoints : 1;
		unsigned read_timeToNextCheckpoints : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_distToNextCheckpoints : 1;
		unsigned wrote_timeToNextCheckpoints : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long distToNextCheckpointsCount; 
@property (nonatomic,readonly) unsigned* distToNextCheckpoints; 
@property (nonatomic,readonly) unsigned long long timeToNextCheckpointsCount; 
@property (nonatomic,readonly) unsigned* timeToNextCheckpoints; 
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
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readDistToNextCheckpoints;
-(void)_addNoFlagsDistToNextCheckpoint:(unsigned)arg1 ;
-(void)_readTimeToNextCheckpoints;
-(void)_addNoFlagsTimeToNextCheckpoint:(unsigned)arg1 ;
-(unsigned long long)distToNextCheckpointsCount;
-(void)clearDistToNextCheckpoints;
-(unsigned)distToNextCheckpointAtIndex:(unsigned long long)arg1 ;
-(void)addDistToNextCheckpoint:(unsigned)arg1 ;
-(unsigned long long)timeToNextCheckpointsCount;
-(void)clearTimeToNextCheckpoints;
-(unsigned)timeToNextCheckpointAtIndex:(unsigned long long)arg1 ;
-(void)addTimeToNextCheckpoint:(unsigned)arg1 ;
-(unsigned*)distToNextCheckpoints;
-(void)setDistToNextCheckpoints:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)timeToNextCheckpoints;
-(void)setTimeToNextCheckpoints:(unsigned*)arg1 count:(unsigned long long)arg2 ;
@end


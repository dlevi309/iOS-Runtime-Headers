/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOTrafficSnapshotMetaData, NSMutableArray;

@interface GEOTrafficSpeedSnapshot : PBCodable <NSCopying> {

	PBDataReader* _reader;
	unsigned long long _receivedTime;
	GEOTrafficSnapshotMetaData* _snapshotMetaData;
	NSMutableArray* _speeds;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_receivedTime : 1;
		unsigned read_snapshotMetaData : 1;
		unsigned read_speeds : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasSnapshotMetaData; 
@property (nonatomic,retain) GEOTrafficSnapshotMetaData * snapshotMetaData; 
@property (nonatomic,retain) NSMutableArray * speeds; 
@property (assign,nonatomic) BOOL hasReceivedTime; 
@property (assign,nonatomic) unsigned long long receivedTime; 
+(BOOL)isValid:(id)arg1 ;
+(Class)speedsType;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(NSMutableArray *)speeds;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)speedsCount;
-(void)clearSpeeds;
-(id)speedsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(GEOTrafficSnapshotMetaData *)snapshotMetaData;
-(void)setSnapshotMetaData:(GEOTrafficSnapshotMetaData *)arg1 ;
-(void)setReceivedTime:(unsigned long long)arg1 ;
-(BOOL)hasSnapshotMetaData;
-(unsigned long long)receivedTime;
-(void)setHasReceivedTime:(BOOL)arg1 ;
-(BOOL)hasReceivedTime;
-(void)addSpeeds:(id)arg1 ;
-(void)setSpeeds:(NSMutableArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


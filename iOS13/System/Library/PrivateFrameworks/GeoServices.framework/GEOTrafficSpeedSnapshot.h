/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_receivedTime : 1;
		unsigned wrote_snapshotMetaData : 1;
		unsigned wrote_speeds : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasSnapshotMetaData; 
@property (nonatomic,retain) GEOTrafficSnapshotMetaData * snapshotMetaData; 
@property (nonatomic,retain) NSMutableArray * speeds; 
@property (assign,nonatomic) BOOL hasReceivedTime; 
@property (assign,nonatomic) unsigned long long receivedTime; 
+(BOOL)isValid:(id)arg1 ;
+(Class)speedsType;
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
-(void)readAll:(BOOL)arg1 ;
-(void)_readSnapshotMetaData;
-(void)_readSpeeds;
-(void)_addNoFlagsSpeeds:(id)arg1 ;
-(GEOTrafficSnapshotMetaData *)snapshotMetaData;
-(void)setSnapshotMetaData:(GEOTrafficSnapshotMetaData *)arg1 ;
-(unsigned long long)speedsCount;
-(void)clearSpeeds;
-(id)speedsAtIndex:(unsigned long long)arg1 ;
-(void)addSpeeds:(id)arg1 ;
-(BOOL)hasSnapshotMetaData;
-(NSMutableArray *)speeds;
-(void)setSpeeds:(NSMutableArray *)arg1 ;
-(unsigned long long)receivedTime;
-(void)setReceivedTime:(unsigned long long)arg1 ;
-(void)setHasReceivedTime:(BOOL)arg1 ;
-(BOOL)hasReceivedTime;
@end


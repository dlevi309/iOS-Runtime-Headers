/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, GEOTrafficSnapshotMetaData;

@interface GEOTrafficIncidentSnapshot : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _incidents;
	unsigned long long _receivedTime;
	GEOTrafficSnapshotMetaData* _snapshotMetaData;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_receivedTime : 1;
		unsigned read_incidents : 1;
		unsigned read_snapshotMetaData : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasSnapshotMetaData; 
@property (nonatomic,retain) GEOTrafficSnapshotMetaData * snapshotMetaData; 
@property (nonatomic,retain) NSMutableArray * incidents; 
@property (assign,nonatomic) BOOL hasReceivedTime; 
@property (assign,nonatomic) unsigned long long receivedTime; 
+(Class)incidentsType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)addIncidents:(id)arg1 ;
-(unsigned long long)incidentsCount;
-(void)clearIncidents;
-(id)incidentsAtIndex:(unsigned long long)arg1 ;
-(void)setIncidents:(NSMutableArray *)arg1 ;
-(unsigned long long)hash;
-(NSMutableArray *)incidents;
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


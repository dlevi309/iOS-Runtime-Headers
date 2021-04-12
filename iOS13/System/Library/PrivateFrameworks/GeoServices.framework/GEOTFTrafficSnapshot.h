/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, NSString;

@interface GEOTFTrafficSnapshot : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _compactSpeeds;
	NSString* _feedId;
	unsigned long long _feedPublishTime;
	long long _feedUpdateTime;
	NSMutableArray* _incidents;
	NSMutableArray* _regions;
	NSString* _snapshotId;
	NSMutableArray* _speeds;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _trafficVersion;
	SCD_Struct_GE92 _flags;

}

@property (nonatomic,retain) NSMutableArray * regions; 
@property (nonatomic,retain) NSMutableArray * incidents; 
@property (nonatomic,retain) NSMutableArray * speeds; 
@property (assign,nonatomic) BOOL hasFeedUpdateTime; 
@property (assign,nonatomic) long long feedUpdateTime; 
@property (nonatomic,readonly) BOOL hasFeedId; 
@property (nonatomic,retain) NSString * feedId; 
@property (assign,nonatomic) BOOL hasTrafficVersion; 
@property (assign,nonatomic) unsigned trafficVersion; 
@property (assign,nonatomic) BOOL hasFeedPublishTime; 
@property (assign,nonatomic) unsigned long long feedPublishTime; 
@property (nonatomic,retain) NSMutableArray * compactSpeeds; 
@property (nonatomic,readonly) BOOL hasSnapshotId; 
@property (nonatomic,retain) NSString * snapshotId; 
+(BOOL)isValid:(id)arg1 ;
+(Class)regionType;
+(Class)speedsType;
+(Class)incidentsType;
+(Class)compactSpeedsType;
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
-(void)addRegion:(id)arg1 ;
-(NSMutableArray *)regions;
-(void)clearRegions;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)regionsCount;
-(id)regionAtIndex:(unsigned long long)arg1 ;
-(void)_readFeedId;
-(void)_readSnapshotId;
-(void)_readRegions;
-(NSString *)feedId;
-(NSString *)snapshotId;
-(void)setFeedId:(NSString *)arg1 ;
-(void)setSnapshotId:(NSString *)arg1 ;
-(BOOL)hasFeedId;
-(BOOL)hasSnapshotId;
-(void)setRegions:(NSMutableArray *)arg1 ;
-(void)_addNoFlagsRegion:(id)arg1 ;
-(void)_readSpeeds;
-(void)_addNoFlagsSpeeds:(id)arg1 ;
-(void)_readIncidents;
-(void)_addNoFlagsIncidents:(id)arg1 ;
-(unsigned long long)speedsCount;
-(void)clearSpeeds;
-(id)speedsAtIndex:(unsigned long long)arg1 ;
-(void)addSpeeds:(id)arg1 ;
-(unsigned long long)incidentsCount;
-(void)clearIncidents;
-(id)incidentsAtIndex:(unsigned long long)arg1 ;
-(void)addIncidents:(id)arg1 ;
-(NSMutableArray *)speeds;
-(void)setSpeeds:(NSMutableArray *)arg1 ;
-(NSMutableArray *)incidents;
-(void)setIncidents:(NSMutableArray *)arg1 ;
-(void)_readCompactSpeeds;
-(void)_addNoFlagsCompactSpeeds:(id)arg1 ;
-(unsigned long long)compactSpeedsCount;
-(void)clearCompactSpeeds;
-(id)compactSpeedsAtIndex:(unsigned long long)arg1 ;
-(void)addCompactSpeeds:(id)arg1 ;
-(long long)feedUpdateTime;
-(void)setFeedUpdateTime:(long long)arg1 ;
-(void)setHasFeedUpdateTime:(BOOL)arg1 ;
-(BOOL)hasFeedUpdateTime;
-(unsigned)trafficVersion;
-(void)setTrafficVersion:(unsigned)arg1 ;
-(void)setHasTrafficVersion:(BOOL)arg1 ;
-(BOOL)hasTrafficVersion;
-(unsigned long long)feedPublishTime;
-(void)setFeedPublishTime:(unsigned long long)arg1 ;
-(void)setHasFeedPublishTime:(BOOL)arg1 ;
-(BOOL)hasFeedPublishTime;
-(NSMutableArray *)compactSpeeds;
-(void)setCompactSpeeds:(NSMutableArray *)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	struct {
		unsigned has_feedPublishTime : 1;
		unsigned has_feedUpdateTime : 1;
		unsigned has_trafficVersion : 1;
		unsigned read_compactSpeeds : 1;
		unsigned read_feedId : 1;
		unsigned read_incidents : 1;
		unsigned read_regions : 1;
		unsigned read_snapshotId : 1;
		unsigned read_speeds : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

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
+(Class)regionType;
+(Class)incidentsType;
+(Class)compactSpeedsType;
+(BOOL)isValid:(id)arg1 ;
+(Class)speedsType;
-(id)dictionaryRepresentation;
-(void)setFeedId:(NSString *)arg1 ;
-(void)clearRegions;
-(unsigned long long)regionsCount;
-(id)regionAtIndex:(unsigned long long)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)addRegion:(id)arg1 ;
-(id)init;
-(NSMutableArray *)speeds;
-(id)jsonRepresentation;
-(NSMutableArray *)regions;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(BOOL)hasFeedId;
-(void)addIncidents:(id)arg1 ;
-(unsigned long long)speedsCount;
-(void)setFeedUpdateTime:(long long)arg1 ;
-(void)setTrafficVersion:(unsigned)arg1 ;
-(void)setFeedPublishTime:(unsigned long long)arg1 ;
-(void)addCompactSpeeds:(id)arg1 ;
-(void)setSnapshotId:(NSString *)arg1 ;
-(unsigned long long)incidentsCount;
-(void)clearIncidents;
-(id)incidentsAtIndex:(unsigned long long)arg1 ;
-(void)clearSpeeds;
-(id)speedsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)compactSpeedsCount;
-(void)clearCompactSpeeds;
-(id)compactSpeedsAtIndex:(unsigned long long)arg1 ;
-(void)setIncidents:(NSMutableArray *)arg1 ;
-(long long)feedUpdateTime;
-(void)setHasFeedUpdateTime:(BOOL)arg1 ;
-(BOOL)hasFeedUpdateTime;
-(unsigned)trafficVersion;
-(void)setHasTrafficVersion:(BOOL)arg1 ;
-(BOOL)hasTrafficVersion;
-(NSMutableArray *)compactSpeeds;
-(unsigned long long)feedPublishTime;
-(void)setHasFeedPublishTime:(BOOL)arg1 ;
-(BOOL)hasFeedPublishTime;
-(void)setCompactSpeeds:(NSMutableArray *)arg1 ;
-(BOOL)hasSnapshotId;
-(unsigned long long)hash;
-(NSMutableArray *)incidents;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)feedId;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setRegions:(NSMutableArray *)arg1 ;
-(NSString *)snapshotId;
-(void)addSpeeds:(id)arg1 ;
-(void)setSpeeds:(NSMutableArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


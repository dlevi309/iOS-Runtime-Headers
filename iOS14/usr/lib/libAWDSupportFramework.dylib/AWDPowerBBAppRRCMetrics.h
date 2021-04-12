/*
* Generated on Thursday, January 14, 2021 at 2:29:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDPowerBBAppRRCMetrics : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSMutableArray* _appConnStats;
	unsigned _numRRCConnections;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSMutableArray * appConnStats;              //@synthesize appConnStats=_appConnStats - In the implementation block
@property (assign,nonatomic) BOOL hasNumRRCConnections; 
@property (assign,nonatomic) unsigned numRRCConnections;                 //@synthesize numRRCConnections=_numRRCConnections - In the implementation block
+(Class)appConnStatsType;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setAppConnStats:(NSMutableArray *)arg1 ;
-(void)addAppConnStats:(id)arg1 ;
-(unsigned long long)appConnStatsCount;
-(void)clearAppConnStats;
-(id)appConnStatsAtIndex:(unsigned long long)arg1 ;
-(void)setNumRRCConnections:(unsigned)arg1 ;
-(void)setHasNumRRCConnections:(BOOL)arg1 ;
-(BOOL)hasNumRRCConnections;
-(NSMutableArray *)appConnStats;
-(unsigned)numRRCConnections;
@end


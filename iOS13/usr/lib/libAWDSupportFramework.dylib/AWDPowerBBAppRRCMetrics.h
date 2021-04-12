/*
* Generated on Monday, March 1, 2021 at 2:35:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
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


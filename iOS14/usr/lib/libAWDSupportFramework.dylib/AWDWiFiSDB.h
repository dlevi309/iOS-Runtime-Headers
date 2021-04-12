/*
* Generated on Thursday, January 14, 2021 at 2:29:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDWiFiSDB : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _realTimeSessionStateResultingInSubmission;
	NSMutableArray* _sliceStats;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                    //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSMutableArray * sliceStats;                                     //@synthesize sliceStats=_sliceStats - In the implementation block
@property (assign,nonatomic) BOOL hasRealTimeSessionStateResultingInSubmission; 
@property (assign,nonatomic) unsigned realTimeSessionStateResultingInSubmission;              //@synthesize realTimeSessionStateResultingInSubmission=_realTimeSessionStateResultingInSubmission - In the implementation block
+(Class)sliceStatsType;
-(id)dictionaryRepresentation;
-(BOOL)hasRealTimeSessionStateResultingInSubmission;
-(unsigned long long)timestamp;
-(void)clearSliceStats;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasRealTimeSessionStateResultingInSubmission:(BOOL)arg1 ;
-(void)addSliceStats:(id)arg1 ;
-(void)setSliceStats:(NSMutableArray *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)sliceStatsCount;
-(BOOL)hasTimestamp;
-(void)setRealTimeSessionStateResultingInSubmission:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSMutableArray *)sliceStats;
-(id)sliceStatsAtIndex:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(unsigned)realTimeSessionStateResultingInSubmission;
@end


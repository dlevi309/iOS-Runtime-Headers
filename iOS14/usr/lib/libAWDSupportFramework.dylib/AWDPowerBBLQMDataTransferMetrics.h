/*
* Generated on Thursday, January 14, 2021 at 2:29:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDPowerBBLQMDataTransferMetrics : PBCodable <NSCopying> {

	SCD_Struct_AW21* _lQMTransitionCntBuckets;
	unsigned long long _timestamp;
	NSMutableArray* _lQMBytes;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                   //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSMutableArray * lQMBytes;                                      //@synthesize lQMBytes=_lQMBytes - In the implementation block
@property (nonatomic,readonly) unsigned long long lQMTransitionCntBucketsCount; 
@property (nonatomic,readonly) unsigned* lQMTransitionCntBuckets; 
+(Class)lQMBytesType;
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
-(void)setLQMBytes:(NSMutableArray *)arg1 ;
-(void)setLQMTransitionCntBuckets:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)addLQMBytes:(id)arg1 ;
-(unsigned long long)lQMBytesCount;
-(void)clearLQMBytes;
-(id)lQMBytesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)lQMTransitionCntBucketsCount;
-(void)clearLQMTransitionCntBuckets;
-(unsigned)lQMTransitionCntBucketsAtIndex:(unsigned long long)arg1 ;
-(void)addLQMTransitionCntBuckets:(unsigned)arg1 ;
-(unsigned*)lQMTransitionCntBuckets;
-(NSMutableArray *)lQMBytes;
@end


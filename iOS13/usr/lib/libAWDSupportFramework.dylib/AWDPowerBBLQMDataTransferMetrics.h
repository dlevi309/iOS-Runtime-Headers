/*
* Generated on Monday, March 1, 2021 at 2:35:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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


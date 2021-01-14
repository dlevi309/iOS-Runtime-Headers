/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/MediaCapture/H10ISP.mediacapture
*/

#import <H10ISP.mediacapture/H10ISP.mediacapture-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDImageSignalProcessorFaceIDMemoryUsage : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _numAttemptsTotal;
	unsigned _numBuffersInUseHighWatermark;
	unsigned _numBuffersTotal;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasNumBuffersInUseHighWatermark; 
@property (assign,nonatomic) unsigned numBuffersInUseHighWatermark;              //@synthesize numBuffersInUseHighWatermark=_numBuffersInUseHighWatermark - In the implementation block
@property (assign,nonatomic) BOOL hasNumBuffersTotal; 
@property (assign,nonatomic) unsigned numBuffersTotal;                           //@synthesize numBuffersTotal=_numBuffersTotal - In the implementation block
@property (assign,nonatomic) BOOL hasNumAttemptsTotal; 
@property (assign,nonatomic) unsigned numAttemptsTotal;                          //@synthesize numAttemptsTotal=_numAttemptsTotal - In the implementation block
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
-(void)setNumBuffersInUseHighWatermark:(unsigned)arg1 ;
-(void)setHasNumBuffersInUseHighWatermark:(BOOL)arg1 ;
-(BOOL)hasNumBuffersInUseHighWatermark;
-(void)setNumBuffersTotal:(unsigned)arg1 ;
-(void)setHasNumBuffersTotal:(BOOL)arg1 ;
-(BOOL)hasNumBuffersTotal;
-(void)setNumAttemptsTotal:(unsigned)arg1 ;
-(void)setHasNumAttemptsTotal:(BOOL)arg1 ;
-(BOOL)hasNumAttemptsTotal;
-(unsigned)numBuffersInUseHighWatermark;
-(unsigned)numBuffersTotal;
-(unsigned)numAttemptsTotal;
@end


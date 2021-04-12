/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VCPProtoTime : PBCodable <NSCopying> {

	long long _epoch;
	long long _value;
	unsigned _flags;
	int _timescale;

}

@property (assign,nonatomic) long long value;              //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) int timescale;                //@synthesize timescale=_timescale - In the implementation block
@property (assign,nonatomic) unsigned flags;               //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) long long epoch;              //@synthesize epoch=_epoch - In the implementation block
+(id)timeWithCMTime:(SCD_Struct_VC6)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)flags;
-(long long)value;
-(void)setValue:(long long)arg1 ;
-(id)dictionaryRepresentation;
-(long long)epoch;
-(void)setEpoch:(long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(int)timescale;
-(void)setTimescale:(int)arg1 ;
-(SCD_Struct_VC6)timeValue;
@end


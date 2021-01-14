/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(long long)epoch;
-(unsigned)flags;
-(void)mergeFrom:(id)arg1 ;
-(int)timescale;
-(void)setTimescale:(int)arg1 ;
-(void)setValue:(long long)arg1 ;
-(id)description;
-(void)setFlags:(unsigned)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setEpoch:(long long)arg1 ;
-(SCD_Struct_VC6)timeValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)value;
-(BOOL)isEqual:(id)arg1 ;
@end


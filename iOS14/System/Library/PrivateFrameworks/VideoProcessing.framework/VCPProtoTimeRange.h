/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VCPProtoTime;

@interface VCPProtoTimeRange : PBCodable <NSCopying> {

	VCPProtoTime* _duration;
	VCPProtoTime* _start;

}

@property (nonatomic,retain) VCPProtoTime * start;                 //@synthesize start=_start - In the implementation block
@property (nonatomic,retain) VCPProtoTime * duration;              //@synthesize duration=_duration - In the implementation block
+(id)timeRangeWithCMTimeRange:(SCD_Struct_VC7)arg1 ;
-(id)dictionaryRepresentation;
-(void)setDuration:(VCPProtoTime *)arg1 ;
-(VCPProtoTime *)start;
-(void)mergeFrom:(id)arg1 ;
-(SCD_Struct_VC7)timeRangeValue;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(VCPProtoTime *)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStart:(VCPProtoTime *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


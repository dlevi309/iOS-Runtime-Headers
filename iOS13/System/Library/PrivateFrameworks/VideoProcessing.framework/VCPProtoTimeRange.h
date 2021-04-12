/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)timeRangeWithCMTimeRange:(SCD_Struct_VC28)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(VCPProtoTime *)start;
-(id)dictionaryRepresentation;
-(VCPProtoTime *)duration;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDuration:(VCPProtoTime *)arg1 ;
-(void)setStart:(VCPProtoTime *)arg1 ;
-(SCD_Struct_VC28)timeRangeValue;
@end


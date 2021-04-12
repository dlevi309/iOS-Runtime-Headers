/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VCPProtoTime;

@interface VCPProtoVideoKeyFrame : PBCodable <NSCopying> {

	float _curationScore;
	VCPProtoTime* _timestamp;

}

@property (nonatomic,retain) VCPProtoTime * timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) float curationScore;                   //@synthesize curationScore=_curationScore - In the implementation block
-(id)dictionaryRepresentation;
-(VCPProtoTime *)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(void)setCurationScore:(float)arg1 ;
-(float)curationScore;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(VCPProtoTime *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


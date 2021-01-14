/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/VCPProtoResultLegacyConversionProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VCPProtoTimeRange;

@interface VCPProtoMovieHumanActionResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {

	float _absoluteScore;
	float _humanScore;
	float _relativeScore;
	VCPProtoTimeRange* _timeRange;

}

@property (nonatomic,retain) VCPProtoTimeRange * timeRange;              //@synthesize timeRange=_timeRange - In the implementation block
@property (assign,nonatomic) float absoluteScore;                        //@synthesize absoluteScore=_absoluteScore - In the implementation block
@property (assign,nonatomic) float relativeScore;                        //@synthesize relativeScore=_relativeScore - In the implementation block
@property (assign,nonatomic) float humanScore;                           //@synthesize humanScore=_humanScore - In the implementation block
+(id)resultFromLegacyDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setTimeRange:(VCPProtoTimeRange *)arg1 ;
-(VCPProtoTimeRange *)timeRange;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(id)exportToLegacyDictionary;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(float)absoluteScore;
-(void)setAbsoluteScore:(float)arg1 ;
-(float)relativeScore;
-(void)setRelativeScore:(float)arg1 ;
-(float)humanScore;
-(void)setHumanScore:(float)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


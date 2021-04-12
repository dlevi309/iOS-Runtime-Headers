/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/VCPProtoResultLegacyConversionProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VCPProtoVideoKeyFrame, VCPProtoBounds, VCPProtoTimeRange;

@interface VCPProtoMovieSummaryResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {

	float _curationScore;
	VCPProtoVideoKeyFrame* _keyFrame;
	VCPProtoBounds* _playbackCrop;
	VCPProtoTimeRange* _timeRange;
	BOOL _autoPlayable;

}

@property (nonatomic,retain) VCPProtoTimeRange * timeRange;                 //@synthesize timeRange=_timeRange - In the implementation block
@property (assign,nonatomic) float curationScore;                           //@synthesize curationScore=_curationScore - In the implementation block
@property (nonatomic,readonly) BOOL hasKeyFrame; 
@property (nonatomic,retain) VCPProtoVideoKeyFrame * keyFrame;              //@synthesize keyFrame=_keyFrame - In the implementation block
@property (assign,nonatomic) BOOL autoPlayable;                             //@synthesize autoPlayable=_autoPlayable - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaybackCrop; 
@property (nonatomic,retain) VCPProtoBounds * playbackCrop;                 //@synthesize playbackCrop=_playbackCrop - In the implementation block
+(id)resultFromLegacyDictionary:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimeRange:(VCPProtoTimeRange *)arg1 ;
-(VCPProtoTimeRange *)timeRange;
-(float)curationScore;
-(void)setCurationScore:(float)arg1 ;
-(VCPProtoVideoKeyFrame *)keyFrame;
-(void)setKeyFrame:(VCPProtoVideoKeyFrame *)arg1 ;
-(id)exportToLegacyDictionary;
-(void)setPlaybackCrop:(VCPProtoBounds *)arg1 ;
-(BOOL)hasKeyFrame;
-(BOOL)hasPlaybackCrop;
-(BOOL)autoPlayable;
-(void)setAutoPlayable:(BOOL)arg1 ;
-(VCPProtoBounds *)playbackCrop;
@end


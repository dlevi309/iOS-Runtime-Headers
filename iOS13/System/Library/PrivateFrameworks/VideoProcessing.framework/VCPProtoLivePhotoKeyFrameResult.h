/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/VCPProtoResultLegacyConversionProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface VCPProtoLivePhotoKeyFrameResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {

	double _timestamp;
	float _contentScore;
	float _exposureScore;
	NSMutableArray* _faceResults;
	float _globalQualityScore;
	float _overallFaceQualityScore;
	float _penaltyScore;
	float _qualityScoreForLivePhoto;
	float _sharpness;
	float _textureScore;
	float _visualPleasingScore;
	SCD_Struct_VC9 _has;

}

@property (assign,nonatomic) double timestamp;                            //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) float qualityScoreForLivePhoto;              //@synthesize qualityScoreForLivePhoto=_qualityScoreForLivePhoto - In the implementation block
@property (assign,nonatomic) float visualPleasingScore;                   //@synthesize visualPleasingScore=_visualPleasingScore - In the implementation block
@property (assign,nonatomic) float overallFaceQualityScore;               //@synthesize overallFaceQualityScore=_overallFaceQualityScore - In the implementation block
@property (assign,nonatomic) float exposureScore;                         //@synthesize exposureScore=_exposureScore - In the implementation block
@property (assign,nonatomic) float penaltyScore;                          //@synthesize penaltyScore=_penaltyScore - In the implementation block
@property (assign,nonatomic) float textureScore;                          //@synthesize textureScore=_textureScore - In the implementation block
@property (assign,nonatomic) float sharpness;                             //@synthesize sharpness=_sharpness - In the implementation block
@property (nonatomic,retain) NSMutableArray * faceResults;                //@synthesize faceResults=_faceResults - In the implementation block
@property (assign,nonatomic) BOOL hasGlobalQualityScore; 
@property (assign,nonatomic) float globalQualityScore;                    //@synthesize globalQualityScore=_globalQualityScore - In the implementation block
@property (assign,nonatomic) BOOL hasContentScore; 
@property (assign,nonatomic) float contentScore;                          //@synthesize contentScore=_contentScore - In the implementation block
+(Class)faceResultsType;
+(id)resultFromLegacyDictionary:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(void)writeTo:(id)arg1 ;
-(float)sharpness;
-(void)setSharpness:(float)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(float)exposureScore;
-(void)setExposureScore:(float)arg1 ;
-(void)setContentScore:(float)arg1 ;
-(float)contentScore;
-(void)addFaceResults:(id)arg1 ;
-(unsigned long long)faceResultsCount;
-(void)clearFaceResults;
-(id)faceResultsAtIndex:(unsigned long long)arg1 ;
-(void)setGlobalQualityScore:(float)arg1 ;
-(void)setHasGlobalQualityScore:(BOOL)arg1 ;
-(BOOL)hasGlobalQualityScore;
-(void)setHasContentScore:(BOOL)arg1 ;
-(BOOL)hasContentScore;
-(float)qualityScoreForLivePhoto;
-(void)setQualityScoreForLivePhoto:(float)arg1 ;
-(float)visualPleasingScore;
-(void)setVisualPleasingScore:(float)arg1 ;
-(float)overallFaceQualityScore;
-(void)setOverallFaceQualityScore:(float)arg1 ;
-(float)penaltyScore;
-(void)setPenaltyScore:(float)arg1 ;
-(float)textureScore;
-(void)setTextureScore:(float)arg1 ;
-(NSMutableArray *)faceResults;
-(void)setFaceResults:(NSMutableArray *)arg1 ;
-(float)globalQualityScore;
-(id)exportToLegacyDictionary;
@end


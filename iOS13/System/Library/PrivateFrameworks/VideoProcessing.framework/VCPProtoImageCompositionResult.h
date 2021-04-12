/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/VCPProtoResultLegacyConversionProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VCPProtoLine, VCPProtoPoint;

@interface VCPProtoImageCompositionResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {

	float _confidence;
	VCPProtoLine* _dominantLine;
	VCPProtoPoint* _vanishingPoint;

}

@property (assign,nonatomic) float confidence;                            //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,retain) VCPProtoPoint * vanishingPoint;              //@synthesize vanishingPoint=_vanishingPoint - In the implementation block
@property (nonatomic,retain) VCPProtoLine * dominantLine;                 //@synthesize dominantLine=_dominantLine - In the implementation block
+(id)resultFromLegacyDictionary:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(float)confidence;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setConfidence:(float)arg1 ;
-(void)setVanishingPoint:(VCPProtoPoint *)arg1 ;
-(VCPProtoPoint *)vanishingPoint;
-(id)exportToLegacyDictionary;
-(void)setDominantLine:(VCPProtoLine *)arg1 ;
-(VCPProtoLine *)dominantLine;
@end


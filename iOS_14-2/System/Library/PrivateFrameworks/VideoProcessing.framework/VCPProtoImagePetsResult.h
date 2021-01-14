/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/VCPProtoResultLegacyConversionProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VCPProtoBounds;

@interface VCPProtoImagePetsResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {

	VCPProtoBounds* _bounds;
	float _confidence;

}

@property (assign,nonatomic) float confidence;                     //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,retain) VCPProtoBounds * bounds;              //@synthesize bounds=_bounds - In the implementation block
+(id)resultFromLegacyDictionary:(id)arg1 ;
-(float)confidence;
-(id)dictionaryRepresentation;
-(VCPProtoBounds *)bounds;
-(void)mergeFrom:(id)arg1 ;
-(void)setBounds:(VCPProtoBounds *)arg1 ;
-(id)description;
-(void)setConfidence:(float)arg1 ;
-(id)exportToLegacyDictionary;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


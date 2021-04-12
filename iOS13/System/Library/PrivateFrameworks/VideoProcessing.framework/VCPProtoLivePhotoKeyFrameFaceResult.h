/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/VCPProtoResultLegacyConversionProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VCPProtoBounds;

@interface VCPProtoLivePhotoKeyFrameFaceResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {

	VCPProtoBounds* _faceBounds;
	float _faceQuality;

}

@property (nonatomic,retain) VCPProtoBounds * faceBounds;              //@synthesize faceBounds=_faceBounds - In the implementation block
@property (assign,nonatomic) float faceQuality;                        //@synthesize faceQuality=_faceQuality - In the implementation block
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
-(void)setFaceBounds:(VCPProtoBounds *)arg1 ;
-(VCPProtoBounds *)faceBounds;
-(float)faceQuality;
-(void)setFaceQuality:(float)arg1 ;
-(id)exportToLegacyDictionary;
@end


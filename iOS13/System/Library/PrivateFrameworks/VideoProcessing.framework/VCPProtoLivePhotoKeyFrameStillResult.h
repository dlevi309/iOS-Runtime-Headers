/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/VCPProtoResultLegacyConversionProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VCPProtoLivePhotoKeyFrameStillResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {

	float _sharpness;
	float _stillTime;
	float _textureness;
	BOOL _hasFlash;

}

@property (assign,nonatomic) float sharpness;                //@synthesize sharpness=_sharpness - In the implementation block
@property (assign,nonatomic) float textureness;              //@synthesize textureness=_textureness - In the implementation block
@property (assign,nonatomic) BOOL hasFlash;                  //@synthesize hasFlash=_hasFlash - In the implementation block
@property (assign,nonatomic) float stillTime;                //@synthesize stillTime=_stillTime - In the implementation block
+(id)resultFromLegacyDictionary:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(float)sharpness;
-(void)setSharpness:(float)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasFlash;
-(float)textureness;
-(void)setTextureness:(float)arg1 ;
-(void)setHasFlash:(BOOL)arg1 ;
-(float)stillTime;
-(void)setStillTime:(float)arg1 ;
-(id)exportToLegacyDictionary;
@end


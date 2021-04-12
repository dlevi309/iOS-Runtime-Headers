/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/VCPProtoResultLegacyConversionProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VCPProtoImageBlurResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {

	float _faceSharpness;
	float _sharpness;
	SCD_Struct_VC52 _has;

}

@property (assign,nonatomic) float sharpness;                    //@synthesize sharpness=_sharpness - In the implementation block
@property (assign,nonatomic) BOOL hasFaceSharpness; 
@property (assign,nonatomic) float faceSharpness;                //@synthesize faceSharpness=_faceSharpness - In the implementation block
+(id)resultFromLegacyDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(float)faceSharpness;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setFaceSharpness:(float)arg1 ;
-(id)exportToLegacyDictionary;
-(float)sharpness;
-(unsigned long long)hash;
-(void)setSharpness:(float)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasFaceSharpness:(BOOL)arg1 ;
-(BOOL)hasFaceSharpness;
-(BOOL)isEqual:(id)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/VCPProtoResultLegacyConversionProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VCPProtoImageBlurResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {

	float _faceSharpness;
	float _sharpness;
	SCD_Struct_VC44 _has;

}

@property (assign,nonatomic) float sharpness;                    //@synthesize sharpness=_sharpness - In the implementation block
@property (assign,nonatomic) BOOL hasFaceSharpness; 
@property (assign,nonatomic) float faceSharpness;                //@synthesize faceSharpness=_faceSharpness - In the implementation block
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
-(id)exportToLegacyDictionary;
-(void)setHasFaceSharpness:(BOOL)arg1 ;
-(BOOL)hasFaceSharpness;
-(float)faceSharpness;
-(void)setFaceSharpness:(float)arg1 ;
@end


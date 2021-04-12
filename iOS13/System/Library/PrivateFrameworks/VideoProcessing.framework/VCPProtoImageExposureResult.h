/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/VCPProtoResultLegacyConversionProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VCPProtoImageExposureResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {

	float _exposure;
	float _underExpose;
	SCD_Struct_VC44 _has;

}

@property (assign,nonatomic) float exposure;                   //@synthesize exposure=_exposure - In the implementation block
@property (assign,nonatomic) BOOL hasUnderExpose; 
@property (assign,nonatomic) float underExpose;                //@synthesize underExpose=_underExpose - In the implementation block
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
-(float)exposure;
-(void)setExposure:(float)arg1 ;
-(id)exportToLegacyDictionary;
-(void)setUnderExpose:(float)arg1 ;
-(void)setHasUnderExpose:(BOOL)arg1 ;
-(BOOL)hasUnderExpose;
-(float)underExpose;
@end


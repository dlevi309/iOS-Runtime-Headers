/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/VCPProtoResultLegacyConversionProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VCPProtoImageExposureResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {

	float _exposure;
	float _underExpose;
	SCD_Struct_VC52 _has;

}

@property (assign,nonatomic) float exposure;                   //@synthesize exposure=_exposure - In the implementation block
@property (assign,nonatomic) BOOL hasUnderExpose; 
@property (assign,nonatomic) float underExpose;                //@synthesize underExpose=_underExpose - In the implementation block
+(id)resultFromLegacyDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHasUnderExpose:(BOOL)arg1 ;
-(void)setExposure:(float)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(float)exposure;
-(id)description;
-(id)exportToLegacyDictionary;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(float)underExpose;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUnderExpose:(float)arg1 ;
-(BOOL)hasUnderExpose;
-(BOOL)isEqual:(id)arg1 ;
@end


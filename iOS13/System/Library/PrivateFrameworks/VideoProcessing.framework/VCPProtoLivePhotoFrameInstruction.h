/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/VCPProtoResultLegacyConversionProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VCPProtoLivePhotoFrameInstruction : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {

	SCD_Struct_VC49* _homographyParams;
	long long _epoch;
	long long _timeValue;
	int _flags;
	int _timeScale;

}

@property (assign,nonatomic) long long timeValue;                                     //@synthesize timeValue=_timeValue - In the implementation block
@property (nonatomic,readonly) unsigned long long homographyParamsCount; 
@property (nonatomic,readonly) float* homographyParams; 
@property (assign,nonatomic) int timeScale;                                           //@synthesize timeScale=_timeScale - In the implementation block
@property (assign,nonatomic) long long epoch;                                         //@synthesize epoch=_epoch - In the implementation block
@property (assign,nonatomic) int flags;                                               //@synthesize flags=_flags - In the implementation block
+(id)resultFromLegacyDictionary:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)flags;
-(id)dictionaryRepresentation;
-(long long)epoch;
-(void)setEpoch:(long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setFlags:(int)arg1 ;
-(int)timeScale;
-(id)exportToLegacyDictionary;
-(void)setTimeScale:(int)arg1 ;
-(unsigned long long)homographyParamsCount;
-(void)clearHomographyParams;
-(float)homographyParamAtIndex:(unsigned long long)arg1 ;
-(void)addHomographyParam:(float)arg1 ;
-(float*)homographyParams;
-(void)setHomographyParams:(float*)arg1 count:(unsigned long long)arg2 ;
-(long long)timeValue;
-(void)setTimeValue:(long long)arg1 ;
@end


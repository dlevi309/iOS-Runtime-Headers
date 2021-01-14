/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/VCPProtoResultLegacyConversionProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VCPProtoLivePhotoFrameInstruction : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {

	SCD_Struct_VC57* _homographyParams;
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
-(id)dictionaryRepresentation;
-(long long)epoch;
-(int)flags;
-(int)timeScale;
-(void)setTimeScale:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setTimeValue:(long long)arg1 ;
-(unsigned long long)homographyParamsCount;
-(void)clearHomographyParams;
-(float)homographyParamAtIndex:(unsigned long long)arg1 ;
-(void)addHomographyParam:(float)arg1 ;
-(float*)homographyParams;
-(void)setHomographyParams:(float*)arg1 count:(unsigned long long)arg2 ;
-(id)description;
-(id)exportToLegacyDictionary;
-(void)setFlags:(int)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setEpoch:(long long)arg1 ;
-(long long)timeValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end


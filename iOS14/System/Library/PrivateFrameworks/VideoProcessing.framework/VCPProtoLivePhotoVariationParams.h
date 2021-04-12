/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/VCPProtoResultLegacyConversionProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VCPProtoLivePhotoVariationParams : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {

	int _errorCode;
	int _loopFadeLen;
	int _loopPeriod;
	int _loopStart;
	SCD_Struct_VC51 _has;

}

@property (assign,nonatomic) int errorCode;                    //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) BOOL hasLoopFadeLen; 
@property (assign,nonatomic) int loopFadeLen;                  //@synthesize loopFadeLen=_loopFadeLen - In the implementation block
@property (assign,nonatomic) BOOL hasLoopPeriod; 
@property (assign,nonatomic) int loopPeriod;                   //@synthesize loopPeriod=_loopPeriod - In the implementation block
@property (assign,nonatomic) BOOL hasLoopStart; 
@property (assign,nonatomic) int loopStart;                    //@synthesize loopStart=_loopStart - In the implementation block
+(id)resultFromLegacyDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(int)errorCode;
-(id)description;
-(void)setLoopFadeLen:(int)arg1 ;
-(void)setHasLoopFadeLen:(BOOL)arg1 ;
-(int)loopStart;
-(BOOL)hasLoopFadeLen;
-(void)setLoopPeriod:(int)arg1 ;
-(void)setHasLoopPeriod:(BOOL)arg1 ;
-(BOOL)hasLoopPeriod;
-(void)setLoopStart:(int)arg1 ;
-(void)setHasLoopStart:(BOOL)arg1 ;
-(BOOL)hasLoopStart;
-(int)loopFadeLen;
-(int)loopPeriod;
-(id)exportToLegacyDictionary;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setErrorCode:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


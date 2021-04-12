/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_VC50 _has;

}

@property (assign,nonatomic) int errorCode;                    //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) BOOL hasLoopFadeLen; 
@property (assign,nonatomic) int loopFadeLen;                  //@synthesize loopFadeLen=_loopFadeLen - In the implementation block
@property (assign,nonatomic) BOOL hasLoopPeriod; 
@property (assign,nonatomic) int loopPeriod;                   //@synthesize loopPeriod=_loopPeriod - In the implementation block
@property (assign,nonatomic) BOOL hasLoopStart; 
@property (assign,nonatomic) int loopStart;                    //@synthesize loopStart=_loopStart - In the implementation block
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
-(int)errorCode;
-(void)setErrorCode:(int)arg1 ;
-(id)exportToLegacyDictionary;
-(void)setLoopFadeLen:(int)arg1 ;
-(void)setHasLoopFadeLen:(BOOL)arg1 ;
-(BOOL)hasLoopFadeLen;
-(void)setLoopPeriod:(int)arg1 ;
-(void)setHasLoopPeriod:(BOOL)arg1 ;
-(BOOL)hasLoopPeriod;
-(void)setLoopStart:(int)arg1 ;
-(void)setHasLoopStart:(BOOL)arg1 ;
-(BOOL)hasLoopStart;
-(int)loopFadeLen;
-(int)loopPeriod;
-(int)loopStart;
@end


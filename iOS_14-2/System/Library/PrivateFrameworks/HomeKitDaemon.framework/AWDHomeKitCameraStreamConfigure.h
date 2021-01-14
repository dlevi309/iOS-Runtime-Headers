/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitCameraStreamConfigure : PBCodable <NSCopying> {

	int _audioCodec;
	int _cryptoSuite;
	unsigned _framerate;
	int _resolution;
	int _sampleRate;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasResolution; 
@property (assign,nonatomic) int resolution;                   //@synthesize resolution=_resolution - In the implementation block
@property (assign,nonatomic) BOOL hasFramerate; 
@property (assign,nonatomic) unsigned framerate;               //@synthesize framerate=_framerate - In the implementation block
@property (assign,nonatomic) BOOL hasAudioCodec; 
@property (assign,nonatomic) int audioCodec;                   //@synthesize audioCodec=_audioCodec - In the implementation block
@property (assign,nonatomic) BOOL hasSampleRate; 
@property (assign,nonatomic) int sampleRate;                   //@synthesize sampleRate=_sampleRate - In the implementation block
@property (assign,nonatomic) BOOL hasCryptoSuite; 
@property (assign,nonatomic) int cryptoSuite;                  //@synthesize cryptoSuite=_cryptoSuite - In the implementation block
-(id)dictionaryRepresentation;
-(int)resolution;
-(void)setFramerate:(unsigned)arg1 ;
-(unsigned)framerate;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setSampleRate:(int)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)audioCodec;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setResolution:(int)arg1 ;
-(int)sampleRate;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasSampleRate;
-(void)setHasSampleRate:(BOOL)arg1 ;
-(void)setHasResolution:(BOOL)arg1 ;
-(BOOL)hasResolution;
-(id)resolutionAsString:(int)arg1 ;
-(int)StringAsResolution:(id)arg1 ;
-(void)setHasFramerate:(BOOL)arg1 ;
-(BOOL)hasFramerate;
-(void)setAudioCodec:(int)arg1 ;
-(void)setHasAudioCodec:(BOOL)arg1 ;
-(BOOL)hasAudioCodec;
-(id)audioCodecAsString:(int)arg1 ;
-(int)StringAsAudioCodec:(id)arg1 ;
-(id)sampleRateAsString:(int)arg1 ;
-(int)StringAsSampleRate:(id)arg1 ;
-(int)cryptoSuite;
-(void)setCryptoSuite:(int)arg1 ;
-(void)setHasCryptoSuite:(BOOL)arg1 ;
-(BOOL)hasCryptoSuite;
-(id)cryptoSuiteAsString:(int)arg1 ;
-(int)StringAsCryptoSuite:(id)arg1 ;
@end

